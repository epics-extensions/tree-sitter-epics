module.exports = grammar({
  name: "epics_db",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat($._declaration),

    _declaration: ($) => choice($.record),

    record: ($) =>
      seq("record", $._record_parameters, field("body", $.record_body)),

    _record_parameters: ($) =>
      seq("(", field("type", $.record_type), ",", field("name", $.string), ")"),

    record_type: ($) => /\w+/,

    record_body: ($) => seq("{", repeat($.field), "}"),

    field: ($) => seq("field", "(", $.record_type, ",", $.string, ")"),

    comment: ($) => seq("#", /.*/),

    string: ($) =>
      choice(
        seq(
          "'",
          repeat(choice($.string_expansion, $.string_text_fragment)),
          "'"
        ),
        seq(
          '"',
          repeat(
            choice(
              $.string_expansion,
              alias($.string_text_fragment2, $.string_text_fragment)
            )
          ),
          '"'
        ),
        alias($.identifier, $.string_text_fragment)
      ),

    string_text_fragment: ($) =>
      choice("\\$", token.immediate(prec(1, /[^'$]+/))),

    string_text_fragment2: ($) =>
      choice("\\$", token.immediate(prec(1, /[^"$]+/))),

    string_expansion: ($) =>
      choice(
        seq("${", $._string_expansion_inner, "}"),
        seq("$(", $._string_expansion_inner, ")")
      ),

    _string_expansion_inner: ($) =>
      seq(
        field("variable", $.identifier),
        optional(seq("=", field("default", $.string)))
      ),

    identifier: ($) => /\w+/,
  },
});
