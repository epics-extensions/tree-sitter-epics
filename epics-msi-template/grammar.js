module.exports = grammar({
  name: "epics_msi_template",

  rules: {
    macro_expansion: ($) =>
      choice(
        seq("${", $._macro_expansion_inner, "}"),
        seq("$(", $._macro_expansion_inner, ")")
      ),

    _macro_expansion_inner: ($) =>
      seq(
        $.variable,
        optional(seq("=", field("default", $.string))),
        field("overrides", repeat(seq(",", $.override)))
      ),

    variable: ($) => repeat1(choice(token.immediate(/\w+/), $.macro_expansion)),

    override: ($) => seq($.variable, "=", $.string),

    string: ($) =>
      choice(repeat1(choice(/\w+/, $.macro_expansion)), $.quoted_string),
    quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            $.escape_sequence,
            $.quoted_string_text_fragment,
            $.macro_expansion
          )
        ),
        '"'
      ),
    quoted_string_text_fragment: ($) =>
      prec.right(
        repeat1(choice(token.immediate(/[^"\\$]+/), token.immediate("\\")))
      ),
    escape_sequence: ($) =>
      choice(token.immediate('\\"'), token.immediate("\\\\")),
  },
});
