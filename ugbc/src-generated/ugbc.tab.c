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
  YYSYMBOL_RASTER = 21,                    /* RASTER  */
  YYSYMBOL_DONE = 22,                      /* DONE  */
  YYSYMBOL_AT = 23,                        /* AT  */
  YYSYMBOL_COLOR = 24,                     /* COLOR  */
  YYSYMBOL_BORDER = 25,                    /* BORDER  */
  YYSYMBOL_WAIT = 26,                      /* WAIT  */
  YYSYMBOL_NEXT = 27,                      /* NEXT  */
  YYSYMBOL_WITH = 28,                      /* WITH  */
  YYSYMBOL_BANK = 29,                      /* BANK  */
  YYSYMBOL_SPRITE = 30,                    /* SPRITE  */
  YYSYMBOL_DATA = 31,                      /* DATA  */
  YYSYMBOL_FROM = 32,                      /* FROM  */
  YYSYMBOL_OP = 33,                        /* OP  */
  YYSYMBOL_CP = 34,                        /* CP  */
  YYSYMBOL_ENABLE = 35,                    /* ENABLE  */
  YYSYMBOL_DISABLE = 36,                   /* DISABLE  */
  YYSYMBOL_HALT = 37,                      /* HALT  */
  YYSYMBOL_ECM = 38,                       /* ECM  */
  YYSYMBOL_BITMAP = 39,                    /* BITMAP  */
  YYSYMBOL_SCREEN = 40,                    /* SCREEN  */
  YYSYMBOL_ON = 41,                        /* ON  */
  YYSYMBOL_OFF = 42,                       /* OFF  */
  YYSYMBOL_ROWS = 43,                      /* ROWS  */
  YYSYMBOL_VERTICAL = 44,                  /* VERTICAL  */
  YYSYMBOL_SCROLL = 45,                    /* SCROLL  */
  YYSYMBOL_VAR = 46,                       /* VAR  */
  YYSYMBOL_AS = 47,                        /* AS  */
  YYSYMBOL_TEMPORARY = 48,                 /* TEMPORARY  */
  YYSYMBOL_XPEN = 49,                      /* XPEN  */
  YYSYMBOL_YPEN = 50,                      /* YPEN  */
  YYSYMBOL_PEEK = 51,                      /* PEEK  */
  YYSYMBOL_GOTO = 52,                      /* GOTO  */
  YYSYMBOL_HORIZONTAL = 53,                /* HORIZONTAL  */
  YYSYMBOL_MCM = 54,                       /* MCM  */
  YYSYMBOL_COMPRESS = 55,                  /* COMPRESS  */
  YYSYMBOL_EXPAND = 56,                    /* EXPAND  */
  YYSYMBOL_LOOP = 57,                      /* LOOP  */
  YYSYMBOL_REPEAT = 58,                    /* REPEAT  */
  YYSYMBOL_WHILE = 59,                     /* WHILE  */
  YYSYMBOL_TEXT = 60,                      /* TEXT  */
  YYSYMBOL_TILES = 61,                     /* TILES  */
  YYSYMBOL_COLORMAP = 62,                  /* COLORMAP  */
  YYSYMBOL_SELECT = 63,                    /* SELECT  */
  YYSYMBOL_MONOCOLOR = 64,                 /* MONOCOLOR  */
  YYSYMBOL_MULTICOLOR = 65,                /* MULTICOLOR  */
  YYSYMBOL_COLLISION = 66,                 /* COLLISION  */
  YYSYMBOL_IF = 67,                        /* IF  */
  YYSYMBOL_THEN = 68,                      /* THEN  */
  YYSYMBOL_HIT = 69,                       /* HIT  */
  YYSYMBOL_BACKGROUND = 70,                /* BACKGROUND  */
  YYSYMBOL_TO = 71,                        /* TO  */
  YYSYMBOL_RANDOM = 72,                    /* RANDOM  */
  YYSYMBOL_BYTE = 73,                      /* BYTE  */
  YYSYMBOL_WORD = 74,                      /* WORD  */
  YYSYMBOL_POSITION = 75,                  /* POSITION  */
  YYSYMBOL_CODE = 76,                      /* CODE  */
  YYSYMBOL_VARIABLES = 77,                 /* VARIABLES  */
  YYSYMBOL_MS = 78,                        /* MS  */
  YYSYMBOL_CYCLES = 79,                    /* CYCLES  */
  YYSYMBOL_S = 80,                         /* S  */
  YYSYMBOL_HASH = 81,                      /* HASH  */
  YYSYMBOL_WIDTH = 82,                     /* WIDTH  */
  YYSYMBOL_HEIGHT = 83,                    /* HEIGHT  */
  YYSYMBOL_DWORD = 84,                     /* DWORD  */
  YYSYMBOL_PEN = 85,                       /* PEN  */
  YYSYMBOL_CLEAR = 86,                     /* CLEAR  */
  YYSYMBOL_BEG = 87,                       /* BEG  */
  YYSYMBOL_END = 88,                       /* END  */
  YYSYMBOL_GAMELOOP = 89,                  /* GAMELOOP  */
  YYSYMBOL_ENDIF = 90,                     /* ENDIF  */
  YYSYMBOL_UP = 91,                        /* UP  */
  YYSYMBOL_DOWN = 92,                      /* DOWN  */
  YYSYMBOL_LEFT = 93,                      /* LEFT  */
  YYSYMBOL_RIGHT = 94,                     /* RIGHT  */
  YYSYMBOL_DEBUG = 95,                     /* DEBUG  */
  YYSYMBOL_AND = 96,                       /* AND  */
  YYSYMBOL_RANDOMIZE = 97,                 /* RANDOMIZE  */
  YYSYMBOL_GRAPHIC = 98,                   /* GRAPHIC  */
  YYSYMBOL_TEXTMAP = 99,                   /* TEXTMAP  */
  YYSYMBOL_POINT = 100,                    /* POINT  */
  YYSYMBOL_GOSUB = 101,                    /* GOSUB  */
  YYSYMBOL_RETURN = 102,                   /* RETURN  */
  YYSYMBOL_POP = 103,                      /* POP  */
  YYSYMBOL_OR = 104,                       /* OR  */
  YYSYMBOL_ELSE = 105,                     /* ELSE  */
  YYSYMBOL_NOT = 106,                      /* NOT  */
  YYSYMBOL_TRUE = 107,                     /* TRUE  */
  YYSYMBOL_FALSE = 108,                    /* FALSE  */
  YYSYMBOL_DO = 109,                       /* DO  */
  YYSYMBOL_EXIT = 110,                     /* EXIT  */
  YYSYMBOL_WEND = 111,                     /* WEND  */
  YYSYMBOL_UNTIL = 112,                    /* UNTIL  */
  YYSYMBOL_FOR = 113,                      /* FOR  */
  YYSYMBOL_STEP = 114,                     /* STEP  */
  YYSYMBOL_EVERY = 115,                    /* EVERY  */
  YYSYMBOL_MILLISECOND = 116,              /* MILLISECOND  */
  YYSYMBOL_MILLISECONDS = 117,             /* MILLISECONDS  */
  YYSYMBOL_TICKS = 118,                    /* TICKS  */
  YYSYMBOL_BLACK = 119,                    /* BLACK  */
  YYSYMBOL_WHITE = 120,                    /* WHITE  */
  YYSYMBOL_RED = 121,                      /* RED  */
  YYSYMBOL_CYAN = 122,                     /* CYAN  */
  YYSYMBOL_VIOLET = 123,                   /* VIOLET  */
  YYSYMBOL_GREEN = 124,                    /* GREEN  */
  YYSYMBOL_BLUE = 125,                     /* BLUE  */
  YYSYMBOL_YELLOW = 126,                   /* YELLOW  */
  YYSYMBOL_ORANGE = 127,                   /* ORANGE  */
  YYSYMBOL_BROWN = 128,                    /* BROWN  */
  YYSYMBOL_LIGHT = 129,                    /* LIGHT  */
  YYSYMBOL_DARK = 130,                     /* DARK  */
  YYSYMBOL_GREY = 131,                     /* GREY  */
  YYSYMBOL_GRAY = 132,                     /* GRAY  */
  YYSYMBOL_MAGENTA = 133,                  /* MAGENTA  */
  YYSYMBOL_PURPLE = 134,                   /* PURPLE  */
  YYSYMBOL_LAVENDER = 135,                 /* LAVENDER  */
  YYSYMBOL_GOLD = 136,                     /* GOLD  */
  YYSYMBOL_TURQUOISE = 137,                /* TURQUOISE  */
  YYSYMBOL_TAN = 138,                      /* TAN  */
  YYSYMBOL_PINK = 139,                     /* PINK  */
  YYSYMBOL_PEACH = 140,                    /* PEACH  */
  YYSYMBOL_OLIVE = 141,                    /* OLIVE  */
  YYSYMBOL_Identifier = 142,               /* Identifier  */
  YYSYMBOL_String = 143,                   /* String  */
  YYSYMBOL_Integer = 144,                  /* Integer  */
  YYSYMBOL_YYACCEPT = 145,                 /* $accept  */
  YYSYMBOL_direct_integer = 146,           /* direct_integer  */
  YYSYMBOL_random_definition_simple = 147, /* random_definition_simple  */
  YYSYMBOL_random_definition = 148,        /* random_definition  */
  YYSYMBOL_color_enumeration = 149,        /* color_enumeration  */
  YYSYMBOL_expression = 150,               /* expression  */
  YYSYMBOL_expressions_raw = 151,          /* expressions_raw  */
  YYSYMBOL_expressions = 152,              /* expressions  */
  YYSYMBOL_position = 153,                 /* position  */
  YYSYMBOL_bank_definition_simple = 154,   /* bank_definition_simple  */
  YYSYMBOL_bank_definition_with_payload = 155, /* bank_definition_with_payload  */
  YYSYMBOL_bank_definition = 156,          /* bank_definition  */
  YYSYMBOL_raster_definition_simple = 157, /* raster_definition_simple  */
  YYSYMBOL_raster_definition_expression = 158, /* raster_definition_expression  */
  YYSYMBOL_raster_definition = 159,        /* raster_definition  */
  YYSYMBOL_next_raster_definition_simple = 160, /* next_raster_definition_simple  */
  YYSYMBOL_next_raster_definition_expression = 161, /* next_raster_definition_expression  */
  YYSYMBOL_next_raster_definition = 162,   /* next_raster_definition  */
  YYSYMBOL_color_definition_simple = 163,  /* color_definition_simple  */
  YYSYMBOL_color_definition_expression = 164, /* color_definition_expression  */
  YYSYMBOL_color_definition = 165,         /* color_definition  */
  YYSYMBOL_milliseconds = 166,             /* milliseconds  */
  YYSYMBOL_wait_definition_simple = 167,   /* wait_definition_simple  */
  YYSYMBOL_wait_definition_expression = 168, /* wait_definition_expression  */
  YYSYMBOL_wait_definition = 169,          /* wait_definition  */
  YYSYMBOL_sprite_definition_simple = 170, /* sprite_definition_simple  */
  YYSYMBOL_sprite_definition_expression = 171, /* sprite_definition_expression  */
  YYSYMBOL_sprite_definition = 172,        /* sprite_definition  */
  YYSYMBOL_bitmap_definition_simple = 173, /* bitmap_definition_simple  */
  YYSYMBOL_bitmap_definition_expression = 174, /* bitmap_definition_expression  */
  YYSYMBOL_bitmap_definition = 175,        /* bitmap_definition  */
  YYSYMBOL_textmap_definition_simple = 176, /* textmap_definition_simple  */
  YYSYMBOL_textmap_definition_expression = 177, /* textmap_definition_expression  */
  YYSYMBOL_textmap_definition = 178,       /* textmap_definition  */
  YYSYMBOL_text_definition_simple = 179,   /* text_definition_simple  */
  YYSYMBOL_text_definition = 180,          /* text_definition  */
  YYSYMBOL_tiles_definition_simple = 181,  /* tiles_definition_simple  */
  YYSYMBOL_tiles_definition_expression = 182, /* tiles_definition_expression  */
  YYSYMBOL_tiles_definition = 183,         /* tiles_definition  */
  YYSYMBOL_colormap_definition_simple = 184, /* colormap_definition_simple  */
  YYSYMBOL_colormap_definition_expression = 185, /* colormap_definition_expression  */
  YYSYMBOL_colormap_definition = 186,      /* colormap_definition  */
  YYSYMBOL_screen_definition_simple = 187, /* screen_definition_simple  */
  YYSYMBOL_screen_definition_expression = 188, /* screen_definition_expression  */
  YYSYMBOL_screen_definition = 189,        /* screen_definition  */
  YYSYMBOL_var_definition_simple = 190,    /* var_definition_simple  */
  YYSYMBOL_goto_definition = 191,          /* goto_definition  */
  YYSYMBOL_gosub_definition = 192,         /* gosub_definition  */
  YYSYMBOL_var_definition = 193,           /* var_definition  */
  YYSYMBOL_point_definition_simple = 194,  /* point_definition_simple  */
  YYSYMBOL_point_definition_expression = 195, /* point_definition_expression  */
  YYSYMBOL_point_definition = 196,         /* point_definition  */
  YYSYMBOL_on_goto_definition = 197,       /* on_goto_definition  */
  YYSYMBOL_198_1 = 198,                    /* $@1  */
  YYSYMBOL_on_gosub_definition = 199,      /* on_gosub_definition  */
  YYSYMBOL_200_2 = 200,                    /* $@2  */
  YYSYMBOL_on_definition = 201,            /* on_definition  */
  YYSYMBOL_202_3 = 202,                    /* $@3  */
  YYSYMBOL_203_4 = 203,                    /* $@4  */
  YYSYMBOL_every_definition = 204,         /* every_definition  */
  YYSYMBOL_statement = 205,                /* statement  */
  YYSYMBOL_206_5 = 206,                    /* $@5  */
  YYSYMBOL_statements_no_linenumbers = 207, /* statements_no_linenumbers  */
  YYSYMBOL_208_6 = 208,                    /* $@6  */
  YYSYMBOL_statements_with_linenumbers = 209, /* statements_with_linenumbers  */
  YYSYMBOL_210_7 = 210,                    /* $@7  */
  YYSYMBOL_statements_complex = 211,       /* statements_complex  */
  YYSYMBOL_program = 212,                  /* program  */
  YYSYMBOL_213_8 = 213                     /* $@8  */
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
#define YYLAST   1002

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  145
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  505

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   399


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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    67,    70,    73,    76,    79,    82,    85,
      90,    95,    99,   103,   107,   111,   115,   119,   123,   127,
     131,   135,   139,   143,   147,   151,   155,   159,   163,   167,
     171,   175,   179,   183,   187,   191,   195,   199,   205,   208,
     211,   215,   222,   226,   230,   234,   238,   242,   245,   248,
     251,   254,   257,   260,   263,   266,   269,   272,   275,   278,
     282,   286,   292,   293,   296,   300,   304,   308,   312,   315,
     318,   321,   324,   327,   333,   337,   337,   340,   343,   346,
     349,   352,   355,   359,   362,   365,   368,   372,   375,   378,
     381,   385,   388,   391,   394,   400,   403,   406,   409,   412,
     417,   418,   421,   424,   429,   432,   437,   438,   441,   444,
     449,   452,   457,   458,   461,   464,   467,   472,   475,   478,
     483,   484,   487,   488,   489,   492,   495,   498,   503,   506,
     509,   515,   516,   519,   522,   525,   528,   531,   534,   537,
     540,   543,   546,   549,   552,   555,   558,   561,   566,   569,
     572,   575,   578,   581,   584,   587,   590,   593,   596,   599,
     602,   605,   608,   613,   614,   617,   620,   623,   626,   629,
     635,   638,   644,   645,   648,   653,   658,   659,   662,   665,
     670,   673,   678,   683,   684,   687,   690,   693,   698,   701,
     707,   708,   711,   714,   717,   720,   723,   728,   731,   734,
     739,   740,   742,   743,   746,   749,   752,   757,   764,   767,
     773,   776,   782,   785,   791,   796,   797,   800,   804,   804,
     809,   813,   813,   818,   818,   821,   821,   826,   829,   832,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   854,   857,   860,   863,   866,
     869,   872,   872,   877,   880,   883,   886,   889,   892,   895,
     898,   901,   904,   907,   910,   913,   916,   919,   922,   925,
     926,   927,   928,   929,   932,   935,   938,   941,   944,   953,
     962,   965,   966,   970,   971,   971,   975,   975,   982,   983,
     984,   985,   989,   989
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
  "MULTIPLICATION", "DOLLAR", "RASTER", "DONE", "AT", "COLOR", "BORDER",
  "WAIT", "NEXT", "WITH", "BANK", "SPRITE", "DATA", "FROM", "OP", "CP",
  "ENABLE", "DISABLE", "HALT", "ECM", "BITMAP", "SCREEN", "ON", "OFF",
  "ROWS", "VERTICAL", "SCROLL", "VAR", "AS", "TEMPORARY", "XPEN", "YPEN",
  "PEEK", "GOTO", "HORIZONTAL", "MCM", "COMPRESS", "EXPAND", "LOOP",
  "REPEAT", "WHILE", "TEXT", "TILES", "COLORMAP", "SELECT", "MONOCOLOR",
  "MULTICOLOR", "COLLISION", "IF", "THEN", "HIT", "BACKGROUND", "TO",
  "RANDOM", "BYTE", "WORD", "POSITION", "CODE", "VARIABLES", "MS",
  "CYCLES", "S", "HASH", "WIDTH", "HEIGHT", "DWORD", "PEN", "CLEAR", "BEG",
  "END", "GAMELOOP", "ENDIF", "UP", "DOWN", "LEFT", "RIGHT", "DEBUG",
  "AND", "RANDOMIZE", "GRAPHIC", "TEXTMAP", "POINT", "GOSUB", "RETURN",
  "POP", "OR", "ELSE", "NOT", "TRUE", "FALSE", "DO", "EXIT", "WEND",
  "UNTIL", "FOR", "STEP", "EVERY", "MILLISECOND", "MILLISECONDS", "TICKS",
  "BLACK", "WHITE", "RED", "CYAN", "VIOLET", "GREEN", "BLUE", "YELLOW",
  "ORANGE", "BROWN", "LIGHT", "DARK", "GREY", "GRAY", "MAGENTA", "PURPLE",
  "LAVENDER", "GOLD", "TURQUOISE", "TAN", "PINK", "PEACH", "OLIVE",
  "Identifier", "String", "Integer", "$accept", "direct_integer",
  "random_definition_simple", "random_definition", "color_enumeration",
  "expression", "expressions_raw", "expressions", "position",
  "bank_definition_simple", "bank_definition_with_payload",
  "bank_definition", "raster_definition_simple",
  "raster_definition_expression", "raster_definition",
  "next_raster_definition_simple", "next_raster_definition_expression",
  "next_raster_definition", "color_definition_simple",
  "color_definition_expression", "color_definition", "milliseconds",
  "wait_definition_simple", "wait_definition_expression",
  "wait_definition", "sprite_definition_simple",
  "sprite_definition_expression", "sprite_definition",
  "bitmap_definition_simple", "bitmap_definition_expression",
  "bitmap_definition", "textmap_definition_simple",
  "textmap_definition_expression", "textmap_definition",
  "text_definition_simple", "text_definition", "tiles_definition_simple",
  "tiles_definition_expression", "tiles_definition",
  "colormap_definition_simple", "colormap_definition_expression",
  "colormap_definition", "screen_definition_simple",
  "screen_definition_expression", "screen_definition",
  "var_definition_simple", "goto_definition", "gosub_definition",
  "var_definition", "point_definition_simple",
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
     395,   396,   397,   398,   399
};
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -187,    20,   132,  -187,  -187,   -20,  -187,    28,   759,    13,
     -21,   759,  -187,     6,    21,   858,   -83,   -72,  -187,  -187,
    -187,     2,    60,    -6,   858,   -18,   -10,  -187,    63,   858,
    -187,  -187,    76,    84,   -26,  -187,  -187,    45,  -187,   -53,
    -187,   858,   -25,   660,    48,  -187,    98,   116,   125,  -187,
     759,   101,  -187,  -187,  -187,   759,   759,   759,  -187,  -187,
    -187,   548,  -187,  -187,   113,   122,   127,    11,   -13,   135,
     858,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
      10,  -187,  -187,    26,   -58,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,    46,   157,  -187,  -187,    23,  -187,
       7,  -187,    27,  -187,  -187,  -187,   -17,    99,   -16,   -15,
     -14,   -12,   160,  -187,  -187,  -187,   226,   334,  -187,  -187,
    -187,   759,  -187,  -187,   158,  -187,  -187,  -187,  -187,  -187,
     759,   140,   142,  -187,  -187,  -187,   -19,  -187,    16,  -187,
    -187,  -187,  -187,  -187,   858,  -187,  -187,  -187,  -187,   759,
    -187,  -187,  -187,   759,   170,  -187,  -187,  -187,   133,  -187,
    -187,   858,  -187,   759,  -187,  -187,  -187,   167,  -187,  -187,
    -187,  -187,  -187,  -187,   858,   858,  -187,  -187,  -187,   189,
    -187,  -187,    85,  -187,  -187,   858,   191,   465,  -187,   132,
     132,   177,   178,   759,  -187,  -187,   137,   138,   139,   141,
     179,   180,   181,   182,   183,   184,   759,   759,   759,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,   858,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,   858,   858,   858,   858,
     858,   858,   858,   858,   858,   858,   858,  -187,  -187,  -187,
     759,   200,  -187,  -187,  -187,   193,    99,   201,    99,   203,
      99,   205,    99,   213,    99,  -187,    99,   206,  -187,  -187,
      81,    93,    -4,    34,  -187,  -187,  -187,   215,   858,   214,
    -187,  -187,   111,   120,    37,    56,  -187,  -187,   219,  -187,
    -187,   759,  -187,  -187,   759,   759,  -187,  -187,   212,   112,
    -187,  -187,  -187,  -187,  -187,   759,  -187,   248,  -187,  -187,
     759,   188,   251,   858,   159,  -187,   858,  -187,   465,  -187,
    -187,   117,   121,  -187,  -187,    99,   858,    99,   858,   124,
     128,   129,   131,   134,  -187,   235,   237,   243,   252,   253,
     254,   278,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,   261,   264,   759,     0,  -187,    99,  -187,
      99,  -187,    99,  -187,    99,    19,  -187,    99,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,    99,  -187,   858,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,   858,  -187,  -187,
    -187,  -187,  -187,  -187,   151,   153,   154,   284,   257,   259,
     858,   296,   297,  -187,   -69,   236,   164,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,   858,   168,   169,  -187,
    -187,  -187,  -187,  -187,  -187,   281,  -187,   285,  -187,   176,
      12,  -187,   305,  -187,   314,   316,  -187,   329,  -187,   324,
     759,    99,   858,   304,    99,   858,  -187,  -187,   858,  -187,
     306,  -187,  -187,   196,   198,  -187,   315,  -187,   317,  -187,
      99,   858,   335,   339,   858,  -187,  -187,  -187,  -187,   337,
     313,   320,   234,  -187,  -187,  -187,   208,   216,   321,   322,
     151,   153,  -187,   858,  -187,  -187,   858,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     292,     0,   282,     1,   281,     0,   275,     0,     0,   263,
       0,     0,   268,     0,     0,     0,   202,     0,   250,   254,
     251,     0,     0,     0,     0,     0,     0,   248,     0,     0,
     244,   267,     0,     0,     0,   273,   274,   246,   249,   256,
     253,     0,     0,     0,     0,   286,   283,   288,   290,   293,
       0,     0,   106,   107,   231,     0,     0,     0,   120,   121,
     233,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    23,    28,    29,    30,    31,
      32,    33,    36,    37,     0,    38,    41,    40,     0,    47,
      62,    74,     0,   131,   132,   234,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   230,     0,     0,   163,   164,
     235,     0,   166,   167,   168,   172,   173,   236,   192,   193,
       0,     0,     0,   200,   201,   241,     0,   269,     0,   212,
     243,   208,   209,   270,     0,   178,   179,   180,   238,     0,
     183,   184,   239,     0,   186,   190,   191,   240,     0,   265,
     266,     0,   280,     0,   176,   177,   237,     0,   215,   216,
     242,   210,   211,   271,     0,     0,   258,   259,   255,     0,
     228,   229,     0,   272,   277,     0,     0,   282,   284,   282,
     282,     0,     0,     0,   114,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       3,     4,     6,     8,     9,     5,    10,    57,     2,     0,
      61,    34,    21,    24,    25,    26,    27,    22,    35,    39,
     122,   125,   123,   124,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
       0,     0,   112,   113,   232,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,   138,   139,
       0,     0,     0,     0,   135,   134,    75,     0,     0,     0,
     153,   154,     0,     0,     0,     0,   150,   149,     0,   165,
     170,     0,   194,   197,     0,     0,   223,   225,     0,     0,
     252,   181,   182,   185,   188,     0,   245,     0,   174,   175,
       0,     0,   257,     0,     0,   278,     0,   287,   282,   289,
     291,     0,     0,   102,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    68,    70,    71,    72,    73,    69,
      65,    66,    67,     0,     0,     0,     0,    82,     0,    94,
       0,    86,     0,    90,     0,    78,   136,     0,   143,   142,
     147,   146,   141,   145,   140,   144,     0,   151,     0,   158,
     157,   162,   161,   156,   160,   155,   159,     0,   169,   171,
     195,   198,   196,   199,     0,     0,     0,   203,     0,     0,
       0,     0,     0,   247,     0,     0,     0,   279,   285,   103,
     105,   116,   119,   115,   118,    46,    42,    43,    45,    44,
      48,    49,    52,    53,    54,    55,     0,     0,     0,   108,
     110,    79,    92,    84,    87,    81,    93,    85,    89,     0,
       0,   133,     0,   148,     0,   217,   224,   220,   226,   204,
       0,     0,     0,     0,     0,     0,   260,   261,     0,   227,
       0,   109,   111,     0,     0,    95,    80,    91,    83,    88,
       0,     0,     0,     0,     0,   205,   206,   187,   189,     0,
       0,     0,   262,    56,    97,    99,     0,     0,     0,     0,
       0,     0,   207,     0,   213,   214,     0,    96,    98,   137,
     152,   219,   222,   276,   264
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,    58,  -187,  -187,  -187,   -38,    89,   -11,   244,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,   258,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -126,  -187,  -125,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -186,  -187,  -187,  -187,  -138,  -187,  -187
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,   216,   217,    99,   100,   101,   102,   277,   113,
     114,   115,    52,    53,    54,   252,   253,   254,    58,    59,
      60,   235,   103,   104,   105,   118,   119,   120,   125,   126,
     127,   164,   165,   166,   147,   148,   150,   151,   152,   155,
     156,   157,   133,   134,   135,   139,   143,   173,   140,   168,
     169,   170,   446,   472,   448,   473,   137,   394,   395,   183,
      46,   144,    47,   318,    48,   187,    49,     1,     2
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     117,   317,   107,    50,   136,   182,   250,   256,   258,   260,
     108,   262,    68,   158,   175,   236,   237,   153,   162,   238,
       3,   239,   240,   241,   242,   243,   244,   109,    68,   121,
     178,   431,   220,   296,   106,   209,   298,   145,   146,   192,
     372,   122,   123,   466,   195,   197,   199,   439,   432,   373,
     205,   319,   320,    55,   184,   110,   111,   299,    56,   138,
     467,   185,   128,   129,   130,   131,   440,   226,   186,   116,
     141,   159,   142,   227,   132,   456,   433,   434,   374,   160,
     154,   383,   297,   149,   210,   211,   212,   375,   468,   469,
     384,   176,   124,   213,   214,   215,   161,   177,    57,   163,
     385,   230,   231,   245,   188,   230,   247,   167,   191,   386,
     290,   246,   174,   194,   196,   198,   171,   179,   172,   293,
     189,   112,    51,   307,   193,   251,   257,   259,   261,   190,
     263,   218,   408,   300,   221,     4,   368,   369,   302,   232,
     233,   234,   304,   232,   233,   248,   206,   222,   370,   371,
     223,   224,   309,     5,     6,   207,     7,   225,     8,     9,
     208,    10,    11,   311,   312,   255,   379,   380,   219,    12,
     228,    13,    14,    15,   315,   381,   382,   229,    16,   289,
      68,   341,   324,   264,    17,   294,   291,   295,   292,    18,
      19,    20,    21,    22,    23,   336,   338,   340,   305,    24,
     310,   306,   313,   314,   316,   321,   322,   301,   325,   326,
     327,   303,   328,   329,   330,   331,   332,   333,   334,    25,
      26,   308,    27,   355,   358,    28,   360,    29,   362,    30,
      31,    32,    33,    34,    35,    36,   364,    37,   367,   354,
     356,    38,    39,    40,    41,    42,   378,    43,   376,   265,
     266,   323,   387,   396,   397,   400,   403,   267,   404,   409,
     406,   268,   269,   410,   335,   337,   339,   377,   415,   420,
     270,   421,   416,   417,    44,   418,    45,   422,   419,   271,
     389,   272,   273,   391,   393,   426,   423,   424,   425,   427,
     274,   275,   428,   445,   399,   447,   449,   450,   451,   402,
     452,   276,   405,   454,   455,   407,   459,   458,   353,   463,
     461,   462,   470,   464,   357,   412,   359,   414,   361,   465,
     363,   471,   365,  -218,   366,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,  -221,   474,   479,   484,
     483,   485,   490,   486,   430,   487,   491,   494,   496,   388,
     493,   497,   390,   392,   495,   499,   500,   265,   278,   498,
     249,   288,   453,   398,   501,   279,   502,   443,   401,   280,
     281,     0,     0,     0,     0,     0,   444,     0,   282,     0,
       0,     0,     0,   411,     0,   413,     0,   283,   460,   284,
     285,     0,     0,     0,     0,     0,     0,     0,   286,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,     0,     0,   429,     0,     0,   435,     0,   436,     0,
     437,     0,   438,     0,     0,   441,     0,     0,     0,     0,
       0,     0,     0,     0,   442,     0,     0,     0,     0,   476,
       0,   478,     0,     0,   481,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     489,     0,   457,   492,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   503,     0,     0,   504,     5,     6,     0,     7,
       0,     8,     9,     0,    10,    11,     0,     0,     0,     0,
       0,     0,    12,     0,    13,    14,    15,     0,   475,   477,
       0,    16,   480,     0,     0,     0,     0,    17,     0,     0,
       0,     0,    18,    19,    20,    21,    22,    23,   488,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,     0,    27,     0,     0,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,     0,
      37,     0,   200,     0,    38,    39,    40,    41,    42,     0,
      43,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    66,     0,     0,
      67,   201,   202,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    61,     0,     0,     0,     0,     0,     0,
       0,   180,   181,     0,     0,     0,     0,     0,     0,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,    66,
       0,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    61,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,     0,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,    66,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    61,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,     0,     0,     0,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,    66,     0,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97
};

static const yytype_int16 yycheck[] =
{
      11,   187,    23,    23,    15,    43,    23,    23,    23,    23,
      31,    23,    81,    24,    67,     8,     9,    23,    29,    12,
       0,    14,    15,    16,    17,    18,    19,    48,    81,    23,
      41,    31,    70,    52,    21,    24,    20,    35,    36,    50,
      44,    35,    36,    31,    55,    56,    57,    28,    48,    53,
      61,   189,   190,    25,     6,    76,    77,    41,    30,   142,
      48,    13,    41,    42,    43,    44,    47,   125,    20,    11,
     142,    89,   144,   131,    53,   144,    76,    77,    44,    89,
      86,    44,   101,    23,    73,    74,    75,    53,    76,    77,
      53,   144,    86,    82,    83,    84,    33,    39,    70,    23,
      44,    78,    79,    96,     6,    78,    79,    23,    50,    53,
     121,   104,    67,    55,    56,    57,   142,   142,   144,   130,
       4,   142,   142,   161,    23,   142,   142,   142,   142,     4,
     142,   144,   318,   144,   124,     3,    55,    56,   149,   116,
     117,   118,   153,   116,   117,   118,    33,   121,    55,    56,
     124,   125,   163,    21,    22,    33,    24,   131,    26,    27,
      33,    29,    30,   174,   175,   107,    55,    56,    33,    37,
     124,    39,    40,    41,   185,    55,    56,    20,    46,   121,
      81,   219,   193,    23,    52,    45,    28,    45,   130,    57,
      58,    59,    60,    61,    62,   206,   207,   208,    28,    67,
      33,    68,    13,   118,    13,    28,    28,   149,    71,    71,
      71,   153,    71,    34,    34,    34,    34,    34,    34,    87,
      88,   163,    90,    23,    23,    93,    23,    95,    23,    97,
      98,    99,   100,   101,   102,   103,    23,   105,    32,   250,
      47,   109,   110,   111,   112,   113,    32,   115,    33,    23,
      24,   193,    33,    41,   142,     7,    68,    31,     7,   142,
     101,    35,    36,   142,   206,   207,   208,   278,   144,    34,
      44,    34,   144,   144,   142,   144,   144,    34,   144,    53,
     291,    55,    56,   294,   295,     7,    34,    34,    34,    28,
      64,    65,    28,   142,   305,   142,   142,    13,    41,   310,
      41,    75,   313,     7,     7,   316,   142,    71,   250,    28,
     142,   142,     7,    28,   256,   326,   258,   328,   260,   143,
     262,     7,   264,     7,   266,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     7,    13,    34,   143,
      34,   143,     7,    28,   355,    28,     7,    34,   114,   291,
      13,   143,   294,   295,    34,    34,    34,    23,    24,   143,
     102,   117,   400,   305,   490,    31,   491,   378,   310,    35,
      36,    -1,    -1,    -1,    -1,    -1,   387,    -1,    44,    -1,
      -1,    -1,    -1,   325,    -1,   327,    -1,    53,   426,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,   355,    -1,    -1,   358,    -1,   360,    -1,
     362,    -1,   364,    -1,    -1,   367,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,   450,
      -1,   452,    -1,    -1,   455,    -1,    -1,   458,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     471,    -1,   404,   474,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   493,    -1,    -1,   496,    21,    22,    -1,    24,
      -1,    26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,   450,   451,
      -1,    46,   454,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,   470,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    -1,    90,    -1,    -1,    93,    -1,
      95,    -1,    97,    98,    99,   100,   101,   102,   103,    -1,
     105,    -1,    24,    -1,   109,   110,   111,   112,   113,    -1,
     115,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    33,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    -1,    -1,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    33,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,    -1,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   212,   213,     0,     3,    21,    22,    24,    26,    27,
      29,    30,    37,    39,    40,    41,    46,    52,    57,    58,
      59,    60,    61,    62,    67,    87,    88,    90,    93,    95,
      97,    98,    99,   100,   101,   102,   103,   105,   109,   110,
     111,   112,   113,   115,   142,   144,   205,   207,   209,   211,
      23,   142,   157,   158,   159,    25,    30,    70,   163,   164,
     165,    33,    49,    50,    51,    66,    69,    72,    81,    93,
     106,   107,   108,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   146,   149,
     150,   151,   152,   167,   168,   169,    21,    23,    31,    48,
      76,    77,   142,   154,   155,   156,   146,   152,   170,   171,
     172,    23,    35,    36,    86,   173,   174,   175,    41,    42,
      43,    44,    53,   187,   188,   189,   152,   201,   142,   190,
     193,   142,   144,   191,   206,    35,    36,   179,   180,    23,
     181,   182,   183,    23,    86,   184,   185,   186,   152,    89,
      89,    33,   152,    23,   176,   177,   178,    23,   194,   195,
     196,   142,   144,   192,    67,    67,   144,   146,   152,   142,
      41,    42,   150,   204,     6,    13,    20,   210,     6,     4,
       4,   146,   152,    23,   146,   152,   146,   152,   146,   152,
      24,    73,    74,    75,    84,   152,    33,    33,    33,    24,
      73,    74,    75,    82,    83,    84,   147,   148,   144,    33,
     150,   124,   121,   124,   125,   131,   125,   131,   124,    20,
      78,    79,   116,   117,   118,   166,     8,     9,    12,    14,
      15,    16,    17,    18,    19,    96,   104,    79,   118,   166,
      23,   142,   160,   161,   162,   146,    23,   142,    23,   142,
      23,   142,    23,   142,    23,    23,    24,    31,    35,    36,
      44,    53,    55,    56,    64,    65,    75,   153,    24,    31,
      35,    36,    44,    53,    55,    56,    64,    65,   153,   146,
     152,    28,   146,   152,    45,    45,    52,   101,    20,    41,
     152,   146,   152,   146,   152,    28,    68,   150,   146,   152,
      33,   152,   152,    13,   118,   152,    13,   207,   208,   211,
     211,    28,    28,   146,   152,    71,    71,    71,    71,    34,
      34,    34,    34,    34,    34,   146,   152,   146,   152,   146,
     152,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   146,   152,    23,    47,   146,    23,   146,
      23,   146,    23,   146,    23,   146,   146,    32,    55,    56,
      55,    56,    44,    53,    44,    53,    33,   152,    32,    55,
      56,    55,    56,    44,    53,    44,    53,    33,   146,   152,
     146,   152,   146,   152,   202,   203,    41,   142,   146,   152,
       7,   146,   152,    68,     7,   152,   101,   152,   207,   142,
     142,   146,   152,   146,   152,   144,   144,   144,   144,   144,
      34,    34,    34,    34,    34,    34,     7,    28,    28,   146,
     152,    31,    48,    76,    77,   146,   146,   146,   146,    28,
      47,   146,   146,   152,   152,   142,   197,   142,   199,   142,
      13,    41,    41,   150,     7,     7,   144,   146,    71,   142,
     150,   142,   142,    28,    28,   143,    31,    48,    76,    77,
       7,     7,   198,   200,    13,   146,   152,   146,   152,    34,
     146,   152,   152,    34,   143,   143,    28,    28,   146,   152,
       7,     7,   152,    13,    34,    34,   114,   143,   143,    34,
      34,   197,   199,   152,   152
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   145,   146,   147,   147,   147,   147,   147,   147,   147,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   153,   153,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   164,   164,   164,
     165,   165,   166,   166,   166,   167,   167,   167,   168,   168,
     168,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     174,   174,   175,   175,   176,   177,   178,   178,   179,   179,
     180,   181,   182,   183,   183,   184,   184,   184,   185,   185,
     186,   186,   187,   187,   187,   187,   187,   188,   188,   188,
     189,   189,   190,   190,   190,   190,   190,   190,   191,   191,
     192,   192,   193,   194,   195,   196,   196,   197,   198,   197,
     199,   200,   199,   202,   201,   203,   201,   204,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   206,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   207,   208,   207,   210,   209,   211,   211,
     211,   211,   213,   212
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     4,     4,     4,     4,     4,     1,     4,     4,
       1,     1,     4,     4,     4,     4,     6,     2,     3,     1,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     3,     4,
       5,     4,     3,     5,     4,     4,     3,     4,     5,     4,
       3,     5,     4,     4,     3,     5,     7,     6,     7,     6,
       1,     1,     3,     4,     3,     4,     1,     1,     3,     4,
       3,     4,     1,     1,     2,     4,     4,     2,     4,     4,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     1,     4,     2,     2,     3,     7,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     2,
       2,     3,     7,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     1,     1,     1,     3,
       2,     3,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     1,     5,     2,     5,
       1,     1,     1,     1,     2,     3,     3,     2,     3,     3,
       1,     1,     0,     3,     4,     5,     5,     6,     1,     1,
       1,     1,     1,     6,     6,     1,     1,     1,     0,     4,
       1,     0,     4,     0,     4,     0,     4,     4,     1,     1,
       2,     2,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     4,     1,     1,
       1,     0,     3,     1,     1,     2,     1,     3,     2,     2,
       5,     5,     6,     1,     8,     2,     2,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     8,     2,     3,     4,
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
#line 62 "src/ugbc.y"
                 {
        (yyval.integer) = (yyvsp[0].integer);
    }
#line 2160 "src-generated/ugbc.tab.c"
    break;

  case 3: /* random_definition_simple: BYTE  */
#line 67 "src/ugbc.y"
           {
        (yyval.string) = random_value( _environment, VT_BYTE )->name;
    }
#line 2168 "src-generated/ugbc.tab.c"
    break;

  case 4: /* random_definition_simple: WORD  */
#line 70 "src/ugbc.y"
           {
        (yyval.string) = random_value( _environment, VT_WORD )->name;
    }
#line 2176 "src-generated/ugbc.tab.c"
    break;

  case 5: /* random_definition_simple: DWORD  */
#line 73 "src/ugbc.y"
            {
        (yyval.string) = random_value( _environment, VT_DWORD )->name;
    }
#line 2184 "src-generated/ugbc.tab.c"
    break;

  case 6: /* random_definition_simple: POSITION  */
#line 76 "src/ugbc.y"
               {
        (yyval.string) = random_value( _environment, VT_POSITION )->name;
    }
#line 2192 "src-generated/ugbc.tab.c"
    break;

  case 7: /* random_definition_simple: COLOR  */
#line 79 "src/ugbc.y"
            {
        (yyval.string) = random_value( _environment, VT_COLOR )->name;
    }
#line 2200 "src-generated/ugbc.tab.c"
    break;

  case 8: /* random_definition_simple: WIDTH  */
#line 82 "src/ugbc.y"
            {
        (yyval.string) = random_width( _environment )->name;
    }
#line 2208 "src-generated/ugbc.tab.c"
    break;

  case 9: /* random_definition_simple: HEIGHT  */
#line 85 "src/ugbc.y"
             {
        (yyval.string) = random_height( _environment )->name;
    }
#line 2216 "src-generated/ugbc.tab.c"
    break;

  case 10: /* random_definition: random_definition_simple  */
#line 90 "src/ugbc.y"
                               {
          (yyval.string) = (yyvsp[0].string);
      }
#line 2224 "src-generated/ugbc.tab.c"
    break;

  case 11: /* color_enumeration: BLACK  */
#line 95 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLACK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BLACK );
      }
#line 2233 "src-generated/ugbc.tab.c"
    break;

  case 12: /* color_enumeration: WHITE  */
#line 99 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color WHITE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_WHITE );
      }
#line 2242 "src-generated/ugbc.tab.c"
    break;

  case 13: /* color_enumeration: RED  */
#line 103 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLACK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_RED );
      }
#line 2251 "src-generated/ugbc.tab.c"
    break;

  case 14: /* color_enumeration: CYAN  */
#line 107 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color CYAN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_CYAN );
      }
#line 2260 "src-generated/ugbc.tab.c"
    break;

  case 15: /* color_enumeration: VIOLET  */
#line 111 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color VIOLET)" )->name;
          variable_store( _environment, (yyval.string), COLOR_VIOLET );
      }
#line 2269 "src-generated/ugbc.tab.c"
    break;

  case 16: /* color_enumeration: GREEN  */
#line 115 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GREEN );
      }
#line 2278 "src-generated/ugbc.tab.c"
    break;

  case 17: /* color_enumeration: BLUE  */
#line 119 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BLUE );
      }
#line 2287 "src-generated/ugbc.tab.c"
    break;

  case 18: /* color_enumeration: YELLOW  */
#line 123 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color YELLOW)" )->name;
          variable_store( _environment, (yyval.string), COLOR_YELLOW );
      }
#line 2296 "src-generated/ugbc.tab.c"
    break;

  case 19: /* color_enumeration: ORANGE  */
#line 127 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color ORANGE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_ORANGE );
      }
#line 2305 "src-generated/ugbc.tab.c"
    break;

  case 20: /* color_enumeration: BROWN  */
#line 131 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color BROWN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_BROWN );
      }
#line 2314 "src-generated/ugbc.tab.c"
    break;

  case 21: /* color_enumeration: LIGHT RED  */
#line 135 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT RED)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_RED );
      }
#line 2323 "src-generated/ugbc.tab.c"
    break;

  case 22: /* color_enumeration: DARK GREY  */
#line 139 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color DARK GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_DARK_GREY );
      }
#line 2332 "src-generated/ugbc.tab.c"
    break;

  case 23: /* color_enumeration: GREY  */
#line 143 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GREY );
      }
#line 2341 "src-generated/ugbc.tab.c"
    break;

  case 24: /* color_enumeration: LIGHT GREEN  */
#line 147 "src/ugbc.y"
                    {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_GREEN );
      }
#line 2350 "src-generated/ugbc.tab.c"
    break;

  case 25: /* color_enumeration: LIGHT BLUE  */
#line 151 "src/ugbc.y"
                   {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_BLUE );
      }
#line 2359 "src-generated/ugbc.tab.c"
    break;

  case 26: /* color_enumeration: LIGHT GREY  */
#line 155 "src/ugbc.y"
                   {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LIGHT GREY)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LIGHT_GREY );
      }
#line 2368 "src-generated/ugbc.tab.c"
    break;

  case 27: /* color_enumeration: DARK BLUE  */
#line 159 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color DARK BLUE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_DARK_BLUE );
      }
#line 2377 "src-generated/ugbc.tab.c"
    break;

  case 28: /* color_enumeration: MAGENTA  */
#line 163 "src/ugbc.y"
                {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color MAGENTA)" )->name;
          variable_store( _environment, (yyval.string), COLOR_MAGENTA );
      }
#line 2386 "src-generated/ugbc.tab.c"
    break;

  case 29: /* color_enumeration: PURPLE  */
#line 167 "src/ugbc.y"
               {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PURPLE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PURPLE );
      }
#line 2395 "src-generated/ugbc.tab.c"
    break;

  case 30: /* color_enumeration: LAVENDER  */
#line 171 "src/ugbc.y"
                 {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color LAVENDER)" )->name;
          variable_store( _environment, (yyval.string), COLOR_LAVENDER );
      }
#line 2404 "src-generated/ugbc.tab.c"
    break;

  case 31: /* color_enumeration: GOLD  */
#line 175 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color GOLD)" )->name;
          variable_store( _environment, (yyval.string), COLOR_GOLD );
      }
#line 2413 "src-generated/ugbc.tab.c"
    break;

  case 32: /* color_enumeration: TURQUOISE  */
#line 179 "src/ugbc.y"
                  {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color TURQUOISE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_TURQUOISE );
      }
#line 2422 "src-generated/ugbc.tab.c"
    break;

  case 33: /* color_enumeration: TAN  */
#line 183 "src/ugbc.y"
            {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color TAN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_TAN );
      }
#line 2431 "src-generated/ugbc.tab.c"
    break;

  case 34: /* color_enumeration: YELLOW GREEN  */
#line 187 "src/ugbc.y"
                     {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color YELLOW GREEN)" )->name;
          variable_store( _environment, (yyval.string), COLOR_YELLOW_GREEN );
      }
#line 2440 "src-generated/ugbc.tab.c"
    break;

  case 35: /* color_enumeration: OLIVE GREEN  */
#line 191 "src/ugbc.y"
                    {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color OLIVE)" )->name;
          variable_store( _environment, (yyval.string), COLOR_OLIVE_GREEN );
      }
#line 2449 "src-generated/ugbc.tab.c"
    break;

  case 36: /* color_enumeration: PINK  */
#line 195 "src/ugbc.y"
             {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PINK)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PINK );
      }
#line 2458 "src-generated/ugbc.tab.c"
    break;

  case 37: /* color_enumeration: PEACH  */
#line 199 "src/ugbc.y"
              {
          (yyval.string) = variable_temporary( _environment, VT_COLOR, "(color PEACH)" )->name;
          variable_store( _environment, (yyval.string), COLOR_PEACH );
      }
#line 2467 "src-generated/ugbc.tab.c"
    break;

  case 38: /* expression: Identifier  */
#line 205 "src/ugbc.y"
                 { 
        (yyval.string) = (yyvsp[0].string);
      }
#line 2475 "src-generated/ugbc.tab.c"
    break;

  case 39: /* expression: Identifier DOLLAR  */
#line 208 "src/ugbc.y"
                        { 
        (yyval.string) = (yyvsp[-1].string);
      }
#line 2483 "src-generated/ugbc.tab.c"
    break;

  case 40: /* expression: Integer  */
#line 211 "src/ugbc.y"
              { 
        (yyval.string) = variable_temporary( _environment, VT_WORD, "(integer value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2492 "src-generated/ugbc.tab.c"
    break;

  case 41: /* expression: String  */
#line 215 "src/ugbc.y"
             { 
        outline1("; (expression string: \"%s\")", (yyvsp[0].string) );
        (yyval.string) = variable_temporary( _environment, VT_STRING, "(string value)" )->name;
        outline1("; %s", (yyval.string) );
        variable_store_string( _environment, (yyval.string), (yyvsp[0].string) );
        outline2("; variable stored: %s = %s", (yyval.string), (yyvsp[0].string) );
      }
#line 2504 "src-generated/ugbc.tab.c"
    break;

  case 42: /* expression: OP BYTE CP Integer  */
#line 222 "src/ugbc.y"
                         { 
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(BYTE value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2513 "src-generated/ugbc.tab.c"
    break;

  case 43: /* expression: OP WORD CP Integer  */
#line 226 "src/ugbc.y"
                         { 
        (yyval.string) = variable_temporary( _environment, VT_WORD, "(WORD value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2522 "src-generated/ugbc.tab.c"
    break;

  case 44: /* expression: OP DWORD CP Integer  */
#line 230 "src/ugbc.y"
                          { 
        (yyval.string) = variable_temporary( _environment, VT_DWORD, "(DWORD value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2531 "src-generated/ugbc.tab.c"
    break;

  case 45: /* expression: OP POSITION CP Integer  */
#line 234 "src/ugbc.y"
                             { 
        (yyval.string) = variable_temporary( _environment, VT_POSITION, "(POSITION value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2540 "src-generated/ugbc.tab.c"
    break;

  case 46: /* expression: OP COLOR CP Integer  */
#line 238 "src/ugbc.y"
                          { 
        (yyval.string) = variable_temporary( _environment, VT_COLOR, "(COLOR value)" )->name;
        variable_store( _environment, (yyval.string), (yyvsp[0].integer) );
      }
#line 2549 "src-generated/ugbc.tab.c"
    break;

  case 47: /* expression: color_enumeration  */
#line 242 "src/ugbc.y"
                        { 
        (yyval.string) = (yyvsp[0].string);
      }
#line 2557 "src-generated/ugbc.tab.c"
    break;

  case 48: /* expression: PEEK OP direct_integer CP  */
#line 245 "src/ugbc.y"
                                {
        (yyval.string) = peek( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2565 "src-generated/ugbc.tab.c"
    break;

  case 49: /* expression: PEEK OP expressions CP  */
#line 248 "src/ugbc.y"
                             {
        (yyval.string) = peek_var( _environment, (yyvsp[-1].string) )->name;
      }
#line 2573 "src-generated/ugbc.tab.c"
    break;

  case 50: /* expression: XPEN  */
#line 251 "src/ugbc.y"
           {
        (yyval.string) = xpen( _environment )->name;
      }
#line 2581 "src-generated/ugbc.tab.c"
    break;

  case 51: /* expression: YPEN  */
#line 254 "src/ugbc.y"
           {
        (yyval.string) = ypen( _environment )->name;
      }
#line 2589 "src-generated/ugbc.tab.c"
    break;

  case 52: /* expression: COLLISION OP direct_integer CP  */
#line 257 "src/ugbc.y"
                                     {
        (yyval.string) = collision_to( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2597 "src-generated/ugbc.tab.c"
    break;

  case 53: /* expression: COLLISION OP expressions CP  */
#line 260 "src/ugbc.y"
                                  {
        (yyval.string) = collision_to_vars( _environment, (yyvsp[-1].string) )->name;
      }
#line 2605 "src-generated/ugbc.tab.c"
    break;

  case 54: /* expression: HIT OP direct_integer CP  */
#line 263 "src/ugbc.y"
                               {
        (yyval.string) = collision_to( _environment, (yyvsp[-1].integer) )->name;
      }
#line 2613 "src-generated/ugbc.tab.c"
    break;

  case 55: /* expression: HIT OP expressions CP  */
#line 266 "src/ugbc.y"
                            {
        (yyval.string) = collision_to_vars( _environment, (yyvsp[-1].string) )->name;
      }
#line 2621 "src-generated/ugbc.tab.c"
    break;

  case 56: /* expression: LEFT OP expression COMMA expression CP  */
#line 269 "src/ugbc.y"
                                             {
        (yyval.string) = variable_string_left( _environment, (yyvsp[-3].string), (yyvsp[-1].string) )->name;
    }
#line 2629 "src-generated/ugbc.tab.c"
    break;

  case 57: /* expression: RANDOM random_definition  */
#line 272 "src/ugbc.y"
                               {
        (yyval.string) = (yyvsp[0].string);
    }
#line 2637 "src-generated/ugbc.tab.c"
    break;

  case 58: /* expression: OP expressions CP  */
#line 275 "src/ugbc.y"
                        {
        (yyval.string) = (yyvsp[-1].string);
    }
#line 2645 "src-generated/ugbc.tab.c"
    break;

  case 59: /* expression: TRUE  */
#line 278 "src/ugbc.y"
           {
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(true)" )->name;
        variable_store( _environment, (yyval.string), 255 );
    }
#line 2654 "src-generated/ugbc.tab.c"
    break;

  case 60: /* expression: FALSE  */
#line 282 "src/ugbc.y"
            {
        (yyval.string) = variable_temporary( _environment, VT_BYTE, "(false)" )->name;
        variable_store( _environment, (yyval.string), 255 );
    }
#line 2663 "src-generated/ugbc.tab.c"
    break;

  case 61: /* expression: NOT expression  */
#line 286 "src/ugbc.y"
                     {
        (yyval.string) = variable_not( _environment, (yyvsp[0].string) )->name;
    }
#line 2671 "src-generated/ugbc.tab.c"
    break;

  case 62: /* expressions_raw: expression  */
#line 292 "src/ugbc.y"
                 { (yyval.string) = (yyvsp[0].string); }
#line 2677 "src-generated/ugbc.tab.c"
    break;

  case 63: /* expressions_raw: expression PLUS expressions_raw  */
#line 293 "src/ugbc.y"
                                      {
        (yyval.string) = variable_add( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2685 "src-generated/ugbc.tab.c"
    break;

  case 64: /* expressions_raw: expression MINUS expressions_raw  */
#line 296 "src/ugbc.y"
                                       {
        (yyval.string) = variable_sub( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s - %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2694 "src-generated/ugbc.tab.c"
    break;

  case 65: /* expressions_raw: expression MULTIPLICATION expressions_raw  */
#line 300 "src/ugbc.y"
                                                {
        (yyval.string) = variable_mul( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s * %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2703 "src-generated/ugbc.tab.c"
    break;

  case 66: /* expressions_raw: expression AND expressions_raw  */
#line 304 "src/ugbc.y"
                                     {
        (yyval.string) = variable_and( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s AND %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2712 "src-generated/ugbc.tab.c"
    break;

  case 67: /* expressions_raw: expression OR expressions_raw  */
#line 308 "src/ugbc.y"
                                    {
        (yyval.string) = variable_or( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
        outline3("; %s = %s OR %s", (yyval.string), (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2721 "src-generated/ugbc.tab.c"
    break;

  case 68: /* expressions_raw: expression EQUAL expressions_raw  */
#line 312 "src/ugbc.y"
                                       {
        (yyval.string) = variable_compare( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2729 "src-generated/ugbc.tab.c"
    break;

  case 69: /* expressions_raw: expression DISEQUAL expressions_raw  */
#line 315 "src/ugbc.y"
                                          {
        (yyval.string) = variable_compare_not( _environment, (yyvsp[-2].string), (yyvsp[0].string) )->name;
    }
#line 2737 "src-generated/ugbc.tab.c"
    break;

  case 70: /* expressions_raw: expression LT expressions_raw  */
#line 318 "src/ugbc.y"
                                    {
        (yyval.string) = variable_less_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2745 "src-generated/ugbc.tab.c"
    break;

  case 71: /* expressions_raw: expression LTE expressions_raw  */
#line 321 "src/ugbc.y"
                                     {
        (yyval.string) = variable_less_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 1 )->name;
    }
#line 2753 "src-generated/ugbc.tab.c"
    break;

  case 72: /* expressions_raw: expression GT expressions_raw  */
#line 324 "src/ugbc.y"
                                    {
        (yyval.string) = variable_greater_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2761 "src-generated/ugbc.tab.c"
    break;

  case 73: /* expressions_raw: expression GTE expressions_raw  */
#line 327 "src/ugbc.y"
                                     {
        (yyval.string) = variable_greater_than( _environment, (yyvsp[-2].string), (yyvsp[0].string), 0 )->name;
    }
#line 2769 "src-generated/ugbc.tab.c"
    break;

  case 74: /* expressions: expressions_raw  */
#line 333 "src/ugbc.y"
                    {
      (yyval.string) = (yyvsp[0].string);
    }
#line 2777 "src-generated/ugbc.tab.c"
    break;

  case 77: /* bank_definition_simple: AT direct_integer  */
#line 340 "src/ugbc.y"
                    {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2785 "src-generated/ugbc.tab.c"
    break;

  case 78: /* bank_definition_simple: Identifier AT direct_integer  */
#line 343 "src/ugbc.y"
                                 {
      bank_define( _environment, (yyvsp[-2].string), BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2793 "src-generated/ugbc.tab.c"
    break;

  case 79: /* bank_definition_simple: AT direct_integer AS DATA  */
#line 346 "src/ugbc.y"
                              {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[-2].integer), NULL );
  }
#line 2801 "src-generated/ugbc.tab.c"
    break;

  case 80: /* bank_definition_simple: Identifier AT direct_integer AS DATA  */
#line 349 "src/ugbc.y"
                                         {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), NULL );
  }
#line 2809 "src-generated/ugbc.tab.c"
    break;

  case 81: /* bank_definition_simple: DATA Identifier AT direct_integer  */
#line 352 "src/ugbc.y"
                                      {
      bank_define( _environment, (yyvsp[-2].string), BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2817 "src-generated/ugbc.tab.c"
    break;

  case 82: /* bank_definition_simple: DATA AT direct_integer  */
#line 355 "src/ugbc.y"
                           {
      bank_define( _environment, NULL, BT_DATA, (yyvsp[0].integer), NULL );
  }
#line 2825 "src-generated/ugbc.tab.c"
    break;

  case 83: /* bank_definition_simple: Identifier AT direct_integer AS CODE  */
#line 359 "src/ugbc.y"
                                         {
      bank_define( _environment, (yyvsp[-4].string), BT_CODE, (yyvsp[-2].integer), NULL );
  }
#line 2833 "src-generated/ugbc.tab.c"
    break;

  case 84: /* bank_definition_simple: AT direct_integer AS CODE  */
#line 362 "src/ugbc.y"
                              {
      bank_define( _environment, NULL, BT_CODE, (yyvsp[-2].integer), NULL );
  }
#line 2841 "src-generated/ugbc.tab.c"
    break;

  case 85: /* bank_definition_simple: CODE Identifier AT direct_integer  */
#line 365 "src/ugbc.y"
                                      {
      bank_define( _environment, (yyvsp[-2].string), BT_CODE, (yyvsp[0].integer), NULL );
  }
#line 2849 "src-generated/ugbc.tab.c"
    break;

  case 86: /* bank_definition_simple: CODE AT direct_integer  */
#line 368 "src/ugbc.y"
                           {
      bank_define( _environment, NULL, BT_CODE, (yyvsp[0].integer), NULL );
  }
#line 2857 "src-generated/ugbc.tab.c"
    break;

  case 87: /* bank_definition_simple: AT direct_integer AS VARIABLES  */
#line 372 "src/ugbc.y"
                                   {
      bank_define( _environment, NULL, BT_VARIABLES, (yyvsp[-2].integer), NULL );
  }
#line 2865 "src-generated/ugbc.tab.c"
    break;

  case 88: /* bank_definition_simple: Identifier AT direct_integer AS VARIABLES  */
#line 375 "src/ugbc.y"
                                              {
      bank_define( _environment, (yyvsp[-4].string), BT_VARIABLES, (yyvsp[-2].integer), NULL );
  }
#line 2873 "src-generated/ugbc.tab.c"
    break;

  case 89: /* bank_definition_simple: VARIABLES Identifier AT direct_integer  */
#line 378 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-2].string), BT_VARIABLES, (yyvsp[0].integer), NULL );
  }
#line 2881 "src-generated/ugbc.tab.c"
    break;

  case 90: /* bank_definition_simple: VARIABLES AT direct_integer  */
#line 381 "src/ugbc.y"
                                {
      bank_define( _environment, NULL, BT_VARIABLES, (yyvsp[0].integer), NULL );
  }
#line 2889 "src-generated/ugbc.tab.c"
    break;

  case 91: /* bank_definition_simple: Identifier AT direct_integer AS TEMPORARY  */
#line 385 "src/ugbc.y"
                                              {
      bank_define( _environment, (yyvsp[-4].string), BT_TEMPORARY, (yyvsp[-2].integer), NULL );
  }
#line 2897 "src-generated/ugbc.tab.c"
    break;

  case 92: /* bank_definition_simple: AT direct_integer AS TEMPORARY  */
#line 388 "src/ugbc.y"
                                   {
      bank_define( _environment, NULL, BT_TEMPORARY, (yyvsp[-2].integer), NULL );
  }
#line 2905 "src-generated/ugbc.tab.c"
    break;

  case 93: /* bank_definition_simple: TEMPORARY Identifier AT direct_integer  */
#line 391 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-2].string), BT_TEMPORARY, (yyvsp[0].integer), NULL );
  }
#line 2913 "src-generated/ugbc.tab.c"
    break;

  case 94: /* bank_definition_simple: TEMPORARY AT direct_integer  */
#line 394 "src/ugbc.y"
                                {
      bank_define( _environment, NULL, BT_TEMPORARY, (yyvsp[0].integer), NULL );
  }
#line 2921 "src-generated/ugbc.tab.c"
    break;

  case 95: /* bank_definition_with_payload: Identifier AT direct_integer WITH String  */
#line 400 "src/ugbc.y"
                                           {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 2929 "src-generated/ugbc.tab.c"
    break;

  case 96: /* bank_definition_with_payload: Identifier AT direct_integer AS DATA WITH String  */
#line 403 "src/ugbc.y"
                                                     {
      bank_define( _environment, (yyvsp[-6].string), BT_DATA, (yyvsp[-4].integer), (yyvsp[0].string) );
  }
#line 2937 "src-generated/ugbc.tab.c"
    break;

  case 97: /* bank_definition_with_payload: DATA Identifier AT direct_integer WITH String  */
#line 406 "src/ugbc.y"
                                                  {
      bank_define( _environment, (yyvsp[-4].string), BT_DATA, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 2945 "src-generated/ugbc.tab.c"
    break;

  case 98: /* bank_definition_with_payload: Identifier AT direct_integer AS CODE WITH String  */
#line 409 "src/ugbc.y"
                                                     {
      bank_define( _environment, (yyvsp[-6].string), BT_CODE, (yyvsp[-4].integer), (yyvsp[0].string) );
  }
#line 2953 "src-generated/ugbc.tab.c"
    break;

  case 99: /* bank_definition_with_payload: CODE Identifier AT direct_integer WITH String  */
#line 412 "src/ugbc.y"
                                                  {
      bank_define( _environment, (yyvsp[-4].string), BT_CODE, (yyvsp[-2].integer), (yyvsp[0].string) );
  }
#line 2961 "src-generated/ugbc.tab.c"
    break;

  case 102: /* raster_definition_simple: Identifier AT direct_integer  */
#line 421 "src/ugbc.y"
                                 {
      raster_at( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );
    }
#line 2969 "src-generated/ugbc.tab.c"
    break;

  case 103: /* raster_definition_simple: AT direct_integer WITH Identifier  */
#line 424 "src/ugbc.y"
                                      {
      raster_at( _environment, (yyvsp[0].string), (yyvsp[-2].integer) );
    }
#line 2977 "src-generated/ugbc.tab.c"
    break;

  case 104: /* raster_definition_expression: Identifier AT expressions  */
#line 429 "src/ugbc.y"
                              {
      raster_at_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2985 "src-generated/ugbc.tab.c"
    break;

  case 105: /* raster_definition_expression: AT expressions WITH Identifier  */
#line 432 "src/ugbc.y"
                                   {
      raster_at_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 2993 "src-generated/ugbc.tab.c"
    break;

  case 108: /* next_raster_definition_simple: Identifier AT direct_integer  */
#line 441 "src/ugbc.y"
                                 {
      next_raster_at_with( _environment, (yyvsp[0].integer), (yyvsp[-2].string) );
    }
#line 3001 "src-generated/ugbc.tab.c"
    break;

  case 109: /* next_raster_definition_simple: AT direct_integer WITH Identifier  */
#line 444 "src/ugbc.y"
                                      {
      next_raster_at_with( _environment, (yyvsp[-2].integer), (yyvsp[0].string) );
    }
#line 3009 "src-generated/ugbc.tab.c"
    break;

  case 110: /* next_raster_definition_expression: Identifier AT expressions  */
#line 449 "src/ugbc.y"
                              {
      next_raster_at_with_var( _environment, (yyvsp[0].string), (yyvsp[-2].string) );
    }
#line 3017 "src-generated/ugbc.tab.c"
    break;

  case 111: /* next_raster_definition_expression: AT expressions WITH Identifier  */
#line 452 "src/ugbc.y"
                                   {
      next_raster_at_with_var( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
    }
#line 3025 "src-generated/ugbc.tab.c"
    break;

  case 114: /* color_definition_simple: BORDER direct_integer  */
#line 461 "src/ugbc.y"
                          {
      color_border( _environment, (yyvsp[0].integer) );
  }
#line 3033 "src-generated/ugbc.tab.c"
    break;

  case 115: /* color_definition_simple: BACKGROUND direct_integer TO direct_integer  */
#line 464 "src/ugbc.y"
                                                {
      color_background( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3041 "src-generated/ugbc.tab.c"
    break;

  case 116: /* color_definition_simple: SPRITE direct_integer TO direct_integer  */
#line 467 "src/ugbc.y"
                                            {
      color_sprite( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3049 "src-generated/ugbc.tab.c"
    break;

  case 117: /* color_definition_expression: BORDER expressions  */
#line 472 "src/ugbc.y"
                       {
      color_border_var( _environment, (yyvsp[0].string) );
  }
#line 3057 "src-generated/ugbc.tab.c"
    break;

  case 118: /* color_definition_expression: BACKGROUND expressions TO expressions  */
#line 475 "src/ugbc.y"
                                          {
      color_background_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3065 "src-generated/ugbc.tab.c"
    break;

  case 119: /* color_definition_expression: SPRITE expressions TO expressions  */
#line 478 "src/ugbc.y"
                                      {
      color_sprite_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3073 "src-generated/ugbc.tab.c"
    break;

  case 125: /* wait_definition_simple: direct_integer CYCLES  */
#line 492 "src/ugbc.y"
                            {
      wait_cycles( _environment, (yyvsp[-1].integer) );
    }
#line 3081 "src-generated/ugbc.tab.c"
    break;

  case 126: /* wait_definition_simple: direct_integer TICKS  */
#line 495 "src/ugbc.y"
                           {
      wait_ticks( _environment, (yyvsp[-1].integer) );
    }
#line 3089 "src-generated/ugbc.tab.c"
    break;

  case 127: /* wait_definition_simple: direct_integer milliseconds  */
#line 498 "src/ugbc.y"
                                  {
      wait_milliseconds( _environment, (yyvsp[-1].integer) );
    }
#line 3097 "src-generated/ugbc.tab.c"
    break;

  case 128: /* wait_definition_expression: expressions CYCLES  */
#line 503 "src/ugbc.y"
                         {
      wait_cycles_var( _environment, (yyvsp[-1].string) );
    }
#line 3105 "src-generated/ugbc.tab.c"
    break;

  case 129: /* wait_definition_expression: expressions TICKS  */
#line 506 "src/ugbc.y"
                        {
      wait_ticks_var( _environment, (yyvsp[-1].string) );
    }
#line 3113 "src-generated/ugbc.tab.c"
    break;

  case 130: /* wait_definition_expression: expressions milliseconds  */
#line 509 "src/ugbc.y"
                               {
      wait_milliseconds_var( _environment, (yyvsp[-1].string) );
    }
#line 3121 "src-generated/ugbc.tab.c"
    break;

  case 133: /* sprite_definition_simple: direct_integer DATA FROM direct_integer  */
#line 519 "src/ugbc.y"
                                            {
      sprite_data_from( _environment, (yyvsp[-3].integer), (yyvsp[0].integer) );
  }
#line 3129 "src-generated/ugbc.tab.c"
    break;

  case 134: /* sprite_definition_simple: direct_integer MULTICOLOR  */
#line 522 "src/ugbc.y"
                              {
      sprite_multicolor( _environment, (yyvsp[-1].integer) );
  }
#line 3137 "src-generated/ugbc.tab.c"
    break;

  case 135: /* sprite_definition_simple: direct_integer MONOCOLOR  */
#line 525 "src/ugbc.y"
                             {
      sprite_monocolor( _environment, (yyvsp[-1].integer) );
  }
#line 3145 "src-generated/ugbc.tab.c"
    break;

  case 136: /* sprite_definition_simple: direct_integer COLOR direct_integer  */
#line 528 "src/ugbc.y"
                                        {
      sprite_color( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3153 "src-generated/ugbc.tab.c"
    break;

  case 137: /* sprite_definition_simple: direct_integer position OP direct_integer COMMA direct_integer CP  */
#line 531 "src/ugbc.y"
                                                                      {
      sprite_position( _environment, (yyvsp[-6].integer), (yyvsp[-3].integer), (yyvsp[-1].integer) );
  }
#line 3161 "src-generated/ugbc.tab.c"
    break;

  case 138: /* sprite_definition_simple: direct_integer ENABLE  */
#line 534 "src/ugbc.y"
                          {
      sprite_enable( _environment, (yyvsp[-1].integer) );
  }
#line 3169 "src-generated/ugbc.tab.c"
    break;

  case 139: /* sprite_definition_simple: direct_integer DISABLE  */
#line 537 "src/ugbc.y"
                           {
      sprite_disable( _environment, (yyvsp[-1].integer) );
  }
#line 3177 "src-generated/ugbc.tab.c"
    break;

  case 140: /* sprite_definition_simple: direct_integer EXPAND VERTICAL  */
#line 540 "src/ugbc.y"
                                   {
      sprite_expand_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3185 "src-generated/ugbc.tab.c"
    break;

  case 141: /* sprite_definition_simple: direct_integer COMPRESS VERTICAL  */
#line 543 "src/ugbc.y"
                                     {
      sprite_compress_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3193 "src-generated/ugbc.tab.c"
    break;

  case 142: /* sprite_definition_simple: direct_integer VERTICAL EXPAND  */
#line 546 "src/ugbc.y"
                                   {
      sprite_expand_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3201 "src-generated/ugbc.tab.c"
    break;

  case 143: /* sprite_definition_simple: direct_integer VERTICAL COMPRESS  */
#line 549 "src/ugbc.y"
                                     {
      sprite_compress_vertical( _environment, (yyvsp[-2].integer) );
  }
#line 3209 "src-generated/ugbc.tab.c"
    break;

  case 144: /* sprite_definition_simple: direct_integer EXPAND HORIZONTAL  */
#line 552 "src/ugbc.y"
                                     {
      sprite_expand_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3217 "src-generated/ugbc.tab.c"
    break;

  case 145: /* sprite_definition_simple: direct_integer COMPRESS HORIZONTAL  */
#line 555 "src/ugbc.y"
                                       {
      sprite_compress_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3225 "src-generated/ugbc.tab.c"
    break;

  case 146: /* sprite_definition_simple: direct_integer HORIZONTAL EXPAND  */
#line 558 "src/ugbc.y"
                                     {
      sprite_expand_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3233 "src-generated/ugbc.tab.c"
    break;

  case 147: /* sprite_definition_simple: direct_integer HORIZONTAL COMPRESS  */
#line 561 "src/ugbc.y"
                                       {
      sprite_compress_horizontal( _environment, (yyvsp[-2].integer) );
  }
#line 3241 "src-generated/ugbc.tab.c"
    break;

  case 148: /* sprite_definition_expression: expressions DATA FROM expressions  */
#line 566 "src/ugbc.y"
                                      {
      sprite_data_from_vars( _environment, (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 3249 "src-generated/ugbc.tab.c"
    break;

  case 149: /* sprite_definition_expression: expressions MULTICOLOR  */
#line 569 "src/ugbc.y"
                           {
      sprite_multicolor_var( _environment, (yyvsp[-1].string) );
  }
#line 3257 "src-generated/ugbc.tab.c"
    break;

  case 150: /* sprite_definition_expression: expressions MONOCOLOR  */
#line 572 "src/ugbc.y"
                          {
      sprite_monocolor_var( _environment, (yyvsp[-1].string) );
  }
#line 3265 "src-generated/ugbc.tab.c"
    break;

  case 151: /* sprite_definition_expression: expressions COLOR expressions  */
#line 575 "src/ugbc.y"
                                  {
      sprite_color_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3273 "src-generated/ugbc.tab.c"
    break;

  case 152: /* sprite_definition_expression: expressions position OP expressions COMMA expressions CP  */
#line 578 "src/ugbc.y"
                                                             {
      sprite_position_vars( _environment, (yyvsp[-6].string), (yyvsp[-3].string), (yyvsp[-1].string) );
  }
#line 3281 "src-generated/ugbc.tab.c"
    break;

  case 153: /* sprite_definition_expression: expressions ENABLE  */
#line 581 "src/ugbc.y"
                       {
      sprite_enable_var( _environment, (yyvsp[-1].string) );
  }
#line 3289 "src-generated/ugbc.tab.c"
    break;

  case 154: /* sprite_definition_expression: expressions DISABLE  */
#line 584 "src/ugbc.y"
                        {
      sprite_disable_var( _environment, (yyvsp[-1].string) );
  }
#line 3297 "src-generated/ugbc.tab.c"
    break;

  case 155: /* sprite_definition_expression: expressions EXPAND VERTICAL  */
#line 587 "src/ugbc.y"
                                {
      sprite_expand_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3305 "src-generated/ugbc.tab.c"
    break;

  case 156: /* sprite_definition_expression: expressions COMPRESS VERTICAL  */
#line 590 "src/ugbc.y"
                                  {
      sprite_compress_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3313 "src-generated/ugbc.tab.c"
    break;

  case 157: /* sprite_definition_expression: expressions VERTICAL EXPAND  */
#line 593 "src/ugbc.y"
                                {
      sprite_expand_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3321 "src-generated/ugbc.tab.c"
    break;

  case 158: /* sprite_definition_expression: expressions VERTICAL COMPRESS  */
#line 596 "src/ugbc.y"
                                  {
      sprite_compress_vertical_var( _environment, (yyvsp[-2].string) );
  }
#line 3329 "src-generated/ugbc.tab.c"
    break;

  case 159: /* sprite_definition_expression: expressions EXPAND HORIZONTAL  */
#line 599 "src/ugbc.y"
                                  {
      sprite_expand_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3337 "src-generated/ugbc.tab.c"
    break;

  case 160: /* sprite_definition_expression: expressions COMPRESS HORIZONTAL  */
#line 602 "src/ugbc.y"
                                    {
      sprite_compress_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3345 "src-generated/ugbc.tab.c"
    break;

  case 161: /* sprite_definition_expression: expressions HORIZONTAL EXPAND  */
#line 605 "src/ugbc.y"
                                  {
      sprite_expand_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3353 "src-generated/ugbc.tab.c"
    break;

  case 162: /* sprite_definition_expression: expressions HORIZONTAL COMPRESS  */
#line 608 "src/ugbc.y"
                                    {
      sprite_compress_horizontal_var( _environment, (yyvsp[-2].string) );
  }
#line 3361 "src-generated/ugbc.tab.c"
    break;

  case 165: /* bitmap_definition_simple: AT direct_integer  */
#line 617 "src/ugbc.y"
                      {
      bitmap_at( _environment, (yyvsp[0].integer) );
  }
#line 3369 "src-generated/ugbc.tab.c"
    break;

  case 166: /* bitmap_definition_simple: ENABLE  */
#line 620 "src/ugbc.y"
           {
      bitmap_enable( _environment );
  }
#line 3377 "src-generated/ugbc.tab.c"
    break;

  case 167: /* bitmap_definition_simple: DISABLE  */
#line 623 "src/ugbc.y"
            {
      bitmap_disable( _environment );
  }
#line 3385 "src-generated/ugbc.tab.c"
    break;

  case 168: /* bitmap_definition_simple: CLEAR  */
#line 626 "src/ugbc.y"
          {
      bitmap_clear( _environment );
  }
#line 3393 "src-generated/ugbc.tab.c"
    break;

  case 169: /* bitmap_definition_simple: CLEAR WITH direct_integer  */
#line 629 "src/ugbc.y"
                              {
      bitmap_clear_with( _environment, (yyvsp[0].integer) );
  }
#line 3401 "src-generated/ugbc.tab.c"
    break;

  case 170: /* bitmap_definition_expression: AT expressions  */
#line 635 "src/ugbc.y"
                   {
      bitmap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3409 "src-generated/ugbc.tab.c"
    break;

  case 171: /* bitmap_definition_expression: CLEAR WITH expressions  */
#line 638 "src/ugbc.y"
                           {
      bitmap_clear_with_vars( _environment, (yyvsp[0].string) );
  }
#line 3417 "src-generated/ugbc.tab.c"
    break;

  case 174: /* textmap_definition_simple: AT direct_integer  */
#line 648 "src/ugbc.y"
                      {
      textmap_at( _environment, (yyvsp[0].integer) );
  }
#line 3425 "src-generated/ugbc.tab.c"
    break;

  case 175: /* textmap_definition_expression: AT expressions  */
#line 653 "src/ugbc.y"
                   {
      textmap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3433 "src-generated/ugbc.tab.c"
    break;

  case 178: /* text_definition_simple: ENABLE  */
#line 662 "src/ugbc.y"
           {
      text_enable( _environment );
  }
#line 3441 "src-generated/ugbc.tab.c"
    break;

  case 179: /* text_definition_simple: DISABLE  */
#line 665 "src/ugbc.y"
            {
      text_disable( _environment );
  }
#line 3449 "src-generated/ugbc.tab.c"
    break;

  case 181: /* tiles_definition_simple: AT direct_integer  */
#line 673 "src/ugbc.y"
                      {
      tiles_at( _environment, (yyvsp[0].integer) );
  }
#line 3457 "src-generated/ugbc.tab.c"
    break;

  case 182: /* tiles_definition_expression: AT expressions  */
#line 678 "src/ugbc.y"
                   {
      tiles_at_var( _environment, (yyvsp[0].string) );
  }
#line 3465 "src-generated/ugbc.tab.c"
    break;

  case 185: /* colormap_definition_simple: AT direct_integer  */
#line 687 "src/ugbc.y"
                      {
      colormap_at( _environment, (yyvsp[0].integer) );
  }
#line 3473 "src-generated/ugbc.tab.c"
    break;

  case 186: /* colormap_definition_simple: CLEAR  */
#line 690 "src/ugbc.y"
          {
      colormap_clear( _environment );
  }
#line 3481 "src-generated/ugbc.tab.c"
    break;

  case 187: /* colormap_definition_simple: CLEAR WITH direct_integer ON direct_integer  */
#line 693 "src/ugbc.y"
                                                {
      colormap_clear_with( _environment, (yyvsp[-2].integer), (yyvsp[0].integer) );
  }
#line 3489 "src-generated/ugbc.tab.c"
    break;

  case 188: /* colormap_definition_expression: AT expressions  */
#line 698 "src/ugbc.y"
                   {
      colormap_at_var( _environment, (yyvsp[0].string) );
  }
#line 3497 "src-generated/ugbc.tab.c"
    break;

  case 189: /* colormap_definition_expression: CLEAR WITH expressions ON expressions  */
#line 701 "src/ugbc.y"
                                          {
      colormap_clear_with_vars( _environment, (yyvsp[-2].string), (yyvsp[0].string) );
  }
#line 3505 "src-generated/ugbc.tab.c"
    break;

  case 192: /* screen_definition_simple: ON  */
#line 711 "src/ugbc.y"
       {   
      screen_on( _environment );
  }
#line 3513 "src-generated/ugbc.tab.c"
    break;

  case 193: /* screen_definition_simple: OFF  */
#line 714 "src/ugbc.y"
        {
      screen_off( _environment );
  }
#line 3521 "src-generated/ugbc.tab.c"
    break;

  case 194: /* screen_definition_simple: ROWS direct_integer  */
#line 717 "src/ugbc.y"
                        {
      screen_rows( _environment, (yyvsp[0].integer) );
  }
#line 3529 "src-generated/ugbc.tab.c"
    break;

  case 195: /* screen_definition_simple: VERTICAL SCROLL direct_integer  */
#line 720 "src/ugbc.y"
                                   {
      screen_vertical_scroll( _environment, (yyvsp[0].integer) );
  }
#line 3537 "src-generated/ugbc.tab.c"
    break;

  case 196: /* screen_definition_simple: HORIZONTAL SCROLL direct_integer  */
#line 723 "src/ugbc.y"
                                     {
      screen_horizontal_scroll( _environment, (yyvsp[0].integer) );
  }
#line 3545 "src-generated/ugbc.tab.c"
    break;

  case 197: /* screen_definition_expression: ROWS expressions  */
#line 728 "src/ugbc.y"
                     {
      screen_rows_var( _environment, (yyvsp[0].string) );
  }
#line 3553 "src-generated/ugbc.tab.c"
    break;

  case 198: /* screen_definition_expression: VERTICAL SCROLL expressions  */
#line 731 "src/ugbc.y"
                                {
      screen_vertical_scroll_var( _environment, (yyvsp[0].string) );
  }
#line 3561 "src-generated/ugbc.tab.c"
    break;

  case 199: /* screen_definition_expression: HORIZONTAL SCROLL expressions  */
#line 734 "src/ugbc.y"
                                  {
      screen_horizontal_scroll_var( _environment, (yyvsp[0].string) );
  }
#line 3569 "src-generated/ugbc.tab.c"
    break;

  case 203: /* var_definition_simple: Identifier ON Identifier  */
#line 743 "src/ugbc.y"
                             {
      variable_define( _environment, (yyvsp[-2].string), VT_BYTE, 0 );
  }
#line 3577 "src-generated/ugbc.tab.c"
    break;

  case 204: /* var_definition_simple: Identifier DOLLAR ON Identifier  */
#line 746 "src/ugbc.y"
                                    {
      variable_define( _environment, (yyvsp[-3].string), VT_STRING, 0 );
  }
#line 3585 "src-generated/ugbc.tab.c"
    break;

  case 205: /* var_definition_simple: Identifier ON Identifier ASSIGN direct_integer  */
#line 749 "src/ugbc.y"
                                                   {
      variable_define( _environment, (yyvsp[-4].string), VT_BYTE, (yyvsp[0].integer) );
  }
#line 3593 "src-generated/ugbc.tab.c"
    break;

  case 206: /* var_definition_simple: Identifier ON Identifier ASSIGN expressions  */
#line 752 "src/ugbc.y"
                                                {
      Variable * v = variable_retrieve( _environment, (yyvsp[0].string) );
      Variable * d = variable_define( _environment, (yyvsp[-4].string), v->type, v->value );
      variable_move_naked( _environment, v->name, d->name );
  }
#line 3603 "src-generated/ugbc.tab.c"
    break;

  case 207: /* var_definition_simple: Identifier DOLLAR ON Identifier ASSIGN expressions  */
#line 757 "src/ugbc.y"
                                                       {
      Variable * v = variable_retrieve( _environment, (yyvsp[0].string) );
      Variable * d = variable_define( _environment, (yyvsp[-5].string), VT_STRING, 0 );
      variable_move( _environment, v->name, d->name );
  }
#line 3613 "src-generated/ugbc.tab.c"
    break;

  case 208: /* goto_definition: Identifier  */
#line 764 "src/ugbc.y"
               {
      goto_label( _environment, (yyvsp[0].string) );
  }
#line 3621 "src-generated/ugbc.tab.c"
    break;

  case 209: /* goto_definition: Integer  */
#line 767 "src/ugbc.y"
            {
      goto_number( _environment, (yyvsp[0].integer) );
  }
#line 3629 "src-generated/ugbc.tab.c"
    break;

  case 210: /* gosub_definition: Identifier  */
#line 773 "src/ugbc.y"
               {
      gosub_label( _environment, (yyvsp[0].string) );
  }
#line 3637 "src-generated/ugbc.tab.c"
    break;

  case 211: /* gosub_definition: Integer  */
#line 776 "src/ugbc.y"
            {
      gosub_number( _environment, (yyvsp[0].integer) );
  }
#line 3645 "src-generated/ugbc.tab.c"
    break;

  case 213: /* point_definition_simple: AT OP direct_integer COMMA direct_integer CP  */
#line 785 "src/ugbc.y"
                                                   {
        point_at( _environment, (yyvsp[-3].integer), (yyvsp[-1].integer) );
    }
#line 3653 "src-generated/ugbc.tab.c"
    break;

  case 214: /* point_definition_expression: AT OP expressions COMMA expressions CP  */
#line 791 "src/ugbc.y"
                                             {
        point_at_vars( _environment, (yyvsp[-3].string), (yyvsp[-1].string) );
    }
#line 3661 "src-generated/ugbc.tab.c"
    break;

  case 217: /* on_goto_definition: Identifier  */
#line 800 "src/ugbc.y"
                 {
          on_goto_index( _environment, (yyvsp[0].string) );
          on_goto_end( _environment );
      }
#line 3670 "src-generated/ugbc.tab.c"
    break;

  case 218: /* $@1: %empty  */
#line 804 "src/ugbc.y"
                 {
        on_goto_index( _environment, (yyvsp[0].string) );
    }
#line 3678 "src-generated/ugbc.tab.c"
    break;

  case 220: /* on_gosub_definition: Identifier  */
#line 809 "src/ugbc.y"
                 {
          on_gosub_index( _environment, (yyvsp[0].string) );
          on_gosub_end( _environment );
      }
#line 3687 "src-generated/ugbc.tab.c"
    break;

  case 221: /* $@2: %empty  */
#line 813 "src/ugbc.y"
                 {
          on_gosub_index( _environment, (yyvsp[0].string) );
    }
#line 3695 "src-generated/ugbc.tab.c"
    break;

  case 223: /* $@3: %empty  */
#line 818 "src/ugbc.y"
                       {
          on_goto( _environment, (yyvsp[-1].string) );
      }
#line 3703 "src-generated/ugbc.tab.c"
    break;

  case 225: /* $@4: %empty  */
#line 821 "src/ugbc.y"
                        {
        on_gosub( _environment, (yyvsp[-1].string) );  
    }
#line 3711 "src-generated/ugbc.tab.c"
    break;

  case 227: /* every_definition: expression TICKS GOSUB Identifier  */
#line 826 "src/ugbc.y"
                                        {
          every_ticks_gosub( _environment, (yyvsp[-3].string), (yyvsp[0].string) );
    }
#line 3719 "src-generated/ugbc.tab.c"
    break;

  case 228: /* every_definition: ON  */
#line 829 "src/ugbc.y"
         {
          every_on( _environment );
    }
#line 3727 "src-generated/ugbc.tab.c"
    break;

  case 229: /* every_definition: OFF  */
#line 832 "src/ugbc.y"
          {
          every_off( _environment );
    }
#line 3735 "src-generated/ugbc.tab.c"
    break;

  case 244: /* statement: RANDOMIZE  */
#line 851 "src/ugbc.y"
              {
      randomize( _environment );
  }
#line 3743 "src-generated/ugbc.tab.c"
    break;

  case 245: /* statement: IF expressions THEN  */
#line 854 "src/ugbc.y"
                        {
      if_then( _environment, (yyvsp[-1].string) );  
  }
#line 3751 "src-generated/ugbc.tab.c"
    break;

  case 246: /* statement: ELSE  */
#line 857 "src/ugbc.y"
         {
      else_if_then( _environment, NULL );  
  }
#line 3759 "src-generated/ugbc.tab.c"
    break;

  case 247: /* statement: ELSE IF expressions THEN  */
#line 860 "src/ugbc.y"
                             {
      else_if_then( _environment, (yyvsp[-1].string) );  
  }
#line 3767 "src-generated/ugbc.tab.c"
    break;

  case 248: /* statement: ENDIF  */
#line 863 "src/ugbc.y"
          {
      end_if_then( _environment );  
  }
#line 3775 "src-generated/ugbc.tab.c"
    break;

  case 249: /* statement: DO  */
#line 866 "src/ugbc.y"
       {
      begin_loop( _environment );  
  }
#line 3783 "src-generated/ugbc.tab.c"
    break;

  case 250: /* statement: LOOP  */
#line 869 "src/ugbc.y"
         {
      end_loop( _environment );  
  }
#line 3791 "src-generated/ugbc.tab.c"
    break;

  case 251: /* $@5: %empty  */
#line 872 "src/ugbc.y"
          { 
      begin_while( _environment );  
  }
#line 3799 "src-generated/ugbc.tab.c"
    break;

  case 252: /* statement: WHILE $@5 expressions  */
#line 874 "src/ugbc.y"
                {
      begin_while_condition( _environment, (yyvsp[0].string) );  
  }
#line 3807 "src-generated/ugbc.tab.c"
    break;

  case 253: /* statement: WEND  */
#line 877 "src/ugbc.y"
         {
      end_while( _environment );  
  }
#line 3815 "src-generated/ugbc.tab.c"
    break;

  case 254: /* statement: REPEAT  */
#line 880 "src/ugbc.y"
           {
      begin_repeat( _environment );  
  }
#line 3823 "src-generated/ugbc.tab.c"
    break;

  case 255: /* statement: UNTIL expressions  */
#line 883 "src/ugbc.y"
                      {
      end_repeat( _environment, (yyvsp[0].string) );  
  }
#line 3831 "src-generated/ugbc.tab.c"
    break;

  case 256: /* statement: EXIT  */
#line 886 "src/ugbc.y"
         {
      exit_loop( _environment, 0 );  
  }
#line 3839 "src-generated/ugbc.tab.c"
    break;

  case 257: /* statement: EXIT IF expressions  */
#line 889 "src/ugbc.y"
                        {
      exit_loop_if( _environment, (yyvsp[0].string), 0 );  
  }
#line 3847 "src-generated/ugbc.tab.c"
    break;

  case 258: /* statement: EXIT Integer  */
#line 892 "src/ugbc.y"
                 {
      exit_loop( _environment, (yyvsp[0].integer) );  
  }
#line 3855 "src-generated/ugbc.tab.c"
    break;

  case 259: /* statement: EXIT direct_integer  */
#line 895 "src/ugbc.y"
                        {
      exit_loop( _environment, (yyvsp[0].integer) );  
  }
#line 3863 "src-generated/ugbc.tab.c"
    break;

  case 260: /* statement: EXIT IF expressions COMMA Integer  */
#line 898 "src/ugbc.y"
                                      {
      exit_loop_if( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );  
  }
#line 3871 "src-generated/ugbc.tab.c"
    break;

  case 261: /* statement: EXIT IF expressions COMMA direct_integer  */
#line 901 "src/ugbc.y"
                                             {
      exit_loop_if( _environment, (yyvsp[-2].string), (yyvsp[0].integer) );  
  }
#line 3879 "src-generated/ugbc.tab.c"
    break;

  case 262: /* statement: FOR Identifier ASSIGN expressions TO expressions  */
#line 904 "src/ugbc.y"
                                                     {
      begin_for( _environment, (yyvsp[-4].string), (yyvsp[-2].string), (yyvsp[0].string) );  
  }
#line 3887 "src-generated/ugbc.tab.c"
    break;

  case 263: /* statement: NEXT  */
#line 907 "src/ugbc.y"
         {
      end_for( _environment );
  }
#line 3895 "src-generated/ugbc.tab.c"
    break;

  case 264: /* statement: FOR Identifier ASSIGN expressions TO expressions STEP expressions  */
#line 910 "src/ugbc.y"
                                                                      {
      begin_for_step( _environment, (yyvsp[-6].string), (yyvsp[-4].string), (yyvsp[-2].string), (yyvsp[0].string) );  
  }
#line 3903 "src-generated/ugbc.tab.c"
    break;

  case 265: /* statement: BEG GAMELOOP  */
#line 913 "src/ugbc.y"
                 {
      begin_gameloop( _environment );
  }
#line 3911 "src-generated/ugbc.tab.c"
    break;

  case 266: /* statement: END GAMELOOP  */
#line 916 "src/ugbc.y"
                 {
      end_gameloop( _environment );
  }
#line 3919 "src-generated/ugbc.tab.c"
    break;

  case 267: /* statement: GRAPHIC  */
#line 919 "src/ugbc.y"
            {
      graphic( _environment );
  }
#line 3927 "src-generated/ugbc.tab.c"
    break;

  case 268: /* statement: HALT  */
#line 922 "src/ugbc.y"
         {
      halt( _environment );
  }
#line 3935 "src-generated/ugbc.tab.c"
    break;

  case 273: /* statement: RETURN  */
#line 929 "src/ugbc.y"
           {
      return_label( _environment );
  }
#line 3943 "src-generated/ugbc.tab.c"
    break;

  case 274: /* statement: POP  */
#line 932 "src/ugbc.y"
        {
      pop( _environment );
  }
#line 3951 "src-generated/ugbc.tab.c"
    break;

  case 275: /* statement: DONE  */
#line 935 "src/ugbc.y"
          {
      return 0;
  }
#line 3959 "src-generated/ugbc.tab.c"
    break;

  case 276: /* statement: LEFT OP expression COMMA expression CP ASSIGN expressions  */
#line 938 "src/ugbc.y"
                                                              {
        variable_string_left_assign( _environment, (yyvsp[-5].string), (yyvsp[-3].string), (yyvsp[0].string) );
  }
#line 3967 "src-generated/ugbc.tab.c"
    break;

  case 277: /* statement: Identifier COLON  */
#line 941 "src/ugbc.y"
                     {
      outhead1("%s:", (yyvsp[-1].string));
  }
#line 3975 "src-generated/ugbc.tab.c"
    break;

  case 278: /* statement: Identifier ASSIGN expressions  */
#line 944 "src/ugbc.y"
                                  {
        outline2("; %s = %s", (yyvsp[-2].string), (yyvsp[0].string) );
        Variable * expressions = variable_retrieve( _environment, (yyvsp[0].string) );
        outline1("; retrieved %s ", (yyvsp[0].string) );
        variable_define( _environment, (yyvsp[-2].string), expressions->type, 0 )->name;
        outline1("; defined %s ", (yyvsp[-2].string) );
        variable_move( _environment, (yyvsp[0].string), (yyvsp[-2].string) );
        outline2("; moved %s -> %s ", (yyvsp[0].string), (yyvsp[-2].string) );
  }
#line 3989 "src-generated/ugbc.tab.c"
    break;

  case 279: /* statement: Identifier DOLLAR ASSIGN expressions  */
#line 953 "src/ugbc.y"
                                         {
        outline2("; %s = %s", (yyvsp[-3].string), (yyvsp[0].string) );
        Variable * expressions = variable_retrieve( _environment, (yyvsp[0].string) );
        outline1("; retrieved %s ", (yyvsp[0].string) );
        variable_define( _environment, (yyvsp[-3].string), VT_STRING, 0 )->name;
        outline1("; defined %s ", (yyvsp[-3].string) );
        variable_move( _environment, (yyvsp[0].string), (yyvsp[-3].string) );
        outline2("; moved %s -> %s ", (yyvsp[0].string), (yyvsp[-3].string) );
  }
#line 4003 "src-generated/ugbc.tab.c"
    break;

  case 280: /* statement: DEBUG expressions  */
#line 962 "src/ugbc.y"
                      {
      debug_var( _environment, (yyvsp[0].string) );
  }
#line 4011 "src-generated/ugbc.tab.c"
    break;

  case 283: /* statements_no_linenumbers: statement  */
#line 970 "src/ugbc.y"
                { ((Environment *)_environment)->yylineno = yylineno; }
#line 4017 "src-generated/ugbc.tab.c"
    break;

  case 284: /* $@6: %empty  */
#line 971 "src/ugbc.y"
                      { ((Environment *)_environment)->yylineno = yylineno; }
#line 4023 "src-generated/ugbc.tab.c"
    break;

  case 286: /* $@7: %empty  */
#line 975 "src/ugbc.y"
              {
        outhead1("_linenumber%d:", (yyvsp[0].integer));
    }
#line 4031 "src-generated/ugbc.tab.c"
    break;

  case 287: /* statements_with_linenumbers: Integer $@7 statements_no_linenumbers  */
#line 977 "src/ugbc.y"
                                { 
        ((Environment *)_environment)->yylineno = yylineno;
    }
#line 4039 "src-generated/ugbc.tab.c"
    break;

  case 292: /* $@8: %empty  */
#line 989 "src/ugbc.y"
  { ((Environment *)_environment)->yylineno = yylineno; }
#line 4045 "src-generated/ugbc.tab.c"
    break;


#line 4049 "src-generated/ugbc.tab.c"

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

#line 991 "src/ugbc.y"


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

    if ( _environment->configurationFileName ) {
        _environment->configurationFile = fopen( _environment->configurationFileName, "wt");
        if ( ! _environment->configurationFile ) {
            fprintf(stderr, "Unable to open configuration file: %s\n", _environment->configurationFileName );
            exit(EXIT_FAILURE);
        }
        linker_setup( _environment );
        outhead0(".segment \"CODE\"");
    } else {
        outhead0("org 32768");
    }

    variable_define( _environment, "strings_address", VT_ADDRESS, 0x4200 );
    bank_define( _environment, "VARIABLES", BT_VARIABLES, 0x4000, NULL );
    bank_define( _environment, "TEMPORARY", BT_TEMPORARY, 0x4100, NULL );
    bank_define( _environment, "STRINGS", BT_STRINGS, 0x4200, NULL );

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

