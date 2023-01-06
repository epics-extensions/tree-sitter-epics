const common_msi = require("../common/common_msi.js");

// TODO: test with:
// https://docs.epics-controls.org/en/latest/appdevguide/databaseDefinition.html#macro-substitution
module.exports = grammar({
  name: "epics_msi_template",

  rules: {
    macro_expansion: ($) =>
      choice(
        seq("${", $._macro_expansion_inner, "}"),
        seq("$(", $._macro_expansion_inner, ")")
      ),

    _macro_expansion_inner: ($) =>
      seq($.variable, optional(seq("=", field("default", $.string)))),

    variable: ($) => /\w+/,

    ...common_msi,
  },
});
