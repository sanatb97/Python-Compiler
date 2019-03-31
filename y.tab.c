/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "test_parser.y" /* yacc.c:339  */

  #include<stdio.h>
  #include "y.tab.h"
  int yydebug = 1;
  void updateType(int, const char*, const char* );
    typedef struct token_structure{
  		char* name;
  		char* type;
  		int scope;
  	}token_structure;

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
<<<<<<< HEAD
    T_name = 258,
    T_number = 259,
    T_string = 260,
    T_newline = 261,
    T_eof = 262,
    T_semi_colon = 263,
    T_eq = 264,
    T_comma = 265,
    T_del = 266,
    T_pass = 267,
    T_break = 268,
    T_continue = 269,
    T_return = 270,
    T_import = 271,
    T_from = 272,
    T_star = 273,
    T_Lparan = 274,
    T_Rparan = 275,
    T_as = 276,
    T_dot = 277,
    T_if = 278,
    T_colon = 279,
    T_elif = 280,
    T_else = 281,
    T_indent = 282,
    T_dedent = 283,
    T_or = 284,
    T_and = 285,
    T_not = 286,
    T_lt = 287,
    T_gt = 288,
    T_deq = 289,
    T_ge = 290,
    T_le = 291,
    T_noteq = 292,
    T_is = 293,
    T_isnot = 294,
    T_notin = 295,
    T_bitwiseor = 296,
    T_bitwiseand = 297,
    T_bitwisexor = 298,
    T_leftshift = 299,
    T_rightshift = 300,
    T_plus = 301,
    T_minus = 302,
    T_divide = 303,
    T_mod = 304,
    T_double_divide = 305,
    T_tilde = 306,
    T_double_star = 307,
    T_squarebleft = 308,
    T_squarebright = 309,
    T_none = 310,
    T_true = 311,
    T_false = 312,
    T_in = 313
  };
#endif
/* Tokens.  */
#define T_name 258
#define T_number 259
#define T_string 260
#define T_newline 261
#define T_eof 262
#define T_semi_colon 263
#define T_eq 264
#define T_comma 265
#define T_del 266
#define T_pass 267
#define T_break 268
#define T_continue 269
#define T_return 270
#define T_import 271
#define T_from 272
#define T_star 273
#define T_Lparan 274
#define T_Rparan 275
#define T_as 276
#define T_dot 277
#define T_if 278
#define T_colon 279
#define T_elif 280
#define T_else 281
#define T_indent 282
#define T_dedent 283
#define T_or 284
#define T_and 285
#define T_not 286
#define T_lt 287
#define T_gt 288
#define T_deq 289
#define T_ge 290
#define T_le 291
#define T_noteq 292
#define T_is 293
#define T_isnot 294
#define T_notin 295
#define T_bitwiseor 296
#define T_bitwiseand 297
#define T_bitwisexor 298
#define T_leftshift 299
#define T_rightshift 300
#define T_plus 301
#define T_minus 302
#define T_divide 303
#define T_mod 304
#define T_double_divide 305
#define T_tilde 306
#define T_double_star 307
#define T_squarebleft 308
#define T_squarebright 309
#define T_none 310
#define T_true 311
#define T_false 312
#define T_in 313
=======
    T_digit = 258,
    T_alpha = 259,
    T_US = 260,
    T_asop = 261,
    T_NL = 262,
    T_if = 263,
    T_col = 264,
    T_elif = 265,
    T_else = 266,
    T_tab = 267,
    T_GT = 268,
    T_LT = 269,
    T_GTE = 270,
    T_LTE = 271,
    T_EQ = 272,
    T_NEQ = 273,
    T_while = 274
  };
#endif
/* Tokens.  */
#define T_digit 258
#define T_alpha 259
#define T_US 260
#define T_asop 261
#define T_NL 262
#define T_if 263
#define T_col 264
#define T_elif 265
#define T_else 266
#define T_tab 267
#define T_GT 268
#define T_LT 269
#define T_GTE 270
#define T_LTE 271
#define T_EQ 272
#define T_NEQ 273
#define T_while 274
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "test_parser.y" /* yacc.c:355  */
struct token_structure* data;

#line 237 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

<<<<<<< HEAD
#line 254 "y.tab.c" /* yacc.c:358  */
=======
#line 165 "y.tab.c" /* yacc.c:358  */
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
<<<<<<< HEAD
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248
=======
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   59

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  36
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  69
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
<<<<<<< HEAD
#define YYMAXUTOK   313
=======
#define YYMAXUTOK   274
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
=======
       2,     2,     2,     2,     2,     2,     2,    24,     2,     2,
       2,     2,    22,    20,     2,    21,     2,    23,     2,     2,
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
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
<<<<<<< HEAD
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
=======
      15,    16,    17,    18,    19
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
<<<<<<< HEAD
       0,    21,    21,    22,    23,    24,    26,    27,    29,    31,
      32,    34,    35,    36,    38,    39,    40,    41,    44,    46,
      48,    49,    51,    53,    54,    56,    57,    59,    60,    61,
      63,    65,    67,    68,    69,    71,    73,    75,    77,    78,
      82,    87,    89,    90,    93,    94,    96,    97,    99,   100,
     102,   104,   105,   107,   109,   110,   112,   114,   115,   117,
     118,   120,   122,   123,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   136,   138,   140,   141,   143,   145,
     146,   148,   150,   151,   153,   155,   156,   157,   159,   161,
     162,   163,   165,   167,   168,   169,   170,   171,   173,   174,
     175,   176,   178,   181,   182,   184,   186,   187,   189,   190,
     191,   192,   193,   194,   195,   196,   198,   199,   201,   202,
     204,   206,   207,   209,   211,   212,   214,   215,   217,   218,
     219,   221,   222,   224,   226,   227,   229,   230,   232,   233,
     235,   236,   238,   240,   242,   243,   245,   246,   248,   249,
     251,   253,   254,   256,   258,   259,   261,   262,   263
=======
       0,    24,    24,    24,    24,    24,    25,    26,    27,    28,
      30,    31,    32,    33,    36,    39,    40,    41,    41,    41,
      41,    41,    43,    44,    44,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
<<<<<<< HEAD
  "$end", "error", "$undefined", "T_name", "T_number", "T_string",
  "T_newline", "T_eof", "T_semi_colon", "T_eq", "T_comma", "T_del",
  "T_pass", "T_break", "T_continue", "T_return", "T_import", "T_from",
  "T_star", "T_Lparan", "T_Rparan", "T_as", "T_dot", "T_if", "T_colon",
  "T_elif", "T_else", "T_indent", "T_dedent", "T_or", "T_and", "T_not",
  "T_lt", "T_gt", "T_deq", "T_ge", "T_le", "T_noteq", "T_is", "T_isnot",
  "T_notin", "T_bitwiseor", "T_bitwiseand", "T_bitwisexor", "T_leftshift",
  "T_rightshift", "T_plus", "T_minus", "T_divide", "T_mod",
  "T_double_divide", "T_tilde", "T_double_star", "T_squarebleft",
  "T_squarebright", "T_none", "T_true", "T_false", "T_in", "$accept",
  "file_input", "stmt", "simple_stmt", "next_simple_stmt",
  "end_simple_stmt", "small_stmt", "expr_stmt", "next_expr_stmt",
  "last_expr_stmt", "testlist_star_expr", "first_testlist_star_expr",
  "last_testlist_star_expr", "end_testlist_star_expr", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "optional_return", "compound_stmt", "if_stmt", "elif_stmt",
  "optional_else", "suite", "repeat_stmt", "test", "optional_if_else",
  "or_test", "repeat_or_test", "and_test", "repeat_and_test", "not_test",
  "comparison", "repeat_comp_expr", "comp_op", "star_expr", "expr",
  "repeat_expr", "xor_expr", "repeat_xor_expr", "and_expr",
  "repeat_and_expr", "shift_expr", "repeat_shift_expr", "arith_expr",
  "last_arith_expr", "term", "last_term", "factor", "power",
  "optional_factor", "atom_expr", "repeat_trailer", "atom",
  "optional_testlist_comp", "repeat_string", "testlist_comp",
  "first_testlist_comp", "last_testlist_comp", "repeat_testlist_comp",
  "end_testlist_comp", "trailer", "optional_arglist", "subscriptlist",
  "repeat_subscript", "subscript", "optional_test", "optional_sliceop",
  "sliceop", "exprlist", "first_exprlist", "last_exprlist",
  "optional_comma", "testlist", "repeat_test", "arglist",
  "repeat_argument", "argument", YY_NULLPTR
=======
  "$end", "error", "$undefined", "T_digit", "T_alpha", "T_US", "T_asop",
  "T_NL", "T_if", "T_col", "T_elif", "T_else", "T_tab", "T_GT", "T_LT",
  "T_GTE", "T_LTE", "T_EQ", "T_NEQ", "T_while", "'+'", "'-'", "'*'", "'/'",
  "'%'", "$accept", "S", "A", "B", "C", "D", "expr", "valid", "P",
  "if_stmt", "elif", "else", "body", "asmt", "cond", "while", YY_NULLPTR
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
<<<<<<< HEAD
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -207

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-207)))
=======
      43,    45,    42,    47,    37
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43

#define YYTABLE_NINF -140

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
      37,  -207,  -207,    42,    37,  -207,    20,  -207,  -207,  -207,
     293,   306,   276,   293,   293,   306,   306,   306,   276,  -207,
    -207,  -207,    14,    37,  -207,    55,  -207,    13,    52,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,    49,    51,
      57,  -207,  -207,   110,    44,    48,    59,   -14,   -11,     9,
    -207,    50,    -7,    42,  -207,  -207,  -207,  -207,  -207,    96,
    -207,    97,  -207,  -207,  -207,  -207,    88,  -207,    99,    86,
    -207,  -207,  -207,  -207,    58,  -207,  -207,  -207,   159,  -207,
    -207,   276,  -207,  -207,   276,  -207,   293,  -207,   293,  -207,
     293,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,   306,   306,  -207,   306,  -207,   306,  -207,
     306,   306,  -207,   306,   306,  -207,   306,   306,   306,   306,
    -207,   306,  -207,   136,   108,   293,  -207,    -7,  -207,    20,
     104,   293,   104,  -207,   276,  -207,   104,   215,  -207,  -207,
      55,    13,  -207,    52,    52,    90,    51,    57,   110,    44,
      48,    59,   -14,   -14,   -11,   -11,     9,     9,     9,     9,
    -207,   293,   293,   109,   100,  -207,   107,  -207,    95,    68,
     113,   101,  -207,    96,  -207,  -207,    97,  -207,    99,    99,
    -207,  -207,   103,  -207,   106,  -207,  -207,  -207,  -207,   293,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,   293,  -207,   136,   104,
    -207,   293,   104,   293,  -207,  -207,  -207,  -207,   236,   293,
     102,  -207,  -207,   107,  -207,   113,  -207,  -207,   129,   236,
     132,   133,  -207,  -207,  -207,   293,  -207,  -207,   236,    98,
     215,   215,  -207,  -207,  -207,   106,  -207,  -207
=======
      -2,   -40,    33,     1,     1,     5,   -40,   -40,   -40,   -40,
      -1,   -40,   -40,   -40,    33,    33,    33,     9,    -3,    23,
      34,   -40,    15,    15,    15,    15,    15,   -40,   -40,   -40,
     -40,    30,    39,    41,    42,    43,    44,    45,    46,    46,
     -15,   -15,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,    37,    24,   -40,    47,   -40,    48,    49,   -40,
     -40,    50,   -40,    46,    46,    51,   -40,   -40,   -40
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,   110,   111,   118,     2,     5,     0,    31,    35,    36,
      38,     0,   116,     0,     0,     0,     0,     0,   116,   113,
     114,   115,     0,     2,     6,    13,    14,    20,    25,    15,
      16,    17,    32,    33,    34,     7,    40,    23,    51,    54,
      57,    60,    24,    62,    76,    79,    82,    85,    89,    93,
      98,   103,   106,   118,   112,     3,   145,   144,    30,   146,
      37,   151,    39,    74,   121,   122,     0,   117,   124,     0,
      59,    99,   100,   101,     0,     1,     4,    11,     0,     8,
       9,     0,    18,    19,    27,    22,     0,    50,     0,    53,
       0,    56,    64,    65,    66,    67,    68,    69,    72,    73,
      71,    70,    61,     0,     0,    75,     0,    78,     0,    81,
       0,     0,    84,     0,     0,    88,     0,     0,     0,     0,
      92,     0,   102,   131,     0,   138,   105,   106,   119,     0,
     148,     0,   148,   108,     0,   120,   148,     0,   109,    12,
      13,    20,    26,    25,    25,     0,    54,    57,    62,    76,
      79,    82,    85,    85,    89,    89,    93,    93,    93,    93,
     104,     0,     0,     0,     0,   132,   154,   130,   136,     0,
     134,     0,   107,   146,   149,   143,   151,   150,   124,   124,
     125,   123,     0,    46,    42,    10,    21,    28,    29,     0,
      55,    58,    63,    77,    80,    83,    86,    87,    90,    91,
      94,    95,    96,    97,   158,   157,     0,   128,     0,   148,
     129,   138,   148,   138,   147,   152,   126,   127,     0,     0,
      44,    52,   156,   154,   153,   134,   133,   139,   140,    48,
       0,     0,    41,   155,   135,   138,   137,   141,    48,     0,
       0,     0,   142,    49,    47,    42,    45,    43
=======
       0,    15,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    18,     0,    17,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,    21,    19,    20,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,    13,    14,    35,    29,    30,    31,    32,
      33,    34,     0,     0,    36,     0,    25,     0,     0,    22,
      24,     0,    27,     0,     0,     0,    23,    26,    28
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -207,    22,  -201,  -136,    -3,  -207,    80,  -207,  -207,    18,
      79,  -207,   -90,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,   -84,  -207,  -176,   -72,   -10,  -207,    83,
      29,    92,    34,    -9,  -207,    28,  -207,    -2,     0,    35,
      81,    36,    89,    43,    91,   -83,   -32,   -59,   -16,  -138,
      17,  -207,  -207,  -207,    70,  -207,   182,   149,  -207,  -207,
    -207,   -79,  -207,  -207,  -207,  -207,   -21,    -4,  -206,  -207,
    -207,  -207,    82,    40,  -123,  -207,    32,  -207,    -6,    15
=======
     -40,   -40,   -40,   -40,   -40,   -40,     4,    -5,    25,   -40,
     -40,   -40,   -39,   -40,    55,   -40
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,    22,    23,    24,    79,    80,    25,    26,    82,    83,
      27,    28,    85,   142,    29,    30,    31,    32,    33,    34,
      60,    35,    36,   220,   232,   184,   239,    37,    87,    38,
      89,    39,    91,    40,    41,   102,   103,    42,    43,   105,
      44,   107,    45,   109,    46,   112,    47,   115,    48,   120,
      49,    50,   122,    51,   126,    52,    66,    54,    67,    68,
     135,   136,   180,   127,   164,   169,   212,   170,   171,   236,
     237,    58,    59,   130,   175,    62,   132,   165,   209,   166
=======
      -1,     5,     6,     7,     8,     9,    10,    11,    17,    12,
      59,    60,    53,    62,    19,    13
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      61,   183,    64,    69,    56,    70,    57,   228,    64,   177,
      65,    63,   123,   181,    75,   124,    65,   229,   200,   201,
     202,   203,    81,     1,     2,     3,    55,   116,   238,   242,
     110,   111,    71,    72,    73,   113,   114,   238,    11,    12,
       1,     2,     3,     4,     5,    76,   125,    53,     6,     7,
       8,     9,    10,   187,   188,    11,    12,   117,   118,   119,
      13,    77,    84,    78,   245,   246,    15,    16,    14,   196,
     197,    17,    86,    18,   143,    19,    20,    21,   152,   153,
      88,   147,   144,    15,    16,   104,   224,    90,    17,   226,
      18,   106,    19,    20,    21,   198,   199,   154,   155,   216,
     217,   108,   121,   148,   183,   183,   129,   131,   133,   134,
     137,   167,   138,   163,   174,   168,   189,   208,   206,  -139,
     207,   176,   210,   211,   178,   213,   244,    56,   231,    57,
     218,   219,   179,   156,   157,   158,   159,   185,   160,     1,
       2,     3,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   204,   205,   235,   161,    12,   240,   241,   140,   186,
     141,   247,     1,     2,     3,   139,   243,    14,   101,   145,
       6,     7,     8,     9,    10,   190,   192,    11,    12,   221,
     146,   191,    15,    16,   193,   149,   194,    17,   162,    18,
      14,    19,    20,    21,   195,   150,   222,   172,   163,   151,
      74,   168,   128,   227,   234,    15,    16,   225,   215,   230,
      17,   173,    18,   214,    19,    20,    21,   233,     1,     2,
       3,   182,     0,   223,     0,   227,     6,     7,     8,     9,
      10,     0,     0,    11,    12,     0,     0,     0,     0,     1,
       2,     3,     0,     0,     0,     0,    14,     6,     7,     8,
       9,    10,     0,     0,    11,    12,     0,     0,     0,    13,
       0,    15,    16,     0,     0,     0,    17,    14,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     1,
       2,     3,    15,    16,     0,     0,     0,    17,     0,    18,
       0,    19,    20,    21,    11,    12,     1,     2,     3,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,     1,
       2,     3,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    16,    14,    12,     0,    17,     0,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    15,    16,     0,     0,     0,    17,     0,    18,
       0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      10,   137,    12,    13,     6,    14,     6,   213,    18,   132,
      12,    11,    19,   136,     0,    22,    18,   218,   156,   157,
     158,   159,     9,     3,     4,     5,     4,    18,   229,   235,
      44,    45,    15,    16,    17,    46,    47,   238,    18,    19,
       3,     4,     5,     6,     7,    23,    53,     5,    11,    12,
      13,    14,    15,   143,   144,    18,    19,    48,    49,    50,
      23,     6,    10,     8,   240,   241,    46,    47,    31,   152,
     153,    51,    23,    53,    84,    55,    56,    57,   110,   111,
      29,    90,    84,    46,    47,    41,   209,    30,    51,   212,
      53,    43,    55,    56,    57,   154,   155,   113,   114,   178,
     179,    42,    52,   103,   240,   241,    10,    10,    20,    10,
      24,     3,    54,   123,    10,   125,    26,    10,     9,    24,
      20,   131,    54,    10,   134,    24,    28,   129,    26,   129,
      27,    25,   134,   116,   117,   118,   119,   140,   121,     3,
       4,     5,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   161,   162,    24,    18,    19,    24,    24,    78,   141,
      81,   245,     3,     4,     5,     6,   238,    31,    58,    86,
      11,    12,    13,    14,    15,   146,   148,    18,    19,   189,
      88,   147,    46,    47,   149,   104,   150,    51,    52,    53,
      31,    55,    56,    57,   151,   106,   206,   127,   208,   108,
      18,   211,    53,   213,   225,    46,    47,   211,   176,   219,
      51,   129,    53,   173,    55,    56,    57,   223,     3,     4,
       5,     6,    -1,   208,    -1,   235,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    31,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,    23,
      -1,    46,    47,    -1,    -1,    -1,    51,    31,    53,    -1,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    46,    47,    -1,    -1,    -1,    51,    -1,    53,
      -1,    55,    56,    57,    18,    19,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,     3,
       4,     5,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    31,    19,    -1,    51,    -1,    53,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    51,    -1,    53,    -1,    55,    56,
      57,    -1,    46,    47,    -1,    -1,    -1,    51,    -1,    53,
      -1,    55,    56,    57
=======
      54,     1,     2,    31,    18,    21,     3,    24,    25,    26,
      32,    33,    34,    35,    36,    37,    30,     4,     1,    22,
      23,    24,    25,    26,    66,    67,    40,    41,    42,    43,
      44,    56,    38,    45,    57,    58,    14,    15,    16,    27,
      28,    29,    46,    39,    47,    48,    49,    50,    51,    55,
      61,     2,     0,    52,    68,     0,    65,    63,    64,    20
};

static const yytype_int8 yycheck[] =
{
      39,     3,     4,     6,     3,     0,     8,    22,    23,    24,
      13,    14,    15,    16,    17,    18,     7,    19,     3,    20,
      21,    22,    23,    24,    63,    64,    22,    23,    24,    25,
      26,     7,     9,     3,    10,    11,     3,     4,     5,    14,
      15,    16,     3,     9,     3,     3,     3,     3,     3,    12,
      55,     4,    -1,     7,     3,    -1,     6,     9,     9,     4
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,     3,     4,     5,     6,     7,    11,    12,    13,    14,
      15,    18,    19,    23,    31,    46,    47,    51,    53,    55,
      56,    57,    60,    61,    62,    65,    66,    69,    70,    73,
      74,    75,    76,    77,    78,    80,    81,    86,    88,    90,
      92,    93,    96,    97,    99,   101,   103,   105,   107,   109,
     110,   112,   114,     5,   116,    60,    96,    97,   130,   131,
      79,    86,   134,    97,    86,    96,   115,   117,   118,    86,
      92,   109,   109,   109,   115,     0,    60,     6,     8,    63,
      64,     9,    67,    68,    10,    71,    23,    87,    29,    89,
      30,    91,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    58,    94,    95,    41,    98,    43,   100,    42,   102,
      44,    45,   104,    46,    47,   106,    18,    48,    49,    50,
     108,    52,   111,    19,    22,    53,   113,   122,   116,    10,
     132,    10,   135,    20,    10,   119,   120,    24,    54,     6,
      65,    69,    72,    86,    96,    88,    90,    92,    97,    99,
     101,   103,   105,   105,   107,   107,   109,   109,   109,   109,
     109,    18,    52,    86,   123,   136,   138,     3,    86,   124,
     126,   127,   113,   131,    10,   133,    86,   133,    86,    96,
     121,   133,     6,    62,    84,    63,    68,    71,    71,    26,
      89,    91,    94,    98,   100,   102,   104,   104,   106,   106,
     108,   108,   108,   108,    86,    86,     9,    20,    10,   137,
      54,    10,   125,    24,   132,   135,   120,   120,    27,    25,
      82,    86,    86,   138,   133,   126,   133,    86,   127,    61,
      86,    26,    83,   137,   125,    24,   128,   129,    61,    85,
      24,    24,   127,    85,    28,    84,    84,    82
=======
       0,     3,     4,     8,    19,    26,    27,    28,    29,    30,
      31,    32,    34,    40,     3,     4,     5,    33,     3,    39,
      39,     0,    20,    21,    22,    23,    24,    33,    33,    33,
       7,     6,    13,    14,    15,    16,    17,    18,     9,     9,
      31,    31,    31,    31,    31,     3,     3,     3,     3,     3,
       3,     3,     7,    37,    37,    12,     7,    10,    11,    35,
      36,    32,    38,     9,     9,     6,    37,    37,     3
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    59,    60,    60,    60,    60,    61,    61,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    66,    67,
      68,    68,    69,    70,    70,    71,    71,    72,    72,    72,
      73,    74,    75,    75,    75,    76,    77,    78,    79,    79,
      80,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    87,    87,    88,    89,    89,    90,    91,    91,    92,
      92,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    96,    97,    98,    98,    99,   100,
     100,   101,   102,   102,   103,   104,   104,   104,   105,   106,
     106,   106,   107,   108,   108,   108,   108,   108,   109,   109,
     109,   109,   110,   111,   111,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   118,   118,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   130,   131,   131,   132,   132,   133,   133,
     134,   135,   135,   136,   137,   137,   138,   138,   138
=======
       0,    25,    26,    26,    26,    26,    27,    28,    29,    30,
      31,    31,    31,    31,    31,    31,    32,    33,    33,    33,
      33,    33,    34,    35,    35,    35,    36,    37,    38,    39,
      39,    39,    39,    39,    39,    39,    40
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
<<<<<<< HEAD
       0,     2,     0,     2,     2,     1,     1,     1,     2,     1,
       3,     1,     2,     0,     1,     1,     1,     1,     2,     1,
       0,     3,     2,     1,     1,     0,     2,     0,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     6,     0,     5,     0,     3,     1,     5,     0,     2,
       2,     0,     4,     2,     0,     3,     2,     0,     3,     2,
       1,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     3,     2,     0,
       3,     2,     0,     3,     2,     0,     3,     3,     2,     0,
       3,     3,     2,     0,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     0,     2,     2,     0,     2,     3,     3,
       1,     1,     2,     1,     1,     1,     0,     1,     0,     2,
       2,     1,     1,     2,     0,     2,     2,     2,     3,     3,
       2,     0,     1,     3,     0,     3,     1,     4,     0,     1,
       0,     1,     2,     3,     1,     1,     0,     3,     0,     1,
       3,     0,     3,     3,     0,     3,     3,     2,     2
=======
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     3,     1,     1,     2,
       2,     2,     5,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
<<<<<<< HEAD
      
#line 1559 "y.tab.c" /* yacc.c:1646  */
=======
        case 6:
#line 25 "lang.y" /* yacc.c:1646  */
    {printf("Result = %d\n",(yyval)); return 0;}
#line 1276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 26 "lang.y" /* yacc.c:1646  */
    {printf("Valid identifier name\n");return 0;}
#line 1282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 27 "lang.y" /* yacc.c:1646  */
    {printf("Valid if-else block\n"); return 0;}
#line 1288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 28 "lang.y" /* yacc.c:1646  */
    {printf("Valid while construct\n"); return 0;}
#line 1294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 30 "lang.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])+(yyvsp[0]);}
#line 1300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 31 "lang.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])-(yyvsp[0]);}
#line 1306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 32 "lang.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2])*(yyvsp[0]);}
#line 1312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 33 "lang.y" /* yacc.c:1646  */
    {if((yyvsp[0])==0)
             exit(0);
             else (yyval)=(yyvsp[-2])/(yyvsp[0]);}
#line 1320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 36 "lang.y" /* yacc.c:1646  */
    {if((yyvsp[0])==0)
             exit(0);
             else (yyval)=(yyvsp[-2])%(yyvsp[0]);}
#line 1328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 39 "lang.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1334 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1338 "y.tab.c" /* yacc.c:1646  */
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
<<<<<<< HEAD
=======
#line 57 "lang.y" /* yacc.c:1906  */

void main()
{
   printf("Enter any expression | Enter any identifier name\n");
   yyparse();
}

void yyerror(char* s)
{
	printf("\nInvalid\n");
}

>>>>>>> 8362267fce00301f0639402988f22debe3f58d43