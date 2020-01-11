#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 26
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_COLON = 2,
  anon_sym_actor = 3,
  anon_sym_boundary = 4,
  anon_sym_control = 5,
  anon_sym_entity = 6,
  anon_sym_DOT = 7,
  anon_sym_GT = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_parameters = 11,
  sym_string = 12,
  sym_name = 13,
  sym_diagram = 14,
  sym_statement = 15,
  sym_object = 16,
  sym_call = 17,
  sym_msg = 18,
  sym_self = 19,
  sym_body = 20,
  sym_identifier = 21,
  aux_sym_diagram_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_actor] = "actor",
  [anon_sym_boundary] = "boundary",
  [anon_sym_control] = "control",
  [anon_sym_entity] = "entity",
  [anon_sym_DOT] = ".",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_parameters] = "parameters",
  [sym_string] = "string",
  [sym_name] = "name",
  [sym_diagram] = "diagram",
  [sym_statement] = "statement",
  [sym_object] = "object",
  [sym_call] = "call",
  [sym_msg] = "msg",
  [sym_self] = "self",
  [sym_body] = "body",
  [sym_identifier] = "identifier",
  [aux_sym_diagram_repeat1] = "diagram_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_actor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boundary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_msg] = {
    .visible = true,
    .named = true,
  },
  [sym_self] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(12);
      if (lookahead == 'b')
        ADVANCE(17);
      if (lookahead == 'c')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_parameters);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')')
        ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 12:
      if (lookahead == 'c')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 't')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'r')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 17:
      if (lookahead == 'o')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'u')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'n')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'd')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'a')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'r')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'y')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_boundary);
      END_STATE();
    case 25:
      if (lookahead == 'o')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 't')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'r')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'o')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 32:
      if (lookahead == 'n')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 't')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'i')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 't')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'y')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\r')
        ADVANCE(41);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\r')
        ADVANCE(42);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\r')
        ADVANCE(42);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == '>' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == '\r')
        ADVANCE(49);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(77);
      if (lookahead == 'b')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(79);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(48);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == '\r')
        ADVANCE(50);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(48);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\r')
        ADVANCE(50);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(56);
      if (lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_actor);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_control);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_entity);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'c')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'o')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 80:
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\r')
        ADVANCE(82);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(81);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>')
        ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\r')
        ADVANCE(83);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(81);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>')
        ADVANCE(44);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\r')
        ADVANCE(83);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\r')
        ADVANCE(85);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(84);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\r')
        ADVANCE(86);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(84);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(44);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\r')
        ADVANCE(86);
      if (lookahead == '#')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 81},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_actor] = ACTIONS(1),
    [anon_sym_boundary] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_parameters] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_diagram] = STATE(3),
    [sym_statement] = STATE(5),
    [sym_identifier] = STATE(4),
    [aux_sym_diagram_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_name] = ACTIONS(7),
  },
  [2] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [sym_parameters] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(9),
  },
  [4] = {
    [sym_object] = STATE(10),
    [sym_call] = STATE(10),
    [sym_msg] = STATE(10),
    [sym_self] = STATE(10),
    [sym_comment] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [sym_parameters] = ACTIONS(21),
  },
  [5] = {
    [sym_statement] = STATE(11),
    [sym_identifier] = STATE(4),
    [aux_sym_diagram_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_name] = ACTIONS(7),
  },
  [6] = {
    [sym_identifier] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [anon_sym_actor] = ACTIONS(25),
    [anon_sym_boundary] = ACTIONS(25),
    [anon_sym_control] = ACTIONS(25),
    [anon_sym_entity] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_name] = ACTIONS(27),
  },
  [7] = {
    [sym_identifier] = STATE(14),
    [sym_comment] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_name] = ACTIONS(7),
  },
  [8] = {
    [sym_identifier] = STATE(15),
    [sym_comment] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_name] = ACTIONS(7),
  },
  [9] = {
    [sym_body] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_name] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
    [sym_name] = ACTIONS(37),
  },
  [11] = {
    [sym_statement] = STATE(11),
    [sym_identifier] = STATE(4),
    [aux_sym_diagram_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(5),
    [sym_string] = ACTIONS(41),
    [sym_name] = ACTIONS(41),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [sym_name] = ACTIONS(46),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [sym_name] = ACTIONS(48),
  },
  [14] = {
    [sym_comment] = ACTIONS(9),
    [sym_parameters] = ACTIONS(50),
  },
  [15] = {
    [sym_comment] = ACTIONS(9),
    [sym_parameters] = ACTIONS(52),
  },
  [16] = {
    [sym_statement] = STATE(21),
    [sym_identifier] = STATE(4),
    [aux_sym_diagram_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(54),
    [sym_string] = ACTIONS(7),
    [sym_name] = ACTIONS(7),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(58),
    [sym_string] = ACTIONS(58),
    [sym_name] = ACTIONS(58),
  },
  [18] = {
    [sym_body] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(62),
    [sym_string] = ACTIONS(62),
    [sym_name] = ACTIONS(62),
  },
  [19] = {
    [sym_body] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(66),
    [sym_string] = ACTIONS(66),
    [sym_name] = ACTIONS(66),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [sym_name] = ACTIONS(70),
  },
  [21] = {
    [sym_statement] = STATE(25),
    [sym_identifier] = STATE(4),
    [aux_sym_diagram_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(72),
    [sym_string] = ACTIONS(7),
    [sym_name] = ACTIONS(7),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [sym_name] = ACTIONS(76),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(80),
    [sym_string] = ACTIONS(80),
    [sym_name] = ACTIONS(80),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym_name] = ACTIONS(84),
  },
  [25] = {
    [sym_statement] = STATE(25),
    [sym_identifier] = STATE(4),
    [aux_sym_diagram_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(86),
    [sym_string] = ACTIONS(41),
    [sym_name] = ACTIONS(41),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_diagram, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_diagram, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(12),
  [27] = {.count = 1, .reusable = false}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_self, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_self, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 2),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_statement, 2),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_diagram_repeat1, 2),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_object, 2),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_object, 2),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [50] = {.count = 1, .reusable = true}, SHIFT(18),
  [52] = {.count = 1, .reusable = true}, SHIFT(19),
  [54] = {.count = 1, .reusable = false}, SHIFT(20),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_self, 2),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym_self, 2),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_call, 3),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym_call, 3),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_msg, 3),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_msg, 3),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_body, 2),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_body, 2),
  [72] = {.count = 1, .reusable = false}, SHIFT(24),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_call, 4),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_call, 4),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_msg, 4),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_msg, 4),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_body, 3),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_body, 3),
  [86] = {.count = 1, .reusable = false}, REDUCE(aux_sym_diagram_repeat1, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ckwnc() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
