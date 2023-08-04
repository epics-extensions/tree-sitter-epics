const IDENTIFIER = /[a-zA-Z]\w*/;

module.exports = grammar({
  name: "streamdevice_proto",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) =>
      repeat(
        seq(
          choice($.comment, $.function, seq($.assignment, ";"), $.handler, ";")
        )
      ),

    comment: ($) => seq("#", /.*/),

    assignment: ($) => seq($.variable_name, "=", $._value),
    variable_name: ($) => $._identifier,
    variable: ($) =>
      seq("$", alias(token.immediate(IDENTIFIER), $.variable_name)),

    _value: ($) => choice($.string, $.keyword),
    keyword: ($) => choice("Error", "Ignore"),

    function: ($) =>
      seq(
        $.function_name,
        "{",
        repeat(seq(choice($.assignment, $.command, $.handler), ";")),
        optional(choice($.assignment, $.command, $.handler)),
        "}"
      ),
    function_name: ($) => $._identifier,

    command: ($) =>
      seq($.command_name, optional(seq("(", $._value, ")")), $._value),
    command_name: ($) => $._identifier,

    handler: ($) =>
      seq(
        "@",
        $.handler_name,
        "{",
        repeat(seq(choice($.function_name, $.command), ";")),
        optional(choice($.function_name, $.command)),
        "}"
      ),
    handler_name: ($) => token.immediate(IDENTIFIER),

    string: ($) =>
      seq(
        repeat(
          seq(choice($.variable, $.number, $.quoted_literal), optional(","))
        ),
        choice($.variable, $.number, $.quoted_literal)
      ),

    quoted_literal: ($) =>
      choice($._double_quoted_string, $._single_quoted_string),

    _double_quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $.variable_expansion,
            $.escape_sequence,
            $.format_converter,
            $._quoted_string_text_fragment
          )
        ),
        '"'
      ),

    _single_quoted_string: ($) =>
      seq(
        "'",
        repeat(
          choice(
            $.variable_expansion,
            $.escape_sequence,
            $.format_converter,
            $._quoted_string_text_fragment2
          )
        ),
        "'"
      ),

    _quoted_string_text_fragment: ($) => token.immediate(/[^"\\%]+/),
    _quoted_string_text_fragment2: ($) => token.immediate(/[^'\\%]+/),

    variable_expansion: ($) =>
      seq(
        token.immediate("\\$"),
        alias(choice(token.immediate(IDENTIFIER), /[1-9]/), $.variable_name)
      ),

    escape_sequence: ($) =>
      choice(
        token.immediate(/\\["'%\\abtnre?_]/),
        token.immediate(/\\x[a-fA-F0-9]{1,2}/),
        token.immediate(/\\0[0-7]{1,3}/),
        token.immediate(/\\[1-9][0-9]{0,2}/),
        token.immediate("%%")
      ),

    format_converter: ($) =>
      seq(
        token.immediate("%"),
        optional(
          seq(token.immediate("("), $.format_inout, token.immediate(")"))
        ),
        optional($.format_flag),
        field(
          "width",
          optional(alias(token.immediate(/[0-9]+/), $.number_literal))
        ),
        optional(
          seq(
            token.immediate("."),
            field(
              "precision",
              alias(token.immediate(/[0-9]+/), $.number_literal)
            )
          )
        ),
        choice(
          /[feEgGdiuoxXscbrRm]/,
          seq(token.immediate("["), optional($.charset), token.immediate("]")),
          seq(token.immediate("{"), $.format_enum, token.immediate("}")),
          seq(token.immediate("B"), $._char, $._char),
          seq(
            token.immediate("<"),
            optional($.checksum_flag),
            $.checksum,
            token.immediate(">")
          ),
          seq(token.immediate("/"), $.regex_pattern, token.immediate("/")),
          seq(
            token.immediate("#/"),
            $.regex_pattern,
            token.immediate("/"),
            $.regex_pattern,
            token.immediate("/")
          ),
          seq(
            token.immediate("T"),
            token.immediate("("),
            $.timeformat,
            token.immediate(")")
          )
        )
      ),
    format_inout: ($) =>
      choice(
        $.field_name,
        $.record_name,
        seq($.record_name, ".", $.field_name)
      ),
    // Necessary to put the "#" apart to disambiguate with the comments
    format_flag: ($) =>
      choice(token.immediate("#"), token.immediate(/[* +0?=!-]/)),
    charset: ($) => seq(optional("^"), repeat1(choice(/[^\]]/, "\\]"))),
    format_enum: ($) =>
      seq(repeat(seq($.enum_specifier, "|")), $.enum_specifier),
    enum_specifier: ($) =>
      seq($.enum_constant, optional(seq("=", choice($.number, "?")))),
    enum_constant: ($) => /\w+/,
    _char: ($) => choice(token.immediate(/./), $.escape_sequence),
    checksum_flag: ($) => /[0+-]/,
    checksum: ($) => $._identifier,
    // Taken from:
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js
    regex_pattern: ($) =>
      token.immediate(
        repeat1(
          choice(
            seq("[", repeat(choice(seq("\\", /./), /[^\]\n\\]/)), "]"),
            seq("\\", /./),
            /[^/\\\[\n]/
          )
        )
      ),
    timeformat: ($) =>
      repeat1(choice(alias(/[^)%]+/, $.thing), $.time_conversion_spec)),
    time_conversion_spec: ($) => token.immediate(/%[EO_0^#.-]?\d*[a-zA-Z+%]+/),

    record_name: ($) => repeat1(choice(/[\w:]+/, $.escape_sequence)),
    field_name: ($) =>
      repeat1(prec(-1, choice($._identifier, $.escape_sequence))),

    number: ($) => choice($.ascii_name, $.number_literal),
    number_literal: ($) =>
      seq(optional("-"), choice(/0x[a-fA-F0-9]+/, /0[0-7]+/, /[0-9]+/)),

    ascii_name: ($) => /[A-Z][A-Z0-9]*/,

    _identifier: ($) => IDENTIFIER,
  },
});
