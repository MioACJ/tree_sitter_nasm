#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COMMA = 1,
  sym_mnemonic = 2,
  anon_sym_eax = 3,
  anon_sym_ebx = 4,
  anon_sym_ecx = 5,
  anon_sym_edx = 6,
  anon_sym_esi = 7,
  anon_sym_edi = 8,
  anon_sym_esp = 9,
  anon_sym_ebp = 10,
  anon_sym_ax = 11,
  anon_sym_bx = 12,
  anon_sym_cx = 13,
  anon_sym_dx = 14,
  anon_sym_al = 15,
  anon_sym_ah = 16,
  anon_sym_bl = 17,
  anon_sym_bh = 18,
  anon_sym_cl = 19,
  anon_sym_ch = 20,
  anon_sym_dl = 21,
  anon_sym_dh = 22,
  anon_sym_r8 = 23,
  anon_sym_r9 = 24,
  anon_sym_r10 = 25,
  anon_sym_r11 = 26,
  anon_sym_r12 = 27,
  anon_sym_r13 = 28,
  anon_sym_r14 = 29,
  anon_sym_r15 = 30,
  sym_immediate = 31,
  sym_memory = 32,
  aux_sym_label_ref_token1 = 33,
  anon_sym_DOT = 34,
  aux_sym_directive_token1 = 35,
  aux_sym_directive_token2 = 36,
  anon_sym_COLON = 37,
  sym_comment = 38,
  sym_source_file = 39,
  sym__line = 40,
  sym_instruction = 41,
  sym__operand = 42,
  sym_register = 43,
  sym_label_ref = 44,
  sym_directive = 45,
  sym_label = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_instruction_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [sym_mnemonic] = "mnemonic",
  [anon_sym_eax] = "eax",
  [anon_sym_ebx] = "ebx",
  [anon_sym_ecx] = "ecx",
  [anon_sym_edx] = "edx",
  [anon_sym_esi] = "esi",
  [anon_sym_edi] = "edi",
  [anon_sym_esp] = "esp",
  [anon_sym_ebp] = "ebp",
  [anon_sym_ax] = "ax",
  [anon_sym_bx] = "bx",
  [anon_sym_cx] = "cx",
  [anon_sym_dx] = "dx",
  [anon_sym_al] = "al",
  [anon_sym_ah] = "ah",
  [anon_sym_bl] = "bl",
  [anon_sym_bh] = "bh",
  [anon_sym_cl] = "cl",
  [anon_sym_ch] = "ch",
  [anon_sym_dl] = "dl",
  [anon_sym_dh] = "dh",
  [anon_sym_r8] = "r8",
  [anon_sym_r9] = "r9",
  [anon_sym_r10] = "r10",
  [anon_sym_r11] = "r11",
  [anon_sym_r12] = "r12",
  [anon_sym_r13] = "r13",
  [anon_sym_r14] = "r14",
  [anon_sym_r15] = "r15",
  [sym_immediate] = "immediate",
  [sym_memory] = "memory",
  [aux_sym_label_ref_token1] = "label_ref_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_directive_token1] = "directive_token1",
  [aux_sym_directive_token2] = "directive_token2",
  [anon_sym_COLON] = ":",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_instruction] = "instruction",
  [sym__operand] = "_operand",
  [sym_register] = "register",
  [sym_label_ref] = "label_ref",
  [sym_directive] = "directive",
  [sym_label] = "label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_mnemonic] = sym_mnemonic,
  [anon_sym_eax] = anon_sym_eax,
  [anon_sym_ebx] = anon_sym_ebx,
  [anon_sym_ecx] = anon_sym_ecx,
  [anon_sym_edx] = anon_sym_edx,
  [anon_sym_esi] = anon_sym_esi,
  [anon_sym_edi] = anon_sym_edi,
  [anon_sym_esp] = anon_sym_esp,
  [anon_sym_ebp] = anon_sym_ebp,
  [anon_sym_ax] = anon_sym_ax,
  [anon_sym_bx] = anon_sym_bx,
  [anon_sym_cx] = anon_sym_cx,
  [anon_sym_dx] = anon_sym_dx,
  [anon_sym_al] = anon_sym_al,
  [anon_sym_ah] = anon_sym_ah,
  [anon_sym_bl] = anon_sym_bl,
  [anon_sym_bh] = anon_sym_bh,
  [anon_sym_cl] = anon_sym_cl,
  [anon_sym_ch] = anon_sym_ch,
  [anon_sym_dl] = anon_sym_dl,
  [anon_sym_dh] = anon_sym_dh,
  [anon_sym_r8] = anon_sym_r8,
  [anon_sym_r9] = anon_sym_r9,
  [anon_sym_r10] = anon_sym_r10,
  [anon_sym_r11] = anon_sym_r11,
  [anon_sym_r12] = anon_sym_r12,
  [anon_sym_r13] = anon_sym_r13,
  [anon_sym_r14] = anon_sym_r14,
  [anon_sym_r15] = anon_sym_r15,
  [sym_immediate] = sym_immediate,
  [sym_memory] = sym_memory,
  [aux_sym_label_ref_token1] = aux_sym_label_ref_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [aux_sym_directive_token2] = aux_sym_directive_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_instruction] = sym_instruction,
  [sym__operand] = sym__operand,
  [sym_register] = sym_register,
  [sym_label_ref] = sym_label_ref,
  [sym_directive] = sym_directive,
  [sym_label] = sym_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_eax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ebx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ecx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_esp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ebp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_al] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ah] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r15] = {
    .visible = true,
    .named = false,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_label_ref_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_label_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [3] = 3,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == ']') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_eax);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_eax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ebx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ebx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_ecx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_ecx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_edx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_edx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_esi);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_esi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_edi);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_edi);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_esp);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_esp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_ebp);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_ebp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ax);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_ax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_bx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_bx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_cx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_cx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_dx);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_dx);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_al);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_al);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ah);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ah);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_bl);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_bl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_bh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_bh);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_cl);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_cl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ch);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_dl);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_dl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_dh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_dh);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_r8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_r9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_r10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_r11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_r12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_r13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_r14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_r15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_immediate);
      if (lookahead == 'x') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_immediate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_immediate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_memory);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '2') ADVANCE(67);
      if (lookahead == '3') ADVANCE(68);
      if (lookahead == '4') ADVANCE(69);
      if (lookahead == '5') ADVANCE(70);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '8') ADVANCE(63);
      if (lookahead == '9') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '8') ADVANCE(63);
      if (lookahead == '9') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 's') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_label_ref_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_directive_token2);
      if (eof) ADVANCE(6);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 102},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_mnemonic] = ACTIONS(1),
    [anon_sym_eax] = ACTIONS(1),
    [anon_sym_ebx] = ACTIONS(1),
    [anon_sym_ecx] = ACTIONS(1),
    [anon_sym_edx] = ACTIONS(1),
    [anon_sym_esi] = ACTIONS(1),
    [anon_sym_edi] = ACTIONS(1),
    [anon_sym_esp] = ACTIONS(1),
    [anon_sym_ebp] = ACTIONS(1),
    [anon_sym_ax] = ACTIONS(1),
    [anon_sym_bx] = ACTIONS(1),
    [anon_sym_cx] = ACTIONS(1),
    [anon_sym_dx] = ACTIONS(1),
    [anon_sym_al] = ACTIONS(1),
    [anon_sym_ah] = ACTIONS(1),
    [anon_sym_bl] = ACTIONS(1),
    [anon_sym_bh] = ACTIONS(1),
    [anon_sym_cl] = ACTIONS(1),
    [anon_sym_ch] = ACTIONS(1),
    [anon_sym_dl] = ACTIONS(1),
    [anon_sym_dh] = ACTIONS(1),
    [anon_sym_r8] = ACTIONS(1),
    [anon_sym_r9] = ACTIONS(1),
    [anon_sym_r10] = ACTIONS(1),
    [anon_sym_r11] = ACTIONS(1),
    [anon_sym_r12] = ACTIONS(1),
    [anon_sym_r13] = ACTIONS(1),
    [anon_sym_r14] = ACTIONS(1),
    [anon_sym_r15] = ACTIONS(1),
    [sym_immediate] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [aux_sym_label_ref_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__line] = STATE(4),
    [sym_instruction] = STATE(4),
    [sym_directive] = STATE(4),
    [sym_label] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_mnemonic] = ACTIONS(5),
    [aux_sym_label_ref_token1] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym__operand] = STATE(6),
    [sym_register] = STATE(6),
    [sym_label_ref] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_mnemonic] = ACTIONS(15),
    [anon_sym_eax] = ACTIONS(17),
    [anon_sym_ebx] = ACTIONS(17),
    [anon_sym_ecx] = ACTIONS(17),
    [anon_sym_edx] = ACTIONS(17),
    [anon_sym_esi] = ACTIONS(17),
    [anon_sym_edi] = ACTIONS(17),
    [anon_sym_esp] = ACTIONS(17),
    [anon_sym_ebp] = ACTIONS(17),
    [anon_sym_ax] = ACTIONS(17),
    [anon_sym_bx] = ACTIONS(17),
    [anon_sym_cx] = ACTIONS(17),
    [anon_sym_dx] = ACTIONS(17),
    [anon_sym_al] = ACTIONS(17),
    [anon_sym_ah] = ACTIONS(17),
    [anon_sym_bl] = ACTIONS(17),
    [anon_sym_bh] = ACTIONS(17),
    [anon_sym_cl] = ACTIONS(17),
    [anon_sym_ch] = ACTIONS(17),
    [anon_sym_dl] = ACTIONS(17),
    [anon_sym_dh] = ACTIONS(17),
    [anon_sym_r8] = ACTIONS(17),
    [anon_sym_r9] = ACTIONS(17),
    [anon_sym_r10] = ACTIONS(17),
    [anon_sym_r11] = ACTIONS(17),
    [anon_sym_r12] = ACTIONS(17),
    [anon_sym_r13] = ACTIONS(17),
    [anon_sym_r14] = ACTIONS(17),
    [anon_sym_r15] = ACTIONS(17),
    [sym_immediate] = ACTIONS(19),
    [sym_memory] = ACTIONS(19),
    [aux_sym_label_ref_token1] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [sym__operand] = STATE(12),
    [sym_register] = STATE(12),
    [sym_label_ref] = STATE(12),
    [anon_sym_eax] = ACTIONS(17),
    [anon_sym_ebx] = ACTIONS(17),
    [anon_sym_ecx] = ACTIONS(17),
    [anon_sym_edx] = ACTIONS(17),
    [anon_sym_esi] = ACTIONS(17),
    [anon_sym_edi] = ACTIONS(17),
    [anon_sym_esp] = ACTIONS(17),
    [anon_sym_ebp] = ACTIONS(17),
    [anon_sym_ax] = ACTIONS(17),
    [anon_sym_bx] = ACTIONS(17),
    [anon_sym_cx] = ACTIONS(17),
    [anon_sym_dx] = ACTIONS(17),
    [anon_sym_al] = ACTIONS(17),
    [anon_sym_ah] = ACTIONS(17),
    [anon_sym_bl] = ACTIONS(17),
    [anon_sym_bh] = ACTIONS(17),
    [anon_sym_cl] = ACTIONS(17),
    [anon_sym_ch] = ACTIONS(17),
    [anon_sym_dl] = ACTIONS(17),
    [anon_sym_dh] = ACTIONS(17),
    [anon_sym_r8] = ACTIONS(17),
    [anon_sym_r9] = ACTIONS(17),
    [anon_sym_r10] = ACTIONS(17),
    [anon_sym_r11] = ACTIONS(17),
    [anon_sym_r12] = ACTIONS(17),
    [anon_sym_r13] = ACTIONS(17),
    [anon_sym_r14] = ACTIONS(17),
    [anon_sym_r15] = ACTIONS(17),
    [sym_immediate] = ACTIONS(24),
    [sym_memory] = ACTIONS(24),
    [aux_sym_label_ref_token1] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_mnemonic,
    ACTIONS(7), 1,
      aux_sym_label_ref_token1,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_comment,
    STATE(5), 5,
      sym__line,
      sym_instruction,
      sym_directive,
      sym_label,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_mnemonic,
    ACTIONS(37), 1,
      aux_sym_label_ref_token1,
    ACTIONS(40), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_comment,
    STATE(5), 5,
      sym__line,
      sym_instruction,
      sym_directive,
      sym_label,
      aux_sym_source_file_repeat1,
  [46] = 4,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(50), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_comment,
  [62] = 4,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(54), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_comment,
  [78] = 4,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(61), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_comment,
  [94] = 2,
    ACTIONS(65), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_comment,
  [105] = 2,
    ACTIONS(69), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_comment,
  [116] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_directive_token2,
    ACTIONS(73), 4,
      sym_mnemonic,
      aux_sym_label_ref_token1,
      anon_sym_DOT,
      sym_comment,
  [129] = 2,
    ACTIONS(61), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym_comment,
  [140] = 2,
    ACTIONS(79), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_comment,
  [150] = 2,
    ACTIONS(83), 2,
      sym_mnemonic,
      aux_sym_label_ref_token1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_DOT,
      sym_comment,
  [160] = 1,
    ACTIONS(85), 1,
      anon_sym_COLON,
  [164] = 1,
    ACTIONS(87), 1,
      aux_sym_directive_token1,
  [168] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 168,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_instruction, 1), SHIFT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_ref, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_ref, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nasm(void) {
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
