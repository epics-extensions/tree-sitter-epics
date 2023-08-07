// Upstream reference:
// https://www-csr.bessy.de/control/SoftDist/sequencer/Reference.html

// This is from the tree-sitter-c repository
const PREC = {
  PAREN_DECLARATOR: -10,
  ASSIGNMENT: -1,
  CONDITIONAL: -2,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SIZEOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,
  UNARY: 13,
  CALL: 14,
  FIELD: 15,
  SUBSCRIPT: 16,
};

module.exports = grammar({
  name: "snl",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat($._top_level_item),

    _top_level_item: ($) =>
      choice(
        $.preproc_if,
        $.preproc_ifdef,
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,
        $.line_marker,
        $.program
      ),

    _c_code: ($) =>
      choice(
        seq("%{", alias(repeat(choice(/[^}%]/, "}", "%")), $.c_code), "}%"),
        seq("%%", alias(/[^\n]*/, $.c_code), "\n")
      ),

    line_marker: ($) =>
      seq(
        "#",
        $.line_number,
        optional(alias($.string_literal, $.file_name)),
        "\n"
      ),
    line_number: ($) => /\d+/,

    program: ($) =>
      seq(
        "program",
        field("name", $.identifier),
        optional($.program_param),
        repeat($.initial_defn),
        optional($.entry),
        repeat1($.state_set),
        optional($.exit),
        repeat($.final_defn)
      ),

    program_param: ($) => seq("(", $.string_literal, ")"),
    initial_defn: ($) =>
      choice(
        $.assign,
        $.monitor,
        $.sync,
        $.syncq,
        $.declaration,
        $.foreign_declaration,
        $.option,
        $.funcdef,
        $.structdef,
        $._c_code
      ),
    final_defn: ($) => choice($.funcdef, $.structdef, $._c_code),
    entry: ($) => seq("entry", $.block),
    exit: ($) => seq("exit", $.block),

    funcdef: ($) => seq($.basetype, $.declarator, $.block),

    structdef: ($) =>
      seq(
        "struct",
        field("name", $.identifier),
        field("body", $.field_declaration_list),
        ";"
      ),
    field_declaration_list: ($) => seq("{", repeat($.member_decl), "}"),
    member_decl: ($) => seq($.basetype, $.declarator, ";"),

    declaration: ($) => seq($.basetype, commaSep($.init_declarator), ";"),
    init_declarator: ($) => seq($.declarator, optional(seq("=", $.init_expr))),
    declarator: ($) => $._declarator,
    _declarator: ($) =>
      choice(
        $.identifier,
        $.pointer_declarator,
        $.function_declarator,
        $.array_declarator,
        seq("(", $._declarator, ")"),
        seq($.type_qualifier, $._declarator)
      ),
    pointer_declarator: ($) => prec.right(seq("*", $._declarator)),
    function_declarator: ($) =>
      prec(
        1,
        seq(
          field("declarator", $._declarator),
          "(",
          commaSep($.param_decl),
          ")"
        )
      ),
    array_declarator: ($) => prec(1, seq($._declarator, $.subscript)),
    init_expr: ($) =>
      choice(
        seq(
          optional(seq("(", $.type_expr, ")")),
          "{",
          commaSep($.init_expr),
          "}"
        ),
        $._expr
      ),

    foreign_declaration: ($) => seq("foreign", commaSep($.identifier), ";"),

    basetype: ($) =>
      choice(
        $.prim_type,
        "evflag",
        seq(choice("enum", "struct", "union", "typename"), $.identifier),
        "void"
      ),
    prim_type: ($) =>
      choice(
        "char",
        "short",
        "int",
        "long",
        seq("unsigned", "char"),
        seq("unsigned", "short"),
        seq("unsigned", "int"),
        seq("unsigned", "long"),
        "int8_t",
        "uint8_t",
        "int16_t",
        "uint16_t",
        "int32_t",
        "uint32_t",
        "float",
        "double",
        "string"
      ),

    type_expr: ($) => seq($.basetype, optional($.abs_decl)),
    abs_decl: ($) => $._abs_decl,
    _abs_decl: ($) =>
      choice(
        $.abstract_pointer_declarator,
        $.abstract_function_declarator,
        prec(1, seq("(", $._abs_decl, ")")),
        seq(optional($._abs_decl), $.subscript),
        prec.right(seq($.type_qualifier, optional($._abs_decl)))
      ),
    abstract_pointer_declarator: ($) =>
      prec.dynamic(1, prec.right(seq("*", optional($._abs_decl)))),
    abstract_function_declarator: ($) =>
      prec(1, seq(optional($._abs_decl), "(", commaSep($.param_decl), ")")),
    type_qualifier: ($) => choice("const"),

    param_decl: ($) => choice(seq($.basetype, $.declarator), $.type_expr),

    assign: ($) =>
      seq(
        "assign",
        choice(
          seq(
            $.identifier,
            optional($.subscript),
            optional("to"),
            alias($._expanded_string_literal, $.string_literal)
          ),
          seq(
            $.identifier,
            optional("to"),
            "{",
            commaSep(alias($._expanded_string_literal, $.string_literal)),
            "}"
          ),
          $.identifier
        ),
        ";"
      ),

    _expanded_string_literal: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $.parameter_expansion,
            token.immediate(prec(1, /[^\{\\"\n]+/)),
            $.escape_sequence
          )
        ),
        '"'
      ),
    parameter_expansion: ($) => seq(token.immediate("{"), $.identifier, "}"),

    subscript: ($) => seq("[", $.number_literal, "]"),

    monitor: ($) => seq("monitor", $.identifier, optional($.subscript), ";"),

    sync: ($) =>
      seq(
        "sync",
        $.identifier,
        optional($.subscript),
        optional("to"),
        $.event_flag,
        ";"
      ),
    event_flag: ($) => $.identifier,

    syncq: ($) =>
      seq(
        "syncq",
        $.identifier,
        optional($.subscript),
        optional(seq(optional("to"), $.event_flag)),
        optional($.syncq_size),
        ";"
      ),
    syncq_size: ($) => $.number_literal,

    option: ($) =>
      seq("option", $.option_value, field("name", $.identifier), ";"),
    option_value: ($) => choice("+", "-"),

    state_set: ($) =>
      seq(
        "ss",
        field("name", $.identifier),
        "{",
        repeat($.ss_defn),
        repeat1($.state),
        "}"
      ),
    ss_defn: ($) => choice($.assign, $.monitor, $.sync, $.syncq, $.declaration),
    state: ($) => seq("state", field("name", $.identifier), $.state_block),
    state_block: ($) =>
      seq(
        "{",
        repeat($.state_defn),
        optional($.entry),
        // Technically repeat1, but this hinders development
        repeat($.transition),
        optional($.exit),
        "}"
      ),
    state_defn: ($) =>
      choice($.assign, $.monitor, $.sync, $.syncq, $.declaration, $.option),
    transition: ($) =>
      seq(
        "when",
        "(",
        field("condition", optional($._comma_expr)),
        ")",
        $.block,
        choice(seq("state", field("name", $.identifier)), "exit")
      ),

    block: ($) => seq("{", repeat($.block_defn), repeat($.statement), "}"),
    block_defn: ($) => choice($.declaration, prec(1, $._c_code)),
    statement: ($) =>
      choice(
        $.break_statement,
        $.continue_statement,
        $._c_code,
        $.block,
        $.if_statement,
        $.while_statement,
        $.for_statement,
        seq($._comma_expr, ";")
      ),
    break_statement: ($) => seq("break", ";"),
    continue_statement: ($) => seq("continue", ";"),
    if_statement: ($) =>
      prec.right(
        seq(
          "if",
          "(",
          field("condition", $._comma_expr),
          ")",
          field("consequence", $.statement),
          optional($.else_statement)
        )
      ),
    else_statement: ($) => seq("else", field("consequence", $.statement)),
    while_statement: ($) =>
      seq(
        "while",
        "(",
        field("condition", $._comma_expr),
        ")",
        field("body", $.statement)
      ),
    for_statement: ($) =>
      seq(
        "for",
        "(",
        field("initializer", optional($._comma_expr)),
        ";",
        field("condition", optional($._comma_expr)),
        ";",
        field("update", optional($._comma_expr)),
        ")",
        field("body", $.statement)
      ),
    state_statement: ($) => seq("state", field("name", $.identifier)),
    return_statement: ($) => seq("return", optional($._comma_expr)),

    _expr: ($) =>
      choice(
        $.number_literal,
        $.char_literal,
        $.string_literal,
        $.identifier,
        $.parenthesized_expression,
        $.call_expression,
        prec.left($.exit_expression),
        prec.left($.subscript_expression),
        prec.left($.field_expression),
        $.update_expression,
        $.unary_expression,
        $.binary_expression,
        $.conditional_expression,
        $.assignment_expression,
        $.cast_expression,
        prec.right($.sizeof_expression),
        $.true,
        $.false,
        $.null
      ),

    parenthesized_expression: ($) => seq("(", $._comma_expr, ")"),
    call_expression: ($) =>
      prec(PREC.CALL, seq(field("function", $._expr), "(", optional($.args), ")")),
    exit_expression: ($) => seq("exit", "(", optional($.args), ")"),
    subscript_expression: ($) => seq($._expr, "[", $._expr, "]"),
    field_expression: ($) =>
      seq($._expr, choice(".", "->"), field("field", $.identifier)),
    update_expression: ($) => {
      const argument = field("argument", $._expr);
      const operator = field("operator", choice("--", "++"));
      return prec.right(
        PREC.UNARY,
        choice(seq(operator, argument), seq(argument, operator))
      );
    },

    pointer_expression: ($) =>
      prec.left(
        PREC.CAST,
        seq(field("operator", choice("*", "&")), field("argument", $._expr))
      ),
    unary_expression: ($) =>
      prec.left(PREC.UNARY, seq(choice("+", "-", "!", "~"), $._expr)),
    binary_expression: ($) => {
      const table = [
        ["+", PREC.ADD],
        ["-", PREC.ADD],
        ["*", PREC.MULTIPLY],
        ["/", PREC.MULTIPLY],
        ["%", PREC.MULTIPLY],
        ["||", PREC.LOGICAL_OR],
        ["&&", PREC.LOGICAL_AND],
        ["|", PREC.INCLUSIVE_OR],
        ["^", PREC.EXCLUSIVE_OR],
        ["&", PREC.BITWISE_AND],
        ["==", PREC.EQUAL],
        ["!=", PREC.EQUAL],
        [">", PREC.RELATIONAL],
        [">=", PREC.RELATIONAL],
        ["<=", PREC.RELATIONAL],
        ["<", PREC.RELATIONAL],
        ["<<", PREC.SHIFT],
        [">>", PREC.SHIFT],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $._expr),
              field("operator", operator),
              field("right", $._expr)
            )
          );
        })
      );
    },
    conditional_expression: ($) =>
      prec.right(
        PREC.CONDITIONAL,
        seq(
          field("condition", $._expr),
          "?",
          field("consequence", $._expr),
          ":",
          field("alternative", $._expr)
        )
      ),
    assignment_expression: ($) =>
      prec.right(
        PREC.ASSIGNMENT,
        seq(
          field("left", $._expr),
          field(
            "operator",
            choice(
              "=",
              "*=",
              "/=",
              "%=",
              "+=",
              "-=",
              "<<=",
              ">>=",
              "&=",
              "^=",
              "|="
            )
          ),
          field("right", $._expr)
        )
      ),

    cast_expression: ($) =>
      prec(
        PREC.CAST,
        seq("(", field("type", $.type_expr), ")", field("value", $._expr))
      ),
    sizeof_expression: ($) =>
      prec(
        PREC.SIZEOF,
        seq(
          "sizeof",
          choice(
            field("value", $._expr),
            seq("(", field("type", $.type_expr), ")")
          )
        )
      ),

    true: ($) => token(choice("TRUE", "true")),
    false: ($) => token(choice("FALSE", "false")),
    null: ($) => "NULL",

    _comma_expr: ($) => choice($._expr, $.comma_expr),
    comma_expr: ($) => seq($._expr, ",", commaSep1($._expr)),

    args: ($) => commaSep1($._expr),

    // Taken from:
    // https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js

    string_literal: ($) =>
      seq(
        choice('L"', 'u"', 'U"', 'u8"', '"'),
        repeat(
          choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence)
        ),
        '"'
      ),

    number_literal: ($) => {
      const separator = "'";
      const hex = /[0-9a-fA-F]/;
      const decimal = /[0-9]/;
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
      const decimalDigits = seq(
        repeat1(decimal),
        repeat(seq(separator, repeat1(decimal)))
      );
      return token(
        seq(
          optional(/[-\+]/),
          optional(choice("0x", "0b")),
          choice(
            seq(
              choice(
                decimalDigits,
                seq("0b", decimalDigits),
                seq("0x", hexDigits)
              ),
              optional(seq(".", optional(hexDigits)))
            ),
            seq(".", decimalDigits)
          ),
          optional(seq(/[eEpP]/, optional(seq(optional(/[-\+]/), hexDigits)))),
          repeat(choice("u", "l", "U", "L", "f", "F"))
        )
      );
    },

    char_literal: ($) =>
      seq(
        choice("L'", "u'", "U'", "u8'", "'"),
        choice($.escape_sequence, token.immediate(/[^\n']/)),
        "'"
      ),

    system_lib_string: ($) =>
      token(seq("<", repeat(choice(/[^>\n]/, "\\>")), ">")),

    identifier: ($) => /[a-zA-Z_]\w*/,

    escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /[^xuU]/,
              /\d{2,3}/,
              /x[0-9a-fA-F]{2,}/,
              /u[0-9a-fA-F]{4}/,
              /U[0-9a-fA-F]{8}/
            )
          )
        )
      ),

    preproc_include: ($) =>
      seq(
        preprocessor("include"),
        field(
          "path",
          choice(
            $.string_literal,
            $.system_lib_string,
            $.identifier,
            alias($.preproc_call_expression, $.call_expression)
          )
        ),
        "\n"
      ),

    preproc_def: ($) =>
      seq(
        preprocessor("define"),
        field("name", $.identifier),
        field("value", optional($.preproc_arg)),
        "\n"
      ),

    preproc_function_def: ($) =>
      seq(
        preprocessor("define"),
        field("name", $.identifier),
        field("parameters", $.preproc_params),
        field("value", optional($.preproc_arg)),
        "\n"
      ),

    preproc_params: ($) =>
      seq(token.immediate("("), commaSep(choice($.identifier, "...")), ")"),

    preproc_call: ($) =>
      seq(
        field("directive", $.preproc_directive),
        field("argument", optional($.preproc_arg)),
        "\n"
      ),

    ...preprocIf("", ($) => $._top_level_item),

    preproc_directive: ($) => /#[ \t]*[a-zA-Z]\w*/,
    preproc_arg: ($) => token(prec(-1, repeat1(/.|\\\r?\n/))),

    _preproc_expression: ($) =>
      choice(
        $.identifier,
        alias($.preproc_call_expression, $.call_expression),
        $.number_literal,
        $.char_literal,
        $.preproc_defined,
        alias($.preproc_unary_expression, $.unary_expression),
        alias($.preproc_binary_expression, $.binary_expression),
        alias($.preproc_parenthesized_expression, $.parenthesized_expression)
      ),

    preproc_parenthesized_expression: ($) =>
      seq("(", $._preproc_expression, ")"),

    preproc_defined: ($) =>
      choice(
        prec(PREC.CALL, seq("defined", "(", $.identifier, ")")),
        seq("defined", $.identifier)
      ),

    preproc_unary_expression: ($) =>
      prec.left(
        PREC.UNARY,
        seq(
          field("operator", choice("!", "~", "-", "+")),
          field("argument", $._preproc_expression)
        )
      ),

    preproc_call_expression: ($) =>
      prec(
        PREC.CALL,
        seq(
          field("function", $.identifier),
          field("arguments", alias($.preproc_argument_list, $.argument_list))
        )
      ),

    preproc_argument_list: ($) =>
      seq("(", commaSep($._preproc_expression), ")"),

    preproc_binary_expression: ($) => {
      const table = [
        ["+", PREC.ADD],
        ["-", PREC.ADD],
        ["*", PREC.MULTIPLY],
        ["/", PREC.MULTIPLY],
        ["%", PREC.MULTIPLY],
        ["||", PREC.LOGICAL_OR],
        ["&&", PREC.LOGICAL_AND],
        ["|", PREC.INCLUSIVE_OR],
        ["^", PREC.EXCLUSIVE_OR],
        ["&", PREC.BITWISE_AND],
        ["==", PREC.EQUAL],
        ["!=", PREC.EQUAL],
        [">", PREC.RELATIONAL],
        [">=", PREC.RELATIONAL],
        ["<=", PREC.RELATIONAL],
        ["<", PREC.RELATIONAL],
        ["<<", PREC.SHIFT],
        [">>", PREC.SHIFT],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $._preproc_expression),
              field("operator", operator),
              field("right", $._preproc_expression)
            )
          );
        })
      );
    },

    comment: ($) =>
      token(
        choice(
          seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),
  },
});

function preprocIf(suffix, content) {
  function elseBlock($) {
    return choice(
      suffix
        ? alias($["preproc_else" + suffix], $.preproc_else)
        : $.preproc_else,
      suffix
        ? alias($["preproc_elif" + suffix], $.preproc_elif)
        : $.preproc_elif
    );
  }

  return {
    ["preproc_if" + suffix]: ($) =>
      seq(
        preprocessor("if"),
        field("condition", $._preproc_expression),
        "\n",
        repeat(content($)),
        field("alternative", optional(elseBlock($))),
        preprocessor("endif")
      ),
    ["preproc_ifdef" + suffix]: ($) =>
      seq(
        choice(preprocessor("ifdef"), preprocessor("ifndef")),
        field("name", $.identifier),
        repeat(content($)),
        field("alternative", optional(elseBlock($))),
        preprocessor("endif")
      ),
    ["preproc_else" + suffix]: ($) =>
      seq(preprocessor("else"), repeat(content($))),
    ["preproc_elif" + suffix]: ($) =>
      seq(
        preprocessor("elif"),
        field("condition", $._preproc_expression),
        "\n",
        repeat(content($)),
        field("alternative", optional(elseBlock($)))
      ),
  };
}

function preprocessor(command) {
  return alias(new RegExp("#[ \t]*" + command), "#" + command);
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
