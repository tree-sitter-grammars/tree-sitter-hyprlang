#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym_string = 1,
  anon_sym_EQ = 2,
  anon_sym_COLON = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_source = 6,
  anon_sym_exec = 7,
  anon_sym_exec_DASHonce = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_on = 11,
  anon_sym_off = 12,
  anon_sym_yes = 13,
  anon_sym_no = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  aux_sym_number_token1 = 17,
  anon_sym_0x = 18,
  anon_sym_rgb = 19,
  anon_sym_rgba = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  sym_hex = 23,
  aux_sym_angle_token1 = 24,
  anon_sym_deg = 25,
  anon_sym_SHIFT = 26,
  anon_sym_CAPS = 27,
  anon_sym_CTRL = 28,
  anon_sym_CONTROL = 29,
  anon_sym_ALT = 30,
  anon_sym_MOD2 = 31,
  anon_sym_MOD3 = 32,
  anon_sym_SUPER = 33,
  anon_sym_WIN = 34,
  anon_sym_LOGO = 35,
  anon_sym_MOD4 = 36,
  anon_sym_MOD5 = 37,
  anon_sym_TAB = 38,
  anon_sym_COMMA = 39,
  sym_name = 40,
  anon_sym_DOLLAR = 41,
  aux_sym_variable_token1 = 42,
  sym__linebreak = 43,
  anon_sym_POUND = 44,
  aux_sym_comment_token1 = 45,
  sym_configuration = 46,
  sym_declaration = 47,
  sym_assignment = 48,
  sym_keyword = 49,
  sym_section = 50,
  sym_source = 51,
  sym_exec = 52,
  sym__value = 53,
  sym_boolean = 54,
  sym_number = 55,
  sym_vec2 = 56,
  sym_color = 57,
  sym_legacy_hex = 58,
  sym_rgb = 59,
  sym_gradient = 60,
  sym_angle = 61,
  sym_mod = 62,
  sym_keys = 63,
  sym_params = 64,
  sym_variable = 65,
  sym_comment = 66,
  aux_sym_configuration_repeat1 = 67,
  aux_sym_section_repeat1 = 68,
  aux_sym_gradient_repeat1 = 69,
  aux_sym_params_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_string] = "string",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_source] = "source",
  [anon_sym_exec] = "exec",
  [anon_sym_exec_DASHonce] = "exec-once",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_0x] = "0x",
  [anon_sym_rgb] = "rgb",
  [anon_sym_rgba] = "rgba",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_hex] = "hex",
  [aux_sym_angle_token1] = "angle_token1",
  [anon_sym_deg] = "deg",
  [anon_sym_SHIFT] = "SHIFT",
  [anon_sym_CAPS] = "CAPS",
  [anon_sym_CTRL] = "CTRL",
  [anon_sym_CONTROL] = "CONTROL",
  [anon_sym_ALT] = "ALT",
  [anon_sym_MOD2] = "MOD2",
  [anon_sym_MOD3] = "MOD3",
  [anon_sym_SUPER] = "SUPER",
  [anon_sym_WIN] = "WIN",
  [anon_sym_LOGO] = "LOGO",
  [anon_sym_MOD4] = "MOD4",
  [anon_sym_MOD5] = "MOD5",
  [anon_sym_TAB] = "TAB",
  [anon_sym_COMMA] = ",",
  [sym_name] = "name",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_token1] = "variable_token1",
  [sym__linebreak] = "_linebreak",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_configuration] = "configuration",
  [sym_declaration] = "declaration",
  [sym_assignment] = "assignment",
  [sym_keyword] = "keyword",
  [sym_section] = "section",
  [sym_source] = "source",
  [sym_exec] = "exec",
  [sym__value] = "_value",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_vec2] = "vec2",
  [sym_color] = "color",
  [sym_legacy_hex] = "legacy_hex",
  [sym_rgb] = "rgb",
  [sym_gradient] = "gradient",
  [sym_angle] = "angle",
  [sym_mod] = "mod",
  [sym_keys] = "keys",
  [sym_params] = "params",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_gradient_repeat1] = "gradient_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_string] = sym_string,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exec_DASHonce] = anon_sym_exec_DASHonce,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_0x] = anon_sym_0x,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hex] = sym_hex,
  [aux_sym_angle_token1] = aux_sym_angle_token1,
  [anon_sym_deg] = anon_sym_deg,
  [anon_sym_SHIFT] = anon_sym_SHIFT,
  [anon_sym_CAPS] = anon_sym_CAPS,
  [anon_sym_CTRL] = anon_sym_CTRL,
  [anon_sym_CONTROL] = anon_sym_CONTROL,
  [anon_sym_ALT] = anon_sym_ALT,
  [anon_sym_MOD2] = anon_sym_MOD2,
  [anon_sym_MOD3] = anon_sym_MOD3,
  [anon_sym_SUPER] = anon_sym_SUPER,
  [anon_sym_WIN] = anon_sym_WIN,
  [anon_sym_LOGO] = anon_sym_LOGO,
  [anon_sym_MOD4] = anon_sym_MOD4,
  [anon_sym_MOD5] = anon_sym_MOD5,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_name] = sym_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [sym__linebreak] = sym__linebreak,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_configuration] = sym_configuration,
  [sym_declaration] = sym_declaration,
  [sym_assignment] = sym_assignment,
  [sym_keyword] = sym_keyword,
  [sym_section] = sym_section,
  [sym_source] = sym_source,
  [sym_exec] = sym_exec,
  [sym__value] = sym__value,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_vec2] = sym_vec2,
  [sym_color] = sym_color,
  [sym_legacy_hex] = sym_legacy_hex,
  [sym_rgb] = sym_rgb,
  [sym_gradient] = sym_gradient,
  [sym_angle] = sym_angle,
  [sym_mod] = sym_mod,
  [sym_keys] = sym_keys,
  [sym_params] = sym_params,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [aux_sym_configuration_repeat1] = aux_sym_configuration_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_gradient_repeat1] = aux_sym_gradient_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_DASHonce] = {
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
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rgba] = {
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
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_angle_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_deg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHIFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAPS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CTRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTROL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUPER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOGO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__linebreak] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_exec] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_vec2] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_gradient] = {
    .visible = true,
    .named = true,
  },
  [sym_angle] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_keys] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gradient_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_device = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_device] = "device",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_device, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 17,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 24,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 15,
  [44] = 29,
  [45] = 45,
  [46] = 46,
  [47] = 18,
  [48] = 45,
  [49] = 30,
  [50] = 26,
  [51] = 51,
  [52] = 25,
  [53] = 23,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 71,
  [86] = 80,
  [87] = 67,
  [88] = 70,
  [89] = 74,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 64,
  [96] = 77,
  [97] = 69,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == '3') ADVANCE(86);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == '5') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'F') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'H') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '$') ADVANCE(158);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == '3') ADVANCE(86);
      if (lookahead == '4') ADVANCE(90);
      if (lookahead == '5') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'H') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__linebreak);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 'o') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'y') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 163},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 48},
  [68] = {.lex_state = 48},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 48},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 48},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 48},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 48},
  [97] = {.lex_state = 48},
  [98] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exec_DASHonce] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_angle_token1] = ACTIONS(1),
    [anon_sym_deg] = ACTIONS(1),
    [anon_sym_SHIFT] = ACTIONS(1),
    [anon_sym_CAPS] = ACTIONS(1),
    [anon_sym_CTRL] = ACTIONS(1),
    [anon_sym_CONTROL] = ACTIONS(1),
    [anon_sym_ALT] = ACTIONS(1),
    [anon_sym_MOD2] = ACTIONS(1),
    [anon_sym_MOD3] = ACTIONS(1),
    [anon_sym_SUPER] = ACTIONS(1),
    [anon_sym_WIN] = ACTIONS(1),
    [anon_sym_LOGO] = ACTIONS(1),
    [anon_sym_MOD4] = ACTIONS(1),
    [anon_sym_MOD5] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym__linebreak] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_configuration] = STATE(91),
    [sym_declaration] = STATE(33),
    [sym_assignment] = STATE(33),
    [sym_keyword] = STATE(33),
    [sym_section] = STATE(33),
    [sym_source] = STATE(33),
    [sym_exec] = STATE(33),
    [sym_variable] = STATE(90),
    [sym_comment] = STATE(1),
    [aux_sym_configuration_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_source] = ACTIONS(7),
    [anon_sym_exec] = ACTIONS(9),
    [anon_sym_exec_DASHonce] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [sym__linebreak] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
  },
  [2] = {
    [sym__value] = STATE(48),
    [sym_boolean] = STATE(61),
    [sym_number] = STATE(36),
    [sym_vec2] = STATE(61),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(37),
    [sym_rgb] = STATE(37),
    [sym_gradient] = STATE(61),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(61),
    [sym_params] = STATE(71),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(2),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_rgb] = ACTIONS(29),
    [anon_sym_rgba] = ACTIONS(29),
    [anon_sym_SHIFT] = ACTIONS(31),
    [anon_sym_CAPS] = ACTIONS(31),
    [anon_sym_CTRL] = ACTIONS(31),
    [anon_sym_CONTROL] = ACTIONS(31),
    [anon_sym_ALT] = ACTIONS(31),
    [anon_sym_MOD2] = ACTIONS(31),
    [anon_sym_MOD3] = ACTIONS(31),
    [anon_sym_SUPER] = ACTIONS(31),
    [anon_sym_WIN] = ACTIONS(31),
    [anon_sym_LOGO] = ACTIONS(31),
    [anon_sym_MOD4] = ACTIONS(31),
    [anon_sym_MOD5] = ACTIONS(31),
    [anon_sym_TAB] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym__linebreak] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(45),
    [sym_boolean] = STATE(61),
    [sym_number] = STATE(36),
    [sym_vec2] = STATE(61),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(37),
    [sym_rgb] = STATE(37),
    [sym_gradient] = STATE(61),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(61),
    [sym_params] = STATE(85),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(3),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_rgb] = ACTIONS(29),
    [anon_sym_rgba] = ACTIONS(29),
    [anon_sym_SHIFT] = ACTIONS(31),
    [anon_sym_CAPS] = ACTIONS(31),
    [anon_sym_CTRL] = ACTIONS(31),
    [anon_sym_CONTROL] = ACTIONS(31),
    [anon_sym_ALT] = ACTIONS(31),
    [anon_sym_MOD2] = ACTIONS(31),
    [anon_sym_MOD3] = ACTIONS(31),
    [anon_sym_SUPER] = ACTIONS(31),
    [anon_sym_WIN] = ACTIONS(31),
    [anon_sym_LOGO] = ACTIONS(31),
    [anon_sym_MOD4] = ACTIONS(31),
    [anon_sym_MOD5] = ACTIONS(31),
    [anon_sym_TAB] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym__linebreak] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(60),
    [sym_boolean] = STATE(61),
    [sym_number] = STATE(36),
    [sym_vec2] = STATE(61),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(37),
    [sym_rgb] = STATE(37),
    [sym_gradient] = STATE(61),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(61),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(4),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_rgb] = ACTIONS(29),
    [anon_sym_rgba] = ACTIONS(29),
    [anon_sym_SHIFT] = ACTIONS(31),
    [anon_sym_CAPS] = ACTIONS(31),
    [anon_sym_CTRL] = ACTIONS(31),
    [anon_sym_CONTROL] = ACTIONS(31),
    [anon_sym_ALT] = ACTIONS(31),
    [anon_sym_MOD2] = ACTIONS(31),
    [anon_sym_MOD3] = ACTIONS(31),
    [anon_sym_SUPER] = ACTIONS(31),
    [anon_sym_WIN] = ACTIONS(31),
    [anon_sym_LOGO] = ACTIONS(31),
    [anon_sym_MOD4] = ACTIONS(31),
    [anon_sym_MOD5] = ACTIONS(31),
    [anon_sym_TAB] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(68),
    [sym_boolean] = STATE(61),
    [sym_number] = STATE(36),
    [sym_vec2] = STATE(61),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(37),
    [sym_rgb] = STATE(37),
    [sym_gradient] = STATE(61),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(61),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(5),
    [sym_string] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_on] = ACTIONS(21),
    [anon_sym_off] = ACTIONS(21),
    [anon_sym_yes] = ACTIONS(21),
    [anon_sym_no] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [anon_sym_0x] = ACTIONS(27),
    [anon_sym_rgb] = ACTIONS(29),
    [anon_sym_rgba] = ACTIONS(29),
    [anon_sym_SHIFT] = ACTIONS(31),
    [anon_sym_CAPS] = ACTIONS(31),
    [anon_sym_CTRL] = ACTIONS(31),
    [anon_sym_CONTROL] = ACTIONS(31),
    [anon_sym_ALT] = ACTIONS(31),
    [anon_sym_MOD2] = ACTIONS(31),
    [anon_sym_MOD3] = ACTIONS(31),
    [anon_sym_SUPER] = ACTIONS(31),
    [anon_sym_WIN] = ACTIONS(31),
    [anon_sym_LOGO] = ACTIONS(31),
    [anon_sym_MOD4] = ACTIONS(31),
    [anon_sym_MOD5] = ACTIONS(31),
    [anon_sym_TAB] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(57), 1,
      sym_mod,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      sym__linebreak,
    ACTIONS(39), 13,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
  [29] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(43), 16,
      anon_sym_EQ,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym__linebreak,
  [54] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(45), 15,
      anon_sym_SHIFT,
      anon_sym_CAPS,
      anon_sym_CTRL,
      anon_sym_CONTROL,
      anon_sym_ALT,
      anon_sym_MOD2,
      anon_sym_MOD3,
      anon_sym_SUPER,
      anon_sym_WIN,
      anon_sym_LOGO,
      anon_sym_MOD4,
      anon_sym_MOD5,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym__linebreak,
  [78] = 11,
    ACTIONS(7), 1,
      anon_sym_source,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      sym__linebreak,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_configuration_repeat1,
    STATE(90), 1,
      sym_variable,
    ACTIONS(9), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(33), 6,
      sym_declaration,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym_source,
      sym_exec,
  [118] = 10,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_source,
    ACTIONS(57), 1,
      sym_name,
    ACTIONS(60), 1,
      anon_sym_DOLLAR,
    ACTIONS(63), 1,
      sym__linebreak,
    STATE(90), 1,
      sym_variable,
    ACTIONS(54), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(10), 2,
      sym_comment,
      aux_sym_configuration_repeat1,
    STATE(33), 6,
      sym_declaration,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym_source,
      sym_exec,
  [156] = 11,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_rgb,
    ACTIONS(66), 1,
      anon_sym_0x,
    ACTIONS(68), 1,
      anon_sym_rgba,
    ACTIONS(70), 1,
      aux_sym_angle_token1,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_gradient_repeat1,
    STATE(35), 1,
      sym_color,
    STATE(56), 1,
      sym_angle,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      sym__linebreak,
    STATE(37), 2,
      sym_legacy_hex,
      sym_rgb,
  [192] = 11,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_rgb,
    ACTIONS(66), 1,
      anon_sym_0x,
    ACTIONS(68), 1,
      anon_sym_rgba,
    ACTIONS(70), 1,
      aux_sym_angle_token1,
    STATE(11), 1,
      aux_sym_gradient_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(35), 1,
      sym_color,
    STATE(58), 1,
      sym_angle,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      sym__linebreak,
    STATE(37), 2,
      sym_legacy_hex,
      sym_rgb,
  [228] = 9,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_0x,
    ACTIONS(80), 1,
      anon_sym_rgb,
    ACTIONS(83), 1,
      anon_sym_rgba,
    ACTIONS(86), 1,
      aux_sym_angle_token1,
    STATE(35), 1,
      sym_color,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      sym__linebreak,
    STATE(13), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(37), 2,
      sym_legacy_hex,
      sym_rgb,
  [259] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(92), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [277] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(96), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [295] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(100), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [313] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    STATE(17), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [337] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(110), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [355] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [379] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [403] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [427] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(120), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [445] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(124), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [463] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_section_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [487] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(130), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [505] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(134), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [523] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [547] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [571] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(142), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [589] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(146), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [607] = 7,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_name,
    ACTIONS(106), 1,
      sym__linebreak,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_section_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [631] = 6,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      sym_name,
    ACTIONS(155), 1,
      sym__linebreak,
    STATE(32), 2,
      sym_comment,
      aux_sym_section_repeat1,
    STATE(51), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [653] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(160), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [671] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(162), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [688] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(166), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [705] = 6,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      aux_sym_number_token1,
    STATE(36), 1,
      sym_comment,
    STATE(55), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      sym__linebreak,
    ACTIONS(170), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [726] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(174), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [743] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(178), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [760] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(182), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_COMMA,
      sym__linebreak,
  [774] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_COMMA,
      sym__linebreak,
  [788] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_comment,
  [804] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      anon_sym_EQ,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_comment,
  [820] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(94), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [832] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [844] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      sym__linebreak,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_params_repeat1,
  [860] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      sym__linebreak,
    STATE(46), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_params_repeat1,
  [876] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [888] = 5,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      sym__linebreak,
    STATE(46), 1,
      aux_sym_params_repeat1,
    STATE(48), 1,
      sym_comment,
  [904] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [916] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [928] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [940] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [952] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      sym_name,
      sym__linebreak,
  [964] = 4,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      sym__linebreak,
    STATE(54), 2,
      sym_comment,
      aux_sym_params_repeat1,
  [978] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [989] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1000] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1011] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1022] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1033] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1044] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1055] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1066] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      aux_sym_number_token1,
    STATE(63), 1,
      sym_comment,
  [1076] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      sym__linebreak,
    STATE(64), 1,
      sym_comment,
  [1086] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      aux_sym_comment_token1,
    STATE(65), 1,
      sym_comment,
  [1096] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      sym_hex,
    STATE(66), 1,
      sym_comment,
  [1106] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      sym__linebreak,
    STATE(67), 1,
      sym_comment,
  [1116] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      sym__linebreak,
    STATE(68), 1,
      sym_comment,
  [1126] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_comment,
  [1136] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      sym__linebreak,
    STATE(70), 1,
      sym_comment,
  [1146] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      sym__linebreak,
    STATE(71), 1,
      sym_comment,
  [1156] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_comment,
  [1166] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_comment,
  [1176] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      sym__linebreak,
    STATE(74), 1,
      sym_comment,
  [1186] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      sym_hex,
    STATE(75), 1,
      sym_comment,
  [1196] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_deg,
    STATE(76), 1,
      sym_comment,
  [1206] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      sym__linebreak,
    STATE(77), 1,
      sym_comment,
  [1216] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      sym__linebreak,
    STATE(78), 1,
      sym_comment,
  [1226] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      sym__linebreak,
    STATE(79), 1,
      sym_comment,
  [1236] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      sym__linebreak,
    STATE(80), 1,
      sym_comment,
  [1246] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      sym_name,
    STATE(81), 1,
      sym_comment,
  [1256] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      sym_string,
    STATE(82), 1,
      sym_comment,
  [1266] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_string,
    STATE(83), 1,
      sym_comment,
  [1276] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      sym_name,
    STATE(84), 1,
      sym_comment,
  [1286] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      sym__linebreak,
    STATE(85), 1,
      sym_comment,
  [1296] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      sym__linebreak,
    STATE(86), 1,
      sym_comment,
  [1306] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      sym__linebreak,
    STATE(87), 1,
      sym_comment,
  [1316] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      sym__linebreak,
    STATE(88), 1,
      sym_comment,
  [1326] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      sym__linebreak,
    STATE(89), 1,
      sym_comment,
  [1336] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_comment,
  [1346] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_comment,
  [1356] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      aux_sym_variable_token1,
    STATE(92), 1,
      sym_comment,
  [1366] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_EQ,
    STATE(93), 1,
      sym_comment,
  [1376] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym_comment,
  [1386] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      sym__linebreak,
    STATE(95), 1,
      sym_comment,
  [1396] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym__linebreak,
    STATE(96), 1,
      sym_comment,
  [1406] = 3,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
  [1416] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 403,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 445,
  [SMALL_STATE(24)] = 463,
  [SMALL_STATE(25)] = 487,
  [SMALL_STATE(26)] = 505,
  [SMALL_STATE(27)] = 523,
  [SMALL_STATE(28)] = 547,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 589,
  [SMALL_STATE(31)] = 607,
  [SMALL_STATE(32)] = 631,
  [SMALL_STATE(33)] = 653,
  [SMALL_STATE(34)] = 671,
  [SMALL_STATE(35)] = 688,
  [SMALL_STATE(36)] = 705,
  [SMALL_STATE(37)] = 726,
  [SMALL_STATE(38)] = 743,
  [SMALL_STATE(39)] = 760,
  [SMALL_STATE(40)] = 774,
  [SMALL_STATE(41)] = 788,
  [SMALL_STATE(42)] = 804,
  [SMALL_STATE(43)] = 820,
  [SMALL_STATE(44)] = 832,
  [SMALL_STATE(45)] = 844,
  [SMALL_STATE(46)] = 860,
  [SMALL_STATE(47)] = 876,
  [SMALL_STATE(48)] = 888,
  [SMALL_STATE(49)] = 904,
  [SMALL_STATE(50)] = 916,
  [SMALL_STATE(51)] = 928,
  [SMALL_STATE(52)] = 940,
  [SMALL_STATE(53)] = 952,
  [SMALL_STATE(54)] = 964,
  [SMALL_STATE(55)] = 978,
  [SMALL_STATE(56)] = 989,
  [SMALL_STATE(57)] = 1000,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1022,
  [SMALL_STATE(60)] = 1033,
  [SMALL_STATE(61)] = 1044,
  [SMALL_STATE(62)] = 1055,
  [SMALL_STATE(63)] = 1066,
  [SMALL_STATE(64)] = 1076,
  [SMALL_STATE(65)] = 1086,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1106,
  [SMALL_STATE(68)] = 1116,
  [SMALL_STATE(69)] = 1126,
  [SMALL_STATE(70)] = 1136,
  [SMALL_STATE(71)] = 1146,
  [SMALL_STATE(72)] = 1156,
  [SMALL_STATE(73)] = 1166,
  [SMALL_STATE(74)] = 1176,
  [SMALL_STATE(75)] = 1186,
  [SMALL_STATE(76)] = 1196,
  [SMALL_STATE(77)] = 1206,
  [SMALL_STATE(78)] = 1216,
  [SMALL_STATE(79)] = 1226,
  [SMALL_STATE(80)] = 1236,
  [SMALL_STATE(81)] = 1246,
  [SMALL_STATE(82)] = 1256,
  [SMALL_STATE(83)] = 1266,
  [SMALL_STATE(84)] = 1276,
  [SMALL_STATE(85)] = 1286,
  [SMALL_STATE(86)] = 1296,
  [SMALL_STATE(87)] = 1306,
  [SMALL_STATE(88)] = 1316,
  [SMALL_STATE(89)] = 1326,
  [SMALL_STATE(90)] = 1336,
  [SMALL_STATE(91)] = 1346,
  [SMALL_STATE(92)] = 1356,
  [SMALL_STATE(93)] = 1366,
  [SMALL_STATE(94)] = 1376,
  [SMALL_STATE(95)] = 1386,
  [SMALL_STATE(96)] = 1396,
  [SMALL_STATE(97)] = 1406,
  [SMALL_STATE(98)] = 1416,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(94),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(93),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(92),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__value, 1), REDUCE(sym_gradient, 1),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(75),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(73),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(73),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 8, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 8, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 7, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 7, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(42),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(51),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_hex, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_hex, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hyprlang(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_string,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
