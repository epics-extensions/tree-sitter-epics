#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_RBRACE = 23,
  anon_sym_DOLLAR_LPAREN = 24,
  sym__macro_expansion_inner = 25,
  sym_source_file = 26,
  sym_comment = 27,
  sym_command = 28,
  aux_sym__command_args = 29,
  sym_source = 30,
  sym_redirect = 31,
  sym_command_name = 32,
  sym_argument = 33,
  sym_path = 34,
  sym_string = 35,
  sym__quoted_string = 36,
  sym__quoted_string2 = 37,
  sym__quoted_string_text_fragment = 38,
  sym__quoted_string_text_fragment2 = 39,
  sym_escape_sequence = 40,
  sym_escape_sequence2 = 41,
  sym__argument = 42,
  sym_macro_expansion = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym__quoted_string_repeat1 = 45,
  aux_sym__quoted_string2_repeat1 = 46,
  aux_sym__quoted_string_text_fragment_repeat1 = 47,
  aux_sym__quoted_string_text_fragment2_repeat1 = 48,
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
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [sym__macro_expansion_inner] = "_macro_expansion_inner",
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
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [sym__macro_expansion_inner] = sym__macro_expansion_inner,
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__macro_expansion_inner] = {
    .visible = false,
    .named = true,
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>') ADVANCE(40);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT2);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_GT2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_file_descriptor);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_file_descriptor);
      if (lookahead == '\\') ADVANCE(9);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment2_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__quoted_string_text_fragment2_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\\') ADVANCE(9);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__macro_expansion_inner);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 7},
  [75] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(72),
    [sym_comment] = STATE(71),
    [sym_command] = STATE(71),
    [sym_source] = STATE(71),
    [sym_command_name] = STATE(3),
    [sym_string] = STATE(16),
    [sym__quoted_string] = STATE(15),
    [sym__quoted_string2] = STATE(15),
    [sym__argument] = STATE(25),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(4),
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
  [0] = 15,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(26), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      sym_file_descriptor,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(38), 1,
      sym_word,
    STATE(3), 1,
      sym_command_name,
    STATE(16), 1,
      sym_string,
    STATE(25), 1,
      sym__argument,
    STATE(2), 2,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    STATE(71), 3,
      sym_comment,
      sym_command,
      sym_source,
  [50] = 16,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(41), 1,
      anon_sym_LF,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_file_descriptor,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(3), 1,
      sym_macro_expansion,
    STATE(5), 1,
      aux_sym__command_args,
    STATE(16), 1,
      sym_string,
    STATE(27), 1,
      sym__argument,
    STATE(28), 1,
      sym_argument,
    STATE(65), 1,
      sym_redirect,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [102] = 16,
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
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(3), 1,
      sym_command_name,
    STATE(4), 1,
      sym_macro_expansion,
    STATE(16), 1,
      sym_string,
    STATE(25), 1,
      sym__argument,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    STATE(71), 3,
      sym_comment,
      sym_command,
      sym_source,
  [154] = 15,
    ACTIONS(19), 1,
      sym_word,
    ACTIONS(47), 1,
      sym_file_descriptor,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(5), 1,
      sym_macro_expansion,
    STATE(6), 1,
      aux_sym__command_args,
    STATE(16), 1,
      sym_string,
    STATE(27), 1,
      sym__argument,
    STATE(28), 1,
      sym_argument,
    STATE(63), 1,
      sym_redirect,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [203] = 13,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
    STATE(16), 1,
      sym_string,
    STATE(27), 1,
      sym__argument,
    STATE(28), 1,
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
  [247] = 12,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      sym_file_descriptor,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_word,
    STATE(48), 1,
      sym_string,
    STATE(49), 1,
      sym__argument,
    STATE(50), 1,
      sym_argument,
    STATE(7), 2,
      aux_sym__command_args,
      sym_macro_expansion,
    STATE(40), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [286] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      sym_file_descriptor,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym_word,
    STATE(7), 1,
      aux_sym__command_args,
    STATE(8), 1,
      sym_macro_expansion,
    STATE(48), 1,
      sym_string,
    STATE(49), 1,
      sym__argument,
    STATE(50), 1,
      sym_argument,
    STATE(40), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [327] = 7,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_GT2,
    ACTIONS(105), 1,
      anon_sym_GT_GT2,
    STATE(9), 1,
      sym_macro_expansion,
    ACTIONS(101), 8,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [356] = 13,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(91), 1,
      sym_file_descriptor,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym_word,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym__command_args,
    STATE(10), 1,
      sym_macro_expansion,
    STATE(48), 1,
      sym_string,
    STATE(49), 1,
      sym__argument,
    STATE(50), 1,
      sym_argument,
    STATE(40), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [397] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(11), 1,
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
  [421] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(12), 1,
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
  [445] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(13), 1,
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
  [469] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_macro_expansion,
    ACTIONS(101), 9,
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
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    STATE(18), 1,
      sym_macro_expansion,
    STATE(19), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(52), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [598] = 9,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BSLASH,
    ACTIONS(146), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(149), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(19), 2,
      sym_macro_expansion,
      aux_sym__quoted_string2_repeat1,
    STATE(52), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [629] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH,
    STATE(20), 1,
      sym_macro_expansion,
    STATE(24), 1,
      aux_sym__quoted_string_repeat1,
    STATE(36), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(158), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(53), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [662] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(21), 1,
      sym_macro_expansion,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(52), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [695] = 11,
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
    STATE(16), 1,
      sym_string,
    STATE(22), 1,
      sym_macro_expansion,
    STATE(59), 1,
      sym_path,
    STATE(66), 1,
      sym__argument,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [730] = 11,
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
    STATE(16), 1,
      sym_string,
    STATE(23), 1,
      sym_macro_expansion,
    STATE(66), 1,
      sym__argument,
    STATE(67), 1,
      sym_path,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [765] = 9,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(167), 1,
      anon_sym_BSLASH,
    STATE(36), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(170), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(24), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_repeat1,
    STATE(53), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [796] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(173), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_macro_expansion,
    ACTIONS(175), 8,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [819] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym__quoted_string_repeat1,
    STATE(26), 1,
      sym_macro_expansion,
    STATE(36), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(158), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(53), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [852] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(27), 1,
      sym_macro_expansion,
    ACTIONS(181), 8,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [875] = 6,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LF,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_macro_expansion,
    ACTIONS(187), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      sym_file_descriptor,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [900] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym__quoted_string_repeat1,
    STATE(29), 1,
      sym_macro_expansion,
    STATE(36), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(158), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(53), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [933] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_macro_expansion,
    STATE(31), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(52), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [966] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(137), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(19), 1,
      aux_sym__quoted_string2_repeat1,
    STATE(31), 1,
      sym_macro_expansion,
    STATE(37), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(139), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(52), 2,
      sym__quoted_string_text_fragment2,
      sym_escape_sequence2,
  [999] = 11,
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
    STATE(16), 1,
      sym_string,
    STATE(32), 1,
      sym_macro_expansion,
    STATE(61), 1,
      sym_path,
    STATE(66), 1,
      sym__argument,
    STATE(15), 2,
      sym__quoted_string,
      sym__quoted_string2,
  [1034] = 10,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(154), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(156), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym__quoted_string_repeat1,
    STATE(33), 1,
      sym_macro_expansion,
    STATE(36), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(158), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(53), 2,
      sym__quoted_string_text_fragment,
      sym_escape_sequence,
  [1067] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_LT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1110] = 6,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(36), 1,
      sym_macro_expansion,
    STATE(44), 1,
      aux_sym__quoted_string_text_fragment_repeat1,
    ACTIONS(199), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(201), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1132] = 6,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(37), 1,
      sym_macro_expansion,
    STATE(41), 1,
      aux_sym__quoted_string_text_fragment2_repeat1,
    ACTIONS(203), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(205), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1154] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(38), 1,
      sym_macro_expansion,
    ACTIONS(119), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(117), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1174] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(39), 1,
      sym_macro_expansion,
    ACTIONS(115), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(113), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1194] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(40), 1,
      sym_macro_expansion,
    ACTIONS(123), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(121), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1214] = 7,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_BSLASH,
    ACTIONS(212), 1,
      aux_sym__quoted_string_text_fragment2_token1,
    ACTIONS(215), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
    STATE(41), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_text_fragment2_repeat1,
  [1238] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(42), 1,
      sym_macro_expansion,
    ACTIONS(131), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(129), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1258] = 7,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 1,
      sym_file_descriptor,
    STATE(43), 1,
      sym_macro_expansion,
    STATE(62), 1,
      sym_redirect,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [1282] = 7,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      aux_sym__quoted_string_text_fragment_token1,
    ACTIONS(226), 1,
      anon_sym_BSLASH,
    ACTIONS(229), 2,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
    STATE(44), 2,
      sym_macro_expansion,
      aux_sym__quoted_string_text_fragment_repeat1,
  [1306] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(45), 1,
      sym_macro_expansion,
    ACTIONS(101), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(99), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1326] = 7,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(219), 1,
      sym_file_descriptor,
    ACTIONS(231), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym_macro_expansion,
    STATE(60), 1,
      sym_redirect,
    ACTIONS(45), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
  [1350] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(47), 1,
      sym_macro_expansion,
    ACTIONS(111), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(109), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1370] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(48), 1,
      sym_macro_expansion,
    ACTIONS(127), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(125), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1390] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(49), 1,
      sym_macro_expansion,
    ACTIONS(181), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(179), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1410] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_macro_expansion,
    ACTIONS(187), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(183), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1432] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(52), 1,
      sym_macro_expansion,
    ACTIONS(239), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(241), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1470] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(53), 1,
      sym_macro_expansion,
    ACTIONS(243), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(245), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1489] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(54), 1,
      sym_macro_expansion,
    ACTIONS(247), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
    ACTIONS(249), 3,
      aux_sym__quoted_string_text_fragment2_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
  [1508] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(55), 1,
      sym_macro_expansion,
    ACTIONS(63), 2,
      sym_file_descriptor,
      sym_word,
    ACTIONS(61), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1527] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(56), 1,
      sym_macro_expansion,
    ACTIONS(251), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(253), 3,
      aux_sym__quoted_string_text_fragment_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [1546] = 5,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
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
  [1565] = 5,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(103), 1,
      anon_sym_GT2,
    ACTIONS(105), 1,
      anon_sym_GT_GT2,
    STATE(58), 1,
      sym_macro_expansion,
  [1581] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_macro_expansion,
  [1594] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(261), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_macro_expansion,
  [1607] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(263), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_macro_expansion,
  [1620] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(231), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym_macro_expansion,
  [1633] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(217), 1,
      anon_sym_LF,
    STATE(63), 1,
      sym_macro_expansion,
  [1646] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(265), 1,
      sym__macro_expansion_inner,
    STATE(64), 1,
      sym_macro_expansion,
  [1659] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym_macro_expansion,
  [1672] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(267), 1,
      anon_sym_LF,
    STATE(66), 1,
      sym_macro_expansion,
  [1685] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_macro_expansion,
  [1698] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(271), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym_macro_expansion,
  [1711] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_macro_expansion,
  [1724] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_macro_expansion,
  [1737] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(275), 1,
      anon_sym_LF,
    STATE(71), 1,
      sym_macro_expansion,
  [1750] = 4,
    ACTIONS(3), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_macro_expansion,
  [1763] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(279), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_macro_expansion,
  [1776] = 4,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(281), 1,
      sym__macro_expansion_inner,
    STATE(74), 1,
      sym_macro_expansion,
  [1789] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 327,
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
  [SMALL_STATE(20)] = 629,
  [SMALL_STATE(21)] = 662,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 730,
  [SMALL_STATE(24)] = 765,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 819,
  [SMALL_STATE(27)] = 852,
  [SMALL_STATE(28)] = 875,
  [SMALL_STATE(29)] = 900,
  [SMALL_STATE(30)] = 933,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1034,
  [SMALL_STATE(34)] = 1067,
  [SMALL_STATE(35)] = 1089,
  [SMALL_STATE(36)] = 1110,
  [SMALL_STATE(37)] = 1132,
  [SMALL_STATE(38)] = 1154,
  [SMALL_STATE(39)] = 1174,
  [SMALL_STATE(40)] = 1194,
  [SMALL_STATE(41)] = 1214,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1258,
  [SMALL_STATE(44)] = 1282,
  [SMALL_STATE(45)] = 1306,
  [SMALL_STATE(46)] = 1326,
  [SMALL_STATE(47)] = 1350,
  [SMALL_STATE(48)] = 1370,
  [SMALL_STATE(49)] = 1390,
  [SMALL_STATE(50)] = 1410,
  [SMALL_STATE(51)] = 1432,
  [SMALL_STATE(52)] = 1451,
  [SMALL_STATE(53)] = 1470,
  [SMALL_STATE(54)] = 1489,
  [SMALL_STATE(55)] = 1508,
  [SMALL_STATE(56)] = 1527,
  [SMALL_STATE(57)] = 1546,
  [SMALL_STATE(58)] = 1565,
  [SMALL_STATE(59)] = 1581,
  [SMALL_STATE(60)] = 1594,
  [SMALL_STATE(61)] = 1607,
  [SMALL_STATE(62)] = 1620,
  [SMALL_STATE(63)] = 1633,
  [SMALL_STATE(64)] = 1646,
  [SMALL_STATE(65)] = 1659,
  [SMALL_STATE(66)] = 1672,
  [SMALL_STATE(67)] = 1685,
  [SMALL_STATE(68)] = 1698,
  [SMALL_STATE(69)] = 1711,
  [SMALL_STATE(70)] = 1724,
  [SMALL_STATE(71)] = 1737,
  [SMALL_STATE(72)] = 1750,
  [SMALL_STATE(73)] = 1763,
  [SMALL_STATE(74)] = 1776,
  [SMALL_STATE(75)] = 1789,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_args, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_args, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(14),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(29),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(30),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(16),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(45),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(33),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(21),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_args, 2), SHIFT_REPEAT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string2, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string2, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string2, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string2, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(57),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(57),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 2), SHIFT_REPEAT(54),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(51),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(51),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_name, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_name, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_args, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_args, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string_text_fragment, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string_text_fragment, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string_text_fragment2, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string_text_fragment2, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(57),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2), SHIFT_REPEAT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string2_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string2_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence2, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence2, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_text_fragment2_repeat1, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirect, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
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
