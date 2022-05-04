module.exports = {
  string: ($) => choice(/\w+/, $.quoted_string),
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
};
