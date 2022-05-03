module.exports = grammar({
  name: "epics_msi",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) =>
      choice(repeat($.regular), repeat($.pattern), repeat($.db_template)),

    comment: ($) => seq("#", /.*/),

    regular: ($) =>
      seq("{", repeat(seq($._regular_assignment, optional(","))), "}"),
    _regular_assignment: ($) => seq($.identifier, "=", $.string),

    pattern: ($) =>
      seq("pattern", $.pattern_variables, repeat($.pattern_values)),
    pattern_variables: ($) =>
      seq("{", repeat(seq($.identifier, optional(","))), "}"),
    pattern_values: ($) => seq("{", repeat(seq($.string, optional(","))), "}"),

    db_template: ($) => seq("file", field("file", $.string), $.substitutions),

    substitutions: ($) =>
      seq("{", choice(repeat($.regular), repeat($.pattern)), "}"),

    string: ($) => choice(/\w+/, $.quoted_string),
    quoted_string: ($) =>
      seq(
        '"',
        repeat(choice($.escape_sequence, $.quoted_string_text_fragment)),
        '"'
      ),
    quoted_string_text_fragment: ($) => token.immediate(/[^"\\]+/),
    escape_sequence: ($) => token.immediate('\\"'),

    identifier: ($) => /\w+/,
  },
});
