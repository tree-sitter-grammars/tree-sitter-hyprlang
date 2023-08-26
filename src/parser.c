#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_COLON = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_source = 5,
  anon_sym_exec = 6,
  anon_sym_exec_DASHonce = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_on = 10,
  anon_sym_off = 11,
  anon_sym_yes = 12,
  anon_sym_no = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  aux_sym_number_token1 = 16,
  anon_sym_0x = 17,
  anon_sym_rgb = 18,
  anon_sym_rgba = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_hex = 22,
  aux_sym_angle_token1 = 23,
  anon_sym_deg = 24,
  anon_sym_SHIFT = 25,
  anon_sym_CAPS = 26,
  anon_sym_CTRL = 27,
  anon_sym_CONTROL = 28,
  anon_sym_ALT = 29,
  anon_sym_MOD2 = 30,
  anon_sym_MOD3 = 31,
  anon_sym_SUPER = 32,
  anon_sym_WIN = 33,
  anon_sym_LOGO = 34,
  anon_sym_MOD4 = 35,
  anon_sym_MOD5 = 36,
  anon_sym_TAB = 37,
  sym_string = 38,
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
  [sym_string] = "string",
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
  [sym_string] = sym_string,
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 30,
  [37] = 31,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 20,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 16,
  [52] = 52,
  [53] = 24,
  [54] = 23,
  [55] = 55,
  [56] = 56,
  [57] = 14,
  [58] = 17,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 15,
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
  [77] = 74,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 78,
  [85] = 66,
  [86] = 68,
  [87] = 63,
  [88] = 88,
  [89] = 83,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 67,
  [94] = 79,
  [95] = 88,
  [96] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'W') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'W') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == '3') ADVANCE(114);
      if (lookahead == '4') ADVANCE(118);
      if (lookahead == '5') ADVANCE(119);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'F') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(168);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_exec_DASHonce);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'x') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_hex);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (lookahead == 'x') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_angle_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_deg);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SHIFT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CAPS);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_CTRL);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CONTROL);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ALT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_MOD2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_MOD3);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SUPER);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_WIN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LOGO);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_MOD4);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_MOD5);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'W') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(132);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'W') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == 'y') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == '3') ADVANCE(114);
      if (lookahead == '4') ADVANCE(118);
      if (lookahead == '5') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'B') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'G') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'L') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'P') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'R') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'S') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'T') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'g') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__linebreak);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 70},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 70},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 70},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 187},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 70},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_configuration] = STATE(65),
    [sym_declaration] = STATE(19),
    [sym_assignment] = STATE(19),
    [sym_keyword] = STATE(19),
    [sym_section] = STATE(19),
    [sym_source] = STATE(19),
    [sym_exec] = STATE(19),
    [sym_variable] = STATE(75),
    [sym_comment] = STATE(1),
    [aux_sym_configuration_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_source] = ACTIONS(7),
    [anon_sym_exec] = ACTIONS(9),
    [anon_sym_exec_DASHonce] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [sym__linebreak] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(42),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(33),
    [sym_vec2] = STATE(49),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(34),
    [sym_rgb] = STATE(34),
    [sym_gradient] = STATE(49),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(49),
    [sym_params] = STATE(83),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(2),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym__linebreak] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [3] = {
    [sym__value] = STATE(44),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(33),
    [sym_vec2] = STATE(49),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(34),
    [sym_rgb] = STATE(34),
    [sym_gradient] = STATE(49),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(49),
    [sym_params] = STATE(89),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(3),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym__linebreak] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [4] = {
    [sym__value] = STATE(82),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(33),
    [sym_vec2] = STATE(49),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(34),
    [sym_rgb] = STATE(34),
    [sym_gradient] = STATE(49),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(49),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(4),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [5] = {
    [sym__value] = STATE(59),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(33),
    [sym_vec2] = STATE(49),
    [sym_color] = STATE(12),
    [sym_legacy_hex] = STATE(34),
    [sym_rgb] = STATE(34),
    [sym_gradient] = STATE(49),
    [sym_mod] = STATE(6),
    [sym_keys] = STATE(49),
    [sym_variable] = STATE(6),
    [sym_comment] = STATE(5),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_on] = ACTIONS(17),
    [anon_sym_off] = ACTIONS(17),
    [anon_sym_yes] = ACTIONS(17),
    [anon_sym_no] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [anon_sym_0x] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(25),
    [anon_sym_SHIFT] = ACTIONS(27),
    [anon_sym_CAPS] = ACTIONS(27),
    [anon_sym_CTRL] = ACTIONS(27),
    [anon_sym_CONTROL] = ACTIONS(27),
    [anon_sym_ALT] = ACTIONS(27),
    [anon_sym_MOD2] = ACTIONS(27),
    [anon_sym_MOD3] = ACTIONS(27),
    [anon_sym_SUPER] = ACTIONS(27),
    [anon_sym_WIN] = ACTIONS(27),
    [anon_sym_LOGO] = ACTIONS(27),
    [anon_sym_MOD4] = ACTIONS(27),
    [anon_sym_MOD5] = ACTIONS(27),
    [anon_sym_TAB] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    STATE(52), 1,
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
    ACTIONS(3), 1,
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
    ACTIONS(3), 1,
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
  [78] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_source,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      sym__linebreak,
    STATE(75), 1,
      sym_variable,
    ACTIONS(52), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(9), 2,
      sym_comment,
      aux_sym_configuration_repeat1,
    STATE(19), 6,
      sym_declaration,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym_source,
      sym_exec,
  [116] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_source,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      sym__linebreak,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_configuration_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(75), 1,
      sym_variable,
    ACTIONS(9), 2,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
    STATE(19), 6,
      sym_declaration,
      sym_assignment,
      sym_keyword,
      sym_section,
      sym_source,
      sym_exec,
  [156] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
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
    STATE(25), 1,
      sym_color,
    STATE(61), 1,
      sym_angle,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      sym__linebreak,
    STATE(34), 2,
      sym_legacy_hex,
      sym_rgb,
  [192] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
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
    STATE(25), 1,
      sym_color,
    STATE(50), 1,
      sym_angle,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      sym__linebreak,
    STATE(34), 2,
      sym_legacy_hex,
      sym_rgb,
  [228] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_0x,
    ACTIONS(80), 1,
      anon_sym_rgb,
    ACTIONS(83), 1,
      anon_sym_rgba,
    ACTIONS(86), 1,
      aux_sym_angle_token1,
    STATE(25), 1,
      sym_color,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      sym__linebreak,
    STATE(13), 2,
      sym_comment,
      aux_sym_gradient_repeat1,
    STATE(34), 2,
      sym_legacy_hex,
      sym_rgb,
  [259] = 4,
    ACTIONS(3), 1,
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
    ACTIONS(3), 1,
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
    ACTIONS(3), 1,
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
  [313] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(104), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [331] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(108), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [349] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(112), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [367] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(116), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [385] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
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
  [403] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
  [421] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(128), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [439] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym__linebreak,
    ACTIONS(132), 4,
      anon_sym_source,
      anon_sym_exec,
      anon_sym_exec_DASHonce,
      sym_name,
  [457] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(134), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [474] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_name,
    STATE(26), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [495] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [516] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_section_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [537] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_section_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [558] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [579] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_section_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [600] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      sym_name,
    STATE(32), 2,
      sym_comment,
      aux_sym_section_repeat1,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [619] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      aux_sym_number_token1,
    STATE(33), 1,
      sym_comment,
    STATE(48), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      sym__linebreak,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [640] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(161), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(165), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [674] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_section_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [695] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      sym_name,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_section_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(56), 3,
      sym_assignment,
      sym_keyword,
      sym_section,
  [716] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_rgb,
      aux_sym_angle_token1,
    ACTIONS(173), 4,
      anon_sym_0x,
      anon_sym_rgba,
      anon_sym_COMMA,
      sym__linebreak,
  [733] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(177), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_COMMA,
      sym__linebreak,
  [747] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_COMMA,
      sym__linebreak,
  [761] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_comment,
  [777] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      sym__linebreak,
    STATE(42), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_params_repeat1,
  [793] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_comment,
  [809] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym__linebreak,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_params_repeat1,
  [825] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      sym__linebreak,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_params_repeat1,
  [841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      sym__linebreak,
    STATE(46), 2,
      sym_comment,
      aux_sym_params_repeat1,
  [855] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      sym_name,
  [866] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [877] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [888] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [899] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      sym_name,
  [910] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [921] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      sym_name,
  [932] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      sym_name,
  [943] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [954] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      sym_name,
  [965] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      sym_name,
  [976] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_RBRACE,
      sym_name,
  [987] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [998] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1009] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      sym__linebreak,
  [1020] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_RBRACE,
      sym_name,
  [1031] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__linebreak,
    STATE(63), 1,
      sym_comment,
  [1041] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(220), 1,
      sym_string,
    STATE(64), 1,
      sym_comment,
  [1051] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_comment,
  [1061] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      sym__linebreak,
    STATE(66), 1,
      sym_comment,
  [1071] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      sym__linebreak,
    STATE(67), 1,
      sym_comment,
  [1081] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      sym__linebreak,
    STATE(68), 1,
      sym_comment,
  [1091] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(230), 1,
      aux_sym_comment_token1,
    STATE(69), 1,
      sym_comment,
  [1101] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      aux_sym_variable_token1,
    STATE(70), 1,
      sym_comment,
  [1111] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      sym_hex,
    STATE(71), 1,
      sym_comment,
  [1121] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      anon_sym_deg,
    STATE(72), 1,
      sym_comment,
  [1131] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      anon_sym_EQ,
    STATE(73), 1,
      sym_comment,
  [1141] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      sym_name,
    STATE(74), 1,
      sym_comment,
  [1151] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_comment,
  [1161] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_comment,
  [1171] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      sym_name,
    STATE(77), 1,
      sym_comment,
  [1181] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      sym__linebreak,
    STATE(78), 1,
      sym_comment,
  [1191] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      sym__linebreak,
    STATE(79), 1,
      sym_comment,
  [1201] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      aux_sym_number_token1,
    STATE(80), 1,
      sym_comment,
  [1211] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym_comment,
  [1221] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      sym__linebreak,
    STATE(82), 1,
      sym_comment,
  [1231] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      sym__linebreak,
    STATE(83), 1,
      sym_comment,
  [1241] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      sym__linebreak,
    STATE(84), 1,
      sym_comment,
  [1251] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      sym__linebreak,
    STATE(85), 1,
      sym_comment,
  [1261] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      sym__linebreak,
    STATE(86), 1,
      sym_comment,
  [1271] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      sym__linebreak,
    STATE(87), 1,
      sym_comment,
  [1281] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_comment,
  [1291] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      sym__linebreak,
    STATE(89), 1,
      sym_comment,
  [1301] = 3,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym_string,
    STATE(90), 1,
      sym_comment,
  [1311] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_comment,
  [1321] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(276), 1,
      sym_hex,
    STATE(92), 1,
      sym_comment,
  [1331] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      sym__linebreak,
    STATE(93), 1,
      sym_comment,
  [1341] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      sym__linebreak,
    STATE(94), 1,
      sym_comment,
  [1351] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_comment,
  [1361] = 1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 385,
  [SMALL_STATE(22)] = 403,
  [SMALL_STATE(23)] = 421,
  [SMALL_STATE(24)] = 439,
  [SMALL_STATE(25)] = 457,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 516,
  [SMALL_STATE(29)] = 537,
  [SMALL_STATE(30)] = 558,
  [SMALL_STATE(31)] = 579,
  [SMALL_STATE(32)] = 600,
  [SMALL_STATE(33)] = 619,
  [SMALL_STATE(34)] = 640,
  [SMALL_STATE(35)] = 657,
  [SMALL_STATE(36)] = 674,
  [SMALL_STATE(37)] = 695,
  [SMALL_STATE(38)] = 716,
  [SMALL_STATE(39)] = 733,
  [SMALL_STATE(40)] = 747,
  [SMALL_STATE(41)] = 761,
  [SMALL_STATE(42)] = 777,
  [SMALL_STATE(43)] = 793,
  [SMALL_STATE(44)] = 809,
  [SMALL_STATE(45)] = 825,
  [SMALL_STATE(46)] = 841,
  [SMALL_STATE(47)] = 855,
  [SMALL_STATE(48)] = 866,
  [SMALL_STATE(49)] = 877,
  [SMALL_STATE(50)] = 888,
  [SMALL_STATE(51)] = 899,
  [SMALL_STATE(52)] = 910,
  [SMALL_STATE(53)] = 921,
  [SMALL_STATE(54)] = 932,
  [SMALL_STATE(55)] = 943,
  [SMALL_STATE(56)] = 954,
  [SMALL_STATE(57)] = 965,
  [SMALL_STATE(58)] = 976,
  [SMALL_STATE(59)] = 987,
  [SMALL_STATE(60)] = 998,
  [SMALL_STATE(61)] = 1009,
  [SMALL_STATE(62)] = 1020,
  [SMALL_STATE(63)] = 1031,
  [SMALL_STATE(64)] = 1041,
  [SMALL_STATE(65)] = 1051,
  [SMALL_STATE(66)] = 1061,
  [SMALL_STATE(67)] = 1071,
  [SMALL_STATE(68)] = 1081,
  [SMALL_STATE(69)] = 1091,
  [SMALL_STATE(70)] = 1101,
  [SMALL_STATE(71)] = 1111,
  [SMALL_STATE(72)] = 1121,
  [SMALL_STATE(73)] = 1131,
  [SMALL_STATE(74)] = 1141,
  [SMALL_STATE(75)] = 1151,
  [SMALL_STATE(76)] = 1161,
  [SMALL_STATE(77)] = 1171,
  [SMALL_STATE(78)] = 1181,
  [SMALL_STATE(79)] = 1191,
  [SMALL_STATE(80)] = 1201,
  [SMALL_STATE(81)] = 1211,
  [SMALL_STATE(82)] = 1221,
  [SMALL_STATE(83)] = 1231,
  [SMALL_STATE(84)] = 1241,
  [SMALL_STATE(85)] = 1251,
  [SMALL_STATE(86)] = 1261,
  [SMALL_STATE(87)] = 1271,
  [SMALL_STATE(88)] = 1281,
  [SMALL_STATE(89)] = 1291,
  [SMALL_STATE(90)] = 1301,
  [SMALL_STATE(91)] = 1311,
  [SMALL_STATE(92)] = 1321,
  [SMALL_STATE(93)] = 1331,
  [SMALL_STATE(94)] = 1341,
  [SMALL_STATE(95)] = 1351,
  [SMALL_STATE(96)] = 1361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(81),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(73),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(70),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__value, 1), REDUCE(sym_gradient, 1),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(92),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(91),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2), SHIFT_REPEAT(91),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 8, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 8, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_configuration_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 7, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 7, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_gradient_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(43),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rgb, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rgb, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_hex, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_hex, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vec2, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keys, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gradient, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [222] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hypr(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
