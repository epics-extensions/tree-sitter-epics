// Specifications:
// https://epics.anl.gov/EpicsDocumentation/ExtensionsManuals/msi/msi.html
//
// Sources:
// epics-base/modules/database/src/ioc/dbtemplate/dbLoadTemplate_lex.l
// epics-base/modules/database/src/ioc/dbtemplate/dbLoadTemplate.y

const common = require("../common/common_grammar.js");

module.exports = grammar({
  name: "epics_msi_substitution",

  // TODO: Specifications says:
  // A comment line is any line beginning with the character #, which must be the very first character on the line.
  extras: ($) => [/\s/, $.comment, $.macro_expansion],

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

    identifier: ($) => /\w+/,

    string: ($) => choice($._bareword, $.quoted_string),

	_bareword: ($) => /[a-zA-Z0-9_\-+:./\\\[\]<>;]+/,

    quoted_string: ($) =>
      seq(
        '"',
        repeat(choice($.escape_sequence, $.quoted_string_text_fragment)),
        '"'
      ),
    quoted_string_text_fragment: ($) =>
      prec.right(
        repeat1(choice(token.immediate(/[^"\\$]+/), token.immediate("\\")))
      ),
    escape_sequence: ($) =>
      choice(token.immediate('\\"'), token.immediate("\\\\")),

    ...common,
  },
});
