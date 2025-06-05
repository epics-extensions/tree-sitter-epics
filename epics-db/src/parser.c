#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_path = 1,
  anon_sym_addpath = 2,
  anon_sym_include = 3,
  anon_sym_menu = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_choice = 9,
  anon_sym_COMMA = 10,
  anon_sym_recordtype = 11,
  anon_sym_field = 12,
  anon_sym_PERCENT = 13,
  aux_sym_ccode_token1 = 14,
  anon_sym_device = 15,
  anon_sym_driver = 16,
  anon_sym_link = 17,
  anon_sym_registrar = 18,
  anon_sym_variable = 19,
  anon_sym_function = 20,
  anon_sym_breaktable = 21,
  sym_double = 22,
  anon_sym_record = 23,
  anon_sym_grecord = 24,
  anon_sym_alias = 25,
  anon_sym_info = 26,
  anon_sym_POUND = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_text_fragment_token1 = 29,
  anon_sym_BSLASH = 30,
  sym_escape_sequence = 31,
  anon_sym_null = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  aux_sym__json_object_token1 = 35,
  anon_sym_LBRACK = 36,
  aux_sym__json_array_token1 = 37,
  anon_sym_RBRACK = 38,
  sym__unquoted_string = 39,
  anon_sym_DOLLAR_LBRACE = 40,
  aux_sym_macro_expansion_token1 = 41,
  anon_sym_DOLLAR_LPAREN = 42,
  aux_sym_macro_expansion_token2 = 43,
  sym_source_file = 44,
  sym__statements = 45,
  sym_path_definition = 46,
  sym_include_statement = 47,
  sym_menu_definition = 48,
  sym_menu_choice = 49,
  sym_record_type_definition = 50,
  sym_field_definition = 51,
  sym_field_descriptor = 52,
  sym_cdef = 53,
  sym_ccode = 54,
  sym_device_support_declaration = 55,
  sym_driver_declaration = 56,
  sym_link_declaration = 57,
  sym_registrar_declaration = 58,
  sym_variable_declaration = 59,
  sym_function_declaration = 60,
  sym_breakpoint_table = 61,
  sym_breakpoint_item = 62,
  sym_record_instance = 63,
  sym_alias = 64,
  sym_field = 65,
  sym_info = 66,
  sym_alias_statement = 67,
  sym_comment = 68,
  sym_string = 69,
  sym__string = 70,
  sym_string_text_fragment = 71,
  sym_json_value = 72,
  sym__json_object = 73,
  sym__json_array = 74,
  sym_record_type = 75,
  sym_record_name = 76,
  sym_field_item = 77,
  sym_field_name = 78,
  sym_macro_expansion = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_menu_definition_repeat1 = 81,
  aux_sym_record_type_definition_repeat1 = 82,
  aux_sym_field_definition_repeat1 = 83,
  aux_sym_breakpoint_table_repeat1 = 84,
  aux_sym_record_instance_repeat1 = 85,
  aux_sym__string_repeat1 = 86,
  aux_sym_string_text_fragment_repeat1 = 87,
  aux_sym__json_object_repeat1 = 88,
  aux_sym__json_array_repeat1 = 89,
  aux_sym_macro_expansion_repeat1 = 90,
  aux_sym_macro_expansion_repeat2 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_path] = "path",
  [anon_sym_addpath] = "addpath",
  [anon_sym_include] = "include",
  [anon_sym_menu] = "menu",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_choice] = "choice",
  [anon_sym_COMMA] = ",",
  [anon_sym_recordtype] = "recordtype",
  [anon_sym_field] = "field",
  [anon_sym_PERCENT] = "%",
  [aux_sym_ccode_token1] = "ccode_token1",
  [anon_sym_device] = "device",
  [anon_sym_driver] = "driver",
  [anon_sym_link] = "link",
  [anon_sym_registrar] = "registrar",
  [anon_sym_variable] = "variable",
  [anon_sym_function] = "function",
  [anon_sym_breaktable] = "breaktable",
  [sym_double] = "double",
  [anon_sym_record] = "record",
  [anon_sym_grecord] = "grecord",
  [anon_sym_alias] = "alias",
  [anon_sym_info] = "info",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_text_fragment_token1] = "string_text_fragment_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_null] = "null",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__json_object_token1] = "_json_object_token1",
  [anon_sym_LBRACK] = "[",
  [aux_sym__json_array_token1] = "_json_array_token1",
  [anon_sym_RBRACK] = "]",
  [sym__unquoted_string] = "_unquoted_string",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_macro_expansion_token1] = "macro_expansion_token1",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [aux_sym_macro_expansion_token2] = "macro_expansion_token2",
  [sym_source_file] = "source_file",
  [sym__statements] = "_statements",
  [sym_path_definition] = "path_definition",
  [sym_include_statement] = "include_statement",
  [sym_menu_definition] = "menu_definition",
  [sym_menu_choice] = "menu_choice",
  [sym_record_type_definition] = "record_type_definition",
  [sym_field_definition] = "field_definition",
  [sym_field_descriptor] = "field_descriptor",
  [sym_cdef] = "cdef",
  [sym_ccode] = "ccode",
  [sym_device_support_declaration] = "device_support_declaration",
  [sym_driver_declaration] = "driver_declaration",
  [sym_link_declaration] = "link_declaration",
  [sym_registrar_declaration] = "registrar_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_breakpoint_table] = "breakpoint_table",
  [sym_breakpoint_item] = "breakpoint_item",
  [sym_record_instance] = "record_instance",
  [sym_alias] = "alias",
  [sym_field] = "field",
  [sym_info] = "info",
  [sym_alias_statement] = "alias_statement",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym__string] = "_string",
  [sym_string_text_fragment] = "string_text_fragment",
  [sym_json_value] = "json_value",
  [sym__json_object] = "_json_object",
  [sym__json_array] = "_json_array",
  [sym_record_type] = "record_type",
  [sym_record_name] = "record_name",
  [sym_field_item] = "field_item",
  [sym_field_name] = "field_name",
  [sym_macro_expansion] = "macro_expansion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_menu_definition_repeat1] = "menu_definition_repeat1",
  [aux_sym_record_type_definition_repeat1] = "record_type_definition_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_breakpoint_table_repeat1] = "breakpoint_table_repeat1",
  [aux_sym_record_instance_repeat1] = "record_instance_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym_string_text_fragment_repeat1] = "string_text_fragment_repeat1",
  [aux_sym__json_object_repeat1] = "_json_object_repeat1",
  [aux_sym__json_array_repeat1] = "_json_array_repeat1",
  [aux_sym_macro_expansion_repeat1] = "macro_expansion_repeat1",
  [aux_sym_macro_expansion_repeat2] = "macro_expansion_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_addpath] = anon_sym_addpath,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_recordtype] = anon_sym_recordtype,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_ccode_token1] = aux_sym_ccode_token1,
  [anon_sym_device] = anon_sym_device,
  [anon_sym_driver] = anon_sym_driver,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_registrar] = anon_sym_registrar,
  [anon_sym_variable] = anon_sym_variable,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_breaktable] = anon_sym_breaktable,
  [sym_double] = sym_double,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_grecord] = anon_sym_grecord,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_text_fragment_token1] = aux_sym_string_text_fragment_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__json_object_token1] = aux_sym__json_object_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__json_array_token1] = aux_sym__json_array_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__unquoted_string] = sym__unquoted_string,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_macro_expansion_token1] = aux_sym_macro_expansion_token1,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [aux_sym_macro_expansion_token2] = aux_sym_macro_expansion_token2,
  [sym_source_file] = sym_source_file,
  [sym__statements] = sym__statements,
  [sym_path_definition] = sym_path_definition,
  [sym_include_statement] = sym_include_statement,
  [sym_menu_definition] = sym_menu_definition,
  [sym_menu_choice] = sym_menu_choice,
  [sym_record_type_definition] = sym_record_type_definition,
  [sym_field_definition] = sym_field_definition,
  [sym_field_descriptor] = sym_field_descriptor,
  [sym_cdef] = sym_cdef,
  [sym_ccode] = sym_ccode,
  [sym_device_support_declaration] = sym_device_support_declaration,
  [sym_driver_declaration] = sym_driver_declaration,
  [sym_link_declaration] = sym_link_declaration,
  [sym_registrar_declaration] = sym_registrar_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_breakpoint_table] = sym_breakpoint_table,
  [sym_breakpoint_item] = sym_breakpoint_item,
  [sym_record_instance] = sym_record_instance,
  [sym_alias] = sym_alias,
  [sym_field] = sym_field,
  [sym_info] = sym_info,
  [sym_alias_statement] = sym_alias_statement,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym__string] = sym__string,
  [sym_string_text_fragment] = sym_string_text_fragment,
  [sym_json_value] = sym_json_value,
  [sym__json_object] = sym__json_object,
  [sym__json_array] = sym__json_array,
  [sym_record_type] = sym_record_type,
  [sym_record_name] = sym_record_name,
  [sym_field_item] = sym_field_item,
  [sym_field_name] = sym_field_name,
  [sym_macro_expansion] = sym_macro_expansion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_menu_definition_repeat1] = aux_sym_menu_definition_repeat1,
  [aux_sym_record_type_definition_repeat1] = aux_sym_record_type_definition_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_breakpoint_table_repeat1] = aux_sym_breakpoint_table_repeat1,
  [aux_sym_record_instance_repeat1] = aux_sym_record_instance_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym_string_text_fragment_repeat1] = aux_sym_string_text_fragment_repeat1,
  [aux_sym__json_object_repeat1] = aux_sym__json_object_repeat1,
  [aux_sym__json_array_repeat1] = aux_sym__json_array_repeat1,
  [aux_sym_macro_expansion_repeat1] = aux_sym_macro_expansion_repeat1,
  [aux_sym_macro_expansion_repeat2] = aux_sym_macro_expansion_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_menu] = {
    .visible = true,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recordtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ccode_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_device] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_driver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_registrar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breaktable] = {
    .visible = true,
    .named = false,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_text_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_object_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
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
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_path_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym_cdef] = {
    .visible = true,
    .named = true,
  },
  [sym_ccode] = {
    .visible = true,
    .named = true,
  },
  [sym_device_support_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_driver_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_link_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_registrar_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint_table] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_string_text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_json_value] = {
    .visible = true,
    .named = true,
  },
  [sym__json_object] = {
    .visible = false,
    .named = true,
  },
  [sym__json_array] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_item] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
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
  [aux_sym_menu_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_breakpoint_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_text_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_array_repeat1] = {
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
  field_alias_name = 1,
  field_choice = 2,
  field_code = 3,
  field_dset_name = 4,
  field_eng_value = 5,
  field_jlif_name = 6,
  field_link_type = 7,
  field_name = 8,
  field_raw_value = 9,
  field_record_name = 10,
  field_record_type = 11,
  field_string = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias_name] = "alias_name",
  [field_choice] = "choice",
  [field_code] = "code",
  [field_dset_name] = "dset_name",
  [field_eng_value] = "eng_value",
  [field_jlif_name] = "jlif_name",
  [field_link_type] = "link_type",
  [field_name] = "name",
  [field_raw_value] = "raw_value",
  [field_record_name] = "record_name",
  [field_record_type] = "record_type",
  [field_string] = "string",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 4},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_jlif_name, 4},
    {field_name, 2},
  [3] =
    {field_name, 2},
    {field_type, 4},
  [5] =
    {field_name, 4},
    {field_type, 2},
  [7] =
    {field_alias_name, 4},
    {field_record_name, 2},
  [9] =
    {field_code, 1},
  [10] =
    {field_eng_value, 1},
    {field_raw_value, 0},
  [12] =
    {field_eng_value, 2},
    {field_raw_value, 0},
  [14] =
    {field_choice, 8},
    {field_dset_name, 6},
    {field_link_type, 4},
    {field_record_type, 2},
  [18] =
    {field_name, 2},
    {field_string, 4},
  [20] =
    {field_alias_name, 2},
  [21] =
    {field_name, 2},
    {field_value, 4},
  [23] =
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '$'
        ? c == '"'
        : c <= '$')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '}') ADVANCE(134);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == '}') ADVANCE(134);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(185);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == '{') ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 113:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(171);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(186);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '}') ADVANCE(134);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '%') ADVANCE(139);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_addpath);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_recordtype);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '$') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_driver);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_registrar);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_breaktable);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'p') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_grecord);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(211);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'x') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == '{') ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == '{') ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(211);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token1);
      if (lookahead == '#') ADVANCE(166);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token1);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token2);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '$') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token2);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '{') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_macro_expansion_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 125},
  [5] = {.lex_state = 125},
  [6] = {.lex_state = 125},
  [7] = {.lex_state = 125},
  [8] = {.lex_state = 125},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 125},
  [32] = {.lex_state = 125},
  [33] = {.lex_state = 125},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 125},
  [50] = {.lex_state = 125},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 125},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 125},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 140},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 140},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {(TSStateId)(-1)},
  [197] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [sym_macro_expansion] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_addpath] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_recordtype] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_device] = ACTIONS(1),
    [anon_sym_driver] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_registrar] = ACTIONS(1),
    [anon_sym_variable] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_breaktable] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_grecord] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(150),
    [sym__statements] = STATE(19),
    [sym_path_definition] = STATE(20),
    [sym_include_statement] = STATE(20),
    [sym_menu_definition] = STATE(20),
    [sym_record_type_definition] = STATE(20),
    [sym_device_support_declaration] = STATE(20),
    [sym_driver_declaration] = STATE(20),
    [sym_link_declaration] = STATE(20),
    [sym_registrar_declaration] = STATE(20),
    [sym_variable_declaration] = STATE(20),
    [sym_function_declaration] = STATE(20),
    [sym_breakpoint_table] = STATE(20),
    [sym_record_instance] = STATE(20),
    [sym_alias_statement] = STATE(20),
    [sym_comment] = STATE(1),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_path] = ACTIONS(11),
    [anon_sym_addpath] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_menu] = ACTIONS(15),
    [anon_sym_recordtype] = ACTIONS(17),
    [anon_sym_device] = ACTIONS(19),
    [anon_sym_driver] = ACTIONS(21),
    [anon_sym_link] = ACTIONS(23),
    [anon_sym_registrar] = ACTIONS(25),
    [anon_sym_variable] = ACTIONS(27),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_breaktable] = ACTIONS(31),
    [anon_sym_record] = ACTIONS(33),
    [anon_sym_grecord] = ACTIONS(35),
    [anon_sym_alias] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(15), 1,
      anon_sym_menu,
    ACTIONS(17), 1,
      anon_sym_recordtype,
    ACTIONS(19), 1,
      anon_sym_device,
    ACTIONS(21), 1,
      anon_sym_driver,
    ACTIONS(23), 1,
      anon_sym_link,
    ACTIONS(25), 1,
      anon_sym_registrar,
    ACTIONS(27), 1,
      anon_sym_variable,
    ACTIONS(29), 1,
      anon_sym_function,
    ACTIONS(31), 1,
      anon_sym_breaktable,
    ACTIONS(33), 1,
      anon_sym_record,
    ACTIONS(35), 1,
      anon_sym_grecord,
    ACTIONS(37), 1,
      anon_sym_alias,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 1,
      sym__statements,
    ACTIONS(11), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(2), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(20), 13,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_link_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [81] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_include,
    ACTIONS(49), 1,
      anon_sym_menu,
    ACTIONS(52), 1,
      anon_sym_recordtype,
    ACTIONS(55), 1,
      anon_sym_device,
    ACTIONS(58), 1,
      anon_sym_driver,
    ACTIONS(61), 1,
      anon_sym_link,
    ACTIONS(64), 1,
      anon_sym_registrar,
    ACTIONS(67), 1,
      anon_sym_variable,
    ACTIONS(70), 1,
      anon_sym_function,
    ACTIONS(73), 1,
      anon_sym_breaktable,
    ACTIONS(76), 1,
      anon_sym_record,
    ACTIONS(79), 1,
      anon_sym_grecord,
    ACTIONS(82), 1,
      anon_sym_alias,
    STATE(19), 1,
      sym__statements,
    ACTIONS(43), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(3), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(20), 13,
      sym_path_definition,
      sym_include_statement,
      sym_menu_definition,
      sym_record_type_definition,
      sym_device_support_declaration,
      sym_driver_declaration,
      sym_link_declaration,
      sym_registrar_declaration,
      sym_variable_declaration,
      sym_function_declaration,
      sym_breakpoint_table,
      sym_record_instance,
      sym_alias_statement,
  [160] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(87), 1,
      anon_sym_record,
    STATE(4), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(85), 23,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [202] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(91), 1,
      anon_sym_record,
    STATE(5), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(89), 23,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [244] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(95), 1,
      anon_sym_record,
    STATE(6), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(93), 23,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [286] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(99), 1,
      anon_sym_record,
    STATE(7), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(97), 22,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_COMMA,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [327] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(103), 1,
      anon_sym_record,
    STATE(8), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(101), 20,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_RBRACE,
      anon_sym_choice,
      anon_sym_recordtype,
      anon_sym_field,
      anon_sym_PERCENT,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
      anon_sym_info,
  [366] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_record,
    STATE(9), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [403] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(113), 1,
      anon_sym_record,
    STATE(10), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [437] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(117), 1,
      anon_sym_record,
    STATE(11), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [471] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(121), 1,
      anon_sym_record,
    STATE(12), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(119), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [505] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(125), 1,
      anon_sym_record,
    STATE(13), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(123), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [539] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(129), 1,
      anon_sym_record,
    STATE(14), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(127), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [573] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(133), 1,
      anon_sym_record,
    STATE(15), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(131), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [607] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(137), 1,
      anon_sym_record,
    STATE(16), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(135), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [641] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(141), 1,
      anon_sym_record,
    STATE(17), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(139), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [675] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(145), 1,
      anon_sym_record,
    STATE(18), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(143), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [709] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(149), 1,
      anon_sym_record,
    STATE(19), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(147), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [743] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(153), 1,
      anon_sym_record,
    STATE(20), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(151), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [777] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(157), 1,
      anon_sym_record,
    STATE(21), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(155), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [811] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(161), 1,
      anon_sym_record,
    STATE(22), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(159), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [845] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(165), 1,
      anon_sym_record,
    STATE(23), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(163), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [879] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(169), 1,
      anon_sym_record,
    STATE(24), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(167), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [913] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(173), 1,
      anon_sym_record,
    STATE(25), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(171), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [947] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(177), 1,
      anon_sym_record,
    STATE(26), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(175), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [981] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(181), 1,
      anon_sym_record,
    STATE(27), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(179), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [1015] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(185), 1,
      anon_sym_record,
    STATE(28), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(183), 15,
      ts_builtin_sym_end,
      anon_sym_path,
      anon_sym_addpath,
      anon_sym_include,
      anon_sym_menu,
      anon_sym_recordtype,
      anon_sym_device,
      anon_sym_driver,
      anon_sym_link,
      anon_sym_registrar,
      anon_sym_variable,
      anon_sym_function,
      anon_sym_breaktable,
      anon_sym_grecord,
      anon_sym_alias,
  [1049] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(29), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(153), 2,
      sym__json_object,
      sym__json_array,
    STATE(156), 2,
      sym_string,
      sym_json_value,
    ACTIONS(191), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1091] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(30), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(153), 2,
      sym__json_object,
      sym__json_array,
    STATE(155), 2,
      sym_string,
      sym_json_value,
    ACTIONS(191), 3,
      anon_sym_null,
      anon_sym_true,
      anon_sym_false,
  [1133] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_field,
    ACTIONS(201), 1,
      anon_sym_alias,
    ACTIONS(203), 1,
      anon_sym_info,
    STATE(32), 1,
      aux_sym_record_instance_repeat1,
    STATE(31), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(49), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1171] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(199), 1,
      anon_sym_field,
    ACTIONS(201), 1,
      anon_sym_alias,
    ACTIONS(203), 1,
      anon_sym_info,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_record_instance_repeat1,
    STATE(32), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(49), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1209] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(207), 1,
      anon_sym_include,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      anon_sym_field,
    ACTIONS(215), 1,
      anon_sym_alias,
    ACTIONS(218), 1,
      anon_sym_info,
    STATE(33), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_instance_repeat1,
    STATE(49), 4,
      sym_include_statement,
      sym_alias,
      sym_field,
      sym_info,
  [1245] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      anon_sym_field,
    ACTIONS(225), 1,
      anon_sym_PERCENT,
    STATE(36), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(34), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(96), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1279] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(227), 1,
      anon_sym_include,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_field,
    ACTIONS(235), 1,
      anon_sym_PERCENT,
    STATE(35), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_record_type_definition_repeat1,
    STATE(96), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1311] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(223), 1,
      anon_sym_field,
    ACTIONS(225), 1,
      anon_sym_PERCENT,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_record_type_definition_repeat1,
    STATE(36), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(96), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1345] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym__unquoted_string,
    STATE(115), 1,
      sym_field_descriptor,
    STATE(159), 1,
      sym__string,
    STATE(160), 1,
      sym_field_item,
    STATE(37), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_field_definition_repeat1,
  [1378] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(37), 1,
      aux_sym_field_definition_repeat1,
    STATE(115), 1,
      sym_field_descriptor,
    STATE(159), 1,
      sym__string,
    STATE(160), 1,
      sym_field_item,
    STATE(38), 2,
      sym_comment,
      sym_macro_expansion,
  [1413] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_field_definition_repeat1,
    STATE(115), 1,
      sym_field_descriptor,
    STATE(159), 1,
      sym__string,
    STATE(160), 1,
      sym_field_item,
    STATE(39), 2,
      sym_comment,
      sym_macro_expansion,
  [1448] = 11,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(260), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      sym_escape_sequence,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(42), 1,
      aux_sym__string_repeat1,
    STATE(51), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(64), 1,
      sym_string_text_fragment,
    STATE(40), 2,
      sym_comment,
      sym_macro_expansion,
  [1483] = 10,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(273), 1,
      anon_sym_BSLASH,
    ACTIONS(276), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(64), 1,
      sym_string_text_fragment,
    STATE(41), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__string_repeat1,
  [1516] = 11,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(260), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      sym_escape_sequence,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym__string_repeat1,
    STATE(51), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(64), 1,
      sym_string_text_fragment,
    STATE(42), 2,
      sym_comment,
      sym_macro_expansion,
  [1551] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_choice,
    STATE(45), 1,
      aux_sym_menu_definition_repeat1,
    STATE(43), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(105), 2,
      sym_include_statement,
      sym_menu_choice,
  [1581] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(13), 1,
      anon_sym_include,
    ACTIONS(283), 1,
      anon_sym_choice,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_menu_definition_repeat1,
    STATE(44), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(105), 2,
      sym_include_statement,
      sym_menu_choice,
  [1611] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(287), 1,
      anon_sym_include,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_choice,
    STATE(105), 2,
      sym_include_statement,
      sym_menu_choice,
    STATE(45), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_menu_definition_repeat1,
  [1639] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      aux_sym__json_array_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__json_array_repeat1,
    STATE(102), 1,
      sym__json_array,
    STATE(46), 2,
      sym_comment,
      sym_macro_expansion,
  [1668] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      aux_sym__json_object_token1,
    STATE(52), 1,
      aux_sym__json_object_repeat1,
    STATE(114), 1,
      sym__json_object,
    STATE(47), 2,
      sym_comment,
      sym_macro_expansion,
  [1697] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      aux_sym__json_array_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym__json_array_repeat1,
    STATE(102), 1,
      sym__json_array,
    STATE(48), 2,
      sym_comment,
      sym_macro_expansion,
  [1726] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(49), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(309), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1747] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(50), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(311), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1768] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(260), 1,
      anon_sym_BSLASH,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(51), 2,
      sym_comment,
      sym_macro_expansion,
  [1797] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      aux_sym__json_object_token1,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym__json_object_repeat1,
    STATE(114), 1,
      sym__json_object,
    STATE(52), 2,
      sym_comment,
      sym_macro_expansion,
  [1826] = 8,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      aux_sym__json_array_token1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym__json_array,
    STATE(53), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_array_repeat1,
  [1853] = 8,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(332), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_escape_sequence,
    STATE(54), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment_repeat1,
  [1880] = 8,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      aux_sym__json_object_token1,
    STATE(114), 1,
      sym__json_object,
    STATE(55), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_object_repeat1,
  [1907] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      aux_sym__json_object_token1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym__json_object_repeat1,
    STATE(114), 1,
      sym__json_object,
    STATE(56), 2,
      sym_comment,
      sym_macro_expansion,
  [1936] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(57), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(347), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1957] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      aux_sym__json_array_token1,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym__json_array_repeat1,
    STATE(102), 1,
      sym__json_array,
    STATE(58), 2,
      sym_comment,
      sym_macro_expansion,
  [1986] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      aux_sym__json_array_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym__json_array_repeat1,
    STATE(102), 1,
      sym__json_array,
    STATE(59), 2,
      sym_comment,
      sym_macro_expansion,
  [2015] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(60), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(353), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [2036] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      aux_sym__json_object_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym__json_object_repeat1,
    STATE(114), 1,
      sym__json_object,
    STATE(61), 2,
      sym_comment,
      sym_macro_expansion,
  [2065] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(357), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(359), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_comment,
      sym_macro_expansion,
  [2087] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      sym_double,
    STATE(136), 1,
      sym_breakpoint_item,
    STATE(63), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_breakpoint_table_repeat1,
  [2111] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(366), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(368), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(64), 2,
      sym_comment,
      sym_macro_expansion,
  [2133] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(146), 1,
      sym_string,
    STATE(65), 2,
      sym_comment,
      sym_macro_expansion,
  [2159] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(127), 1,
      sym__string,
    STATE(145), 1,
      sym_record_name,
    STATE(66), 2,
      sym_comment,
      sym_macro_expansion,
  [2185] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(144), 1,
      sym_field_name,
    STATE(157), 1,
      sym__string,
    STATE(67), 2,
      sym_comment,
      sym_macro_expansion,
  [2211] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(142), 1,
      sym_string,
    STATE(68), 2,
      sym_comment,
      sym_macro_expansion,
  [2237] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(141), 1,
      sym_string,
    STATE(69), 2,
      sym_comment,
      sym_macro_expansion,
  [2263] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(140), 1,
      sym_string,
    STATE(70), 2,
      sym_comment,
      sym_macro_expansion,
  [2289] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(120), 1,
      sym__string,
    STATE(195), 1,
      sym_record_type,
    STATE(71), 2,
      sym_comment,
      sym_macro_expansion,
  [2315] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(120), 1,
      sym__string,
    STATE(194), 1,
      sym_record_type,
    STATE(72), 2,
      sym_comment,
      sym_macro_expansion,
  [2341] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(139), 1,
      sym_string,
    STATE(73), 2,
      sym_comment,
      sym_macro_expansion,
  [2367] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(74), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(370), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2387] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(27), 1,
      sym_string,
    STATE(75), 2,
      sym_comment,
      sym_macro_expansion,
  [2413] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(193), 1,
      sym_string,
    STATE(76), 2,
      sym_comment,
      sym_macro_expansion,
  [2439] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(8), 1,
      sym_string,
    STATE(77), 2,
      sym_comment,
      sym_macro_expansion,
  [2465] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(192), 1,
      sym_string,
    STATE(78), 2,
      sym_comment,
      sym_macro_expansion,
  [2491] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(191), 1,
      sym_string,
    STATE(79), 2,
      sym_comment,
      sym_macro_expansion,
  [2517] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(183), 1,
      sym_string,
    STATE(80), 2,
      sym_comment,
      sym_macro_expansion,
  [2543] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(182), 1,
      sym_string,
    STATE(81), 2,
      sym_comment,
      sym_macro_expansion,
  [2569] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(181), 1,
      sym_string,
    STATE(82), 2,
      sym_comment,
      sym_macro_expansion,
  [2595] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(126), 1,
      sym_string,
    STATE(83), 2,
      sym_comment,
      sym_macro_expansion,
  [2621] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(127), 1,
      sym__string,
    STATE(180), 1,
      sym_record_name,
    STATE(84), 2,
      sym_comment,
      sym_macro_expansion,
  [2647] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(127), 1,
      sym__string,
    STATE(179), 1,
      sym_record_name,
    STATE(85), 2,
      sym_comment,
      sym_macro_expansion,
  [2673] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(86), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(372), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2693] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(87), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(374), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2713] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(149), 1,
      sym_field_name,
    STATE(157), 1,
      sym__string,
    STATE(88), 2,
      sym_comment,
      sym_macro_expansion,
  [2739] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      sym_double,
    STATE(99), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(136), 1,
      sym_breakpoint_item,
    STATE(89), 2,
      sym_comment,
      sym_macro_expansion,
  [2765] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(190), 1,
      sym_string,
    STATE(90), 2,
      sym_comment,
      sym_macro_expansion,
  [2791] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(189), 1,
      sym_string,
    STATE(91), 2,
      sym_comment,
      sym_macro_expansion,
  [2817] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(158), 1,
      sym_string,
    STATE(92), 2,
      sym_comment,
      sym_macro_expansion,
  [2843] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(120), 1,
      sym__string,
    STATE(188), 1,
      sym_record_type,
    STATE(93), 2,
      sym_comment,
      sym_macro_expansion,
  [2869] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(94), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(380), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2889] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(127), 1,
      sym__string,
    STATE(187), 1,
      sym_record_name,
    STATE(95), 2,
      sym_comment,
      sym_macro_expansion,
  [2915] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(96), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(382), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2935] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(165), 1,
      sym_string,
    STATE(97), 2,
      sym_comment,
      sym_macro_expansion,
  [2961] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(176), 1,
      sym_string,
    STATE(98), 2,
      sym_comment,
      sym_macro_expansion,
  [2987] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(378), 1,
      sym_double,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(136), 1,
      sym_breakpoint_item,
    STATE(99), 2,
      sym_comment,
      sym_macro_expansion,
  [3013] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(392), 1,
      aux_sym_macro_expansion_token2,
    STATE(101), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(100), 2,
      sym_comment,
      sym_macro_expansion,
  [3036] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(399), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(402), 1,
      aux_sym_macro_expansion_token2,
    STATE(101), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_macro_expansion_repeat2,
  [3057] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(102), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(405), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3076] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(412), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(103), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_macro_expansion_repeat1,
  [3097] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(392), 1,
      aux_sym_macro_expansion_token2,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(104), 2,
      sym_comment,
      sym_macro_expansion,
  [3120] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(105), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(420), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3139] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(106), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(422), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3158] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(103), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(107), 2,
      sym_comment,
      sym_macro_expansion,
  [3181] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(108), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(430), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3200] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(109), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(432), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3219] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(110), 2,
      sym_comment,
      sym_macro_expansion,
  [3240] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(111), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(438), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(112), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(440), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3278] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(113), 2,
      sym_comment,
      sym_macro_expansion,
  [3301] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(114), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(444), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3320] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(115), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(446), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3339] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(448), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(116), 2,
      sym_comment,
      sym_macro_expansion,
  [3360] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(392), 1,
      aux_sym_macro_expansion_token2,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(117), 2,
      sym_comment,
      sym_macro_expansion,
  [3383] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(118), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(452), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3402] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(103), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(119), 2,
      sym_comment,
      sym_macro_expansion,
  [3425] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(454), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(120), 2,
      sym_comment,
      sym_macro_expansion,
  [3443] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(121), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(456), 4,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_macro_expansion_token1,
      anon_sym_DOLLAR_LPAREN,
  [3457] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(122), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(458), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      aux_sym_macro_expansion_token2,
  [3471] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(119), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(123), 2,
      sym_comment,
      sym_macro_expansion,
  [3491] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(392), 1,
      aux_sym_macro_expansion_token2,
    STATE(100), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(124), 2,
      sym_comment,
      sym_macro_expansion,
  [3511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(460), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(125), 2,
      sym_comment,
      sym_macro_expansion,
  [3529] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    STATE(126), 2,
      sym_comment,
      sym_macro_expansion,
  [3549] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(466), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(127), 2,
      sym_comment,
      sym_macro_expansion,
  [3567] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      sym_double,
    STATE(128), 2,
      sym_comment,
      sym_macro_expansion,
  [3587] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(129), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(472), 4,
      anon_sym_RPAREN,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      aux_sym_macro_expansion_token2,
  [3601] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(130), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(458), 4,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_macro_expansion_token1,
      anon_sym_DOLLAR_LPAREN,
  [3615] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(474), 1,
      aux_sym_ccode_token1,
    STATE(86), 1,
      sym_ccode,
    STATE(131), 2,
      sym_comment,
      sym_macro_expansion,
  [3635] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(113), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(132), 2,
      sym_comment,
      sym_macro_expansion,
  [3655] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(392), 1,
      aux_sym_macro_expansion_token2,
    STATE(117), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(133), 2,
      sym_comment,
      sym_macro_expansion,
  [3675] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(476), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(134), 2,
      sym_comment,
      sym_macro_expansion,
  [3693] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(426), 1,
      aux_sym_macro_expansion_token1,
    ACTIONS(428), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(107), 1,
      aux_sym_macro_expansion_repeat1,
    STATE(135), 2,
      sym_comment,
      sym_macro_expansion,
  [3713] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(478), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(136), 2,
      sym_comment,
      sym_macro_expansion,
  [3731] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(392), 1,
      aux_sym_macro_expansion_token2,
    STATE(104), 1,
      aux_sym_macro_expansion_repeat2,
    STATE(137), 2,
      sym_comment,
      sym_macro_expansion,
  [3751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    STATE(138), 2,
      sym_comment,
      sym_macro_expansion,
  [3768] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym_comment,
      sym_macro_expansion,
  [3785] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_comment,
      sym_macro_expansion,
  [3802] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(141), 2,
      sym_comment,
      sym_macro_expansion,
  [3819] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(142), 2,
      sym_comment,
      sym_macro_expansion,
  [3836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    STATE(143), 2,
      sym_comment,
      sym_macro_expansion,
  [3853] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(144), 2,
      sym_comment,
      sym_macro_expansion,
  [3870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(145), 2,
      sym_comment,
      sym_macro_expansion,
  [3887] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(146), 2,
      sym_comment,
      sym_macro_expansion,
  [3904] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
    STATE(147), 2,
      sym_comment,
      sym_macro_expansion,
  [3921] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(148), 2,
      sym_comment,
      sym_macro_expansion,
  [3938] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(149), 2,
      sym_comment,
      sym_macro_expansion,
  [3955] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(150), 2,
      sym_comment,
      sym_macro_expansion,
  [3972] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(151), 2,
      sym_comment,
      sym_macro_expansion,
  [3989] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    STATE(152), 2,
      sym_comment,
      sym_macro_expansion,
  [4006] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(153), 2,
      sym_comment,
      sym_macro_expansion,
  [4023] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    STATE(154), 2,
      sym_comment,
      sym_macro_expansion,
  [4040] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(155), 2,
      sym_comment,
      sym_macro_expansion,
  [4057] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(156), 2,
      sym_comment,
      sym_macro_expansion,
  [4074] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(157), 2,
      sym_comment,
      sym_macro_expansion,
  [4091] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(158), 2,
      sym_comment,
      sym_macro_expansion,
  [4108] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(159), 2,
      sym_comment,
      sym_macro_expansion,
  [4125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    STATE(160), 2,
      sym_comment,
      sym_macro_expansion,
  [4142] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(161), 2,
      sym_comment,
      sym_macro_expansion,
  [4159] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(162), 2,
      sym_comment,
      sym_macro_expansion,
  [4176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(530), 1,
      sym_double,
    STATE(163), 2,
      sym_comment,
      sym_macro_expansion,
  [4193] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(164), 2,
      sym_comment,
      sym_macro_expansion,
  [4210] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(165), 2,
      sym_comment,
      sym_macro_expansion,
  [4227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(166), 2,
      sym_comment,
      sym_macro_expansion,
  [4244] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
    STATE(167), 2,
      sym_comment,
      sym_macro_expansion,
  [4261] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(168), 2,
      sym_comment,
      sym_macro_expansion,
  [4278] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    STATE(169), 2,
      sym_comment,
      sym_macro_expansion,
  [4295] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(544), 1,
      aux_sym_ccode_token1,
    STATE(170), 2,
      sym_comment,
      sym_macro_expansion,
  [4312] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    STATE(171), 2,
      sym_comment,
      sym_macro_expansion,
  [4329] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym_comment,
      sym_macro_expansion,
  [4346] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    STATE(173), 2,
      sym_comment,
      sym_macro_expansion,
  [4363] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(174), 2,
      sym_comment,
      sym_macro_expansion,
  [4380] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
    STATE(175), 2,
      sym_comment,
      sym_macro_expansion,
  [4397] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(176), 2,
      sym_comment,
      sym_macro_expansion,
  [4414] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(177), 2,
      sym_comment,
      sym_macro_expansion,
  [4431] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    STATE(178), 2,
      sym_comment,
      sym_macro_expansion,
  [4448] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(179), 2,
      sym_comment,
      sym_macro_expansion,
  [4465] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(180), 2,
      sym_comment,
      sym_macro_expansion,
  [4482] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(181), 2,
      sym_comment,
      sym_macro_expansion,
  [4499] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(182), 2,
      sym_comment,
      sym_macro_expansion,
  [4516] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(183), 2,
      sym_comment,
      sym_macro_expansion,
  [4533] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    STATE(184), 2,
      sym_comment,
      sym_macro_expansion,
  [4550] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(185), 2,
      sym_comment,
      sym_macro_expansion,
  [4567] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(186), 2,
      sym_comment,
      sym_macro_expansion,
  [4584] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(187), 2,
      sym_comment,
      sym_macro_expansion,
  [4601] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(188), 2,
      sym_comment,
      sym_macro_expansion,
  [4618] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(189), 2,
      sym_comment,
      sym_macro_expansion,
  [4635] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(190), 2,
      sym_comment,
      sym_macro_expansion,
  [4652] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(191), 2,
      sym_comment,
      sym_macro_expansion,
  [4669] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(192), 2,
      sym_comment,
      sym_macro_expansion,
  [4686] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(193), 2,
      sym_comment,
      sym_macro_expansion,
  [4703] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(194), 2,
      sym_comment,
      sym_macro_expansion,
  [4720] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(195), 2,
      sym_comment,
      sym_macro_expansion,
  [4737] = 1,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
  [4741] = 1,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 202,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 403,
  [SMALL_STATE(11)] = 437,
  [SMALL_STATE(12)] = 471,
  [SMALL_STATE(13)] = 505,
  [SMALL_STATE(14)] = 539,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 607,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 743,
  [SMALL_STATE(21)] = 777,
  [SMALL_STATE(22)] = 811,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 879,
  [SMALL_STATE(25)] = 913,
  [SMALL_STATE(26)] = 947,
  [SMALL_STATE(27)] = 981,
  [SMALL_STATE(28)] = 1015,
  [SMALL_STATE(29)] = 1049,
  [SMALL_STATE(30)] = 1091,
  [SMALL_STATE(31)] = 1133,
  [SMALL_STATE(32)] = 1171,
  [SMALL_STATE(33)] = 1209,
  [SMALL_STATE(34)] = 1245,
  [SMALL_STATE(35)] = 1279,
  [SMALL_STATE(36)] = 1311,
  [SMALL_STATE(37)] = 1345,
  [SMALL_STATE(38)] = 1378,
  [SMALL_STATE(39)] = 1413,
  [SMALL_STATE(40)] = 1448,
  [SMALL_STATE(41)] = 1483,
  [SMALL_STATE(42)] = 1516,
  [SMALL_STATE(43)] = 1551,
  [SMALL_STATE(44)] = 1581,
  [SMALL_STATE(45)] = 1611,
  [SMALL_STATE(46)] = 1639,
  [SMALL_STATE(47)] = 1668,
  [SMALL_STATE(48)] = 1697,
  [SMALL_STATE(49)] = 1726,
  [SMALL_STATE(50)] = 1747,
  [SMALL_STATE(51)] = 1768,
  [SMALL_STATE(52)] = 1797,
  [SMALL_STATE(53)] = 1826,
  [SMALL_STATE(54)] = 1853,
  [SMALL_STATE(55)] = 1880,
  [SMALL_STATE(56)] = 1907,
  [SMALL_STATE(57)] = 1936,
  [SMALL_STATE(58)] = 1957,
  [SMALL_STATE(59)] = 1986,
  [SMALL_STATE(60)] = 2015,
  [SMALL_STATE(61)] = 2036,
  [SMALL_STATE(62)] = 2065,
  [SMALL_STATE(63)] = 2087,
  [SMALL_STATE(64)] = 2111,
  [SMALL_STATE(65)] = 2133,
  [SMALL_STATE(66)] = 2159,
  [SMALL_STATE(67)] = 2185,
  [SMALL_STATE(68)] = 2211,
  [SMALL_STATE(69)] = 2237,
  [SMALL_STATE(70)] = 2263,
  [SMALL_STATE(71)] = 2289,
  [SMALL_STATE(72)] = 2315,
  [SMALL_STATE(73)] = 2341,
  [SMALL_STATE(74)] = 2367,
  [SMALL_STATE(75)] = 2387,
  [SMALL_STATE(76)] = 2413,
  [SMALL_STATE(77)] = 2439,
  [SMALL_STATE(78)] = 2465,
  [SMALL_STATE(79)] = 2491,
  [SMALL_STATE(80)] = 2517,
  [SMALL_STATE(81)] = 2543,
  [SMALL_STATE(82)] = 2569,
  [SMALL_STATE(83)] = 2595,
  [SMALL_STATE(84)] = 2621,
  [SMALL_STATE(85)] = 2647,
  [SMALL_STATE(86)] = 2673,
  [SMALL_STATE(87)] = 2693,
  [SMALL_STATE(88)] = 2713,
  [SMALL_STATE(89)] = 2739,
  [SMALL_STATE(90)] = 2765,
  [SMALL_STATE(91)] = 2791,
  [SMALL_STATE(92)] = 2817,
  [SMALL_STATE(93)] = 2843,
  [SMALL_STATE(94)] = 2869,
  [SMALL_STATE(95)] = 2889,
  [SMALL_STATE(96)] = 2915,
  [SMALL_STATE(97)] = 2935,
  [SMALL_STATE(98)] = 2961,
  [SMALL_STATE(99)] = 2987,
  [SMALL_STATE(100)] = 3013,
  [SMALL_STATE(101)] = 3036,
  [SMALL_STATE(102)] = 3057,
  [SMALL_STATE(103)] = 3076,
  [SMALL_STATE(104)] = 3097,
  [SMALL_STATE(105)] = 3120,
  [SMALL_STATE(106)] = 3139,
  [SMALL_STATE(107)] = 3158,
  [SMALL_STATE(108)] = 3181,
  [SMALL_STATE(109)] = 3200,
  [SMALL_STATE(110)] = 3219,
  [SMALL_STATE(111)] = 3240,
  [SMALL_STATE(112)] = 3259,
  [SMALL_STATE(113)] = 3278,
  [SMALL_STATE(114)] = 3301,
  [SMALL_STATE(115)] = 3320,
  [SMALL_STATE(116)] = 3339,
  [SMALL_STATE(117)] = 3360,
  [SMALL_STATE(118)] = 3383,
  [SMALL_STATE(119)] = 3402,
  [SMALL_STATE(120)] = 3425,
  [SMALL_STATE(121)] = 3443,
  [SMALL_STATE(122)] = 3457,
  [SMALL_STATE(123)] = 3471,
  [SMALL_STATE(124)] = 3491,
  [SMALL_STATE(125)] = 3511,
  [SMALL_STATE(126)] = 3529,
  [SMALL_STATE(127)] = 3549,
  [SMALL_STATE(128)] = 3567,
  [SMALL_STATE(129)] = 3587,
  [SMALL_STATE(130)] = 3601,
  [SMALL_STATE(131)] = 3615,
  [SMALL_STATE(132)] = 3635,
  [SMALL_STATE(133)] = 3655,
  [SMALL_STATE(134)] = 3675,
  [SMALL_STATE(135)] = 3693,
  [SMALL_STATE(136)] = 3713,
  [SMALL_STATE(137)] = 3731,
  [SMALL_STATE(138)] = 3751,
  [SMALL_STATE(139)] = 3768,
  [SMALL_STATE(140)] = 3785,
  [SMALL_STATE(141)] = 3802,
  [SMALL_STATE(142)] = 3819,
  [SMALL_STATE(143)] = 3836,
  [SMALL_STATE(144)] = 3853,
  [SMALL_STATE(145)] = 3870,
  [SMALL_STATE(146)] = 3887,
  [SMALL_STATE(147)] = 3904,
  [SMALL_STATE(148)] = 3921,
  [SMALL_STATE(149)] = 3938,
  [SMALL_STATE(150)] = 3955,
  [SMALL_STATE(151)] = 3972,
  [SMALL_STATE(152)] = 3989,
  [SMALL_STATE(153)] = 4006,
  [SMALL_STATE(154)] = 4023,
  [SMALL_STATE(155)] = 4040,
  [SMALL_STATE(156)] = 4057,
  [SMALL_STATE(157)] = 4074,
  [SMALL_STATE(158)] = 4091,
  [SMALL_STATE(159)] = 4108,
  [SMALL_STATE(160)] = 4125,
  [SMALL_STATE(161)] = 4142,
  [SMALL_STATE(162)] = 4159,
  [SMALL_STATE(163)] = 4176,
  [SMALL_STATE(164)] = 4193,
  [SMALL_STATE(165)] = 4210,
  [SMALL_STATE(166)] = 4227,
  [SMALL_STATE(167)] = 4244,
  [SMALL_STATE(168)] = 4261,
  [SMALL_STATE(169)] = 4278,
  [SMALL_STATE(170)] = 4295,
  [SMALL_STATE(171)] = 4312,
  [SMALL_STATE(172)] = 4329,
  [SMALL_STATE(173)] = 4346,
  [SMALL_STATE(174)] = 4363,
  [SMALL_STATE(175)] = 4380,
  [SMALL_STATE(176)] = 4397,
  [SMALL_STATE(177)] = 4414,
  [SMALL_STATE(178)] = 4431,
  [SMALL_STATE(179)] = 4448,
  [SMALL_STATE(180)] = 4465,
  [SMALL_STATE(181)] = 4482,
  [SMALL_STATE(182)] = 4499,
  [SMALL_STATE(183)] = 4516,
  [SMALL_STATE(184)] = 4533,
  [SMALL_STATE(185)] = 4550,
  [SMALL_STATE(186)] = 4567,
  [SMALL_STATE(187)] = 4584,
  [SMALL_STATE(188)] = 4601,
  [SMALL_STATE(189)] = 4618,
  [SMALL_STATE(190)] = 4635,
  [SMALL_STATE(191)] = 4652,
  [SMALL_STATE(192)] = 4669,
  [SMALL_STATE(193)] = 4686,
  [SMALL_STATE(194)] = 4703,
  [SMALL_STATE(195)] = 4720,
  [SMALL_STATE(196)] = 4737,
  [SMALL_STATE(197)] = 4741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 6, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 6, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 8, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 8, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 9, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 9, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_statement, 6, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_statement, 6, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_definition, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_definition, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(77),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(147),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(138),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(143),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(77),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(177),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(131),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(40),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(62),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(62),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(64),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(178),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 11),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(48),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(102),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(62),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(62),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(47),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(114),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 6, .production_id = 12),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 12),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2), SHIFT_REPEAT(128),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 8, .production_id = 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdef, 2, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ccode, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 9, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2), SHIFT_REPEAT(135),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2), SHIFT_REPEAT(137),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 2), SHIFT_REPEAT(129),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2), SHIFT_REPEAT(132),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2), SHIFT_REPEAT(121),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 2), SHIFT_REPEAT(133),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_descriptor, 4, .production_id = 13),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 8),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_choice, 6, .production_id = 10),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 2, .production_id = 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat1, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expansion, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 7),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_name, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_expansion_repeat2, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 4, .production_id = 8),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [504] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_item, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epics_db(void) {
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
