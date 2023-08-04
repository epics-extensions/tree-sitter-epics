// Mostly from 'epics-base/modules/libcom/src/iocsh/iocsh.cpp'

const common = require("../common/common_grammar.js");

module.exports = grammar({
  name: "epics_cmd",

  extras: ($) => [/\s/, $.macro_expansion],

  rules: {
    source_file: ($) =>
      repeat(seq(choice($.comment, $.command, $.source), "\n")),

    comment: ($) => seq("#", /.*/),

    command: ($) =>
      seq(
        field("name", $.command_name),
        choice(
          seq("(", optional($._command_args), ")"),
          optional($._command_args)
        ),
        optional($.redirect)
      ),

    _command_args: ($) => repeat1(seq($.argument, optional(","))),

    source: ($) => seq("<", $.path),

    redirect: ($) =>
      seq(
        choice(
          "<",
          ">",
          ">>",
          seq(
            $.file_descriptor,
            choice(token.immediate(">"), token.immediate(">>"))
          )
        ),
        $.path
      ),

    file_descriptor: ($) => /[1-9]/,

    command_name: ($) => $._argument,
    argument: ($) => $._argument,
    path: ($) => $._argument,

    string: ($) => choice($._quoted_string, $._quoted_string2),

    _quoted_string: ($) =>
      seq(
        '"',
        repeat(choice($.escape_sequence, $._quoted_string_text_fragment)),
        '"'
      ),
    _quoted_string2: ($) =>
      seq(
        "'",
        repeat(
          choice(
            alias($.escape_sequence2, $.escape_sequence),
            $._quoted_string_text_fragment2
          )
        ),
        "'"
      ),

    _quoted_string_text_fragment: ($) =>
      prec.left(
        repeat1(choice(token.immediate(/[^"\\$]+/), token.immediate("\\")))
      ),
    _quoted_string_text_fragment2: ($) =>
      prec.left(
        repeat1(choice(token.immediate(/[^'\\$]+/), token.immediate("\\")))
      ),

    escape_sequence: ($) =>
      choice(token.immediate('\\"'), token.immediate("\\\\")),
    escape_sequence2: ($) =>
      choice(token.immediate("\\'"), token.immediate("\\\\")),

    _argument: ($) =>
      choice(
        $.word,
        $.string,
        // To prevent the issue of having "1" at the end of a command
        // being interpreted as the start of a "1> thing" redirect
        alias($.file_descriptor, $.word)
      ),

    word: ($) => /([^(),\s#\\$'"<>]|\\\\|\\"|\\')+/,

    ...common,
  },
});
