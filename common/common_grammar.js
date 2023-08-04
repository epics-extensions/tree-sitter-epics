module.exports = {
  macro_expansion: ($) =>
    choice(
      seq("${", $._macro_expansion_inner, "}"),
      seq("$(", $._macro_expansion_inner, ")")
    ),

  _macro_expansion_inner: ($) => repeat1(choice(/[^})]+/, $.macro_expansion)),
};
