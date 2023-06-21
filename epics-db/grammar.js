// Specifications:
// https://docs.epics-controls.org/en/latest/appdevguide/databaseDefinition.html
const common = require("../common/common_grammar.js");

module.exports = grammar({
  name: "epics_db",

  extras: ($) => [/\s/, $.comment, $.macro_expansion],

  rules: {
    source_file: ($) => repeat($._statements),

    _statements: ($) =>
      choice(
        $.path_definition,
        $.include_statement,
        $.menu_definition,
        $.record_type_definition,
        $.device_support_declaration,
        $.driver_declaration,
        $.link_declaration,
        $.registrar_declaration,
        $.variable_declaration,
        $.function_declaration,
        $.breakpoint_table,
        $.record_instance,
        $.alias_statement
      ),

    path_definition: ($) => seq(choice("path", "addpath"), $.string),

    include_statement: ($) => seq("include", $.string),

    menu_definition: ($) =>
      seq(
        "menu",
        "(",
        field("name", $.string),
        ")",
        "{",
        repeat(choice($.menu_choice, $.include_statement)),
        "}"
      ),

    menu_choice: ($) =>
      seq(
        "choice",
        "(",
        field("name", $.string),
        ",",
        field("string", $.string),
        ")"
      ),

    record_type_definition: ($) =>
      seq(
        "recordtype",
        "(",
        field("name", $.record_type),
        ")",
        "{",
        repeat(choice($.field_definition, $.include_statement, $.cdef)),
        "}"
      ),

    field_definition: ($) =>
      seq(
        "field",
        "(",
        field("name", $.field_name),
        ",",
        field("type", $.string),
        ")",
        "{",
        repeat($.field_descriptor),
        "}"
      ),

    field_descriptor: ($) =>
      seq($.field_item, "(", field("value", $.string), ")"),

    cdef: ($) => seq("%", field("code", $.ccode)),

    ccode: ($) => /.*/,

    device_support_declaration: ($) =>
      seq(
        "device",
        "(",
        field("record_type", $.record_type),
        ",",
        field("link_type", $.string),
        ",",
        field("dset_name", $.string),
        ",",
        field("choice", $.string),
        ")"
      ),

    driver_declaration: ($) => seq("driver", "(", field("name", $.string), ")"),

    // Not documented, but present
    link_declaration: ($) =>
      seq(
        "link",
        "(",
        field("name", $.string),
        ",",
        field("jlif_name", $.string),
        ")"
      ),

    registrar_declaration: ($) =>
      seq("registrar", "(", field("name", $.string), ")"),
    variable_declaration: ($) =>
      seq(
        "variable",
        "(",
        field("name", $.string),
        optional(seq(",", field("type", $.string))),
        ")"
      ),
    function_declaration: ($) =>
      seq("function", "(", field("name", $.string), ")"),

    breakpoint_table: ($) =>
      seq(
        "breaktable",
        "(",
        field("name", $.string),
        ")",
        "{",
        repeat($.breakpoint_item),
        "}"
      ),
    breakpoint_item: ($) =>
      seq(
        field("raw_value", $.double),
        optional(","),
        field("eng_value", $.double),
        optional(",")
      ),

    // According to the strtod(3) manpage
    double: ($) =>
      /[+-]?(([0-9]+(\.[0-9]*)?|\.[0-9]+)(e[+-]?[0-9]+)?|0x[0-9a-f]+(\.[0-9a-f]*)?(p[+-]?[0-9]+)?|inf(inity)?|nan)/i,

    record_instance: ($) =>
      seq(
        choice("record", "grecord"),
        "(",
        field("type", $.record_type),
        ",",
        field("name", $.record_name),
        ")",
        optional(
          seq(
            "{",
            repeat(choice($.alias, $.field, $.info, $.include_statement)),
            "}"
          )
        )
      ),

    alias: ($) => seq("alias", "(", field("alias_name", $.record_name), ")"),

    field: ($) =>
      seq(
        "field",
        "(",
        field("name", $.field_name),
        ",",
        field("value", choice($.string, $.json_value)),
        ")"
      ),

    info: ($) =>
      seq(
        "info",
        "(",
        field("name", $.string),
        ",",
        field("value", choice($.string, $.json_value)),
        ")"
      ),

    alias_statement: ($) =>
      seq(
        "alias",
        "(",
        field("record_name", $.record_name),
        ",",
        field("alias_name", $.record_name),
        ")"
      ),

    _type: ($) => /\w+/,

    comment: ($) => seq("#", /.*/),

    string: ($) => $._string,

    _string: ($) =>
      choice(
        seq(
          '"',
          repeat(choice($.escape_sequence, $.string_text_fragment)),
          '"'
        ),
        $._unquoted_string
      ),
    string_text_fragment: ($) =>
      prec.right(
        repeat1(
          choice(token.immediate(prec(1, /[^"\\$]+/)), token.immediate("\\"))
        )
      ),

    // https://docs.epics-controls.org/en/latest/appdevguide/databaseDefinition.html#escape-sequences
    escape_sequence: ($) =>
      token.immediate(/\\([abfnrtv\\'"$]|[0-7]{3}|x[0-9a-fA-F]{2})/),

    // Not exactly true, the EPICS version of JSON is slightly different.
    // e.g. object keys don't have to be quoted.
    // See:
    // - `modules/database/src/ioc/dbStatic/dbLex.l`
    // - `modules/database/src/ioc/dbStatic/dbYacc.y`
    json_value: ($) =>
      choice($._json_object, $._json_array, "null", "true", "false"),
    // Just match balanced delimiters
    _json_object: ($) => seq("{", repeat(choice(/[^{}]/, $._json_object)), "}"),
    _json_array: ($) => seq("[", repeat(choice(/[^\[\]]/, $._json_array)), "]"),

    _unquoted_string: ($) => /[a-zA-Z0-9_+:.\[\]<>;-]+/,

    record_type: ($) => $._string,
    record_name: ($) => $._string,
    field_item: ($) => $._string,
    field_name: ($) => $._string,

    ...common,
  },
});
