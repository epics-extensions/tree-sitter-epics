const common = require("../common/common_grammar.js");

module.exports = grammar({
  name: "epics_db",

  extras: ($) => [/\s/, $.comment, $.macro_expansion],

  rules: {
    source_file: ($) => repeat($._declaration),

    _declaration: ($) => choice($.record),

    record: ($) =>
      seq("record", $._record_parameters, field("body", $.record_body)),

    _type: ($) => /\w+/,

    _record_parameters: ($) =>
      seq(
        "(",
        field(
          "type",
          alias($._type, $.record_type)
        ),
        ",",
        field("name", $.string),
        ")"
      ),

    record_body: ($) => seq("{", repeat($.field), "}"),

    field: ($) =>
      seq(
        "field",
        "(",
        alias($._type, $.field_type),
        ",",
        $.string,
        ")"
      ),

    comment: ($) => seq("#", /.*/),

    string: ($) =>
      choice(
        seq(
          "'",
          repeat(choice($.escape_sequence, $.string_text_fragment)),
          "'"
        ),
        seq(
          '"',
          repeat(
            choice(
              $.escape_sequence,
              alias($.string_text_fragment2, $.string_text_fragment)
            )
          ),
          '"'
        ),
        alias($.identifier, $.string_text_fragment)
      ),
    string_text_fragment: ($) =>
      prec.right(
        repeat1(choice(token.immediate(prec(1, /[^'\\$]+/)), token.immediate("\\")))
      ),
    string_text_fragment2: ($) =>
      prec.right(
        repeat1(choice(token.immediate(prec(1, /[^"\\$]+/)), token.immediate("\\")))
      ),
    escape_sequence: ($) =>
      choice(token.immediate('\\"'), token.immediate("\\\\"), token.immediate("\\$")),

    identifier: ($) => /\w+/,

    ...common,
  },
});
