module.exports = {
  macro_expansion: ($) =>
    choice(
      seq("${", repeat1(choice(/[^}]+/, $.macro_expansion)), "}"),
      seq("$(", repeat1(choice(/[^)]+/, $.macro_expansion)), ")")
    ),
};
