/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/ugbc.y"


#include "../src/ugbc.h"

int yylex();
int yyerror(Environment *, const char *);
int yydebug=0;
int errors=0;
extern int yylineno;

int yywrap() { return 1; }
 

#line 85 "src-generated/ugbc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ugbc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Remark = 3,                     /* Remark  */
  YYSYMBOL_NewLine = 4,                    /* NewLine  */
  YYSYMBOL_SEMICOLON = 5,                  /* SEMICOLON  */
  YYSYMBOL_COLON = 6,                      /* COLON  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_PLUS = 8,                       /* PLUS  */
  YYSYMBOL_MINUS = 9,                      /* MINUS  */
  YYSYMBOL_INCREMENT = 10,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 11,                 /* DECREMENT  */
  YYSYMBOL_EQUAL = 12,                     /* EQUAL  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_LTE = 15,                       /* LTE  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_GTE = 17,                       /* GTE  */
  YYSYMBOL_DISEQUAL = 18,                  /* DISEQUAL  */
  YYSYMBOL_MULTIPLICATION = 19,            /* MULTIPLICATION  */
  YYSYMBOL_DOLLAR = 20,                    /* DOLLAR  */
  YYSYMBOL_DIVISION = 21,                  /* DIVISION  */
  YYSYMBOL_RASTER = 22,                    /* RASTER  */
  YYSYMBOL_DONE = 23,                      /* DONE  */
  YYSYMBOL_AT = 24,                        /* AT  */
  YYSYMBOL_COLOR = 25,                     /* COLOR  */
  YYSYMBOL_BORDER = 26,                    /* BORDER  */
  YYSYMBOL_WAIT = 27,                      /* WAIT  */
  YYSYMBOL_NEXT = 28,                      /* NEXT  */
  YYSYMBOL_WITH = 29,                      /* WITH  */
  YYSYMBOL_BANK = 30,                      /* BANK  */
  YYSYMBOL_SPRITE = 31,                    /* SPRITE  */
  YYSYMBOL_DATA = 32,                      /* DATA  */
  YYSYMBOL_FROM = 33,                      /* FROM  */
  YYSYMBOL_OP = 34,                        /* OP  */
  YYSYMBOL_CP = 35,                        /* CP  */
  YYSYMBOL_ENABLE = 36,                    /* ENABLE  */
  YYSYMBOL_DISABLE = 37,                   /* DISABLE  */
  YYSYMBOL_HALT = 38,                      /* HALT  */
  YYSYMBOL_ECM = 39,                       /* ECM  */
  YYSYMBOL_BITMAP = 40,                    /* BITMAP  */
  YYSYMBOL_SCREEN = 41,                    /* SCREEN  */
  YYSYMBOL_ON = 42,                        /* ON  */
  YYSYMBOL_OFF = 43,                       /* OFF  */
  YYSYMBOL_ROWS = 44,                      /* ROWS  */
  YYSYMBOL_VERTICAL = 45,                  /* VERTICAL  */
  YYSYMBOL_SCROLL = 46,                    /* SCROLL  */
  YYSYMBOL_VAR = 47,                       /* VAR  */
  YYSYMBOL_AS = 48,                        /* AS  */
  YYSYMBOL_TEMPORARY = 49,                 /* TEMPORARY  */
  YYSYMBOL_XPEN = 50,                      /* XPEN  */
  YYSYMBOL_YPEN = 51,                      /* YPEN  */
  YYSYMBOL_PEEK = 52,                      /* PEEK  */
  YYSYMBOL_GOTO = 53,                      /* GOTO  */
  YYSYMBOL_HORIZONTAL = 54,                /* HORIZONTAL  */
  YYSYMBOL_MCM = 55,                       /* MCM  */
  YYSYMBOL_COMPRESS = 56,                  /* COMPRESS  */
  YYSYMBOL_EXPAND = 57,                    /* EXPAND  */
  YYSYMBOL_LOOP = 58,                      /* LOOP  */
  YYSYMBOL_REPEAT = 59,                    /* REPEAT  */
  YYSYMBOL_WHILE = 60,                     /* WHILE  */
  YYSYMBOL_TEXT = 61,                      /* TEXT  */
  YYSYMBOL_TILES = 62,                     /* TILES  */
  YYSYMBOL_COLORMAP = 63,                  /* COLORMAP  */
  YYSYMBOL_SELECT = 64,                    /* SELECT  */
  YYSYMBOL_MONOCOLOR = 65,                 /* MONOCOLOR  */
  YYSYMBOL_MULTICOLOR = 66,                /* MULTICOLOR  */
  YYSYMBOL_COLLISION = 67,                 /* COLLISION  */
  YYSYMBOL_IF = 68,                        /* IF  */
  YYSYMBOL_THEN = 69,                      /* THEN  */
  YYSYMBOL_HIT = 70,                       /* HIT  */
  YYSYMBOL_BACKGROUND = 71,                /* BACKGROUND  */
  YYSYMBOL_TO = 72,                        /* TO  */
  YYSYMBOL_RANDOM = 73,                    /* RANDOM  */
  YYSYMBOL_BYTE = 74,                      /* BYTE  */
  YYSYMBOL_WORD = 75,                      /* WORD  */
  YYSYMBOL_POSITION = 76,                  /* POSITION  */
  YYSYMBOL_CODE = 77,                      /* CODE  */
  YYSYMBOL_VARIABLES = 78,                 /* VARIABLES  */
  YYSYMBOL_MS = 79,                        /* MS  */
  YYSYMBOL_CYCLES = 80,                    /* CYCLES  */
  YYSYMBOL_S = 81,                         /* S  */
  YYSYMBOL_HASH = 82,                      /* HASH  */
  YYSYMBOL_WIDTH = 83,                     /* WIDTH  */
  YYSYMBOL_HEIGHT = 84,                    /* HEIGHT  */
  YYSYMBOL_DWORD = 85,                     /* DWORD  */
  YYSYMBOL_PEN = 86,                       /* PEN  */
  YYSYMBOL_CLEAR = 87,                     /* CLEAR  */
  YYSYMBOL_BEG = 88,                       /* BEG  */
  YYSYMBOL_END = 89,                       /* END  */
  YYSYMBOL_GAMELOOP = 90,                  /* GAMELOOP  */
  YYSYMBOL_ENDIF = 91,                     /* ENDIF  */
  YYSYMBOL_UP = 92,                        /* UP  */
  YYSYMBOL_DOWN = 93,                      /* DOWN  */
  YYSYMBOL_LEFT = 94,                      /* LEFT  */
  YYSYMBOL_RIGHT = 95,                     /* RIGHT  */
  YYSYMBOL_DEBUG = 96,                     /* DEBUG  */
  YYSYMBOL_AND = 97,                       /* AND  */
  YYSYMBOL_RANDOMIZE = 98,                 /* RANDOMIZE  */
  YYSYMBOL_GRAPHIC = 99,                   /* GRAPHIC  */
  YYSYMBOL_TEXTMAP = 100,                  /* TEXTMAP  */
  YYSYMBOL_POINT = 101,                    /* POINT  */
  YYSYMBOL_GOSUB = 102,                    /* GOSUB  */
  YYSYMBOL_RETURN = 103,                   /* RETURN  */
  YYSYMBOL_POP = 104,                      /* POP  */
  YYSYMBOL_OR = 105,                       /* OR  */
  YYSYMBOL_ELSE = 106,                     /* ELSE  */
  YYSYMBOL_NOT = 107,                      /* NOT  */
  YYSYMBOL_TRUE = 108,                     /* TRUE  */
  YYSYMBOL_FALSE = 109,                    /* FALSE  */
  YYSYMBOL_DO = 110,                       /* DO  */
  YYSYMBOL_EXIT = 111,                     /* EXIT  */
  YYSYMBOL_WEND = 112,                     /* WEND  */
  YYSYMBOL_UNTIL = 113,                    /* UNTIL  */
  YYSYMBOL_FOR = 114,                      /* FOR  */
  YYSYMBOL_STEP = 115,                     /* STEP  */
  YYSYMBOL_EVERY = 116,                    /* EVERY  */
  YYSYMBOL_MID = 117,                      /* MID  */
  YYSYMBOL_INSTR = 118,                    /* INSTR  */
  YYSYMBOL_UPPER = 119,                    /* UPPER  */
  YYSYMBOL_LOWER = 120,                    /* LOWER  */
  YYSYMBOL_STR = 121,                      /* STR  */
  YYSYMBOL_VAL = 122,                      /* VAL  */
  YYSYMBOL_STRING = 123,                   /* STRING  */
  YYSYMBOL_SPACE = 124,                    /* SPACE  */
  YYSYMBOL_FLIP = 125,                     /* FLIP  */
  YYSYMBOL_CHR = 126,                      /* CHR  */
  YYSYMBOL_ASC = 127,                      /* ASC  */
  YYSYMBOL_LEN = 128,                      /* LEN  */
  YYSYMBOL_POW = 129,                      /* POW  */
  YYSYMBOL_MILLISECOND = 130,              /* MILLISECOND  */
  YYSYMBOL_MILLISECONDS = 131,             /* MILLISECONDS  */
  YYSYMBOL_TICKS = 132,                    /* TICKS  */
  YYSYMBOL_BLACK = 133,                    /* BLACK  */
  YYSYMBOL_WHITE = 134,                    /* WHITE  */
  YYSYMBOL_RED = 135,                      /* RED  */
  YYSYMBOL_CYAN = 136,                     /* CYAN  */
  YYSYMBOL_VIOLET = 137,                   /* VIOLET  */
  YYSYMBOL_GREEN = 138,                    /* GREEN  */
  YYSYMBOL_BLUE = 139,                     /* BLUE  */
  YYSYMBOL_YELLOW = 140,                   /* YELLOW  */
  YYSYMBOL_ORANGE = 141,                   /* ORANGE  */
  YYSYMBOL_BROWN = 142,                    /* BROWN  */
  YYSYMBOL_LIGHT = 143,                    /* LIGHT  */
  YYSYMBOL_DARK = 144,                     /* DARK  */
  YYSYMBOL_GREY = 145,                     /* GREY  */
  YYSYMBOL_GRAY = 146,                     /* GRAY  */
  YYSYMBOL_MAGENTA = 147,                  /* MAGENTA  */
  YYSYMBOL_PURPLE = 148,                   /* PURPLE  */
  YYSYMBOL_LAVENDER = 149,                 /* LAVENDER  */
  YYSYMBOL_GOLD = 150,                     /* GOLD  */
  YYSYMBOL_TURQUOISE = 151,                /* TURQUOISE  */
  YYSYMBOL_TAN = 152,                      /* TAN  */
  YYSYMBOL_PINK = 153,                     /* PINK  */
  YYSYMBOL_PEACH = 154,                    /* PEACH  */
  YYSYMBOL_OLIVE = 155,                    /* OLIVE  */
  YYSYMBOL_Identifier = 156,               /* Identifier  */
  YYSYMBOL_String = 157,                   /* String  */
  YYSYMBOL_Integer = 158,                  /* Integer  */
  YYSYMBOL_YYACCEPT = 159,                 /* $accept  */
  YYSYMBOL_direct_integer = 160,           /* direct_integer  */
  YYSYMBOL_random_definition_simple = 161, /* random_definition_simple  */
  YYSYMBOL_random_definition = 162,        /* random_definition  */
  YYSYMBOL_color_enumeration = 163,        /* color_enumeration  */
  YYSYMBOL_expression = 164,               /* expression  */
  YYSYMBOL_expressions_raw = 165,          /* expressions_raw  */
  YYSYMBOL_expressions = 166,              /* expressions  */
  YYSYMBOL_position = 167,                 /* position  */
  YYSYMBOL_bank_definition_simple = 168,   /* bank_definition_simple  */
  YYSYMBOL_bank_definition_with_payload = 169, /* bank_definition_with_payload  */
  YYSYMBOL_bank_definition = 170,          /* bank_definition  */
  YYSYMBOL_raster_definition_simple = 171, /* raster_definition_simple  */
  YYSYMBOL_raster_definition_expression = 172, /* raster_definition_expression  */
  YYSYMBOL_raster_definition = 173,        /* raster_definition  */
  YYSYMBOL_next_raster_definition_simple = 174, /* next_raster_definition_simple  */
  YYSYMBOL_next_raster_definition_expression = 175, /* next_raster_definition_expression  */
  YYSYMBOL_next_raster_definition = 176,   /* next_raster_definition  */
  YYSYMBOL_color_definition_simple = 177,  /* color_definition_simple  */
  YYSYMBOL_color_definition_expression = 178, /* color_definition_expression  */
  YYSYMBOL_color_definition = 179,         /* color_definition  */
  YYSYMBOL_milliseconds = 180,             /* milliseconds  */
  YYSYMBOL_wait_definition_simple = 181,   /* wait_definition_simple  */
  YYSYMBOL_wait_definition_expression = 182, /* wait_definition_expression  */
  YYSYMBOL_wait_definition = 183,          /* wait_definition  */
  YYSYMBOL_sprite_definition_simple = 184, /* sprite_definition_simple  */
  YYSYMBOL_sprite_definition_expression = 185, /* sprite_definition_expression  */
  YYSYMBOL_sprite_definition = 186,        /* sprite_definition  */
  YYSYMBOL_bitmap_definition_simple = 187, /* bitmap_definition_simple  */
  YYSYMBOL_bitmap_definition_expression = 188, /* bitmap_definition_expression  */
  YYSYMBOL_bitmap_definition = 189,        /* bitmap_definition  */
  YYSYMBOL_textmap_definition_simple = 190, /* textmap_definition_simple  */
  YYSYMBOL_textmap_definition_expression = 191, /* textmap_definition_expression  */
  YYSYMBOL_textmap_definition = 192,       /* textmap_definition  */
  YYSYMBOL_text_definition_simple = 193,   /* text_definition_simple  */
  YYSYMBOL_text_definition = 194,          /* text_definition  */
  YYSYMBOL_tiles_definition_simple = 195,  /* tiles_definition_simple  */
  YYSYMBOL_tiles_definition_expression = 196, /* tiles_definition_expression  */
  YYSYMBOL_tiles_definition = 197,         /* tiles_definition  */
  YYSYMBOL_colormap_definition_simple = 198, /* colormap_definition_simple  */
  YYSYMBOL_colormap_definition_expression = 199, /* colormap_definition_expression  */
  YYSYMBOL_colormap_definition = 200,      /* colormap_definition  */
  YYSYMBOL_screen_definition_simple = 201, /* screen_definition_simple  */
  YYSYMBOL_screen_definition_expression = 202, /* screen_definition_expression  */
  YYSYMBOL_screen_definition = 203,        /* screen_definition  */
  YYSYMBOL_var_definition_simple = 204,    /* var_definition_simple  */
  YYSYMBOL_goto_definition = 205,          /* goto_definition  */
  YYSYMBOL_gosub_definition = 206,         /* gosub_definition  */
  YYSYMBOL_var_definition = 207,           /* var_definition  */
  YYSYMBOL_point_definition_simple = 208,  /* point_definition_simple  */
  YYSYMBOL_point_definition_expression = 209, /* point_definition_expression  */
  YYSYMBOL_point_definition = 210,         /* point_definition  */
  YYSYMBOL_on_goto_definition = 211,       /* on_goto_definition  */
  YYSYMBOL_212_1 = 212,                    /* $@1  */
  YYSYMBOL_on_gosub_definition = 213,      /* on_gosub_definition  */
  YYSYMBOL_214_2 = 214,                    /* $@2  */
  YYSYMBOL_on_definition = 215,            /* on_definition  */
  YYSYMBOL_216_3 = 216,                    /* $@3  */
  YYSYMBOL_217_4 = 217,                    /* $@4  */
  YYSYMBOL_every_definition = 218,         /* every_definition  */
  YYSYMBOL_statement = 219,                /* statement  */
  YYSYMBOL_220_5 = 220,                    /* $@5  */
  YYSYMBOL_statements_no_linenumbers = 221, /* statements_no_linenumbers  */
  YYSYMBOL_222_6 = 222,                    /* $@6  */
  YYSYMBOL_statements_with_linenumbers = 223, /* statements_with_linenumbers  */
  YYSYMBOL_224_7 = 224,                    /* $@7  */
  YYSYMBOL_statements_complex = 225,       /* statements_complex  */
  YYSYMBOL_program = 226,                  /* program  */
  YYSYMBOL_227_8 = 227                     /* $@8  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  596

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   413


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    68,    71,    74,    77,    80,    83,    86,
      91,    96,   100,   104,   108,   112,   116,   120,   124,   128,
     132,   136,   140,   144,   148,   152,   156,   160,   164,   168,
     172,   176,   180,   184,   188,   192,   196,   200,   206,   209,
     212,   216,   223,   227,   231,   235,   239,   243,   246,   249,
     252,   255,   258,   261,   264,   267,   270,   273,   276,   279,
     282,   285,   288,   291,   294,   297,   300,   303,   306,   309,
     312,   315,   318,   321,   324,   328,   332,   338,   339,   342,
     346,   350,   354,   358,   362,   366,   369,   372,   375,   378,
     381,   387,   391,   391,   394,   397,   400,   403,   406,   409,
     413,   416,   419,   422,   426,   429,   432,   435,   439,   442,
     445,   448,   454,   457,   460,   463,   466,   471,   472,   475,
     478,   483,   486,   491,   492,   495,   498,   503,   506,   511,
     512,   515,   518,   521,   526,   529,   532,   537,   538,   541,
     542,   543,   546,   549,   552,   557,   560,   563,   569,   570,
     573,   576,   579,   582,   585,   588,   591,   594,   597,   600,
     603,   606,   609,   612,   615,   620,   623,   626,   629,   632,
     635,   638,   641,   644,   647,   650,   653,   656,   659,   662,
     667,   668,   671,   674,   677,   680,   683,   689,   692,   698,
     699,   702,   707,   712,   713,   716,   719,   724,   727,   732,
     737,   738,   741,   744,   747,   752,   755,   761,   762,   765,
     768,   771,   774,   777,   782,   785,   788,   793,   794,   796,
     797,   800,   803,   806,   811,   818,   821,   827,   830,   836,
     839,   845,   850,   851,   854,   858,   858,   863,   867,   867,
     872,   872,   875,   875,   880,   883,   886,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   908,   911,   914,   917,   920,   923,   926,   926,
     931,   934,   937,   940,   943,   946,   949,   952,   955,   958,
     961,   964,   967,   970,   973,   976,   979,   980,   981,   982,
     983,   986,   989,   992,   995,   998,  1001,  1004,  1007,  1016,
    1025,  1028,  1029,  1033,  1034,  1034,  1038,  1038,  1045,  1046,
    1047,  1048,  1052,  1052
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "Remark", "NewLine",
  "SEMICOLON", "COLON", "COMMA", "PLUS", "MINUS", "INCREMENT", "DECREMENT",
  "EQUAL", "ASSIGN", "LT", "LTE", "GT", "GTE", "DISEQUAL",
  "MULTIPLICATION", "DOLLAR", "DIVISION", "RASTER", "DONE", "AT", "COLOR",
  "BORDER", "WAIT", "NEXT", "WITH", "BANK", "SPRITE", "DATA", "FROM", "OP",
  "CP", "ENABLE", "DISABLE", "HALT", "ECM", "BITMAP", "SCREEN", "ON",
  "OFF", "ROWS", "VERTICAL", "SCROLL", "VAR", "AS", "TEMPORARY", "XPEN",
  "YPEN", "PEEK", "GOTO", "HORIZONTAL", "MCM", "COMPRESS", "EXPAND",
  "LOOP", "REPEAT", "WHILE", "TEXT", "TILES", "COLORMAP", "SELECT",
  "MONOCOLOR", "MULTICOLOR", "COLLISION", "IF", "THEN", "HIT",
  "BACKGROUND", "TO", "RANDOM", "BYTE", "WORD", "POSITION", "CODE",
  "VARIABLES", "MS", "CYCLES", "S", "HASH", "WIDTH", "HEIGHT", "DWORD",
  "PEN", "CLEAR", "BEG", "END", "GAMELOOP", "ENDIF", "UP", "DOWN", "LEFT",
  "RIGHT", "DEBUG", "AND", "RANDOMIZE", "GRAPHIC", "TEXTMAP", "POINT",
  "GOSUB", "RETURN", "POP", "OR", "ELSE", "NOT", "TRUE", "FALSE", "DO",
  "EXIT", "WEND", "UNTIL", "FOR", "STEP", "EVERY", "MID", "INSTR", "UPPER",
  "LOWER", "STR", "VAL", "STRING", "SPACE", "FLIP", "CHR", "ASC", "LEN",
  "POW", "MILLISECOND", "MILLISECONDS", "TICKS", "BLACK", "WHITE", "RED",
  "CYAN", "VIOLET", "GREEN", "BLUE", "YELLOW", "ORANGE", "BROWN", "LIGHT",
  "DARK", "GREY", "GRAY", "MAGENTA", "PURPLE", "LAVENDER", "GOLD",
  "TURQUOISE", "TAN", "PINK", "PEACH", "OLIVE", "Identifier", "String",
  "Integer", "$accept", "direct_integer", "random_definition_simple",
  "random_definition", "color_enumeration", "expression",
  "expressions_raw", "expressions", "position", "bank_definition_simple",
  "bank_definition_with_payload", "bank_definition",
  "raster_definition_simple", "raster_definition_expression",
  "raster_definition", "next_raster_definition_simple",
  "next_raster_definition_expression", "next_raster_definition",
  "color_definition_simple", "color_definition_expression",
  "color_definition", "milliseconds", "wait_definition_simple",
  "wait_definition_expression", "wait_definition",
  "sprite_definition_simple", "sprite_definition_expression",
  "sprite_definition", "bitmap_definition_simple",
  "bitmap_definition_expression", "bitmap_definition",
  "textmap_definition_simple", "textmap_definition_expression",
  "textmap_definition", "text_definition_simple", "text_definition",
  "tiles_definition_simple", "tiles_definition_expression",
  "tiles_definition", "colormap_definition_simple",
  "colormap_definition_expression", "colormap_definition",
  "screen_definition_simple", "screen_definition_expression",
  "screen_definition", "var_definition_simple", "goto_definition",
  "gosub_definition", "var_definition", "point_definition_simple",
  "point_definition_expression", "point_definition", "on_goto_definition",
  "$@1", "on_gosub_definition", "$@2", "on_definition", "$@3", "$@4",
  "every_definition", "statement", "$@5", "statements_no_linenumbers",
  "$@6", "statements_with_linenumbers", "$@7", "statements_complex",
  "program", "$@8", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413
};
#endif

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-239)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -204,    55,   513,  -204,  -204,   -17,  -204,    72,   936,    41,
     -21,   936,  -204,   -10,    79,  1048,   -91,  -136,  -204,  -204,
    -204,    91,    57,    -7,  1048,    -3,    19,  -204,    78,    80,
    1048,  -204,  -204,    93,   105,  -107,  -204,  -204,    63,  -204,
     -66,  -204,  1048,     4,   824,   122,    95,  -204,   156,   173,
     179,  -204,   936,   160,  -204,  -204,  -204,   936,   936,   936,
    -204,  -204,  -204,   699,  -204,  -204,   151,   152,   153,     0,
      30,   158,   159,  1048,  -204,  -204,   161,   162,   183,   184,
     185,   187,   188,   190,   192,   195,   196,   197,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,    52,  -204,  -204,    28,  -121,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,    56,
     205,  -204,  -204,   -36,  -204,    21,  -204,   -26,  -204,  -204,
    -204,   -16,   150,   -15,   -14,   -12,    -9,   213,  -204,  -204,
    -204,    34,   191,  -204,  -204,  -204,   936,  -204,  -204,   209,
    -204,  -204,  -204,  -204,  -204,   936,   193,   194,  -204,  -204,
    -204,   -30,  -204,    44,  -204,  -204,  -204,  -204,  -204,  1048,
    -204,  -204,  -204,  -204,   936,  -204,  -204,  -204,   936,   212,
    -204,  -204,  -204,   174,  -204,  -204,  1048,  1048,  -204,   936,
    -204,  -204,  -204,   208,  -204,  -204,  -204,  -204,  -204,  -204,
    1048,  1048,  -204,  -204,  -204,   231,  -204,  -204,   114,  -204,
    1048,  -204,  1048,   236,   615,  -204,   513,   513,   221,   222,
     936,  -204,  -204,   180,   181,   182,   186,   220,   224,   225,
     226,   227,   228,   936,   936,   936,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  1048,  1048,  -204,  1048,
    1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,
    1048,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  1048,  1048,  1048,  1048,
    1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  1048,  -204,
    -204,  -204,   936,   240,  -204,  -204,  -204,   217,   150,   242,
     150,   244,   150,   245,   150,   246,   150,  -204,   150,   252,
    -204,  -204,   113,   115,    48,    62,  -204,  -204,  -204,   253,
    1048,   255,  -204,  -204,   119,   125,    66,   100,  -204,  -204,
     256,  -204,  -204,   936,  -204,  -204,   936,   936,  -204,  -204,
     247,   130,  -204,  -204,  -204,  -204,  -204,   936,  -204,   284,
     286,  -204,  -204,   936,   232,   287,  1048,   201,   288,  -204,
    1048,  -204,   615,  -204,  -204,   140,   141,  -204,  -204,   150,
    1048,   150,  1048,   147,   149,   155,   163,   164,  -204,   274,
     275,   276,   279,   282,   283,   312,   313,   316,   317,   290,
     292,   293,   294,   323,   296,   299,   303,   305,   306,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,   314,   315,   936,    81,  -204,   150,  -204,   150,
    -204,   150,  -204,   150,    49,  -204,   150,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,   150,  -204,  1048,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  1048,  -204,  -204,  -204,
    -204,  -204,  -204,   189,   198,   199,   329,   304,   308,  1048,
    1048,   341,   345,  -204,   -76,   285,   200,  1048,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  1048,  1048,  1048,
    1048,  -204,  -204,  -204,  -204,  1048,  -204,  -204,  -204,  -204,
    -204,   202,   203,  -204,  -204,  -204,  -204,  -204,  -204,   331,
    -204,   332,  -204,   206,    87,  -204,   355,  -204,   357,   358,
    -204,   359,  -204,   354,   936,   150,  1048,   333,   335,   150,
    1048,  -204,  -204,  1048,  -204,    25,   337,   338,    38,    54,
     339,  -204,  -204,   218,   219,  -204,   348,  -204,   349,  -204,
     150,  1048,   372,   373,  1048,  -204,  -204,  -204,  -204,   368,
     369,   350,   351,   268,  1048,   371,  -204,  -204,  1048,  -204,
    1048,  -204,  -204,  -204,  -204,   230,   233,   353,   356,   189,
     198,  -204,  1048,  1048,  -204,  -204,  1048,   360,  1048,   361,
     362,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     376,  -204,  -204,  -204,  1048,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     312,     0,   302,     1,   301,     0,   292,     0,     0,   280,
       0,     0,   285,     0,     0,     0,   219,     0,   267,   271,
     268,     0,     0,     0,     0,     0,     0,   265,     0,     0,
       0,   261,   284,     0,     0,     0,   290,   291,   263,   266,
     273,   270,     0,     0,     0,     0,     0,   306,   303,   308,
     310,   313,     0,     0,   123,   124,   248,     0,     0,     0,
     137,   138,   250,     0,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
      23,    28,    29,    30,    31,    32,    33,    36,    37,     0,
      38,    41,    40,     0,    47,    77,    91,     0,   148,   149,
     251,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     247,     0,     0,   180,   181,   252,     0,   183,   184,   185,
     189,   190,   253,   209,   210,     0,     0,     0,   217,   218,
     258,     0,   286,     0,   229,   260,   225,   226,   287,     0,
     195,   196,   197,   255,     0,   200,   201,   256,     0,   203,
     207,   208,   257,     0,   282,   283,     0,     0,   300,     0,
     193,   194,   254,     0,   232,   233,   259,   227,   228,   288,
       0,     0,   275,   276,   272,     0,   245,   246,     0,   289,
       0,   297,     0,     0,   302,   304,   302,   302,     0,     0,
       0,   131,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     3,     4,     6,
       8,     9,     5,    10,    72,     2,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    21,    24,    25,    26,    27,    22,    35,    39,
     139,   142,   140,   141,   143,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   145,
     146,   147,     0,     0,   129,   130,   249,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
     155,   156,     0,     0,     0,     0,   152,   151,    92,     0,
       0,     0,   170,   171,     0,     0,     0,     0,   167,   166,
       0,   182,   187,     0,   211,   214,     0,     0,   240,   242,
       0,     0,   269,   198,   199,   202,   205,     0,   262,     0,
       0,   191,   192,     0,     0,   274,     0,     0,     0,   298,
       0,   307,   302,   309,   311,     0,     0,   119,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    85,    87,    88,    89,    90,    86,    80,    81,    82,
      83,    84,     0,     0,     0,     0,    99,     0,   111,     0,
     103,     0,   107,     0,    95,   153,     0,   160,   159,   164,
     163,   158,   162,   157,   161,     0,   168,     0,   175,   174,
     179,   178,   173,   177,   172,   176,     0,   186,   188,   212,
     215,   213,   216,     0,     0,     0,   220,     0,     0,     0,
       0,     0,     0,   264,     0,     0,     0,     0,   299,   305,
     120,   122,   133,   136,   132,   135,    46,    42,    43,    45,
      44,    48,    49,    52,    53,    54,    55,     0,     0,     0,
       0,    62,    63,    64,    71,     0,    65,    66,    67,    68,
      69,     0,     0,   125,   127,    96,   109,   101,   104,    98,
     110,   102,   106,     0,     0,   150,     0,   165,     0,   234,
     241,   237,   243,   221,     0,     0,     0,     0,     0,     0,
       0,   277,   278,     0,   244,     0,     0,     0,     0,     0,
       0,   126,   128,     0,     0,   112,    97,   108,   100,   105,
       0,     0,     0,     0,     0,   222,   223,   204,   206,     0,
       0,     0,     0,   279,     0,     0,    56,    57,     0,    58,
       0,    60,    70,   114,   116,     0,     0,     0,     0,     0,
       0,   224,     0,     0,   230,   231,     0,     0,     0,     0,
       0,   113,   115,   154,   169,   236,   239,   293,   294,   281,
       0,   295,    59,    61,     0,   296
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,    10,  -204,  -204,  -204,   -39,     6,   -11,   260,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,   277,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -171,  -204,  -170,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -203,  -204,  -204,  -204,   -55,  -204,  -204
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   113,   233,   234,   114,   115,   116,   117,   309,   128,
     129,   130,    54,    55,    56,   284,   285,   286,    60,    61,
      62,   265,   118,   119,   120,   133,   134,   135,   140,   141,
     142,   180,   181,   182,   162,   163,   165,   166,   167,   170,
     171,   172,   148,   149,   150,   154,   158,   189,   155,   184,
     185,   186,   510,   542,   512,   543,   152,   443,   444,   199,
      48,   159,    49,   352,    50,   204,    51,     1,     2
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     132,   351,   191,   122,   151,   198,    70,    52,   282,   288,
     290,   123,   292,   173,   136,   294,    70,   168,   256,   178,
     156,   131,   157,   328,   257,   226,   137,   138,   124,   266,
     267,   194,   554,   268,   238,   269,   270,   271,   272,   273,
     274,   209,   275,   260,   261,   558,   212,   214,   216,   187,
     193,   188,   222,   260,   279,     3,   125,   126,   297,   298,
     555,   560,   208,   121,   330,   153,   299,   211,   213,   215,
     300,   301,   329,   559,   227,   228,   229,   139,   503,   302,
     169,   164,   521,   230,   231,   232,   331,   174,   303,   561,
     304,   305,   192,   421,   262,   263,   264,   504,    57,   306,
     307,   201,   422,    58,   262,   263,   280,   423,   202,   175,
     308,   432,   176,   495,   177,   203,   424,   179,   276,   536,
     433,   143,   144,   145,   146,   322,   277,   160,   161,   183,
     496,   190,   287,   147,   325,   127,   537,   339,   340,    53,
     283,   289,   291,    59,   293,   434,   321,   295,   332,   459,
     278,   353,   354,   334,   435,   324,   200,   336,   497,   498,
     195,   348,   205,   252,   538,   539,   253,   254,   342,   417,
     418,   419,   420,   255,   333,   428,   429,   206,   335,   344,
     345,   430,   431,   207,   210,   223,   224,   225,   235,   341,
     251,   349,   236,   237,   258,   239,   240,   375,   376,   358,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   370,   372,   374,   297,   310,   241,   242,   243,
     357,   244,   245,   311,   246,   259,   247,   312,   313,   248,
     249,   250,    70,   369,   371,   373,   314,   296,   323,   326,
     327,   337,   343,   338,   346,   315,   347,   316,   317,   350,
     355,   356,   359,   360,   361,   363,   318,   319,   362,   364,
     365,   366,   367,   368,   404,   405,   407,   308,   409,   411,
     413,   403,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   416,   446,   425,   427,   445,
     436,   449,   402,   450,   454,   457,   460,   461,   406,   426,
     408,   453,   410,   456,   412,   466,   414,   467,   415,   471,
     472,   473,   438,   468,   474,   440,   442,   475,   476,   477,
     478,   469,   470,   479,   480,   481,   448,   482,   483,   484,
     485,   486,   452,   437,   487,   455,   439,   441,   488,   458,
     489,   490,   514,   491,   492,   509,   515,   447,   519,   463,
     516,   465,   520,   451,   511,   513,   524,   523,   531,   532,
     533,   534,   540,   535,   541,  -235,  -238,   544,   549,   462,
     550,   464,   556,   557,   562,   563,   564,   565,   566,   569,
     570,   572,   573,   576,   578,   574,   575,   581,   583,   594,
     582,   584,   320,   494,   281,   590,   592,   593,   585,     0,
     586,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     517,   518,     0,     0,   493,     0,   507,   499,   525,   500,
       0,   501,     0,   502,     0,   508,   505,     0,     0,     0,
       0,     0,     0,     0,     0,   506,     0,     0,   526,   527,
     528,   529,     0,     0,     0,     0,   530,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   546,     0,   548,     0,     0,     0,   552,
       0,     0,   553,     0,     0,   577,     4,     0,     0,   579,
       0,   580,     0,     0,   545,   547,     0,     0,     0,   551,
     568,     0,     0,   571,     0,     5,     6,     0,     7,     0,
       8,     9,     0,    10,    11,     0,     0,     0,     0,     0,
     567,    12,     0,    13,    14,    15,     0,     0,     0,     0,
      16,   587,   588,     0,     0,   589,    17,   591,     0,     0,
       0,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,    24,     0,   595,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,    27,     0,     0,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    36,    37,     4,    38,
       0,     0,     0,    39,    40,    41,    42,    43,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     5,     6,     0,
       7,     0,     8,     9,     0,    10,    11,     0,     0,     0,
       0,     0,     0,    12,     0,    13,    14,    15,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,    17,    46,
       0,    47,     0,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,    27,     0,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,    37,
       0,    38,     0,     0,   217,    39,    40,    41,    42,    43,
       0,    44,    45,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,     0,    68,
       0,    46,    69,   218,   219,   220,     0,     0,     0,     0,
       0,     0,     0,     0,   221,     0,     0,     0,     0,     0,
       0,     0,     0,    71,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    63,     0,
       0,     0,     0,     0,     0,     0,   196,   197,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,     0,     0,    68,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      63,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,    64,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     0,     0,    68,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    63,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,    64,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,    68,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     0,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      11,   204,    68,    24,    15,    44,    82,    24,    24,    24,
      24,    32,    24,    24,    24,    24,    82,    24,   139,    30,
     156,    11,   158,    53,   145,    25,    36,    37,    49,     8,
       9,    42,     7,    12,    73,    14,    15,    16,    17,    18,
      19,    52,    21,    79,    80,     7,    57,    58,    59,   156,
      40,   158,    63,    79,    80,     0,    77,    78,    24,    25,
      35,     7,    52,    22,    20,   156,    32,    57,    58,    59,
      36,    37,   102,    35,    74,    75,    76,    87,    29,    45,
      87,    24,   158,    83,    84,    85,    42,    90,    54,    35,
      56,    57,   158,    45,   130,   131,   132,    48,    26,    65,
      66,     6,    54,    31,   130,   131,   132,    45,    13,    90,
      76,    45,    34,    32,    34,    20,    54,    24,    97,    32,
      54,    42,    43,    44,    45,   136,   105,    36,    37,    24,
      49,    68,   122,    54,   145,   156,    49,   176,   177,   156,
     156,   156,   156,    71,   156,    45,   136,   156,   159,   352,
     129,   206,   207,   164,    54,   145,    34,   168,    77,    78,
     156,   200,     6,   135,    77,    78,   138,   139,   179,    56,
      57,    56,    57,   145,   164,    56,    57,     4,   168,   190,
     191,    56,    57,     4,    24,    34,    34,    34,   158,   179,
     138,   202,    34,    34,   138,    34,    34,   236,   237,   210,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   223,   224,   225,    24,    25,    34,    34,    34,
     210,    34,    34,    32,    34,    20,    34,    36,    37,    34,
      34,    34,    82,   223,   224,   225,    45,    24,    29,    46,
      46,    29,    34,    69,    13,    54,   132,    56,    57,    13,
      29,    29,    72,    72,    72,    35,    65,    66,    72,    35,
      35,    35,    35,    35,    24,    48,    24,    76,    24,    24,
      24,   282,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,    33,   156,    34,    33,    42,
      34,     7,   282,     7,     7,     7,   156,   156,   288,   310,
     290,    69,   292,   102,   294,   158,   296,   158,   298,    35,
      35,    35,   323,   158,    35,   326,   327,    35,    35,     7,
       7,   158,   158,     7,     7,    35,   337,    35,    35,    35,
       7,    35,   343,   323,    35,   346,   326,   327,    35,   350,
      35,    35,    13,    29,    29,   156,    42,   337,     7,   360,
      42,   362,     7,   343,   156,   156,   156,    72,   156,   156,
      29,    29,     7,   157,     7,     7,     7,    13,    35,   359,
      35,   361,    35,    35,    35,   157,   157,    29,    29,     7,
       7,    13,    13,   115,    13,    35,    35,   157,    35,    13,
     157,    35,   132,   404,   117,    35,    35,    35,   569,    -1,
     570,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     449,   450,    -1,    -1,   404,    -1,   427,   407,   457,   409,
      -1,   411,    -1,   413,    -1,   436,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,   477,   478,
     479,   480,    -1,    -1,    -1,    -1,   485,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   514,    -1,   516,    -1,    -1,    -1,   520,
      -1,    -1,   523,    -1,    -1,   554,     3,    -1,    -1,   558,
      -1,   560,    -1,    -1,   514,   515,    -1,    -1,    -1,   519,
     541,    -1,    -1,   544,    -1,    22,    23,    -1,    25,    -1,
      27,    28,    -1,    30,    31,    -1,    -1,    -1,    -1,    -1,
     540,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      47,   572,   573,    -1,    -1,   576,    53,   578,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    -1,   594,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    91,    -1,    -1,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,     3,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,    -1,   116,
     117,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    53,   156,
      -1,   158,    -1,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    91,    -1,    -1,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
      -1,   106,    -1,    -1,    25,   110,   111,   112,   113,   114,
      -1,   116,   117,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      -1,   156,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
      34,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,    34,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   226,   227,     0,     3,    22,    23,    25,    27,    28,
      30,    31,    38,    40,    41,    42,    47,    53,    58,    59,
      60,    61,    62,    63,    68,    88,    89,    91,    94,    95,
      96,    98,    99,   100,   101,   102,   103,   104,   106,   110,
     111,   112,   113,   114,   116,   117,   156,   158,   219,   221,
     223,   225,    24,   156,   171,   172,   173,    26,    31,    71,
     177,   178,   179,    34,    50,    51,    52,    67,    70,    73,
      82,    94,    95,   107,   108,   109,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   160,   163,   164,   165,   166,   181,   182,
     183,    22,    24,    32,    49,    77,    78,   156,   168,   169,
     170,   160,   166,   184,   185,   186,    24,    36,    37,    87,
     187,   188,   189,    42,    43,    44,    45,    54,   201,   202,
     203,   166,   215,   156,   204,   207,   156,   158,   205,   220,
      36,    37,   193,   194,    24,   195,   196,   197,    24,    87,
     198,   199,   200,   166,    90,    90,    34,    34,   166,    24,
     190,   191,   192,    24,   208,   209,   210,   156,   158,   206,
      68,    68,   158,   160,   166,   156,    42,    43,   164,   218,
      34,     6,    13,    20,   224,     6,     4,     4,   160,   166,
      24,   160,   166,   160,   166,   160,   166,    25,    74,    75,
      76,    85,   166,    34,    34,    34,    25,    74,    75,    76,
      83,    84,    85,   161,   162,   158,    34,    34,   164,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,   138,   135,   138,   139,   145,   139,   145,   138,    20,
      79,    80,   130,   131,   132,   180,     8,     9,    12,    14,
      15,    16,    17,    18,    19,    21,    97,   105,   129,    80,
     132,   180,    24,   156,   174,   175,   176,   160,    24,   156,
      24,   156,    24,   156,    24,   156,    24,    24,    25,    32,
      36,    37,    45,    54,    56,    57,    65,    66,    76,   167,
      25,    32,    36,    37,    45,    54,    56,    57,    65,    66,
     167,   160,   166,    29,   160,   166,    46,    46,    53,   102,
      20,    42,   166,   160,   166,   160,   166,    29,    69,   164,
     164,   160,   166,    34,   166,   166,    13,   132,   164,   166,
      13,   221,   222,   225,   225,    29,    29,   160,   166,    72,
      72,    72,    72,    35,    35,    35,    35,    35,    35,   160,
     166,   160,   166,   160,   166,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   160,   166,    24,    48,   160,    24,   160,    24,
     160,    24,   160,    24,   160,   160,    33,    56,    57,    56,
      57,    45,    54,    45,    54,    34,   166,    33,    56,    57,
      56,    57,    45,    54,    45,    54,    34,   160,   166,   160,
     166,   160,   166,   216,   217,    42,   156,   160,   166,     7,
       7,   160,   166,    69,     7,   166,   102,     7,   166,   221,
     156,   156,   160,   166,   160,   166,   158,   158,   158,   158,
     158,    35,    35,    35,    35,    35,    35,     7,     7,     7,
       7,    35,    35,    35,    35,     7,    35,    35,    35,    35,
      35,    29,    29,   160,   166,    32,    49,    77,    78,   160,
     160,   160,   160,    29,    48,   160,   160,   166,   166,   156,
     211,   156,   213,   156,    13,    42,    42,   164,   164,     7,
       7,   158,   160,    72,   156,   164,   164,   164,   164,   164,
     164,   156,   156,    29,    29,   157,    32,    49,    77,    78,
       7,     7,   212,   214,    13,   160,   166,   160,   166,    35,
      35,   160,   166,   166,     7,    35,    35,    35,     7,    35,
       7,    35,    35,   157,   157,    29,    29,   160,   166,     7,
       7,   166,    13,    13,    35,    35,   115,   164,    13,   164,
     164,   157,   157,    35,    35,   211,   213,   166,   166,   166,
      35,   166,    35,    35,    13,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   159,   160,   161,   161,   161,   161,   161,   161,   161,
     162,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   166,   167,   167,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   169,   169,   169,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   177,   178,   178,   178,   179,   179,   180,
     180,   180,   181,   181,   181,   182,   182,   182,   183,   183,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     186,   186,   187,   187,   187,   187,   187,   188,   188,   189,
     189,   190,   191,   192,   192,   193,   193,   194,   195,   196,
     197,   197,   198,   198,   198,   199,   199,   200,   200,   201,
     201,   201,   201,   201,   202,   202,   202,   203,   203,   204,
     204,   204,   204,   204,   204,   205,   205,   206,   206,   207,
     208,   209,   210,   210,   211,   212,   211,   213,   214,   213,
     216,   215,   217,   215,   218,   218,   218,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   220,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   221,   222,   221,   224,   223,   225,   225,
     225,   225,   227,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     4,     4,     4,     4,     4,     1,     4,     4,
       1,     1,     4,     4,     4,     4,     6,     6,     6,     8,
       6,     8,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     4,     2,     3,     1,     1,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     2,     3,     4,     5,     4,     3,
       5,     4,     4,     3,     4,     5,     4,     3,     5,     4,
       4,     3,     5,     7,     6,     7,     6,     1,     1,     3,
       4,     3,     4,     1,     1,     3,     4,     3,     4,     1,
       1,     2,     4,     4,     2,     4,     4,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     2,     2,     3,     7,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     2,     2,     3,     7,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     1,     1,     1,     3,     2,     3,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     1,     5,     2,     5,     1,     1,     1,
       1,     2,     3,     3,     2,     3,     3,     1,     1,     0,
       3,     4,     5,     5,     6,     1,     1,     1,     1,     1,
       6,     6,     1,     1,     1,     0,     4,     1,     0,     4,
       0,     4,     0,     4,     4,     1,     1,     2,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     4,     1,     1,     1,     0,     3,
       1,     1,     2,     1,     3,     2,     2,     5,     5,     6,
       1,     8,     2,     2,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     8,     8,     8,    10,     2,     3,     4,
       2,     1,     0,     1,     0,     4,     0,     3,     1,     3,
       1,     3,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (_environment, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, _environment); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void * _environment)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (_environment);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void * _environment)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, _environment);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, void * _environment)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), _environment);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, _environment); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void * _environment)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_environment);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void * _environment)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* direct_integer: HASH Integer  */
#line 63 "src/ugbc.y"
                 {
        (yyval.integer) = (yyvsp[0].integer);
    }
#line 2251 "src-generated/ugbc.tab.c"
    break;

  case 3: /* random_definition_simple: BYTE  */
#line 68 "src/ugbc.y"
           {
        (yyval.string) = random_value( _environment, VT_BYTE )->name;
    }
#line 2259 "src-generated/ugbc.tab.c"
    break;

  case 4: /* random_definition_simple: WORD  */
#line 71 "src/ugbc.y"
           {
        (yyval.string) = random_value( _environment, VT_WORD )->name;
    }
#line 2267 "src-generated/ugbc.tab.c"
    break;

  case 5: /* random_definition_simple: DWORD  */
#line 74 "src/ugbc.y"
            {
        (yyval.string) = random_value( _environment, VT_DWORD )->name;
    }
#line 2275 "src-generated/ugbc.tab.c"
    break;

  case 6: /* random_definition_simple: POSITION  */
#line 77 "src/ugbc.y"
               {
        (yyval.string) = random_value( _environment, VT_POSITION )->name;
    }
#line 2283 "src-generated/ugbc.tab.c"
    break;

  case 7: /* random_definition_simple: COLOR  */
#line 80 "src/ugbc.y"
            {
        (yyval.string) = random_value( _environment, VT_COLOR )->name;
    }
#line 2291 "src-generated/ugbc.tab.c"
    break;

  case 8: /* random_definition_simple: WIDTH  */
#line 83 "src/ugbc.y"
            {
        (yyval.string) = random_width( _environment )->name;
    }
#line 2299 "src-generated/ugbc.tab.c"
    break;

  case 9: /* random_definition_simple: HEIGHT  */
#line 86 "src/ugbc.y"
             {
        (yyval.string) = random_height( _environment )->name;
    }
#line 2307 "src-generated/ugbc.tab.c"
    break;

  case 10: /* random_definition: random_definition_simple  */
#line 91 "src/ugbc.y"
                               {
          (yyval.string) = (yyvsp[0].string);
      }
#line 2315 "src-generated/ugbc.tab.c"
    break;

  case 11: /* color_enumeration: BLACK  */
#line 96 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLACK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BLACK );
      }
#line 2324 "src-generated/ugbc.tab.c"
    break;

  case 12: /* color_enumeration: WHITE  */
#line 100 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color WHITE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_WHITE );
      }
#line 2333 "src-generated/ugbc.tab.c"
    break;

  case 13: /* color_enumeration: RED  */
#line 104 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLACK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_RED );
      }
#line 2342 "src-generated/ugbc.tab.c"
    break;

  case 14: /* color_enumeration: CYAN  */
#line 108 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color CYAN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_CYAN );
      }
#line 2351 "src-generated/ugbc.tab.c"
    break;

  case 15: /* color_enumeration: VIOLET  */
#line 112 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color VIOLET)" )->name;
          variable_store( _environment, (yyval.string), COLOR_VIOLET );
      }
#line 2360 "src-generated/ugbc.tab.c"
    break;

  case 16: /* color_enumeration: GREEN  */
#line 116 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GREEN );
      }
#line 2369 "src-generated/ugbc.tab.c"
    break;

  case 17: /* color_enumeration: BLUE  */
#line 120 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BLUE );
      }
#line 2378 "src-generated/ugbc.tab.c"
    break;

  case 18: /* color_enumeration: YELLOW  */
#line 124 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color YELLOW)" )->name;
          variable_store( _environment, (yyval.string), COLOR_YELLOW );
      }
#line 2387 "src-generated/ugbc.tab.c"
    break;

  case 19: /* color_enumeration: ORANGE  */
#line 128 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color ORANGE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_ORANGE );
      }
#line 2396 "src-generated/ugbc.tab.c"
    break;

  case 20: /* color_enumeration: BROWN  */
#line 132 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BROWN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BROWN );
      }
#line 2405 "src-generated/ugbc.tab.c"
    break;

  case 21: /* color_enumeration: LIGHT RED  */
#line 136 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT RED)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_RED );
      }
#line 2414 "src-generated/ugbc.tab.c"
    break;

  case 22: /* color_enumeration: DARK GREY  */
#line 140 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color DARK GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_DARK_GREY );
      }
#line 2423 "src-generated/ugbc.tab.c"
    break;

  case 23: /* color_enumeration: GREY  */
#line 144 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GREY );
      }
#line 2432 "src-generated/ugbc.tab.c"
    break;

  case 24: /* color_enumeration: LIGHT GREEN  */
#line 148 "src/ugbc.y"
                    {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_GREEN );
      }
#line 2441 "src-generated/ugbc.tab.c"
    break;

  case 25: /* color_enumeration: LIGHT BLUE  */
#line 152 "src/ugbc.y"
                   {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_BLUE );
      }
#line 2450 "src-generated/ugbc.tab.c"
    break;

  case 26: /* color_enumeration: LIGHT GREY  */
#line 156 "src/ugbc.y"
                   {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_GREY );
      }
#line 2459 "src-generated/ugbc.tab.c"
    break;

  case 27: /* color_enumeration: DARK BLUE  */
#line 160 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color DARK BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_DARK_BLUE );
      }
#line 2468 "src-generated/ugbc.tab.c"
    break;

  case 28: /* color_enumeration: MAGENTA  */
#line 164 "src/ugbc.y"
                {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color MAGENTA)" )->name;
          variable_store( _environment, (yyval.string), COLOR_MAGENTA );
      }
#line 2477 "src-generated/ugbc.tab.c"
    break;

  case 29: /* color_enumeration: PURPLE  */
#line 168 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PURPLE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PURPLE );
      }
#line 2486 "src-generated/ugbc.tab.c"
    break;

  case 30: /* color_enumeration: LAVENDER  */
#line 172 "src/ugbc.y"
                 {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LAVENDER)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LAVENDER );
      }
#line 2495 "src-generated/ugbc.tab.c"
    break;

  case 31: /* color_enumeration: GOLD  */
#line 176 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GOLD)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GOLD );
      }
#line 2504 "src-generated/ugbc.tab.c"
    break;

  case 32: /* color_enumeration: TURQUOISE  */
#line 180 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color TURQUOISE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_TURQUOISE );
      }
#line 2513 "src-generated/ugbc.tab.c"
    break;

  case 33: /* color_enumeration: TAN  */
#line 184 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color TAN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_TAN );
      }
#line 2522 "src-generated/ugbc.tab.c"
    break;

  case 34: /* color_enumeration: YELLOW GREEN  */
#line 188 "src/ugbc.y"
                     {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color YELLOW GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_YELLOW_GREEN );
      }
#line 2531 "src-generated/ugbc.tab.c"
    break;

  case 35: /* color_enumeration: OLIVE GREEN  */
#line 192 "src/ugbc.y"
                    {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color OLIVE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_OLIVE_GREEN );
      }
#line 2540 "src-generated/ugbc.tab.c"
    break;

  case 36: /* color_enumeration: PINK  */
#line 196 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PINK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PINK );
      }
#line 2549 "src-generated/ugbc.tab.c"
    break;

  case 37: /* color_enumeration: PEACH  */
#line 200 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PEACH)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PEACH );
      }
#line 2558 "src-generated/ugbc.tab.c"
    break;

  case 38: /* expression: Identifier  */
#line 206 "src/ugbc.y"
                 { 
        (yyval.string) = (yyvsp[0].string);
      }
#line 2566 "src-generated/ugbc.tab.c"
    break;

  case 39: /* expression: Identifier DOLLAR  */
#line 209 "src/ugbc.y"
                        { 
        (yyval.string) = (yyvsp[-1].string);
      }
#line 2574 "src-generated/ugbc.tab.c"
    break;

  case 40: /* expression: Integer  */
#line 212 "src/ugbc.y"
              { 
        (yyval.string) = variable_temporary( _environment, VT_WORD, "(integer value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2583 "src-generated/ugbc.tab.c"
    break;

  case 41: /* expression: String  */
#line 216 "src/ugbc.y"
             { 
        outline1("; (expression string: \"%s\")", (yyvsp[0].string) );
        (yyval.string) = variable_temporary( _environment, VT_STRING, "(string value)" )->name;
        outline1("; %s", (yyval.string) );
        variable_store_string( _environment, (yyval.string), (yyvsp[0].string) );
        outline2("; variable stored: %s = %s", (yyval.string), (yyvsp[0].string) );
      }
#line 2595 "src-generated/ugbc.tab.c"
    break;

  case 42: /* expression: OP BYTE CP Integer  */
#line 223 "src/ugbc.y"
                         { 
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(BYTE value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2604 "src-generated/ugbc.tab.c"
    break;

  case 43: /* expression: OP WORD CP Integer  */
#line 227 "src/ugbc.y"
                         { 
        (yyval.string) = variable_temporary( _environment, VT_WORD, "(WORD value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2613 "src-generated/ugbc.tab.c"
    break;

  case 44: /* expression: OP DWORD CP Integer  */
#line 231 "src/ugbc.y"
                          { 
        (yyval.string) = variable_temporary( _environment, VT_DWORD, "(DWORD value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2622 "src-generated/ugbc.tab.c"
    break;

  case 45: /* expression: OP POSITION CP Integer  */
#line 235 "src/ugbc.y"
                             { 
        (yyval.string) = variable_temporary( _environment, VT_POSITION, "(POSITION value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2631 "src-generated/ugbc.tab.c"
    break;

  case 46: /* expression: OP COLOR CP Integer  */
#line 239 "src/ugbc.y"
                          { 
        (yyval.string) = variable_temporary( _environment, VT_COLOR, "(COLOR value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2640 "src-generated/ugbc.tab.c"
    break;

  case 47: /* expression: color_enumeration  */
#line 243 "src/ugbc.y"
                        { 
        (yyval.string) = (yyvsp[0].string);
      }
#line 2648 "src-generated/ugbc.tab.c"
    break;

  case 48: /* expression: PEEK OP direct_integer CP  */
#line 246 "src/ugbc.y"
                                {
        (yyval.string) = peek( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2656 "src-generated/ugbc.tab.c"
    break;

  case 49: /* expression: PEEK OP expressions CP  */
#line 249 "src/ugbc.y"
                             {
        (yyval.string) = peek_var( _environment, (yyvsp[-1].string) )->name;
      }
#line 2664 "src-generated/ugbc.tab.c"
    break;

  case 50: /* expression: XPEN  */
#line 252 "src/ugbc.y"
           {
        (yyval.string) = xpen( _environment )->name;
      }
#line 2672 "src-generated/ugbc.tab.c"
    break;

  case 51: /* expression: YPEN  */
#line 255 "src/ugbc.y"
           {
        (yyval.string) = ypen( _environment )->name;
      }
#line 2680 "src-generated/ugbc.tab.c"
    break;

  case 52: /* expression: COLLISION OP direct_integer CP  */
#line 258 "src/ugbc.y"
                                     {
        (yyval.string) = collision_to( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2688 "src-generated/ugbc.tab.c"
    break;

  case 53: /* expression: COLLISION OP expressions CP  */
#line 261 "src/ugbc.y"
                                  {
        (yyval.string) = collision_to_vars( _environment, (yyvsp[-1].string) )->name;
      }
#line 2696 "src-generated/ugbc.tab.c"
    break;

  case 54: /* expression: HIT OP direct_integer CP  */
#line 264 "src/ugbc.y"
                               {
        (yyval.string) = collision_to( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2704 "src-generated/ugbc.tab.c"
    break;

  case 55: /* expression: HIT OP expressions CP  */
#line 267 "src/ugbc.y"
                            {
        (yyval.string) = collision_to_vars( _environment, (yyvsp[-1].string) )->name;
      }
#line 2712 "src-generated/ugbc.tab.c"
    break;

  case 56: /* expression: LEFT OP expression COMMA expression CP  */
#line 270 "src/ugbc.y"
                                             {
        (yyval.string) = variable_string_left( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2720 "src-generated/ugbc.tab.c"
    break;

  case 57: /* expression: RIGHT OP expression COMMA expression CP  */
#line 273 "src/ugbc.y"
                                              {
        (yyval.string) = variable_string_right( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2728 "src-generated/ugbc.tab.c"
    break;

  case 58: /* expression: MID OP expression COMMA expression CP  */
#line 276 "src/ugbc.y"
                                            {
        (yyval.string) = variable_string_mid( _environment, (yyvsp[-3].string), (yyvsp[-1].string), NULL )->name;
    }
#line 2736 "src-generated/ugbc.tab.c"
    break;

  case 59: /* expression: MID OP expression COMMA expression COMMA expression CP  */
#line 279 "src/ugbc.y"
                                                             {
        (yyval.string) = variable_string_mid( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2744 "src-generated/ugbc.tab.c"
    break;

  case 60: /* expression: INSTR OP expression COMMA expression CP  */
#line 282 "src/ugbc.y"
                                              {
        (yyval.string) = variable_string_instr( _environment, (yyvsp[-3].string), (yyvsp[-1].string), NULL )->name;
    }
#line 2752 "src-generated/ugbc.tab.c"
    break;

  case 61: /* expression: INSTR OP expression COMMA expression COMMA expression CP  */
#line 285 "src/ugbc.y"
                                                               {
        (yyval.string) = variable_string_instr( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2760 "src-generated/ugbc.tab.c"
    break;

  case 62: /* expression: UPPER OP expression CP  */
#line 288 "src/ugbc.y"
                             {
        (yyval.string) = variable_string_upper( _environment, (yyvsp[-1].string) )->name;
    }
#line 2768 "src-generated/ugbc.tab.c"
    break;

  case 63: /* expression: LOWER OP expression CP  */
#line 291 "src/ugbc.y"
                             {
        (yyval.string) = variable_string_lower( _environment, (yyvsp[-1].string) )->name;
    }
#line 2776 "src-generated/ugbc.tab.c"
    break;

  case 64: /* expression: STR OP expression CP  */
#line 294 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_str( _environment, (yyvsp[-1].string) )->name;
    }
#line 2784 "src-generated/ugbc.tab.c"
    break;

  case 65: /* expression: SPACE OP expression CP  */
#line 297 "src/ugbc.y"
                             {
        (yyval.string) = variable_string_space( _environment, (yyvsp[-1].string) )->name;
    }
#line 2792 "src-generated/ugbc.tab.c"
    break;

  case 66: /* expression: FLIP OP expression CP  */
#line 300 "src/ugbc.y"
                            {
        (yyval.string) = variable_string_flip( _environment, (yyvsp[-1].string) )->name;
    }
#line 2800 "src-generated/ugbc.tab.c"
    break;

  case 67: /* expression: CHR OP expression CP  */
#line 303 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_chr( _environment, (yyvsp[-1].string) )->name;
    }
#line 2808 "src-generated/ugbc.tab.c"
    break;

  case 68: /* expression: ASC OP expression CP  */
#line 306 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_asc( _environment, (yyvsp[-1].string) )->name;
    }
#line 2816 "src-generated/ugbc.tab.c"
    break;

  case 69: /* expression: LEN OP expression CP  */
#line 309 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_len( _environment, (yyvsp[-1].string) )->name;
    }
#line 2824 "src-generated/ugbc.tab.c"
    break;

  case 70: /* expression: STRING OP expression COMMA expression CP  */
#line 312 "src/ugbc.y"
                                               {
        (yyval.string) = variable_string_string( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2832 "src-generated/ugbc.tab.c"
    break;

  case 71: /* expression: VAL OP expression CP  */
#line 315 "src/ugbc.y"
                           {
        (yyval.string) = variable_string_val( _environment, (yyvsp[-1].string) )->name;
    }
#line 2840 "src-generated/ugbc.tab.c"
    break;

  case 72: /* expression: RANDOM random_definition  */
#line 318 "src/ugbc.y"
                               {
        (yyval.string) = (yyvsp[0].string);
    }
#line 2848 "src-generated/ugbc.tab.c"
    break;

  case 73: /* expression: OP expressions CP  */
#line 321 "src/ugbc.y"
                        {
        (yyval.string) = (yyvsp[-1].string);
    }
#line 2856 "src-generated/ugbc.tab.c"
    break;

  case 74: /* expression: TRUE  */
#line 324 "src/ugbc.y"
           {
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(true)" )->name;
        variable_store( _environment, (yyval.string), 255 );
    }
#line 2865 "src-generated/ugbc.tab.c"
    break;

  case 75: /* expression: FALSE  */
#line 328 "src/ugbc.y"
            {
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(false)" )->name;
        variable_store( _environment, (yyval.string), 255 );
    }
#line 2874 "src-generated/ugbc.tab.c"
    break;

  case 76: /* expression: NOT expression  */
#line 332 "src/ugbc.y"
                     {
        (yyval.string) = variable_not( _environment, (yyvsp[0].string) )->name;
    }
#line 2882 "src-generated/ugbc.tab.c"
    break;

  case 77: /* expressions_raw: expression  */
#line 338 "src/ugbc.y"
                 { (yyval.string) = (yyvsp[0].string); }
#line 2888 "src-generated/ugbc.tab.c"
    break;

  case 78: /* expressions_raw: expression PLUS expressions_raw  */
#line 339 "src/ugbc.y"
                                      {
        (yyval.string) = variable_add( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2896 "src-generated/ugbc.tab.c"
    break;

  case 79: /* expressions_raw: expression MINUS expressions_raw  */
#line 342 "src/ugbc.y"
                                       {
        (yyval.string) = variable_sub( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s - %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2905 "src-generated/ugbc.tab.c"
    break;

  case 80: /* expressions_raw: expression MULTIPLICATION expressions_raw  */
#line 346 "src/ugbc.y"
                                                {
        (yyval.string) = variable_mul( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s * %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2914 "src-generated/ugbc.tab.c"
    break;

  case 81: /* expressions_raw: expression DIVISION expressions_raw  */
#line 350 "src/ugbc.y"
                                          {
        (yyval.string) = variable_div( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s / %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2923 "src-generated/ugbc.tab.c"
    break;

  case 82: /* expressions_raw: expression AND expressions_raw  */
#line 354 "src/ugbc.y"
                                     {
        (yyval.string) = variable_and( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s AND %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2932 "src-generated/ugbc.tab.c"
    break;

  case 83: /* expressions_raw: expression OR expressions_raw  */
#line 358 "src/ugbc.y"
                                    {
        (yyval.string) = variable_or( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s OR %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2941 "src-generated/ugbc.tab.c"
    break;

  case 84: /* expressions_raw: expression POW expressions_raw  */
#line 362 "src/ugbc.y"
                                     {
        (yyval.string) = variable_pow( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s ^ %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2950 "src-generated/ugbc.tab.c"
    break;

  case 85: /* expressions_raw: expression EQUAL expressions_raw  */
#line 366 "src/ugbc.y"
                                       {
        (yyval.string) = variable_compare( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2958 "src-generated/ugbc.tab.c"
    break;

  case 86: /* expressions_raw: expression DISEQUAL expressions_raw  */
#line 369 "src/ugbc.y"
                                          {
        (yyval.string) = variable_compare_not( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2966 "src-generated/ugbc.tab.c"
    break;

  case 87: /* expressions_raw: expression LT expressions_raw  */
#line 372 "src/ugbc.y"
                                    {
        (yyval.string) = variable_less_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2974 "src-generated/ugbc.tab.c"
    break;

  case 88: /* expressions_raw: expression LTE expressions_raw  */
#line 375 "src/ugbc.y"
                                     {
        (yyval.string) = variable_less_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 1 )->name;
    }
#line 2982 "src-generated/ugbc.tab.c"
    break;

  case 89: /* expressions_raw: expression GT expressions_raw  */
#line 378 "src/ugbc.y"
                                    {
        (yyval.string) = variable_greater_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2990 "src-generated/ugbc.tab.c"
    break;

  case 90: /* expressions_raw: expression GTE expressions_raw  */
#line 381 "src/ugbc.y"
                                     {
        (yyval.string) = variable_greater_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2998 "src-generated/ugbc.tab.c"
    break;

  case 91: /* expressions: expressions_raw  */
#line 387 "src/ugbc.y"
                    {
      (yyval.string) = (yyvsp[0].string);
    }
#line 3006 "src-generated/ugbc.tab.c"
    break;

  case 94: /* bank_definition_simple: AT direct_integer  */
#line 394 "src/ugbc.y"
                    {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 3014 "src-generated/ugbc.tab.c"
    break;

  case 95: /* bank_definition_simple: Identifier AT direct_integer  */
#line 397 "src/ugbc.y"
                                 {
      bank_define( _environment, (yyvsp[-2].string), BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 3022 "src-generated/ugbc.tab.c"
    break;

  case 96: /* bank_definition_simple: AT direct_integer AS DATA  */
#line 400 "src/ugbc.y"
                              {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[-2].integer), NULL );
  }
#line 3030 "src-generated/ugbc.tab.c"
    break;

  case 97: /* bank_definition_simple: Identifier AT direct_integer AS DATA  */
#line 403 "src/ugbc.y"
                                         {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), NULL );
  }
#line 3038 "src-generated/ugbc.tab.c"
    break;

  case 98: /* bank_definition_simple: DATA Identifier AT direct_integer  */
#line 406 "src/ugbc.y"
                                      {
      bank_define( _environment, (yyvsp[-2].string), BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 3046 "src-generated/ugbc.tab.c"
    break;

  case 99: /* bank_definition_simple: DATA AT direct_integer  */
#line 409 "src/ugbc.y"
                           {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 3054 "src-generated/ugbc.tab.c"
    break;

  case 100: /* bank_definition_simple: Identifier AT direct_integer AS CODE  */
#line 413 "src/ugbc.y"
                                         {
      bank_define( _environment, (yyvsp[-4].string), BT_CODE, (yyvsp[-2].integer), NULL );
  }
#line 3062 "src-generated/ugbc.tab.c"
    break;

  case 101: /* bank_definition_simple: AT direct_integer AS CODE  */
#line 416 "src/ugbc.y"
                              {
      bank_define( _environment, NULL, BT_CODE, (yyvsp[-2].integer), NULL );
  }
#line 3070 "src-generated/ugbc.tab.c"
    break;

  case 102: /* bank_definition_simple: CODE Identifier AT direct_integer  */
#line 419 "src/ugbc.y"
                                      {
      bank_define( _environment, (yyvsp[-2].string), BT_CODE, (yyvsp[0].integer), NULL );
  }
#line 3078 "src-generated/ugbc.tab.c"
    break;

  case 103: /* bank_definition_simple: CODE AT direct_integer  */
#line 422 "src/ugbc.y"
                           {
      bank_define( _environment, NULL, BT_CODE, (yyvsp[0].integer), NULL );
  }
#line 3086 "src-generated/ugbc.tab.c"
    break;

  case 104: /* bank_definition_simple: AT direct_integer AS VARIABLES  */
#line 426 "src/ugbc.y"
                                   {
      bank_define( _environment, NULL, BT_VARIABLES, (yyvsp[-2].integer), NULL );
  }
#line 3094 "src-generated/ugbc.tab.c"
    break;

  case 105: /* bank_definition_simple: Identifier AT direct_integer AS VARIABLES  */
#line 429 "src/ugbc.y"
                                              {
      bank_define( _environment, (yyvsp[-4].string), BT_VARIABLES, (yyvsp[-2].integer), NULL );
  }
#line 3102 "src-generated/ugbc.tab.c"
    break;

  case 106: /* bank_definition_simple: VARIABLES Identifier AT direct_integer  */
#line 432 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-2].string), BT_VARIABLES, (yyvsp[0].integer), NULL );
  }
#line 3110 "src-generated/ugbc.tab.c"
    break;

  case 107: /* bank_definition_simple: VARIABLES AT direct_integer  */
#line 435 "src/ugbc.y"
                                {
      bank_define( _environment, NULL, BT_VARIABLES, (yyvsp[0].integer), NULL );
  }
#line 3118 "src-generated/ugbc.tab.c"
    break;

  case 108: /* bank_definition_simple: Identifier AT direct_integer AS TEMPORARY  */
#line 439 "src/ugbc.y"
                                              {
      bank_define( _environment, (yyvsp[-4].string), BT_TEMPORARY, (yyvsp[-2].integer), NULL );
  }
#line 3126 "src-generated/ugbc.tab.c"
    break;

  case 109: /* bank_definition_simple: AT direct_integer AS TEMPORARY  */
#line 442 "src/ugbc.y"
                                   {
      bank_define( _environment, NULL, BT_TEMPORARY, (yyvsp[-2].integer), NULL );
  }
#line 3134 "src-generated/ugbc.tab.c"
    break;

  case 110: /* bank_definition_simple: TEMPORARY Identifier AT direct_integer  */
#line 445 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-2].string), BT_TEMPORARY, (yyvsp[0].integer), NULL );
  }
#line 3142 "src-generated/ugbc.tab.c"
    break;

  case 111: /* bank_definition_simple: TEMPORARY AT direct_integer  */
#line 448 "src/ugbc.y"
                                {
      bank_define( _environment, NULL, BT_TEMPORARY, (yyvsp[0].integer), NULL );
  }
#line 3150 "src-generated/ugbc.tab.c"
    break;

  case 112: /* bank_definition_with_payload: Identifier AT direct_integer WITH String  */
#line 454 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 3158 "src-generated/ugbc.tab.c"
    break;

  case 113: /* bank_definition_with_payload: Identifier AT direct_integer AS DATA WITH String  */
#line 457 "src/ugbc.y"
                                                     {
      bank_define( _environment, (yyvsp[-6].string), BT_DATA, (yyvsp[-4].integer), (yyvsp[0].string) );
  }
#line 3166 "src-generated/ugbc.tab.c"
    break;

  case 114: /* bank_definition_with_payload: DATA Identifier AT direct_integer WITH String  */
#line 460 "src/ugbc.y"
                                                  {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 3174 "src-generated/ugbc.tab.c"
    break;

  case 115: /* bank_definition_with_payload: Identifier AT direct_integer AS CODE WITH String  */
#line 463 "src/ugbc.y"
                                                     {
      bank_define( _environment, (yyvsp[-6].string), BT_CODE, (yyvsp[-4].integer), (yyvsp[0].string) );
  }
#line 3182 "src-generated/ugbc.tab.c"
    break;

  case 116: /* bank_definition_with_payload: CODE Identifier AT direct_integer WITH String  */
#line 466 "src/ugbc.y"
                                                  {
      bank_define( _environment, (yyvsp[-4].string), BT_CODE, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 3190 "src-generated/ugbc.tab.c"
    break;

  case 119: /* raster_definition_simple: Identifier AT direct_integer  */
#line 475 "src/ugbc.y"
                                 {
      raster_at( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );
    }
#line 3198 "src-generated/ugbc.tab.c"
    break;

  case 120: /* raster_definition_simple: AT direct_integer WITH Identifier  */
#line 478 "src/ugbc.y"
                                      {
      raster_at( _environment, (yyvsp[0].string), (yyvsp[-2].integer) );
    }
#line 3206 "src-generated/ugbc.tab.c"
    break;

  case 121: /* raster_definition_expression: Identifier AT expressions  */
#line 483 "src/ugbc.y"
                              {
      raster_at_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3214 "src-generated/ugbc.tab.c"
    break;

  case 122: /* raster_definition_expression: AT expressions WITH Identifier  */
#line 486 "src/ugbc.y"
                                   {
      raster_at_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3222 "src-generated/ugbc.tab.c"
    break;

  case 125: /* next_raster_definition_simple: Identifier AT direct_integer  */
#line 495 "src/ugbc.y"
                                 {
      next_raster_at_with( _environment, (yyvsp[0].integer), (yyvsp[-2].string) );
    }
#line 3230 "src-generated/ugbc.tab.c"
    break;

  case 126: /* next_raster_definition_simple: AT direct_integer WITH Identifier  */
#line 498 "src/ugbc.y"
                                      {
      next_raster_at_with( _environment, (yyvsp[-2].integer), (yyvsp[0].string) );
    }
#line 3238 "src-generated/ugbc.tab.c"
    break;

  case 127: /* next_raster_definition_expression: Identifier AT expressions  */
#line 503 "src/ugbc.y"
                              {
      next_raster_at_with_var( _environment, (yyvsp[0].string), (yyvsp[-2].string) );
    }
#line 3246 "src-generated/ugbc.tab.c"
    break;

  case 128: /* next_raster_definition_expression: AT expressions WITH Identifier  */
#line 506 "src/ugbc.y"
                                   {
      next_raster_at_with_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3254 "src-generated/ugbc.tab.c"
    break;

  case 131: /* color_definition_simple: BORDER direct_integer  */
#line 515 "src/ugbc.y"
                          {
      color_border( _environment, (yyvsp[0].integer) );
  }
#line 3262 "src-generated/ugbc.tab.c"
    break;

  case 132: /* color_definition_simple: BACKGROUND direct_integer TO direct_integer  */
#line 518 "src/ugbc.y"
                                                {
      color_background( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3270 "src-generated/ugbc.tab.c"
    break;

  case 133: /* color_definition_simple: SPRITE direct_integer TO direct_integer  */
#line 521 "src/ugbc.y"
                                            {
      color_sprite( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3278 "src-generated/ugbc.tab.c"
    break;

  case 134: /* color_definition_expression: BORDER expressions  */
#line 526 "src/ugbc.y"
                       {
      color_border_var( _environment, (yyvsp[0].string) );
  }
#line 3286 "src-generated/ugbc.tab.c"
    break;

  case 135: /* color_definition_expression: BACKGROUND expressions TO expressions  */
#line 529 "src/ugbc.y"
                                          {
      color_background_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3294 "src-generated/ugbc.tab.c"
    break;

  case 136: /* color_definition_expression: SPRITE expressions TO expressions  */
#line 532 "src/ugbc.y"
                                      {
      color_sprite_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3302 "src-generated/ugbc.tab.c"
    break;

  case 142: /* wait_definition_simple: direct_integer CYCLES  */
#line 546 "src/ugbc.y"
                            {
      wait_cycles( _environment, (yyvsp[-1].integer) );
    }
#line 3310 "src-generated/ugbc.tab.c"
    break;

  case 143: /* wait_definition_simple: direct_integer TICKS  */
#line 549 "src/ugbc.y"
                           {
      wait_ticks( _environment, (yyvsp[-1].integer) );
    }
#line 3318 "src-generated/ugbc.tab.c"
    break;

  case 144: /* wait_definition_simple: direct_integer milliseconds  */
#line 552 "src/ugbc.y"
                                  {
      wait_milliseconds( _environment, (yyvsp[-1].integer) );
    }
#line 3326 "src-generated/ugbc.tab.c"
    break;

  case 145: /* wait_definition_expression: expressions CYCLES  */
#line 557 "src/ugbc.y"
                         {
      wait_cycles_var( _environment, (yyvsp[-1].string) );
    }
#line 3334 "src-generated/ugbc.tab.c"
    break;

  case 146: /* wait_definition_expression: expressions TICKS  */
#line 560 "src/ugbc.y"
                        {
      wait_ticks_var( _environment, (yyvsp[-1].string) );
    }
#line 3342 "src-generated/ugbc.tab.c"
    break;

  case 147: /* wait_definition_expression: expressions milliseconds  */
#line 563 "src/ugbc.y"
                               {
      wait_milliseconds_var( _environment, (yyvsp[-1].string) );
    }
#line 3350 "src-generated/ugbc.tab.c"
    break;

  case 150: /* sprite_definition_simple: direct_integer DATA FROM direct_integer  */
#line 573 "src/ugbc.y"
                                            {
      sprite_data_from( _environment, (yyvsp[-3].integer), (yyvsp[0].integer) );
  }
#line 3358 "src-generated/ugbc.tab.c"
    break;

  case 151: /* sprite_definition_simple: direct_integer MULTICOLOR  */
#line 576 "src/ugbc.y"
                              {
      sprite_multicolor( _environment, (yyvsp[-1].integer) );
  }
#line 3366 "src-generated/ugbc.tab.c"
    break;

  case 152: /* sprite_definition_simple: direct_integer MONOCOLOR  */
#line 579 "src/ugbc.y"
                             {
      sprite_monocolor( _environment, (yyvsp[-1].integer) );
  }
#line 3374 "src-generated/ugbc.tab.c"
    break;

  case 153: /* sprite_definition_simple: direct_integer COLOR direct_integer  */
#line 582 "src/ugbc.y"
                                        {
      sprite_color( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3382 "src-generated/ugbc.tab.c"
    break;

  case 154: /* sprite_definition_simple: direct_integer position OP direct_integer COMMA direct_integer CP  */
#line 585 "src/ugbc.y"
                                                                      {
      sprite_position( _environment, (yyvsp[-6].integer), (yyvsp[-3].integer), (yyvsp[-1].integer) );
  }
#line 3390 "src-generated/ugbc.tab.c"
    break;

  case 155: /* sprite_definition_simple: direct_integer ENABLE  */
#line 588 "src/ugbc.y"
                          {
      sprite_enable( _environment, (yyvsp[-1].integer) );
  }
#line 3398 "src-generated/ugbc.tab.c"
    break;

  case 156: /* sprite_definition_simple: direct_integer DISABLE  */
#line 591 "src/ugbc.y"
                           {
      sprite_disable( _environment, (yyvsp[-1].integer) );
  }
#line 3406 "src-generated/ugbc.tab.c"
    break;

  case 157: /* sprite_definition_simple: direct_integer EXPAND VERTICAL  */
#line 594 "src/ugbc.y"
                                   {
      sprite_expand_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3414 "src-generated/ugbc.tab.c"
    break;

  case 158: /* sprite_definition_simple: direct_integer COMPRESS VERTICAL  */
#line 597 "src/ugbc.y"
                                     {
      sprite_compress_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3422 "src-generated/ugbc.tab.c"
    break;

  case 159: /* sprite_definition_simple: direct_integer VERTICAL EXPAND  */
#line 600 "src/ugbc.y"
                                   {
      sprite_expand_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3430 "src-generated/ugbc.tab.c"
    break;

  case 160: /* sprite_definition_simple: direct_integer VERTICAL COMPRESS  */
#line 603 "src/ugbc.y"
                                     {
      sprite_compress_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3438 "src-generated/ugbc.tab.c"
    break;

  case 161: /* sprite_definition_simple: direct_integer EXPAND HORIZONTAL  */
#line 606 "src/ugbc.y"
                                     {
      sprite_expand_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3446 "src-generated/ugbc.tab.c"
    break;

  case 162: /* sprite_definition_simple: direct_integer COMPRESS HORIZONTAL  */
#line 609 "src/ugbc.y"
                                       {
      sprite_compress_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3454 "src-generated/ugbc.tab.c"
    break;

  case 163: /* sprite_definition_simple: direct_integer HORIZONTAL EXPAND  */
#line 612 "src/ugbc.y"
                                     {
      sprite_expand_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3462 "src-generated/ugbc.tab.c"
    break;

  case 164: /* sprite_definition_simple: direct_integer HORIZONTAL COMPRESS  */
#line 615 "src/ugbc.y"
                                       {
      sprite_compress_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3470 "src-generated/ugbc.tab.c"
    break;

  case 165: /* sprite_definition_expression: expressions DATA FROM expressions  */
#line 620 "src/ugbc.y"
                                      {
      sprite_data_from_vars( _environment, (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 3478 "src-generated/ugbc.tab.c"
    break;

  case 166: /* sprite_definition_expression: expressions MULTICOLOR  */
#line 623 "src/ugbc.y"
                           {
      sprite_multicolor_var( _environment, (yyvsp[-1].string) );
  }
#line 3486 "src-generated/ugbc.tab.c"
    break;

  case 167: /* sprite_definition_expression: expressions MONOCOLOR  */
#line 626 "src/ugbc.y"
                          {
      sprite_monocolor_var( _environment, (yyvsp[-1].string) );
  }
#line 3494 "src-generated/ugbc.tab.c"
    break;

  case 168: /* sprite_definition_expression: expressions COLOR expressions  */
#line 629 "src/ugbc.y"
                                  {
      sprite_color_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3502 "src-generated/ugbc.tab.c"
    break;

  case 169: /* sprite_definition_expression: expressions position OP expressions COMMA expressions CP  */
#line 632 "src/ugbc.y"
                                                             {
      sprite_position_vars( _environment, (yyvsp[-6].string), (yyvsp[-3].string), (yyvsp[-1].string) );
  }
#line 3510 "src-generated/ugbc.tab.c"
    break;

  case 170: /* sprite_definition_expression: expressions ENABLE  */
#line 635 "src/ugbc.y"
                       {
      sprite_enable_var( _environment, (yyvsp[-1].string) );
  }
#line 3518 "src-generated/ugbc.tab.c"
    break;

  case 171: /* sprite_definition_expression: expressions DISABLE  */
#line 638 "src/ugbc.y"
                        {
      sprite_disable_var( _environment, (yyvsp[-1].string) );
  }
#line 3526 "src-generated/ugbc.tab.c"
    break;

  case 172: /* sprite_definition_expression: expressions EXPAND VERTICAL  */
#line 641 "src/ugbc.y"
                                {
      sprite_expand_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3534 "src-generated/ugbc.tab.c"
    break;

  case 173: /* sprite_definition_expression: expressions COMPRESS VERTICAL  */
#line 644 "src/ugbc.y"
                                  {
      sprite_compress_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3542 "src-generated/ugbc.tab.c"
    break;

  case 174: /* sprite_definition_expression: expressions VERTICAL EXPAND  */
#line 647 "src/ugbc.y"
                                {
      sprite_expand_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3550 "src-generated/ugbc.tab.c"
    break;

  case 175: /* sprite_definition_expression: expressions VERTICAL COMPRESS  */
#line 650 "src/ugbc.y"
                                  {
      sprite_compress_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3558 "src-generated/ugbc.tab.c"
    break;

  case 176: /* sprite_definition_expression: expressions EXPAND HORIZONTAL  */
#line 653 "src/ugbc.y"
                                  {
      sprite_expand_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3566 "src-generated/ugbc.tab.c"
    break;

  case 177: /* sprite_definition_expression: expressions COMPRESS HORIZONTAL  */
#line 656 "src/ugbc.y"
                                    {
      sprite_compress_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3574 "src-generated/ugbc.tab.c"
    break;

  case 178: /* sprite_definition_expression: expressions HORIZONTAL EXPAND  */
#line 659 "src/ugbc.y"
                                  {
      sprite_expand_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3582 "src-generated/ugbc.tab.c"
    break;

  case 179: /* sprite_definition_expression: expressions HORIZONTAL COMPRESS  */
#line 662 "src/ugbc.y"
                                    {
      sprite_compress_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3590 "src-generated/ugbc.tab.c"
    break;

  case 182: /* bitmap_definition_simple: AT direct_integer  */
#line 671 "src/ugbc.y"
                      {
      bitmap_at( _environment, (yyvsp[0].integer) );
  }
#line 3598 "src-generated/ugbc.tab.c"
    break;

  case 183: /* bitmap_definition_simple: ENABLE  */
#line 674 "src/ugbc.y"
           {
      bitmap_enable( _environment );
  }
#line 3606 "src-generated/ugbc.tab.c"
    break;

  case 184: /* bitmap_definition_simple: DISABLE  */
#line 677 "src/ugbc.y"
            {
      bitmap_disable( _environment );
  }
#line 3614 "src-generated/ugbc.tab.c"
    break;

  case 185: /* bitmap_definition_simple: CLEAR  */
#line 680 "src/ugbc.y"
          {
      bitmap_clear( _environment );
  }
#line 3622 "src-generated/ugbc.tab.c"
    break;

  case 186: /* bitmap_definition_simple: CLEAR WITH direct_integer  */
#line 683 "src/ugbc.y"
                              {
      bitmap_clear_with( _environment, (yyvsp[0].integer) );
  }
#line 3630 "src-generated/ugbc.tab.c"
    break;

  case 187: /* bitmap_definition_expression: AT expressions  */
#line 689 "src/ugbc.y"
                   {
      bitmap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3638 "src-generated/ugbc.tab.c"
    break;

  case 188: /* bitmap_definition_expression: CLEAR WITH expressions  */
#line 692 "src/ugbc.y"
                           {
      bitmap_clear_with_vars( _environment, (yyvsp[0].string) );
  }
#line 3646 "src-generated/ugbc.tab.c"
    break;

  case 191: /* textmap_definition_simple: AT direct_integer  */
#line 702 "src/ugbc.y"
                      {
      textmap_at( _environment, (yyvsp[0].integer) );
  }
#line 3654 "src-generated/ugbc.tab.c"
    break;

  case 192: /* textmap_definition_expression: AT expressions  */
#line 707 "src/ugbc.y"
                   {
      textmap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3662 "src-generated/ugbc.tab.c"
    break;

  case 195: /* text_definition_simple: ENABLE  */
#line 716 "src/ugbc.y"
           {
      text_enable( _environment );
  }
#line 3670 "src-generated/ugbc.tab.c"
    break;

  case 196: /* text_definition_simple: DISABLE  */
#line 719 "src/ugbc.y"
            {
      text_disable( _environment );
  }
#line 3678 "src-generated/ugbc.tab.c"
    break;

  case 198: /* tiles_definition_simple: AT direct_integer  */
#line 727 "src/ugbc.y"
                      {
      tiles_at( _environment, (yyvsp[0].integer) );
  }
#line 3686 "src-generated/ugbc.tab.c"
    break;

  case 199: /* tiles_definition_expression: AT expressions  */
#line 732 "src/ugbc.y"
                   {
      tiles_at_var( _environment, (yyvsp[0].string) );
  }
#line 3694 "src-generated/ugbc.tab.c"
    break;

  case 202: /* colormap_definition_simple: AT direct_integer  */
#line 741 "src/ugbc.y"
                      {
      colormap_at( _environment, (yyvsp[0].integer) );
  }
#line 3702 "src-generated/ugbc.tab.c"
    break;

  case 203: /* colormap_definition_simple: CLEAR  */
#line 744 "src/ugbc.y"
          {
      colormap_clear( _environment );
  }
#line 3710 "src-generated/ugbc.tab.c"
    break;

  case 204: /* colormap_definition_simple: CLEAR WITH direct_integer ON direct_integer  */
#line 747 "src/ugbc.y"
                                                {
      colormap_clear_with( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3718 "src-generated/ugbc.tab.c"
    break;

  case 205: /* colormap_definition_expression: AT expressions  */
#line 752 "src/ugbc.y"
                   {
      colormap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3726 "src-generated/ugbc.tab.c"
    break;

  case 206: /* colormap_definition_expression: CLEAR WITH expressions ON expressions  */
#line 755 "src/ugbc.y"
                                          {
      colormap_clear_with_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3734 "src-generated/ugbc.tab.c"
    break;

  case 209: /* screen_definition_simple: ON  */
#line 765 "src/ugbc.y"
       {   
      screen_on( _environment );
  }
#line 3742 "src-generated/ugbc.tab.c"
    break;

  case 210: /* screen_definition_simple: OFF  */
#line 768 "src/ugbc.y"
        {
      screen_off( _environment );
  }
#line 3750 "src-generated/ugbc.tab.c"
    break;

  case 211: /* screen_definition_simple: ROWS direct_integer  */
#line 771 "src/ugbc.y"
                        {
      screen_rows( _environment, (yyvsp[0].integer) );
  }
#line 3758 "src-generated/ugbc.tab.c"
    break;

  case 212: /* screen_definition_simple: VERTICAL SCROLL direct_integer  */
#line 774 "src/ugbc.y"
                                   {
      screen_vertical_scroll( _environment, (yyvsp[0].integer) );
  }
#line 3766 "src-generated/ugbc.tab.c"
    break;

  case 213: /* screen_definition_simple: HORIZONTAL SCROLL direct_integer  */
#line 777 "src/ugbc.y"
                                     {
      screen_horizontal_scroll( _environment, (yyvsp[0].integer) );
  }
#line 3774 "src-generated/ugbc.tab.c"
    break;

  case 214: /* screen_definition_expression: ROWS expressions  */
#line 782 "src/ugbc.y"
                     {
      screen_rows_var( _environment, (yyvsp[0].string) );
  }
#line 3782 "src-generated/ugbc.tab.c"
    break;

  case 215: /* screen_definition_expression: VERTICAL SCROLL expressions  */
#line 785 "src/ugbc.y"
                                {
      screen_vertical_scroll_var( _environment, (yyvsp[0].string) );
  }
#line 3790 "src-generated/ugbc.tab.c"
    break;

  case 216: /* screen_definition_expression: HORIZONTAL SCROLL expressions  */
#line 788 "src/ugbc.y"
                                  {
      screen_horizontal_scroll_var( _environment, (yyvsp[0].string) );
  }
#line 3798 "src-generated/ugbc.tab.c"
    break;

  case 220: /* var_definition_simple: Identifier ON Identifier  */
#line 797 "src/ugbc.y"
                             {
      variable_define( _environment, (yyvsp[-2].string), VT_BYTE, 0 );
  }
#line 3806 "src-generated/ugbc.tab.c"
    break;

  case 221: /* var_definition_simple: Identifier DOLLAR ON Identifier  */
#line 800 "src/ugbc.y"
                                    {
      variable_define( _environment, (yyvsp[-3].string), VT_STRING, 0 );
  }
#line 3814 "src-generated/ugbc.tab.c"
    break;

  case 222: /* var_definition_simple: Identifier ON Identifier ASSIGN direct_integer  */
#line 803 "src/ugbc.y"
                                                   {
      variable_define( _environment, (yyvsp[-4].string), VT_BYTE, (yyvsp[0].integer) );
  }
#line 3822 "src-generated/ugbc.tab.c"
    break;

  case 223: /* var_definition_simple: Identifier ON Identifier ASSIGN expressions  */
#line 806 "src/ugbc.y"
                                                {
      Variable * v = variable_retrieve( _environment, (yyvsp[0].string) );
      Variable * d = variable_define( _environment, (yyvsp[-4].string), v->type, v->value );
      variable_move_naked( _environment, v->name, d->name );
  }
#line 3832 "src-generated/ugbc.tab.c"
    break;

  case 224: /* var_definition_simple: Identifier DOLLAR ON Identifier ASSIGN expressions  */
#line 811 "src/ugbc.y"
                                                       {
      Variable * v = variable_retrieve( _environment, (yyvsp[0].string) );
      Variable * d = variable_define( _environment, (yyvsp[-5].string), VT_STRING, 0 );
      variable_move( _environment, v->name, d->name );
  }
#line 3842 "src-generated/ugbc.tab.c"
    break;

  case 225: /* goto_definition: Identifier  */
#line 818 "src/ugbc.y"
               {
      goto_label( _environment, (yyvsp[0].string) );
  }
#line 3850 "src-generated/ugbc.tab.c"
    break;

  case 226: /* goto_definition: Integer  */
#line 821 "src/ugbc.y"
            {
      goto_number( _environment, (yyvsp[0].integer) );
  }
#line 3858 "src-generated/ugbc.tab.c"
    break;

  case 227: /* gosub_definition: Identifier  */
#line 827 "src/ugbc.y"
               {
      gosub_label( _environment, (yyvsp[0].string) );
  }
#line 3866 "src-generated/ugbc.tab.c"
    break;

  case 228: /* gosub_definition: Integer  */
#line 830 "src/ugbc.y"
            {
      gosub_number( _environment, (yyvsp[0].integer) );
  }
#line 3874 "src-generated/ugbc.tab.c"
    break;

  case 230: /* point_definition_simple: AT OP direct_integer COMMA direct_integer CP  */
#line 839 "src/ugbc.y"
                                                   {
        point_at( _environment, (yyvsp[-3].integer), (yyvsp[-1].integer) );
    }
#line 3882 "src-generated/ugbc.tab.c"
    break;

  case 231: /* point_definition_expression: AT OP expressions COMMA expressions CP  */
#line 845 "src/ugbc.y"
                                             {
        point_at_vars( _environment, (yyvsp[-3].string), (yyvsp[-1].string) );
    }
#line 3890 "src-generated/ugbc.tab.c"
    break;

  case 234: /* on_goto_definition: Identifier  */
#line 854 "src/ugbc.y"
                 {
          on_goto_index( _environment, (yyvsp[0].string) );
          on_goto_end( _environment );
      }
#line 3899 "src-generated/ugbc.tab.c"
    break;

  case 235: /* $@1: %empty  */
#line 858 "src/ugbc.y"
                 {
        on_goto_index( _environment, (yyvsp[0].string) );
    }
#line 3907 "src-generated/ugbc.tab.c"
    break;

  case 237: /* on_gosub_definition: Identifier  */
#line 863 "src/ugbc.y"
                 {
          on_gosub_index( _environment, (yyvsp[0].string) );
          on_gosub_end( _environment );
      }
#line 3916 "src-generated/ugbc.tab.c"
    break;

  case 238: /* $@2: %empty  */
#line 867 "src/ugbc.y"
                 {
          on_gosub_index( _environment, (yyvsp[0].string) );
    }
#line 3924 "src-generated/ugbc.tab.c"
    break;

  case 240: /* $@3: %empty  */
#line 872 "src/ugbc.y"
                       {
          on_goto( _environment, (yyvsp[-1].string) );
      }
#line 3932 "src-generated/ugbc.tab.c"
    break;

  case 242: /* $@4: %empty  */
#line 875 "src/ugbc.y"
                        {
        on_gosub( _environment, (yyvsp[-1].string) );  
    }
#line 3940 "src-generated/ugbc.tab.c"
    break;

  case 244: /* every_definition: expression TICKS GOSUB Identifier  */
#line 880 "src/ugbc.y"
                                        {
          every_ticks_gosub( _environment, (yyvsp[-3].string), (yyvsp[0].string) );
    }
#line 3948 "src-generated/ugbc.tab.c"
    break;

  case 245: /* every_definition: ON  */
#line 883 "src/ugbc.y"
         {
          every_on( _environment );
    }
#line 3956 "src-generated/ugbc.tab.c"
    break;

  case 246: /* every_definition: OFF  */
#line 886 "src/ugbc.y"
          {
          every_off( _environment );
    }
#line 3964 "src-generated/ugbc.tab.c"
    break;

  case 261: /* statement: RANDOMIZE  */
#line 905 "src/ugbc.y"
              {
      randomize( _environment );
  }
#line 3972 "src-generated/ugbc.tab.c"
    break;

  case 262: /* statement: IF expressions THEN  */
#line 908 "src/ugbc.y"
                        {
      if_then( _environment, (yyvsp[-1].string) );  
  }
#line 3980 "src-generated/ugbc.tab.c"
    break;

  case 263: /* statement: ELSE  */
#line 911 "src/ugbc.y"
         {
      else_if_then( _environment, NULL );  
  }
#line 3988 "src-generated/ugbc.tab.c"
    break;

  case 264: /* statement: ELSE IF expressions THEN  */
#line 914 "src/ugbc.y"
                             {
      else_if_then( _environment, (yyvsp[-1].string) );  
  }
#line 3996 "src-generated/ugbc.tab.c"
    break;

  case 265: /* statement: ENDIF  */
#line 917 "src/ugbc.y"
          {
      end_if_then( _environment );  
  }
#line 4004 "src-generated/ugbc.tab.c"
    break;

  case 266: /* statement: DO  */
#line 920 "src/ugbc.y"
       {
      begin_loop( _environment );  
  }
#line 4012 "src-generated/ugbc.tab.c"
    break;

  case 267: /* statement: LOOP  */
#line 923 "src/ugbc.y"
         {
      end_loop( _environment );  
  }
#line 4020 "src-generated/ugbc.tab.c"
    break;

  case 268: /* $@5: %empty  */
#line 926 "src/ugbc.y"
          { 
      begin_while( _environment );  
  }
#line 4028 "src-generated/ugbc.tab.c"
    break;

  case 269: /* statement: WHILE $@5 expressions  */
#line 928 "src/ugbc.y"
                {
      begin_while_condition( _environment, (yyvsp[0].string) );  
  }
#line 4036 "src-generated/ugbc.tab.c"
    break;

  case 270: /* statement: WEND  */
#line 931 "src/ugbc.y"
         {
      end_while( _environment );  
  }
#line 4044 "src-generated/ugbc.tab.c"
    break;

  case 271: /* statement: REPEAT  */
#line 934 "src/ugbc.y"
           {
      begin_repeat( _environment );  
  }
#line 4052 "src-generated/ugbc.tab.c"
    break;

  case 272: /* statement: UNTIL expressions  */
#line 937 "src/ugbc.y"
                      {
      end_repeat( _environment, (yyvsp[0].string) );  
  }
#line 4060 "src-generated/ugbc.tab.c"
    break;

  case 273: /* statement: EXIT  */
#line 940 "src/ugbc.y"
         {
      exit_loop( _environment, 0 );  
  }
#line 4068 "src-generated/ugbc.tab.c"
    break;

  case 274: /* statement: EXIT IF expressions  */
#line 943 "src/ugbc.y"
                        {
      exit_loop_if( _environment, (yyvsp[0].string), 0 );  
  }
#line 4076 "src-generated/ugbc.tab.c"
    break;

  case 275: /* statement: EXIT Integer  */
#line 946 "src/ugbc.y"
                 {
      exit_loop( _environment, (yyvsp[0].integer) );  
  }
#line 4084 "src-generated/ugbc.tab.c"
    break;

  case 276: /* statement: EXIT direct_integer  */
#line 949 "src/ugbc.y"
                        {
      exit_loop( _environment, (yyvsp[0].integer) );  
  }
#line 4092 "src-generated/ugbc.tab.c"
    break;

  case 277: /* statement: EXIT IF expressions COMMA Integer  */
#line 952 "src/ugbc.y"
                                      {
      exit_loop_if( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );  
  }
#line 4100 "src-generated/ugbc.tab.c"
    break;

  case 278: /* statement: EXIT IF expressions COMMA direct_integer  */
#line 955 "src/ugbc.y"
                                             {
      exit_loop_if( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );  
  }
#line 4108 "src-generated/ugbc.tab.c"
    break;

  case 279: /* statement: FOR Identifier ASSIGN expressions TO expressions  */
#line 958 "src/ugbc.y"
                                                     {
      begin_for( _environment, (yyvsp[-4].string), (yyvsp[-2].string), (yyvsp[0].string) );  
  }
#line 4116 "src-generated/ugbc.tab.c"
    break;

  case 280: /* statement: NEXT  */
#line 961 "src/ugbc.y"
         {
      end_for( _environment );
  }
#line 4124 "src-generated/ugbc.tab.c"
    break;

  case 281: /* statement: FOR Identifier ASSIGN expressions TO expressions STEP expressions  */
#line 964 "src/ugbc.y"
                                                                      {
      begin_for_step( _environment, (yyvsp[-6].string), (yyvsp[-4].string), (yyvsp[-2].string), (yyvsp[0].string) );  
  }
#line 4132 "src-generated/ugbc.tab.c"
    break;

  case 282: /* statement: BEG GAMELOOP  */
#line 967 "src/ugbc.y"
                 {
      begin_gameloop( _environment );
  }
#line 4140 "src-generated/ugbc.tab.c"
    break;

  case 283: /* statement: END GAMELOOP  */
#line 970 "src/ugbc.y"
                 {
      end_gameloop( _environment );
  }
#line 4148 "src-generated/ugbc.tab.c"
    break;

  case 284: /* statement: GRAPHIC  */
#line 973 "src/ugbc.y"
            {
      graphic( _environment );
  }
#line 4156 "src-generated/ugbc.tab.c"
    break;

  case 285: /* statement: HALT  */
#line 976 "src/ugbc.y"
         {
      halt( _environment );
  }
#line 4164 "src-generated/ugbc.tab.c"
    break;

  case 290: /* statement: RETURN  */
#line 983 "src/ugbc.y"
           {
      return_label( _environment );
  }
#line 4172 "src-generated/ugbc.tab.c"
    break;

  case 291: /* statement: POP  */
#line 986 "src/ugbc.y"
        {
      pop( _environment );
  }
#line 4180 "src-generated/ugbc.tab.c"
    break;

  case 292: /* statement: DONE  */
#line 989 "src/ugbc.y"
          {
      return 0;
  }
#line 4188 "src-generated/ugbc.tab.c"
    break;

  case 293: /* statement: LEFT OP expression COMMA expression CP ASSIGN expressions  */
#line 992 "src/ugbc.y"
                                                              {
        variable_string_left_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 4196 "src-generated/ugbc.tab.c"
    break;

  case 294: /* statement: RIGHT OP expression COMMA expression CP ASSIGN expressions  */
#line 995 "src/ugbc.y"
                                                               {
        variable_string_right_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 4204 "src-generated/ugbc.tab.c"
    break;

  case 295: /* statement: MID OP expression COMMA expression CP ASSIGN expressions  */
#line 998 "src/ugbc.y"
                                                             {
        variable_string_mid_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), NULL, (yyvsp[0].string) );
  }
#line 4212 "src-generated/ugbc.tab.c"
    break;

  case 296: /* statement: MID OP expression COMMA expression COMMA expression CP ASSIGN expressions  */
#line 1001 "src/ugbc.y"
                                                                              {
        variable_string_mid_assign( _environment, (yyvsp[-7].string), (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 4220 "src-generated/ugbc.tab.c"
    break;

  case 297: /* statement: Identifier COLON  */
#line 1004 "src/ugbc.y"
                     {
      outhead1("%s:", (yyvsp[-1].string));
  }
#line 4228 "src-generated/ugbc.tab.c"
    break;

  case 298: /* statement: Identifier ASSIGN expressions  */
#line 1007 "src/ugbc.y"
                                  {
        outline2("; %s = %s", (yyvsp[-2].string), (yyvsp[0].string) );
        Variable * expressions = variable_retrieve( _environment, (yyvsp[0].string) );
        outline1("; retrieved %s ", (yyvsp[0].string) );
        variable_define( _environment, (yyvsp[-2].string), expressions->type, 0 )->name;
        outline1("; defined %s ", (yyvsp[-2].string) );
        variable_move( _environment, (yyvsp[0].string), (yyvsp[-2].string) );
        outline2("; moved %s -> %s ", (yyvsp[0].string), (yyvsp[-2].string) );
  }
#line 4242 "src-generated/ugbc.tab.c"
    break;

  case 299: /* statement: Identifier DOLLAR ASSIGN expressions  */
#line 1016 "src/ugbc.y"
                                         {
        outline2("; %s = %s", (yyvsp[-3].string), (yyvsp[0].string) );
        Variable * expressions = variable_retrieve( _environment, (yyvsp[0].string) );
        outline1("; retrieved %s ", (yyvsp[0].string) );
        variable_define( _environment, (yyvsp[-3].string), VT_STRING, 0 )->name;
        outline1("; defined %s ", (yyvsp[-3].string) );
        variable_move( _environment, (yyvsp[0].string), (yyvsp[-3].string) );
        outline2("; moved %s -> %s ", (yyvsp[0].string), (yyvsp[-3].string) );
  }
#line 4256 "src-generated/ugbc.tab.c"
    break;

  case 300: /* statement: DEBUG expressions  */
#line 1025 "src/ugbc.y"
                      {
      debug_var( _environment, (yyvsp[0].string) );
  }
#line 4264 "src-generated/ugbc.tab.c"
    break;

  case 303: /* statements_no_linenumbers: statement  */
#line 1033 "src/ugbc.y"
                { ((Environment *)_environment)->yylineno = yylineno; }
#line 4270 "src-generated/ugbc.tab.c"
    break;

  case 304: /* $@6: %empty  */
#line 1034 "src/ugbc.y"
                      { ((Environment *)_environment)->yylineno = yylineno; }
#line 4276 "src-generated/ugbc.tab.c"
    break;

  case 306: /* $@7: %empty  */
#line 1038 "src/ugbc.y"
              {
        outhead1("_linenumber%d:", (yyvsp[0].integer));
    }
#line 4284 "src-generated/ugbc.tab.c"
    break;

  case 307: /* statements_with_linenumbers: Integer $@7 statements_no_linenumbers  */
#line 1040 "src/ugbc.y"
                                { 
        ((Environment *)_environment)->yylineno = yylineno;
    }
#line 4292 "src-generated/ugbc.tab.c"
    break;

  case 312: /* $@8: %empty  */
#line 1052 "src/ugbc.y"
  { ((Environment *)_environment)->yylineno = yylineno; }
#line 4298 "src-generated/ugbc.tab.c"
    break;


#line 4302 "src-generated/ugbc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (_environment, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, _environment);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, _environment);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (_environment, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, _environment);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, _environment);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1054 "src/ugbc.y"


void show_usage_and_exit( int _argc, char *_argv[] ) {

    printf("ugBASIC Compiler v1.0\n");
    printf("---------------------\n");
    printf("Copyright 2021 Marco Spedaletti (asimov@mclink.it)\n\n");
    printf("Licensed under the Apache License, Version 2.0 (the \"License\");\n");
    printf("you may not use this program except in compliance with the License.\n\n");

    printf("usage: %s [-c <file>] <source> <asm>\n\n", _argv[0] );

    printf("Options and parameters:\n" );
    printf("\t<source>     Input filename with ugBASIC source code" );
    printf("\t<asm>        Output filename with ASM source code" );
    printf("\t-c <file>    Output filename with linker configuration" );
    exit(EXIT_FAILURE);
}

int main( int _argc, char *_argv[] ) {
    extern FILE *yyin;
    int flags, opt;
    int nsecs, tfnd;
    Environment * _environment = malloc(sizeof(Environment));

    while ((opt = getopt(_argc, _argv, "e:c:")) != -1) {
        switch (opt) {
                case 'c':
                    _environment->configurationFileName = strdup(optarg);
                    break;
                default: /* '?' */
                    show_usage_and_exit( _argc, _argv );
                }
    }

    _environment->sourceFileName = strdup(_argv[optind] );
    _environment->asmFileName = strdup(_argv[optind+1] );
    
    yyin = fopen( _environment->sourceFileName, "r" );
    if ( ! yyin ) {
        fprintf(stderr, "Unable to open source file: %s\n", _environment->sourceFileName );
        exit(EXIT_FAILURE);
    }
    _environment->asmFile = fopen( _environment->asmFileName, "wt");
    if ( ! _environment->asmFile ) {
        fprintf(stderr, "Unable to open output file: %s\n", _environment->asmFileName );
        exit(EXIT_FAILURE);
    }

    bank_define( _environment, "VARIABLES", BT_VARIABLES, 0x4000, NULL );
    bank_define( _environment, "TEMPORARY", BT_TEMPORARY, 0x4100, NULL );

    if ( _environment->configurationFileName ) {
        _environment->configurationFile = fopen( _environment->configurationFileName, "wt");
        if ( ! _environment->configurationFile ) {
            fprintf(stderr, "Unable to open configuration file: %s\n", _environment->configurationFileName );
            exit(EXIT_FAILURE);
        }
        linker_setup( _environment );
        outhead0(".segment \"CODE\"");
        variable_define( _environment, "strings_address", VT_ADDRESS, 0x4200 );
        bank_define( _environment, "STRINGS", BT_STRINGS, 0x4200, NULL );
    } else {
        outhead0("org 32768");
        variable_define( _environment, "strings_address", VT_ADDRESS, 0xa000 );
    }


    yydebug = 1;
    errors = 0;
    yyparse (_environment);

    gameloop_cleanup( _environment );
    bank_cleanup( _environment );
    variable_cleanup( _environment );

    if ( _environment->configurationFileName ) {
        linker_cleanup( _environment );
        fclose(_environment->configurationFile);
    }

    fclose(_environment->asmFile);

}

int yyerror (Environment * _ignored, const char *s) /* Called by yyparse on error */
{
        // TODO: better error message (like other compilers)
      printf( "*** ERROR: %s at %d\n", s, yylineno);
      exit(EXIT_FAILURE);
}

