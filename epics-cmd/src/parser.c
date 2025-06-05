#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_LT = 7,
  anon_sym_GT = 8,
  anon_sym_GT_GT = 9,
  anon_sym_GT2 = 10,
  anon_sym_GT_GT2 = 11,
  sym_file_descriptor = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_SQUOTE = 14,
  aux_sym__quoted_string_text_fragment_token1 = 15,
  anon_sym_BSLASH = 16,
  aux_sym__quoted_string_text_fragment2_token1 = 17,
  anon_sym_BSLASH_DQUOTE = 18,
  anon_sym_BSLASH_BSLASH = 19,
  anon_sym_BSLASH_SQUOTE = 20,
  sym_word = 21,
  anon_sym_DOLLAR_LBRACE = 22,
  aux_sym_macro_expansion_token1 = 23,
  anon_sym_RBRACE = 24,
  anon_sym_DOLLAR_LPAREN = 25,
  aux_sym_macro_expansion_token2 = 26,
  sym_source_file = 27,
  sym_comment = 28,
  sym_command = 29,
  aux_sym__command_args = 30,
  sym_source = 31,
  sym_redirect = 32,
  sym_command_name = 33,
  sym_argument = 34,
  sym_path = 35,
  sym_string = 36,
  sym__quoted_string = 37,
  sym__quoted_string2 = 38,
  sym__quoted_string_text_fragment = 39,
  sym__quoted_string_text_fragment2 = 40,
  sym_escape_sequence = 41,
  sym_escape_sequence2 = 42,
  sym__argument = 43,
  sym_macro_expansion = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym__quoted_string_repeat1 = 46,
  aux_sym__quoted_string2_repeat1 = 47,
  aux_sym__quoted_string_text_fragment_repeat1 = 48,
  aux_sym__quoted_string_text_fragment2_repeat1 = 49,
  aux_sym_macro_expansion_repeat1 = 50,
  aux_sym_macro_expansion_repeat2 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT2] = ">",
  [anon_sym_GT_GT2] = ">>",
  [sym_file_descriptor] = "file_descriptor",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_text_fragment_token1] = "_quoted_string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__quoted_string_text_fragment2_token1] = "_quoted_string_text_fragment2_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [sym_word] = "word",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_macro_expansion_token1] = "macro_expansion_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [aux_sym_macro_expansion_token2] = "macro_expansion_token2",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [aux_sym__command_args] = "_command_args",
  [sym_source] = "source",
  [sym_redirect] = "redirect",
  [sym_command_name] = "command_name",
  [sym_argument] = "argument",
  [sym_path] = "path",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__quoted_string2] = "_quoted_string2",
  [sym__quoted_string_text_fragment] = "_quoted_string_text_fragment",
  [sym__quoted_string_text_fragment2] = "_quoted_string_text_fragment2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_escape_sequence2] = "escape_sequence",
  [sym__argument] = "_argument",
  [sym_macro_expansion] = "macro_expansion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
  [aux_sym__quoted_string2_repeat1] = "_quoted_string2_repeat1",
  [aux_sym__quoted_string_text_fragment_repeat1] = "_quoted_string_text_fragment_repeat1",
  [aux_sym__quoted_string_text_fragment2_repeat1] = "_quoted_string_text_fragment2_repeat1",
  [aux_sym_macro_expansion_repeat1] = "macro_expansion_repeat1",
  [aux_sym_macro_expansion_repeat2] = "macro_expansion_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT2] = anon_sym_GT,
  [anon_sym_GT_GT2] = anon_sym_GT_GT,
  [sym_file_descriptor] = sym_file_descriptor,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_text_fragment_token1] = aux_sym__quoted_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__quoted_string_text_fragment2_token1] = aux_sym__quoted_string_text_fragment2_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
  [sym_word] = sym_word,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_macro_expansion_token1] = aux_sym_macro_expansion_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [aux_sym_macro_expansion_token2] = aux_sym_macro_expansion_token2,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_command] = sym_command,
  [aux_sym__command_args] = aux_sym__command_args,
  [sym_source] = sym_source,
  [sym_redirect] = sym_redirect,
  [sym_command_name] = sym_command_name,
  [sym_argument] = sym_argument,
  [sym_path] = sym_path,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__quoted_string2] = sym__quoted_string2,
  [sym__quoted_string_text_fragment] = sym__quoted_string_text_fragment,
  [sym__quoted_string_text_fragment2] = sym__quoted_string_text_fragment2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_escape_sequence2] = sym_escape_sequence,
  [sym__argument] = sym__argument,
  [sym_macro_expansion] = sym_macro_expansion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
  [aux_sym__quoted_string2_repeat1] = aux_sym__quoted_string2_repeat1,
  [aux_sym__quoted_string_text_fragment_repeat1] = aux_sym__quoted_string_text_fragment_repeat1,
  [aux_sym__quoted_string_text_fragment2_repeat1] = aux_sym__quoted_string_text_fragment2_repeat1,
  [aux_sym_macro_expansion_repeat1] = aux_sym_macro_expansion_repeat1,
  [aux_sym_macro_expansion_repeat2] = aux_sym_macro_expansion_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT2] = {
    .visible = true,
    .named = false,
  },
  [sym_file_descriptor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment2_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_expansion_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__command_args] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string2] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string_text_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string_text_fragment2] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence2] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_expansion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_text_fragment2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_expansion_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < '<'
      ? (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')
      : (c <= '<' || c == '>'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == '{') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(41);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>') ADVANCE(41);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT2);
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_GT2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_file_descriptor);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (lookahead == '\\') ADVANCE(10);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment2_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment2_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(10);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token1);
      if (lookahead == '$') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token1);
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token2);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token2);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_macro_expansion] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT2] = ACTIONS(1),
    [anon_sym_GT_GT2] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym_comment] = STATE(76),
    [sym_command] = STATE(76),
    [sym_source] = STATE(76),
    [sym_command_name] = STATE(4),
    [sym_string] = STATE(13),
    [sym__quoted_string] = STATE(15),
    [sym__quoted_string2] = STATE(15),
    [sym__argument] = STATE(19),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_file_descriptor] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_word] = ACTIONS(19),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(3),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_file_descriptor,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_macro_expansion,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(4), 1,
      sym_command_name,
    STATE(13), 1,
      sym_string,
    STATE(19), 1,
      sym__argument,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    STATE(76), 3,
      sym_comment,
      sym_command,
      sym_source,
  [52] = 15,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym_file_descriptor,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      sym_word,
    STATE(4), 1,
      sym_command_name,
    STATE(13), 1,
      sym_string,
    STATE(19), 1,
      sym__argument,
    STATE(3), 2,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    STATE(76), 3,
      sym_comment,
      sym_command,
      sym_source,
  [102] = 16,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_file_descriptor,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(4), 1,
      sym_macro_expansion,
    STATE(5), 1,
      aux_sym__command_args,
    STATE(13), 1,
      sym_string,
    STATE(28), 1,
      sym__argument,
    STATE(29), 1,
      sym_argument,
    STATE(81), 1,
      sym_redirect,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [154] = 15,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(49), 1,
      sym_file_descriptor,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym_macro_expansion,
    STATE(6), 1,
      aux_sym__command_args,
    STATE(13), 1,
      sym_string,
    STATE(28), 1,
      sym__argument,
    STATE(29), 1,
      sym_argument,
    STATE(82), 1,
      sym_redirect,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [203] = 13,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      sym_file_descriptor,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      sym_word,
    STATE(13), 1,
      sym_string,
    STATE(28), 1,
      sym__argument,
    STATE(29), 1,
      sym_argument,
    STATE(6), 2,
      aux_sym__command_args,
      sym_macro_expansion,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [247] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      anon_sym_GT2,
    ACTIONS(83), 1,
      anon_sym_GT_GT2,
    STATE(7), 1,
      sym_macro_expansion,
    ACTIONS(79), 8,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [276] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 1,
      sym_file_descriptor,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      sym_word,
    STATE(8), 1,
      sym_macro_expansion,
    STATE(10), 1,
      aux_sym__command_args,
    STATE(36), 1,
      sym__argument,
    STATE(41), 1,
      sym_string,
    STATE(49), 1,
      sym_argument,
    STATE(43), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [317] = 12,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      sym_file_descriptor,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym_word,
    STATE(36), 1,
      sym__argument,
    STATE(41), 1,
      sym_string,
    STATE(49), 1,
      sym_argument,
    STATE(9), 2,
      aux_sym__command_args,
      sym_macro_expansion,
    STATE(43), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [356] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(87), 1,
      sym_file_descriptor,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym__command_args,
    STATE(10), 1,
      sym_macro_expansion,
    STATE(36), 1,
      sym__argument,
    STATE(41), 1,
      sym_string,
    STATE(49), 1,
      sym_argument,
    STATE(43), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [397] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(77), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_macro_expansion,
    ACTIONS(79), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [421] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_macro_expansion,
    ACTIONS(111), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [445] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_macro_expansion,
    ACTIONS(115), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [469] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_macro_expansion,
    ACTIONS(119), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [493] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(121), 1,
      anon_sym_LF,
    STATE(15), 1,
      sym_macro_expansion,
    ACTIONS(123), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [517] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_macro_expansion,
    ACTIONS(127), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [541] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(129), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym_macro_expansion,
    ACTIONS(131), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [565] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    STATE(18), 1,
      sym_macro_expansion,
    STATE(21), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(38), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(55), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [598] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_macro_expansion,
    ACTIONS(143), 8,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [621] = 11,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      sym_file_descriptor,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_word,
    STATE(13), 1,
      sym_string,
    STATE(20), 1,
      sym_macro_expansion,
    STATE(78), 1,
      sym__argument,
    STATE(83), 1,
      sym_path,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [656] = 9,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_BSLASH,
    ACTIONS(150), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    STATE(38), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(153), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(21), 2,
      sym_macro_expansion,
      aux_sym__quoted_string2_repeat1,
    STATE(55), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [687] = 11,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      sym_file_descriptor,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_word,
    STATE(13), 1,
      sym_string,
    STATE(22), 1,
      sym_macro_expansion,
    STATE(78), 1,
      sym__argument,
    STATE(86), 1,
      sym_path,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [722] = 9,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(161), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(164), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(23), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_repeat1,
    STATE(52), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [753] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    STATE(24), 1,
      sym_macro_expansion,
    STATE(25), 1,
      aux_sym__quoted_string_repeat1,
    STATE(42), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(173), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(52), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [786] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(169), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym__quoted_string_repeat1,
    STATE(25), 1,
      sym_macro_expansion,
    STATE(42), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(173), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(52), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [819] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(169), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym__quoted_string_repeat1,
    STATE(26), 1,
      sym_macro_expansion,
    STATE(42), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(173), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(52), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [852] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(169), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(171), 1,
      anon_sym_BSLASH,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym__quoted_string_repeat1,
    STATE(27), 1,
      sym_macro_expansion,
    STATE(42), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(173), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(52), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [885] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(181), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_macro_expansion,
    ACTIONS(183), 8,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [908] = 6,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LF,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_macro_expansion,
    ACTIONS(189), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [933] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(30), 1,
      sym_macro_expansion,
    STATE(38), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(55), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [966] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(31), 1,
      sym_macro_expansion,
    STATE(38), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(55), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [999] = 10,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(32), 1,
      sym_macro_expansion,
    STATE(38), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(55), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [1032] = 11,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      sym_file_descriptor,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_word,
    STATE(13), 1,
      sym_string,
    STATE(33), 1,
      sym_macro_expansion,
    STATE(78), 1,
      sym__argument,
    STATE(85), 1,
      sym_path,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [1067] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym_macro_expansion,
    ACTIONS(63), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1089] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(35), 1,
      sym_macro_expansion,
    ACTIONS(197), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1110] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(36), 1,
      sym_macro_expansion,
    ACTIONS(183), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(181), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1130] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(37), 1,
      sym_macro_expansion,
    ACTIONS(131), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(129), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1150] = 6,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(38), 1,
      sym_macro_expansion,
    STATE(47), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(199), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(201), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1172] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LF,
    ACTIONS(205), 1,
      sym_file_descriptor,
    STATE(39), 1,
      sym_macro_expansion,
    STATE(77), 1,
      sym_redirect,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [1196] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(40), 1,
      sym_macro_expansion,
    ACTIONS(79), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(77), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1216] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(41), 1,
      sym_macro_expansion,
    ACTIONS(115), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(113), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1236] = 6,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(42), 1,
      sym_macro_expansion,
    STATE(44), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(207), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(209), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1258] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(43), 1,
      sym_macro_expansion,
    ACTIONS(123), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(121), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1278] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(216), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(44), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_text_fragment_repeat1,
  [1302] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(45), 1,
      sym_macro_expansion,
    ACTIONS(127), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(125), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1322] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(46), 1,
      sym_macro_expansion,
    ACTIONS(111), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(109), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1342] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(221), 1,
      anon_sym_SQUOTE,
    ACTIONS(223), 1,
      anon_sym_BSLASH,
    ACTIONS(226), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(229), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(47), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_text_fragment2_repeat1,
  [1366] = 7,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(205), 1,
      sym_file_descriptor,
    ACTIONS(231), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym_macro_expansion,
    STATE(79), 1,
      sym_redirect,
    ACTIONS(47), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [1390] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_macro_expansion,
    ACTIONS(189), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(185), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1412] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(50), 1,
      sym_macro_expansion,
    ACTIONS(119), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(117), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1432] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(51), 1,
      sym_macro_expansion,
    ACTIONS(235), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(237), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1451] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(52), 1,
      sym_macro_expansion,
    ACTIONS(239), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(241), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1470] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(53), 1,
      sym_macro_expansion,
    ACTIONS(63), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(61), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1489] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(54), 1,
      sym_macro_expansion,
    ACTIONS(243), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(245), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1508] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(55), 1,
      sym_macro_expansion,
    ACTIONS(247), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(249), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1527] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(56), 1,
      sym_macro_expansion,
    ACTIONS(251), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(253), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1546] = 5,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(57), 1,
      sym_macro_expansion,
    ACTIONS(255), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(257), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1565] = 6,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(265), 1,
      aux_sym_macro_expansion_token2,
    STATE(58), 1,
      sym_macro_expansion,
    STATE(59), 1,
      aux_sym_macro_expansion_repeat2,
  [1584] = 5,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(275), 1,
      aux_sym_macro_expansion_token2,
    STATE(59), 2,
      sym_macro_expansion,
      aux_sym_macro_expansion_repeat2,
  [1601] = 6,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(60), 1,
      sym_macro_expansion,
    STATE(65), 1,
      aux_sym_macro_expansion_repeat1,
  [1620] = 6,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(265), 1,
      aux_sym_macro_expansion_token2,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(61), 1,
      sym_macro_expansion,
  [1639] = 6,
    ACTIONS(278), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_macro_expansion,
    STATE(65), 1,
      aux_sym_macro_expansion_repeat1,
  [1658] = 6,
    ACTIONS(278), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(280), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_macro_expansion,
    STATE(65), 1,
      aux_sym_macro_expansion_repeat1,
  [1677] = 6,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(265), 1,
      aux_sym_macro_expansion_token2,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(64), 1,
      sym_macro_expansion,
  [1696] = 5,
    ACTIONS(288), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(65), 2,
      sym_macro_expansion,
      aux_sym_macro_expansion_repeat1,
  [1713] = 2,
    STATE(66), 1,
      sym_macro_expansion,
    ACTIONS(299), 4,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_macro_expansion_token1,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LPAREN,
  [1723] = 2,
    STATE(67), 1,
      sym_macro_expansion,
    ACTIONS(299), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      aux_sym_macro_expansion_token2,
  [1733] = 5,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(301), 1,
      aux_sym_macro_expansion_token2,
    STATE(58), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(68), 1,
      sym_macro_expansion,
  [1749] = 5,
    ACTIONS(278), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(303), 1,
      aux_sym_macro_expansion_token1,
    STATE(60), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(69), 1,
      sym_macro_expansion,
  [1765] = 5,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(305), 1,
      aux_sym_macro_expansion_token2,
    STATE(61), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(70), 1,
      sym_macro_expansion,
  [1781] = 5,
    ACTIONS(278), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(307), 1,
      aux_sym_macro_expansion_token1,
    STATE(62), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(71), 1,
      sym_macro_expansion,
  [1797] = 5,
    ACTIONS(261), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(309), 1,
      aux_sym_macro_expansion_token2,
    STATE(64), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(72), 1,
      sym_macro_expansion,
  [1813] = 5,
    ACTIONS(278), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(282), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(311), 1,
      aux_sym_macro_expansion_token1,
    STATE(63), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(73), 1,
      sym_macro_expansion,
  [1829] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(81), 1,
      anon_sym_GT2,
    ACTIONS(83), 1,
      anon_sym_GT_GT2,
    STATE(74), 1,
      sym_macro_expansion,
  [1845] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_macro_expansion,
  [1858] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(76), 1,
      sym_macro_expansion,
  [1871] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LF,
    STATE(77), 1,
      sym_macro_expansion,
  [1884] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LF,
    STATE(78), 1,
      sym_macro_expansion,
  [1897] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym_macro_expansion,
  [1910] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(321), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym_macro_expansion,
  [1923] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(81), 1,
      sym_macro_expansion,
  [1936] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LF,
    STATE(82), 1,
      sym_macro_expansion,
  [1949] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(323), 1,
      anon_sym_LF,
    STATE(83), 1,
      sym_macro_expansion,
  [1962] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(325), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_macro_expansion,
  [1975] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(327), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym_macro_expansion,
  [1988] = 4,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_macro_expansion,
  [2001] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 317,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 421,
  [SMALL_STATE(13)] = 445,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 493,
  [SMALL_STATE(16)] = 517,
  [SMALL_STATE(17)] = 541,
  [SMALL_STATE(18)] = 565,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 621,
  [SMALL_STATE(21)] = 656,
  [SMALL_STATE(22)] = 687,
  [SMALL_STATE(23)] = 722,
  [SMALL_STATE(24)] = 753,
  [SMALL_STATE(25)] = 786,
  [SMALL_STATE(26)] = 819,
  [SMALL_STATE(27)] = 852,
  [SMALL_STATE(28)] = 885,
  [SMALL_STATE(29)] = 908,
  [SMALL_STATE(30)] = 933,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1032,
  [SMALL_STATE(34)] = 1067,
  [SMALL_STATE(35)] = 1089,
  [SMALL_STATE(36)] = 1110,
  [SMALL_STATE(37)] = 1130,
  [SMALL_STATE(38)] = 1150,
  [SMALL_STATE(39)] = 1172,
  [SMALL_STATE(40)] = 1196,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1236,
  [SMALL_STATE(43)] = 1258,
  [SMALL_STATE(44)] = 1278,
  [SMALL_STATE(45)] = 1302,
  [SMALL_STATE(46)] = 1322,
  [SMALL_STATE(47)] = 1342,
  [SMALL_STATE(48)] = 1366,
  [SMALL_STATE(49)] = 1390,
  [SMALL_STATE(50)] = 1412,
  [SMALL_STATE(51)] = 1432,
  [SMALL_STATE(52)] = 1451,
  [SMALL_STATE(53)] = 1470,
  [SMALL_STATE(54)] = 1489,
  [SMALL_STATE(55)] = 1508,
  [SMALL_STATE(56)] = 1527,
  [SMALL_STATE(57)] = 1546,
  [SMALL_STATE(58)] = 1565,
  [SMALL_STATE(59)] = 1584,
  [SMALL_STATE(60)] = 1601,
  [SMALL_STATE(61)] = 1620,
  [SMALL_STATE(62)] = 1639,
  [SMALL_STATE(63)] = 1658,
  [SMALL_STATE(64)] = 1677,
  [SMALL_STATE(65)] = 1696,
  [SMALL_STATE(66)] = 1713,
  [SMALL_STATE(67)] = 1723,
  [SMALL_STATE(68)] = 1733,
  [SMALL_STATE(69)] = 1749,
  [SMALL_STATE(70)] = 1765,
  [SMALL_STATE(71)] = 1781,
  [SMALL_STATE(72)] = 1797,
  [SMALL_STATE(73)] = 1813,
  [SMALL_STATE(74)] = 1829,
  [SMALL_STATE(75)] = 1845,
  [SMALL_STATE(76)] = 1858,
  [SMALL_STATE(77)] = 1871,
  [SMALL_STATE(78)] = 1884,
  [SMALL_STATE(79)] = 1897,
  [SMALL_STATE(80)] = 1910,
  [SMALL_STATE(81)] = 1923,
  [SMALL_STATE(82)] = 1936,
  [SMALL_STATE(83)] = 1949,
  [SMALL_STATE(84)] = 1962,
  [SMALL_STATE(85)] = 1975,
  [SMALL_STATE(86)] = 1988,
  [SMALL_STATE(87)] = 2001,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_args, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_args, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(11),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(24),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(32),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(40),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(27),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(31),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string2, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string2, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string2, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string2, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(57),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(57),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(56),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(51),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(51),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(54),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_args, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_args, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string_text_fragment2, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string_text_fragment2, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string_text_fragment, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string_text_fragment, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(57),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(57),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence2, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence2, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2), SHIFT_REPEAT(69),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2), SHIFT_REPEAT(68),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2), SHIFT_REPEAT(59),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2), SHIFT_REPEAT(71),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2), SHIFT_REPEAT(65),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2), SHIFT_REPEAT(70),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expansion, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_cmd(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
