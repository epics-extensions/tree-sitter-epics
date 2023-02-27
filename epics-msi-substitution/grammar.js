// Specifications:
// https://epics.anl.gov/EpicsDocumentation/ExtensionsManuals/msi/msi.html

const common = require("../common/common_grammar.js");
const common_msi = require("../common/common_msi.js");

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

    ...common,
    ...common_msi,
  },
});
