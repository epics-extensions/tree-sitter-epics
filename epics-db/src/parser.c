#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_DOLLAR_LPAREN = 41,
  aux_sym__macro_expansion_inner_token1 = 42,
  sym_source_file = 43,
  sym__statements = 44,
  sym_path_definition = 45,
  sym_include_statement = 46,
  sym_menu_definition = 47,
  sym_menu_choice = 48,
  sym_record_type_definition = 49,
  sym_field_definition = 50,
  sym_field_descriptor = 51,
  sym_cdef = 52,
  sym_ccode = 53,
  sym_device_support_declaration = 54,
  sym_driver_declaration = 55,
  sym_link_declaration = 56,
  sym_registrar_declaration = 57,
  sym_variable_declaration = 58,
  sym_function_declaration = 59,
  sym_breakpoint_table = 60,
  sym_breakpoint_item = 61,
  sym_record_instance = 62,
  sym_alias = 63,
  sym_field = 64,
  sym_info = 65,
  sym_alias_statement = 66,
  sym_comment = 67,
  sym_string = 68,
  sym__string = 69,
  sym_string_text_fragment = 70,
  sym_json_value = 71,
  sym__json_object = 72,
  sym__json_array = 73,
  sym_record_type = 74,
  sym_record_name = 75,
  sym_field_item = 76,
  sym_field_name = 77,
  sym_macro_expansion = 78,
  aux_sym__macro_expansion_inner = 79,
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
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [aux_sym__macro_expansion_inner_token1] = "_macro_expansion_inner_token1",
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
  [aux_sym__macro_expansion_inner] = "_macro_expansion_inner",
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
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [aux_sym__macro_expansion_inner_token1] = aux_sym__macro_expansion_inner_token1,
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
  [aux_sym__macro_expansion_inner] = aux_sym__macro_expansion_inner,
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
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__macro_expansion_inner_token1] = {
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
  [aux_sym__macro_expansion_inner] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '{') ADVANCE(132);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '}') ADVANCE(133);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(169);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(132);
      if (lookahead == '}') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(8);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_addpath);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_recordtype);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_ccode_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_device);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_driver);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_registrar);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_variable);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_breaktable);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'p') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_grecord);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead == '#') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_text_fragment_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'x') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__json_object_token1);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__json_array_token1);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '{') ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 187:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '<') ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__macro_expansion_inner_token1);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '$') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__macro_expansion_inner_token1);
      if (lookahead == '(') ADVANCE(200);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__macro_expansion_inner_token1);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(204);
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
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 124},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 124},
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
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 124},
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
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 124},
  [60] = {.lex_state = 124},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 139},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 4},
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
  [154] = {.lex_state = 139},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
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
  [189] = {(TSStateId)(-1)},
  [190] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(147),
    [sym__statements] = STATE(22),
    [sym_path_definition] = STATE(23),
    [sym_include_statement] = STATE(23),
    [sym_menu_definition] = STATE(23),
    [sym_record_type_definition] = STATE(23),
    [sym_device_support_declaration] = STATE(23),
    [sym_driver_declaration] = STATE(23),
    [sym_link_declaration] = STATE(23),
    [sym_registrar_declaration] = STATE(23),
    [sym_variable_declaration] = STATE(23),
    [sym_function_declaration] = STATE(23),
    [sym_breakpoint_table] = STATE(23),
    [sym_record_instance] = STATE(23),
    [sym_alias_statement] = STATE(23),
    [sym_comment] = STATE(1),
    [sym_macro_expansion] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  [0] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_include,
    ACTIONS(47), 1,
      anon_sym_menu,
    ACTIONS(50), 1,
      anon_sym_recordtype,
    ACTIONS(53), 1,
      anon_sym_device,
    ACTIONS(56), 1,
      anon_sym_driver,
    ACTIONS(59), 1,
      anon_sym_link,
    ACTIONS(62), 1,
      anon_sym_registrar,
    ACTIONS(65), 1,
      anon_sym_variable,
    ACTIONS(68), 1,
      anon_sym_function,
    ACTIONS(71), 1,
      anon_sym_breaktable,
    ACTIONS(74), 1,
      anon_sym_record,
    ACTIONS(77), 1,
      anon_sym_grecord,
    ACTIONS(80), 1,
      anon_sym_alias,
    STATE(22), 1,
      sym__statements,
    ACTIONS(41), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(2), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_source_file_repeat1,
    STATE(23), 13,
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
  [79] = 22,
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
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      sym__statements,
    ACTIONS(11), 2,
      anon_sym_path,
      anon_sym_addpath,
    STATE(3), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(23), 13,
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
    STATE(150), 2,
      sym__json_object,
      sym__json_array,
    STATE(153), 2,
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
    STATE(150), 2,
      sym__json_object,
      sym__json_array,
    STATE(152), 2,
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
    STATE(50), 4,
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
    STATE(50), 4,
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
    STATE(50), 4,
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
    STATE(62), 3,
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
    STATE(62), 3,
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
    STATE(62), 3,
      sym_include_statement,
      sym_field_definition,
      sym_cdef,
  [1345] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(38), 1,
      aux_sym_field_definition_repeat1,
    STATE(108), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(37), 2,
      sym_comment,
      sym_macro_expansion,
  [1380] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_field_definition_repeat1,
    STATE(108), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(38), 2,
      sym_comment,
      sym_macro_expansion,
  [1415] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym__unquoted_string,
    STATE(108), 1,
      sym_field_descriptor,
    STATE(156), 1,
      sym__string,
    STATE(157), 1,
      sym_field_item,
    STATE(39), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_field_definition_repeat1,
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
    STATE(68), 1,
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
    STATE(68), 1,
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
    STATE(68), 1,
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
    STATE(44), 1,
      aux_sym_menu_definition_repeat1,
    STATE(43), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(107), 2,
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
    STATE(45), 1,
      aux_sym_menu_definition_repeat1,
    STATE(44), 2,
      sym_comment,
      sym_macro_expansion,
    STATE(107), 2,
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
    STATE(107), 2,
      sym_include_statement,
      sym_menu_choice,
    STATE(45), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_menu_definition_repeat1,
  [1639] = 8,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    ACTIONS(298), 1,
      aux_sym__json_array_token1,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__json_array,
    STATE(46), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_array_repeat1,
  [1666] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      aux_sym__json_object_token1,
    STATE(61), 1,
      aux_sym__json_object_repeat1,
    STATE(109), 1,
      sym__json_object,
    STATE(47), 2,
      sym_comment,
      sym_macro_expansion,
  [1695] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      aux_sym__json_object_token1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym__json_object_repeat1,
    STATE(109), 1,
      sym__json_object,
    STATE(48), 2,
      sym_comment,
      sym_macro_expansion,
  [1724] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      aux_sym__json_array_token1,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym__json_array_repeat1,
    STATE(110), 1,
      sym__json_array,
    STATE(49), 2,
      sym_comment,
      sym_macro_expansion,
  [1753] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(50), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(317), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1774] = 9,
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
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym_string_text_fragment_repeat1,
    STATE(51), 2,
      sym_comment,
      sym_macro_expansion,
  [1803] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      aux_sym__json_array_token1,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym__json_array_repeat1,
    STATE(110), 1,
      sym__json_array,
    STATE(52), 2,
      sym_comment,
      sym_macro_expansion,
  [1832] = 8,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym_string_text_fragment_token1,
    ACTIONS(330), 1,
      anon_sym_BSLASH,
    ACTIONS(333), 1,
      sym_escape_sequence,
    STATE(53), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_string_text_fragment_repeat1,
  [1859] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(54), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(335), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
  [1880] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      aux_sym__json_array_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym__json_array_repeat1,
    STATE(110), 1,
      sym__json_array,
    STATE(55), 2,
      sym_comment,
      sym_macro_expansion,
  [1909] = 8,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(344), 1,
      aux_sym__json_object_token1,
    STATE(109), 1,
      sym__json_object,
    STATE(56), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__json_object_repeat1,
  [1936] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      aux_sym__json_object_token1,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym__json_object_repeat1,
    STATE(109), 1,
      sym__json_object,
    STATE(57), 2,
      sym_comment,
      sym_macro_expansion,
  [1965] = 9,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      aux_sym__json_array_token1,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym__json_array_repeat1,
    STATE(110), 1,
      sym__json_array,
    STATE(58), 2,
      sym_comment,
      sym_macro_expansion,
  [1994] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(59), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(351), 5,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_alias,
      anon_sym_info,
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
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      aux_sym__json_object_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym__json_object_repeat1,
    STATE(109), 1,
      sym__json_object,
    STATE(61), 2,
      sym_comment,
      sym_macro_expansion,
  [2065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(62), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(357), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2085] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(361), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(364), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(367), 1,
      aux_sym__macro_expansion_inner_token1,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(63), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym__macro_expansion_inner,
  [2107] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(140), 1,
      sym_string,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(139), 1,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(129), 1,
      sym__string,
    STATE(188), 1,
      sym_record_type,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(129), 1,
      sym__string,
    STATE(187), 1,
      sym_record_type,
    STATE(67), 2,
      sym_comment,
      sym_macro_expansion,
  [2211] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(370), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(372), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_comment,
      sym_macro_expansion,
  [2233] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(28), 1,
      sym_string,
    STATE(69), 2,
      sym_comment,
      sym_macro_expansion,
  [2259] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(8), 1,
      sym_string,
    STATE(70), 2,
      sym_comment,
      sym_macro_expansion,
  [2285] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(137), 1,
      sym__string,
    STATE(142), 1,
      sym_field_name,
    STATE(71), 2,
      sym_comment,
      sym_macro_expansion,
  [2311] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(186), 1,
      sym_string,
    STATE(72), 2,
      sym_comment,
      sym_macro_expansion,
  [2337] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(132), 1,
      sym_string,
    STATE(73), 2,
      sym_comment,
      sym_macro_expansion,
  [2363] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(119), 1,
      sym__string,
    STATE(143), 1,
      sym_record_name,
    STATE(74), 2,
      sym_comment,
      sym_macro_expansion,
  [2389] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(144), 1,
      sym_string,
    STATE(75), 2,
      sym_comment,
      sym_macro_expansion,
  [2415] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(134), 1,
      sym_string,
    STATE(76), 2,
      sym_comment,
      sym_macro_expansion,
  [2441] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(185), 1,
      sym_string,
    STATE(77), 2,
      sym_comment,
      sym_macro_expansion,
  [2467] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      sym_double,
    STATE(124), 1,
      sym_breakpoint_item,
    STATE(78), 3,
      sym_comment,
      sym_macro_expansion,
      aux_sym_breakpoint_table_repeat1,
  [2491] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(176), 1,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(175), 1,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(168), 1,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(184), 1,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(119), 1,
      sym__string,
    STATE(167), 1,
      sym_record_name,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(119), 1,
      sym__string,
    STATE(162), 1,
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
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(125), 1,
      sym_string,
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
    ACTIONS(379), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2693] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(174), 1,
      sym_string,
    STATE(87), 2,
      sym_comment,
      sym_macro_expansion,
  [2719] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      sym_double,
    STATE(100), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(124), 1,
      sym_breakpoint_item,
    STATE(88), 2,
      sym_comment,
      sym_macro_expansion,
  [2745] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(183), 1,
      sym_string,
    STATE(89), 2,
      sym_comment,
      sym_macro_expansion,
  [2771] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(90), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(385), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(91), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(387), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2811] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(136), 1,
      sym_field_name,
    STATE(137), 1,
      sym__string,
    STATE(92), 2,
      sym_comment,
      sym_macro_expansion,
  [2837] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(93), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(389), 4,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_PERCENT,
  [2857] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(182), 1,
      sym_string,
    STATE(94), 2,
      sym_comment,
      sym_macro_expansion,
  [2883] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(145), 1,
      sym_string,
    STATE(95), 2,
      sym_comment,
      sym_macro_expansion,
  [2909] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(129), 1,
      sym__string,
    STATE(181), 1,
      sym_record_type,
    STATE(96), 2,
      sym_comment,
      sym_macro_expansion,
  [2935] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(391), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
    ACTIONS(393), 2,
      aux_sym_string_text_fragment_token1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_comment,
      sym_macro_expansion,
  [2957] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(7), 1,
      sym__string,
    STATE(138), 1,
      sym_string,
    STATE(98), 2,
      sym_comment,
      sym_macro_expansion,
  [2983] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      sym__unquoted_string,
    STATE(119), 1,
      sym__string,
    STATE(180), 1,
      sym_record_name,
    STATE(99), 2,
      sym_comment,
      sym_macro_expansion,
  [3009] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(383), 1,
      sym_double,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_breakpoint_table_repeat1,
    STATE(124), 1,
      sym_breakpoint_item,
    STATE(100), 2,
      sym_comment,
      sym_macro_expansion,
  [3035] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(101), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(397), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      aux_sym__macro_expansion_inner_token1,
  [3050] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(102), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(399), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      aux_sym__macro_expansion_inner_token1,
  [3065] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    STATE(63), 1,
      aux_sym__macro_expansion_inner,
    STATE(103), 2,
      sym_comment,
      sym_macro_expansion,
  [3088] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(104), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(409), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3107] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(105), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(411), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3126] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(413), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(106), 2,
      sym_comment,
      sym_macro_expansion,
  [3147] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(107), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(417), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3166] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(108), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(419), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3185] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(109), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(421), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3204] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(110), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(423), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3223] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(111), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(425), 3,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym__unquoted_string,
  [3242] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym__macro_expansion_inner,
    STATE(112), 2,
      sym_comment,
      sym_macro_expansion,
  [3265] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym__macro_expansion_inner,
    STATE(113), 2,
      sym_comment,
      sym_macro_expansion,
  [3288] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(429), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(114), 2,
      sym_comment,
      sym_macro_expansion,
  [3309] = 7,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    STATE(63), 1,
      aux_sym__macro_expansion_inner,
    STATE(115), 2,
      sym_comment,
      sym_macro_expansion,
  [3332] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(116), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(433), 3,
      anon_sym_include,
      anon_sym_RBRACE,
      anon_sym_choice,
  [3351] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(117), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(435), 3,
      anon_sym_LBRACK,
      aux_sym__json_array_token1,
      anon_sym_RBRACK,
  [3370] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(118), 2,
      sym_comment,
      sym_macro_expansion,
    ACTIONS(437), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym__json_object_token1,
  [3389] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(439), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(119), 2,
      sym_comment,
      sym_macro_expansion,
  [3407] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(441), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(120), 2,
      sym_comment,
      sym_macro_expansion,
  [3425] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      sym_double,
    STATE(121), 2,
      sym_comment,
      sym_macro_expansion,
  [3445] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(447), 1,
      aux_sym_ccode_token1,
    STATE(90), 1,
      sym_ccode,
    STATE(122), 2,
      sym_comment,
      sym_macro_expansion,
  [3465] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(449), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(123), 2,
      sym_comment,
      sym_macro_expansion,
  [3483] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(451), 2,
      anon_sym_RBRACE,
      sym_double,
    STATE(124), 2,
      sym_comment,
      sym_macro_expansion,
  [3501] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(125), 2,
      sym_comment,
      sym_macro_expansion,
  [3521] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    STATE(113), 1,
      aux_sym__macro_expansion_inner,
    STATE(126), 2,
      sym_comment,
      sym_macro_expansion,
  [3541] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    STATE(112), 1,
      aux_sym__macro_expansion_inner,
    STATE(127), 2,
      sym_comment,
      sym_macro_expansion,
  [3561] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    STATE(115), 1,
      aux_sym__macro_expansion_inner,
    STATE(128), 2,
      sym_comment,
      sym_macro_expansion,
  [3581] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(129), 2,
      sym_comment,
      sym_macro_expansion,
  [3599] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(405), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(407), 1,
      aux_sym__macro_expansion_inner_token1,
    STATE(103), 1,
      aux_sym__macro_expansion_inner,
    STATE(130), 2,
      sym_comment,
      sym_macro_expansion,
  [3619] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(131), 2,
      sym_comment,
      sym_macro_expansion,
  [3636] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(132), 2,
      sym_comment,
      sym_macro_expansion,
  [3653] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    STATE(133), 2,
      sym_comment,
      sym_macro_expansion,
  [3670] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(134), 2,
      sym_comment,
      sym_macro_expansion,
  [3687] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    STATE(135), 2,
      sym_comment,
      sym_macro_expansion,
  [3704] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(136), 2,
      sym_comment,
      sym_macro_expansion,
  [3721] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(137), 2,
      sym_comment,
      sym_macro_expansion,
  [3738] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(138), 2,
      sym_comment,
      sym_macro_expansion,
  [3755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(139), 2,
      sym_comment,
      sym_macro_expansion,
  [3772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_comment,
      sym_macro_expansion,
  [3789] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(479), 1,
      sym_double,
    STATE(141), 2,
      sym_comment,
      sym_macro_expansion,
  [3806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(481), 1,
      anon_sym_COMMA,
    STATE(142), 2,
      sym_comment,
      sym_macro_expansion,
  [3823] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(143), 2,
      sym_comment,
      sym_macro_expansion,
  [3840] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(144), 2,
      sym_comment,
      sym_macro_expansion,
  [3857] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(145), 2,
      sym_comment,
      sym_macro_expansion,
  [3874] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(146), 2,
      sym_comment,
      sym_macro_expansion,
  [3891] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(491), 1,
      ts_builtin_sym_end,
    STATE(147), 2,
      sym_comment,
      sym_macro_expansion,
  [3908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(148), 2,
      sym_comment,
      sym_macro_expansion,
  [3925] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(149), 2,
      sym_comment,
      sym_macro_expansion,
  [3942] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(150), 2,
      sym_comment,
      sym_macro_expansion,
  [3959] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    STATE(151), 2,
      sym_comment,
      sym_macro_expansion,
  [3976] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(152), 2,
      sym_comment,
      sym_macro_expansion,
  [3993] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(153), 2,
      sym_comment,
      sym_macro_expansion,
  [4010] = 5,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(505), 1,
      aux_sym_ccode_token1,
    STATE(154), 2,
      sym_comment,
      sym_macro_expansion,
  [4027] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(155), 2,
      sym_comment,
      sym_macro_expansion,
  [4044] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    STATE(156), 2,
      sym_comment,
      sym_macro_expansion,
  [4061] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(157), 2,
      sym_comment,
      sym_macro_expansion,
  [4078] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    STATE(158), 2,
      sym_comment,
      sym_macro_expansion,
  [4095] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(159), 2,
      sym_comment,
      sym_macro_expansion,
  [4112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(160), 2,
      sym_comment,
      sym_macro_expansion,
  [4129] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(161), 2,
      sym_comment,
      sym_macro_expansion,
  [4146] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(162), 2,
      sym_comment,
      sym_macro_expansion,
  [4163] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(163), 2,
      sym_comment,
      sym_macro_expansion,
  [4180] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(164), 2,
      sym_comment,
      sym_macro_expansion,
  [4197] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(165), 2,
      sym_comment,
      sym_macro_expansion,
  [4214] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(166), 2,
      sym_comment,
      sym_macro_expansion,
  [4231] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(167), 2,
      sym_comment,
      sym_macro_expansion,
  [4248] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(168), 2,
      sym_comment,
      sym_macro_expansion,
  [4265] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    STATE(169), 2,
      sym_comment,
      sym_macro_expansion,
  [4282] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(170), 2,
      sym_comment,
      sym_macro_expansion,
  [4299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(171), 2,
      sym_comment,
      sym_macro_expansion,
  [4316] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(172), 2,
      sym_comment,
      sym_macro_expansion,
  [4333] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(173), 2,
      sym_comment,
      sym_macro_expansion,
  [4350] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(174), 2,
      sym_comment,
      sym_macro_expansion,
  [4367] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(175), 2,
      sym_comment,
      sym_macro_expansion,
  [4384] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(176), 2,
      sym_comment,
      sym_macro_expansion,
  [4401] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(177), 2,
      sym_comment,
      sym_macro_expansion,
  [4418] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    STATE(178), 2,
      sym_comment,
      sym_macro_expansion,
  [4435] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    STATE(179), 2,
      sym_comment,
      sym_macro_expansion,
  [4452] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(180), 2,
      sym_comment,
      sym_macro_expansion,
  [4469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(181), 2,
      sym_comment,
      sym_macro_expansion,
  [4486] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(182), 2,
      sym_comment,
      sym_macro_expansion,
  [4503] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(183), 2,
      sym_comment,
      sym_macro_expansion,
  [4520] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym_comment,
      sym_macro_expansion,
  [4537] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(185), 2,
      sym_comment,
      sym_macro_expansion,
  [4554] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(186), 2,
      sym_comment,
      sym_macro_expansion,
  [4571] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(187), 2,
      sym_comment,
      sym_macro_expansion,
  [4588] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    STATE(188), 2,
      sym_comment,
      sym_macro_expansion,
  [4605] = 1,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
  [4609] = 1,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
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
  [SMALL_STATE(38)] = 1380,
  [SMALL_STATE(39)] = 1415,
  [SMALL_STATE(40)] = 1448,
  [SMALL_STATE(41)] = 1483,
  [SMALL_STATE(42)] = 1516,
  [SMALL_STATE(43)] = 1551,
  [SMALL_STATE(44)] = 1581,
  [SMALL_STATE(45)] = 1611,
  [SMALL_STATE(46)] = 1639,
  [SMALL_STATE(47)] = 1666,
  [SMALL_STATE(48)] = 1695,
  [SMALL_STATE(49)] = 1724,
  [SMALL_STATE(50)] = 1753,
  [SMALL_STATE(51)] = 1774,
  [SMALL_STATE(52)] = 1803,
  [SMALL_STATE(53)] = 1832,
  [SMALL_STATE(54)] = 1859,
  [SMALL_STATE(55)] = 1880,
  [SMALL_STATE(56)] = 1909,
  [SMALL_STATE(57)] = 1936,
  [SMALL_STATE(58)] = 1965,
  [SMALL_STATE(59)] = 1994,
  [SMALL_STATE(60)] = 2015,
  [SMALL_STATE(61)] = 2036,
  [SMALL_STATE(62)] = 2065,
  [SMALL_STATE(63)] = 2085,
  [SMALL_STATE(64)] = 2107,
  [SMALL_STATE(65)] = 2133,
  [SMALL_STATE(66)] = 2159,
  [SMALL_STATE(67)] = 2185,
  [SMALL_STATE(68)] = 2211,
  [SMALL_STATE(69)] = 2233,
  [SMALL_STATE(70)] = 2259,
  [SMALL_STATE(71)] = 2285,
  [SMALL_STATE(72)] = 2311,
  [SMALL_STATE(73)] = 2337,
  [SMALL_STATE(74)] = 2363,
  [SMALL_STATE(75)] = 2389,
  [SMALL_STATE(76)] = 2415,
  [SMALL_STATE(77)] = 2441,
  [SMALL_STATE(78)] = 2467,
  [SMALL_STATE(79)] = 2491,
  [SMALL_STATE(80)] = 2517,
  [SMALL_STATE(81)] = 2543,
  [SMALL_STATE(82)] = 2569,
  [SMALL_STATE(83)] = 2595,
  [SMALL_STATE(84)] = 2621,
  [SMALL_STATE(85)] = 2647,
  [SMALL_STATE(86)] = 2673,
  [SMALL_STATE(87)] = 2693,
  [SMALL_STATE(88)] = 2719,
  [SMALL_STATE(89)] = 2745,
  [SMALL_STATE(90)] = 2771,
  [SMALL_STATE(91)] = 2791,
  [SMALL_STATE(92)] = 2811,
  [SMALL_STATE(93)] = 2837,
  [SMALL_STATE(94)] = 2857,
  [SMALL_STATE(95)] = 2883,
  [SMALL_STATE(96)] = 2909,
  [SMALL_STATE(97)] = 2935,
  [SMALL_STATE(98)] = 2957,
  [SMALL_STATE(99)] = 2983,
  [SMALL_STATE(100)] = 3009,
  [SMALL_STATE(101)] = 3035,
  [SMALL_STATE(102)] = 3050,
  [SMALL_STATE(103)] = 3065,
  [SMALL_STATE(104)] = 3088,
  [SMALL_STATE(105)] = 3107,
  [SMALL_STATE(106)] = 3126,
  [SMALL_STATE(107)] = 3147,
  [SMALL_STATE(108)] = 3166,
  [SMALL_STATE(109)] = 3185,
  [SMALL_STATE(110)] = 3204,
  [SMALL_STATE(111)] = 3223,
  [SMALL_STATE(112)] = 3242,
  [SMALL_STATE(113)] = 3265,
  [SMALL_STATE(114)] = 3288,
  [SMALL_STATE(115)] = 3309,
  [SMALL_STATE(116)] = 3332,
  [SMALL_STATE(117)] = 3351,
  [SMALL_STATE(118)] = 3370,
  [SMALL_STATE(119)] = 3389,
  [SMALL_STATE(120)] = 3407,
  [SMALL_STATE(121)] = 3425,
  [SMALL_STATE(122)] = 3445,
  [SMALL_STATE(123)] = 3465,
  [SMALL_STATE(124)] = 3483,
  [SMALL_STATE(125)] = 3501,
  [SMALL_STATE(126)] = 3521,
  [SMALL_STATE(127)] = 3541,
  [SMALL_STATE(128)] = 3561,
  [SMALL_STATE(129)] = 3581,
  [SMALL_STATE(130)] = 3599,
  [SMALL_STATE(131)] = 3619,
  [SMALL_STATE(132)] = 3636,
  [SMALL_STATE(133)] = 3653,
  [SMALL_STATE(134)] = 3670,
  [SMALL_STATE(135)] = 3687,
  [SMALL_STATE(136)] = 3704,
  [SMALL_STATE(137)] = 3721,
  [SMALL_STATE(138)] = 3738,
  [SMALL_STATE(139)] = 3755,
  [SMALL_STATE(140)] = 3772,
  [SMALL_STATE(141)] = 3789,
  [SMALL_STATE(142)] = 3806,
  [SMALL_STATE(143)] = 3823,
  [SMALL_STATE(144)] = 3840,
  [SMALL_STATE(145)] = 3857,
  [SMALL_STATE(146)] = 3874,
  [SMALL_STATE(147)] = 3891,
  [SMALL_STATE(148)] = 3908,
  [SMALL_STATE(149)] = 3925,
  [SMALL_STATE(150)] = 3942,
  [SMALL_STATE(151)] = 3959,
  [SMALL_STATE(152)] = 3976,
  [SMALL_STATE(153)] = 3993,
  [SMALL_STATE(154)] = 4010,
  [SMALL_STATE(155)] = 4027,
  [SMALL_STATE(156)] = 4044,
  [SMALL_STATE(157)] = 4061,
  [SMALL_STATE(158)] = 4078,
  [SMALL_STATE(159)] = 4095,
  [SMALL_STATE(160)] = 4112,
  [SMALL_STATE(161)] = 4129,
  [SMALL_STATE(162)] = 4146,
  [SMALL_STATE(163)] = 4163,
  [SMALL_STATE(164)] = 4180,
  [SMALL_STATE(165)] = 4197,
  [SMALL_STATE(166)] = 4214,
  [SMALL_STATE(167)] = 4231,
  [SMALL_STATE(168)] = 4248,
  [SMALL_STATE(169)] = 4265,
  [SMALL_STATE(170)] = 4282,
  [SMALL_STATE(171)] = 4299,
  [SMALL_STATE(172)] = 4316,
  [SMALL_STATE(173)] = 4333,
  [SMALL_STATE(174)] = 4350,
  [SMALL_STATE(175)] = 4367,
  [SMALL_STATE(176)] = 4384,
  [SMALL_STATE(177)] = 4401,
  [SMALL_STATE(178)] = 4418,
  [SMALL_STATE(179)] = 4435,
  [SMALL_STATE(180)] = 4452,
  [SMALL_STATE(181)] = 4469,
  [SMALL_STATE(182)] = 4486,
  [SMALL_STATE(183)] = 4503,
  [SMALL_STATE(184)] = 4520,
  [SMALL_STATE(185)] = 4537,
  [SMALL_STATE(186)] = 4554,
  [SMALL_STATE(187)] = 4571,
  [SMALL_STATE(188)] = 4588,
  [SMALL_STATE(189)] = 4605,
  [SMALL_STATE(190)] = 4609,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 8, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 8, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 6, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_registrar_declaration, 4, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 6, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_driver_declaration, 4, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_declaration, 6, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 6, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_statement, 6, .production_id = 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_statement, 6, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_menu_definition, 7, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_device_support_declaration, 10, .production_id = 9),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type_definition, 7, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_instance, 9, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_instance, 9, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breakpoint_table, 7, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_definition, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_definition, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(70),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(135),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(131),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 2), SHIFT_REPEAT(133),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(70),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(155),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 2), SHIFT_REPEAT(122),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(40),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(6),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(97),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(97),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(68),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(70),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(160),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(49),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2), SHIFT_REPEAT(110),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_instance_repeat1, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_text_fragment, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_text_fragment, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(97),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2), SHIFT_REPEAT(97),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, .production_id = 11),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(47),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 2), SHIFT_REPEAT(109),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, .production_id = 12),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 6, .production_id = 12),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_type_definition_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__macro_expansion_inner, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_expansion_inner, 2), SHIFT_REPEAT(128),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_expansion_inner, 2), SHIFT_REPEAT(130),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_expansion_inner, 2), SHIFT_REPEAT(102),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 2), SHIFT_REPEAT(121),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 9, .production_id = 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdef, 2, .production_id = 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ccode, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 8, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_text_fragment_repeat1, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expansion, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__macro_expansion_inner, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 8),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_object_repeat1, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__json_array_repeat1, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_descriptor, 4, .production_id = 13),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 2, .production_id = 7),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_choice, 6, .production_id = 10),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_array, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__json_object, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_name, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 4, .production_id = 8),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint_item, 3, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_breakpoint_table_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [491] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_value, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_item, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_object, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_array, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expansion, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
