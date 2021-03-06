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
#line 1 "parser.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "lex.yy.c"
void yyerror(const char*);
int yylex();
int yywrap();
void insert_type();
void add(char);
int sym_search(char *);
int search(char *);
void addTo(char i,char *n);
void FOO();
void add_ptr();
void pop();
void insert_type_table();
char temptype(char *,char*);
void type_check(char *,char*);
void printtree(struct node1*);
struct node{ int val;} x;
struct dataType{
	char * id_name;
	char * data_type;
	char * type;
	int line_no;
	}symbolTable[20];
int ifd=0;//Label
int eld=20;
char typeStack[10][100];
int typeStack_top = 0;
char type[10];
char count=0;
int nxt=1;//printed next once
int c=0;//Temp var count
int q;
extern int countn;
struct node1{ struct node1*left;struct node1*right;char* token;};
struct node1* mknode(struct node1 *left,struct node1 *right, char *token);


#line 109 "y.tab.c" /* yacc.c:339  */

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
    IF = 258,
    ELSE = 259,
    INT = 260,
    FLOAT = 261,
    CHAR = 262,
    VOID = 263,
    INCLUDE = 264,
    RETURN = 265,
    LE = 266,
    GE = 267,
    LT = 268,
    GT = 269,
    EQ = 270,
    NE = 271,
    NUM = 272,
    AND = 273,
    OR = 274,
    TR = 275,
    FL = 276,
    STRLT = 277,
    ID = 278,
    printff = 279,
    scanff = 280
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define FLOAT 261
#define CHAR 262
#define VOID 263
#define INCLUDE 264
#define RETURN 265
#define LE 266
#define GE 267
#define LT 268
#define GT 269
#define EQ 270
#define NE 271
#define NUM 272
#define AND 273
#define OR 274
#define TR 275
#define FL 276
#define STRLT 277
#define ID 278
#define printff 279
#define scanff 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "parser.y" /* yacc.c:355  */
 struct var_name {char name[100];struct node1* nd;} nam ; struct gen_code{char tr[10];char fal[10];struct node1* nd;} gen; 

#line 202 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,     2,
      32,    33,    28,    26,    36,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,    31,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    57,    57,    57,    57,    57,    61,    61,
      62,    62,    62,    62,    63,    63,    63,    63,    65,    65,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    69,    69,    69,    69,    71,    71,    71,    71,    71,
      76,    77,    82,    83,    83,    84,    84,    85,    87,    87,
      87,    90,    93,    95,    95,    95,    95,    98,   106,   106,
     115,   118,   121,   129,   134,   134,   144,   146,   146,   155,
     155,   163,   165,   165,   174,   174,   187,   189,   189,   200,
     202,   202,   202,   202,   202,   202,   206,   206,   206,   206,
     206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "INT", "FLOAT", "CHAR",
  "VOID", "INCLUDE", "RETURN", "LE", "GE", "LT", "GT", "EQ", "NE", "NUM",
  "AND", "OR", "TR", "FL", "STRLT", "ID", "printff", "scanff", "'+'",
  "'-'", "'*'", "'/'", "'='", "'^'", "'('", "')'", "'{'", "'}'", "','",
  "';'", "'['", "']'", "'&'", "$accept", "P", "$@1", "$@2", "$@3", "$@4",
  "$@5", "I", "M", "R", "$@6", "TER", "N", "$@7", "$@8", "G", "$@9",
  "$@10", "$@11", "U", "$@12", "S", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "EL", "$@19", "$@20", "Arg", "C", "B", "$@21", "assign", "$@22",
  "E", "$@23", "$@24", "F", "$@25", "$@26", "T", "$@27", "Q", "$@28",
  "$@29", "$@30", "relop", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    43,    45,    42,    47,
      61,    94,    40,    41,   123,   125,    44,    59,    91,    93,
      38
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -64

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   -63,    58,   109,   -63,   -63,   -63,   -63,   -63,     6,
      55,   -63,    59,   -63,    15,   -63,   -63,    -4,    11,    66,
      74,    -4,    66,   -63,   -63,   -63,   -63,   -10,   -63,   -63,
     -63,    63,    15,    72,   105,    84,   -63,    89,    74,   -63,
      74,    60,   -63,    85,   -63,   -63,    47,   -63,   -63,    76,
      60,   -63,    74,    94,   -63,   106,    95,    97,    66,   120,
      60,   -63,    73,    19,   -63,    98,   110,   111,   -63,    29,
      99,    81,    38,   -63,   -63,    62,   -63,    88,   -63,    61,
      41,   104,   -63,   -63,   -63,    27,   100,   103,   102,   -63,
     107,   -63,   -63,   -63,   -63,    74,    19,    81,    81,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,    19,   -63,   -63,
     -63,   -63,   -63,   108,   101,   112,   -63,    19,   -63,   -15,
     -63,   -63,   113,    19,    19,    82,    19,    19,    19,   -63,
     116,   -63,    82,   -63,   -63,   -63,   -63,   -63,   -63,   104,
     115,    60,   114,     2,   -63,   -63,   136,   -63,   -63,   118,
     -63,    60,    25,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     0,     0,     1,    10,    11,    12,    13,     8,
       0,     2,     0,     3,     0,    20,    22,     0,     0,    19,
      30,     0,    19,     4,    14,    18,    17,    24,    21,    23,
      16,     0,     0,     0,     0,     0,     5,    15,    30,    25,
      30,    47,    27,     0,    29,    35,     0,    43,    45,     0,
       6,    40,    30,     0,    64,     0,     0,     0,    19,    34,
      42,    26,     0,     0,    52,     0,     0,     0,    41,     0,
       0,     0,    84,    61,    60,    82,    80,     0,    56,     0,
      71,    76,    79,    84,    82,     0,     0,     0,     0,    31,
       0,     7,    55,    85,    58,    30,     0,     0,     0,    36,
      86,    87,    88,    89,    90,    67,    69,     0,    72,    74,
      77,    65,    66,     0,     0,     0,    33,     0,    83,     0,
      53,    54,     0,     0,     0,    57,     0,     0,     0,    44,
       0,    32,    59,    81,    37,    68,    70,    73,    75,    78,
       0,    47,     0,     0,    46,    38,    51,    48,    39,     0,
      49,    47,     0,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   142,     3,   121,
     -63,   -19,    65,   -63,   -63,   -36,   -63,   -63,   -63,   -63,
     -63,   -41,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -57,   -63,   -63,   -63,   -62,   -63,   -63,
      -7,   -63,   -63,    18,   -63,   -63,   -63,   -63,   -63,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    12,    14,    31,    41,    59,     9,    49,    18,
      32,    26,    19,    20,    21,    28,    34,    43,    35,    70,
     115,    60,    53,   122,   141,   146,    56,    57,   148,   149,
     151,    65,    77,    78,   117,    51,    63,    79,   123,   124,
      80,   126,   127,    81,   128,    82,    96,    95,    93,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    85,    42,    30,    44,    45,    10,     5,     6,     7,
       8,   105,   106,    33,    92,     1,    61,    17,   133,    15,
       5,     6,     7,     8,    16,    46,    47,    48,    45,   -28,
       5,     6,     7,     8,   119,    17,    83,   145,    15,    68,
     120,   121,    84,    16,    23,   125,    89,    24,    46,    47,
      48,    76,    90,   105,   106,   132,   -63,   -63,     4,   118,
     153,   135,   136,    45,   111,     5,     6,     7,     8,   108,
     109,   -63,   100,   101,   102,   103,   104,    54,    11,    55,
     -62,   -62,    22,    46,    47,    48,    29,   105,   106,    71,
      72,    13,    94,    73,    74,   -62,    75,    36,    72,    58,
     143,    73,    74,    25,    75,    76,    97,    98,   105,   106,
     152,    38,    27,    76,     5,     6,     7,     8,     1,   137,
     138,    99,    39,    40,    52,    24,    62,    66,    64,    67,
      69,    86,    87,    88,    91,   110,   113,   112,   114,   140,
     147,   130,     3,     0,   116,   129,   139,   134,   142,   131,
       0,   144,   150,    37
};

static const yytype_int16 yycheck[] =
{
      41,    63,    38,    22,    40,     3,     3,     5,     6,     7,
       8,    26,    27,    23,    71,     9,    52,    14,    33,    23,
       5,     6,     7,     8,    28,    23,    24,    25,     3,    39,
       5,     6,     7,     8,    96,    32,    17,    35,    23,    58,
      97,    98,    23,    28,    33,   107,    17,    36,    23,    24,
      25,    32,    23,    26,    27,   117,    18,    19,     0,    95,
      35,   123,   124,     3,    37,     5,     6,     7,     8,    28,
      29,    33,    11,    12,    13,    14,    15,    30,    23,    32,
      18,    19,    17,    23,    24,    25,    21,    26,    27,    16,
      17,    32,    30,    20,    21,    33,    23,    34,    17,    23,
     141,    20,    21,    37,    23,    32,    18,    19,    26,    27,
     151,    39,    38,    32,     5,     6,     7,     8,     9,   126,
     127,    33,    17,    39,    39,    36,    32,    32,    22,    32,
      10,    33,    22,    22,    35,    31,    33,    37,    36,    23,
       4,    40,     0,    -1,    37,    37,   128,    34,    33,    37,
      -1,    37,    34,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    42,    48,     0,     5,     6,     7,     8,    48,
      49,    23,    43,    32,    44,    23,    28,    49,    50,    53,
      54,    55,    53,    33,    36,    37,    52,    38,    56,    53,
      52,    45,    51,    23,    57,    59,    34,    50,    39,    17,
      39,    46,    56,    58,    56,     3,    23,    24,    25,    49,
      62,    76,    39,    63,    30,    32,    67,    68,    23,    47,
      62,    56,    32,    77,    22,    72,    32,    32,    52,    10,
      60,    16,    17,    20,    21,    23,    32,    73,    74,    78,
      81,    84,    86,    17,    23,    78,    33,    22,    22,    17,
      23,    35,    74,    89,    30,    88,    87,    18,    19,    33,
      11,    12,    13,    14,    15,    26,    27,    90,    28,    29,
      31,    37,    37,    33,    36,    61,    37,    75,    56,    78,
      74,    74,    64,    79,    80,    78,    82,    83,    85,    37,
      40,    37,    78,    33,    34,    78,    78,    81,    81,    84,
      23,    65,    33,    62,    37,    35,    66,     4,    69,    70,
      34,    71,    62,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    43,    44,    45,    46,    47,    42,    48,    48,
      49,    49,    49,    49,    51,    50,    50,    50,    52,    52,
      54,    53,    55,    53,    57,    58,    56,    56,    59,    56,
      56,    61,    60,    60,    60,    63,    64,    65,    66,    62,
      62,    62,    62,    67,    62,    68,    62,    62,    70,    71,
      69,    69,    72,    73,    73,    73,    73,    74,    75,    74,
      74,    74,    74,    74,    77,    76,    76,    79,    78,    80,
      78,    78,    82,    81,    83,    81,    81,    85,    84,    84,
      87,    86,    88,    86,    89,    86,    90,    90,    90,    90,
      90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,    15,     2,     1,
       1,     1,     1,     1,     0,     4,     3,     2,     1,     0,
       0,     3,     0,     3,     0,     0,     6,     4,     0,     4,
       0,     0,     4,     3,     0,     0,     0,     0,     0,    12,
       1,     3,     2,     0,     6,     0,     9,     0,     0,     0,
       6,     0,     1,     3,     3,     2,     1,     3,     0,     4,
       1,     1,     1,     1,     0,     5,     5,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     1,
       0,     4,     0,     3,     0,     2,     1,     1,     1,     1,
       1
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
        case 2:
#line 57 "parser.y" /* yacc.c:1646  */
    {insert_type_table();}
#line 1409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 57 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 57 "parser.y" /* yacc.c:1646  */
    { printf("Label next:\n");}
#line 1433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 57 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd = mknode(NULL,(yyvsp[-3].nam).nd,"start");printf("___________________________________________________________________________________________n");printf("\n\t\t\tSyntax Tree in Inorder traversal\n___________________________________________________________________________________________\n");
printtree((yyval.nam).nd);
printf("\n\n");
add('t');}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "parser.y" /* yacc.c:1646  */
    {add('H');}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 62 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "parser.y" /* yacc.c:1646  */
    {insert_type();}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 65 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "parser.y" /* yacc.c:1646  */
    {insert_type_table();}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 66 "parser.y" /* yacc.c:1646  */
    {add_ptr();}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 67 "parser.y" /* yacc.c:1646  */
    {add('n');}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 67 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 69 "parser.y" /* yacc.c:1646  */
    {add('n');}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 69 "parser.y" /* yacc.c:1646  */
    {add('t');printf("Return\t%s\n",(yyvsp[-2].nam).name);}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 69 "parser.y" /* yacc.c:1646  */
    {add('t');printf("Return\t%s\n",(yyvsp[-1].nam).name);}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 71 "parser.y" /* yacc.c:1646  */
    {add('k');}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("\nLabel\t%s:\n",(yyvsp[-1].gen).tr);}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 71 "parser.y" /* yacc.c:1646  */
    {addTo('{',"Punctuations");}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 71 "parser.y" /* yacc.c:1646  */
    {addTo('}',"Punctuations");
	pop();
	printf("goto next\n");
	printf("\nLabel\t%s:\n",(yyvsp[-6].gen).fal);}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 74 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode((yyvsp[-8].gen).nd,(yyvsp[-3].nam).nd,"IF");
	strcpy((yyval.nam).name,"IF");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 76 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=(yyvsp[0].nam).nd;}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 77 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode(NULL,NULL,"definition"); int i=sym_search((yyvsp[-1].nam).name);if(i!=-1)
	{if(strcmp((yyvsp[-2].nam).name,"int")==0){addTo('i',(yyvsp[-1].nam).name);}
	else if(strcmp((yyvsp[-2].nam).name,"float")==0)addTo('f',(yyvsp[-1].nam).name);
	else addTo('c',(yyvsp[-1].nam).name);}
	else{printf("Variable already defined, error at line no: %d\n",yylineno);exit(0);}}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode((yyvsp[-1].nam).nd,(yyvsp[0].nam).nd,"statement");strcpy((yyval.nam).name,"STATEMENT");}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 83 "parser.y" /* yacc.c:1646  */
    {add('f');}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd = mknode(NULL,NULL,"printf");}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 84 "parser.y" /* yacc.c:1646  */
    {add('f');}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 84 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd = mknode(NULL,NULL,"scanf");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 85 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode(NULL,NULL,"EPSILON");}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 87 "parser.y" /* yacc.c:1646  */
    {add('k');}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 87 "parser.y" /* yacc.c:1646  */
    {addTo('{',"Punctuations");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 87 "parser.y" /* yacc.c:1646  */
    {(yyval.nam)=(yyvsp[-1].nam);addTo('}',"Punctuations");
	pop();
	printf("goto next\n");
	printf("\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 90 "parser.y" /* yacc.c:1646  */
    {printf("goto next\n");
	printf("\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.gen).nd=(yyvsp[0].gen).nd;}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.gen).nd=mknode((yyvsp[-2].nam).nd,(yyvsp[0].nam).nd,(yyvsp[-1].nam).name);
   	int i=search((yyvsp[-2].nam).name);
   	int j=search((yyvsp[0].nam).name);
   	if(i!=0&&j!=0){
   	printf("if %s %s %s goto L%d else goto L%d\n",(yyvsp[-2].nam).name,(yyvsp[-1].nam).name,(yyvsp[0].nam).name,ifd,eld);
   sprintf((yyval.gen).tr,"L%d",ifd);
   sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}   
   else{printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 106 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 106 "parser.y" /* yacc.c:1646  */
    {int i=search((yyvsp[-3].nam).name);
 	int j=search((yyvsp[0].nam).name);
 	if(i!=0&&j!=0)
 	{
 	printf("if %s!=0 goto L%d else goto L%d\n",(yyvsp[-3].nam).name,ifd,eld);
 	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;} 
	else{printf(" Variable not declared at line no: %d\n", yylineno);
	exit(0);}}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("if False  goto L%d\n",eld);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("if True  goto L%d\n",ifd);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 121 "parser.y" /* yacc.c:1646  */
    {int i=search((yyvsp[0].nam).name);
	if(i!=0)
	{
	printf("if %s!=0  goto L%d else goto L%d\n",(yyvsp[0].nam).name,ifd,eld);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}    
	else {printf(" Variable not declared at line no: %d\n", yylineno);
	exit(0);} }
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 129 "parser.y" /* yacc.c:1646  */
    {add('n');
	printf("if %s!=0  goto L%d else goto L%d\n",(yyvsp[0].nam).name,ifd,eld);
	sprintf((yyval.gen).tr,"L%d",ifd);
	sprintf((yyval.gen).fal,"L%d",eld);ifd++;eld++;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-4].nam).nd = mknode(NULL,NULL,(yyvsp[-4].nam).name);
	  (yyval.nam).nd=mknode((yyvsp[-4].nam).nd,(yyvsp[-1].nam).nd,"=");
	  strcpy((yyval.nam).name,"=");add('t');
	  int i=search((yyvsp[-4].nam).name);
	  int j=search((yyvsp[-1].nam).name);
	  if(i!=0&&j!=0) 
	  {
	  type_check((yyvsp[-4].nam).name,(yyvsp[-1].nam).name);
	  printf("= \t %s\t %s \n",(yyvsp[-1].nam).name,(yyvsp[-4].nam).name);} 
	  else {printf("Variable not declared at line no: %d\n", yylineno);
	  exit(0);}}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 144 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 146 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode((yyvsp[-3].nam).nd,(yyvsp[0].nam).nd,"+");strcpy((yyval.nam).name,"+");
	int i=search((yyvsp[-3].nam).name);
	int j=search((yyvsp[0].nam).name);
	sprintf((yyval.nam).name,"t%d",c);c++;
	addTo(temptype((yyvsp[-3].nam).name,(yyvsp[0].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) {printf("%s\t%s\t%s\t%s\n","+",(yyvsp[-3].nam).name,(yyvsp[0].nam).name,(yyval.nam).name);}
	 else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 155 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval.nam).nd=mknode((yyvsp[-3].nam).nd,(yyvsp[0].nam).nd,"-");
	strcpy((yyval.nam).name,"-");
	int i=search((yyvsp[-3].nam).name);
	int j=search((yyvsp[0].nam).name);
	sprintf((yyval.nam).name,"t%d",c);c++;
	addTo(temptype((yyvsp[-3].nam).name,(yyvsp[0].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) {printf("%s\t%s\t%s\t%s\n","-",(yyvsp[-3].nam).name,(yyvsp[0].nam).name,(yyval.nam).name);} 
	else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=(yyvsp[0].nam).nd;}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 165 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode((yyvsp[-3].nam).nd,(yyvsp[0].nam).nd,"*");
	 strcpy((yyval.nam).name,"*");
	 int i=search((yyvsp[-3].nam).name);
	 int j=search((yyvsp[0].nam).name);
	 sprintf((yyval.nam).name,"t%d",c);c++;
	 addTo(temptype((yyvsp[-3].nam).name,(yyvsp[0].nam).name),(yyval.nam).name);
	 if(i!=0 && j!=0) {printf("%s\t%s\t%s\t%s\n","*",(yyvsp[-3].nam).name,(yyvsp[0].nam).name,(yyval.nam).name);}
	 else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 174 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode((yyvsp[-3].nam).nd,(yyvsp[0].nam).nd,"/");strcpy((yyval.nam).name,"/"); 
	int i=search((yyvsp[-3].nam).name);
	int j=search((yyvsp[0].nam).name);
	sprintf((yyval.nam).name,"%d",c);
	strcat((yyval.nam).name,"t");c++;
	addTo(temptype((yyvsp[-3].nam).name,(yyvsp[0].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) 
	{
	printf("%s\t%s\t%s\t%s\n","/",(yyvsp[-3].nam).name,(yyvsp[0].nam).name,(yyval.nam).name);
	}
	 else {printf(" Variable not declared at line no: %d\n", yylineno);
	 exit(0);}}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=(yyvsp[0].nam).nd;}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 189 "parser.y" /* yacc.c:1646  */
    {add('o');}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode((yyvsp[-3].nam).nd,(yyvsp[0].nam).nd,"^");
	strcpy((yyval.nam).name,"^");
	int i=search((yyvsp[-3].nam).name);
	int j=search((yyvsp[0].nam).name);
	sprintf((yyval.nam).name,"%d",c);
	strcat((yyval.nam).name,"t");c++;
	addTo(temptype((yyvsp[-3].nam).name,(yyvsp[0].nam).name),(yyval.nam).name);
	if(i!=0 && j!=0) {
	printf("%s\t%s\t%s\t%s\n","^",(yyvsp[-3].nam).name,(yyvsp[0].nam).name,(yyval.nam).name);} 
	else {printf(" Variable not declared at line no: %d\n", yylineno);exit(0);}}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=(yyvsp[0].nam).nd;}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 202 "parser.y" /* yacc.c:1646  */
    {add('t');}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 202 "parser.y" /* yacc.c:1646  */
    {add('t'); (yyval.nam)=(yyvsp[-1].nam);}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 202 "parser.y" /* yacc.c:1646  */
    {insert_type_table();}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode(NULL,NULL,(yyvsp[-2].nam).name);strcpy((yyval.nam).name,(yyvsp[-2].nam).name);}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "parser.y" /* yacc.c:1646  */
    {add('n');}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.nam).nd=mknode(NULL,NULL,(yyvsp[-1].nam).name);
	strcpy((yyval.nam).name,(yyvsp[-1].nam).name);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 206 "parser.y" /* yacc.c:1646  */
    {add('r');}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 206 "parser.y" /* yacc.c:1646  */
    {add('r');}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 206 "parser.y" /* yacc.c:1646  */
    {add('r');}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 206 "parser.y" /* yacc.c:1646  */
    {add('r');}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 206 "parser.y" /* yacc.c:1646  */
    {add('r');}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1940 "y.tab.c" /* yacc.c:1646  */
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
#line 210 "parser.y" /* yacc.c:1906  */

int main()
{
	extern int yylineno;
	x.val=10;
	printf("______________________________________________________________________________________________________________________\n");
	printf("\t\t\tIntermediate code\n");
	printf("______________________________________________________________________________________________________________________\n");
	yyparse();
	
	printf("\nParsing is Successful\n");	
	printf("______________________________________________________________________________________________________________________\n");
	printf("\t\t\tSymbol table\n");
	printf("______________________________________________________________________________________________________________________\n");	
	printf("\nsymbol \t type  \t identify \t line number\n");
	printf("______________________________________________________________________________________________________________________\n");
	int i=0;
	for(i=0;i<count;i++){
		printf("%s\t%s\t%s\t%d\t\n",symbolTable[i].id_name,symbolTable[i].data_type,symbolTable[i].type,symbolTable[i].line_no);
		
	}
	for(i=0;i<count;i++){
		free(symbolTable[i].id_name);
		free(symbolTable[i].type);
	}
	return 0;
}
void yyerror(const char* s)
{
	printf("Not accepted\n");
	exit(0);
}
//insert the type into symboltable
void insert_type(){

	
	strcpy(type,yytext);
	//printf("hey");
	q=search(type);
	//printf("qval=%d",q);
	if(q==0){
		
		symbolTable[count].id_name=strdup(yytext);
		symbolTable[count].data_type=strdup("N/A");
		symbolTable[count].line_no = countn;
		symbolTable[count].type=strdup("KEYWORD\t");
		count++;
	}
	
	
}

struct node1* mknode(struct node1 *left, struct node1 *right, char *token)
{
	
  struct node1 *newnode = (struct node1 *)malloc(sizeof(struct node1));
  char *newstr = (char *)malloc(strlen(token)+1);
  strcpy(newstr, token);
  newnode->left = left;
  newnode->right = right;
  newnode->token = newstr;
  return(newnode);
}
void pop()
{
	int i;
	//printf("count %d\n",count);
	int temp=count-1;
	for(i=temp;i>=0;i--)
	{
		if(strcmp(symbolTable[i].id_name,"{")!=0)
		{
			//printf("$$\n");
			count=count-1;;
		}
		else
		{
			count=count-1;
			break;
		}
	}	
	

}
//add declaration of data to symboltable
void addTo(char i,char *n)
{
	if(i=='i')
	{
			symbolTable[count].id_name=strdup(n);
			symbolTable[count].data_type="int";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("variable");
			count++;
	}
	else if(i=='f')
	{
			symbolTable[count].id_name=strdup(n);
			symbolTable[count].data_type="float";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("variable");
			count++;
	}
	else if(i=='c')
	{
			symbolTable[count].id_name=strdup(n);
			symbolTable[count].data_type="char";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("variable");
			count++;
	}
	else if(i=='{')
	{
			symbolTable[count].id_name=strdup("{");;
			symbolTable[count].data_type="N/A";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("punctuation");
			count++;
	}
	else if(i=='}')
	{
			symbolTable[count].id_name=strdup("}");;
			symbolTable[count].data_type="N/A";
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("punctuation");
			count++;
	}


}
char temptype(char* one,char* two)
{
		int y;
	char* onetype;
	char* twotype;
	for(y = 0;y<count;y++)
	{
		if(strcmp(symbolTable[y].id_name,one)==0) onetype=symbolTable[y].data_type;
		if(strcmp(symbolTable[y].id_name,two)==0) twotype=symbolTable[y].data_type;	
	}
	if((strcmp(onetype,"float")==0) || (strcmp(twotype,"float")==0))
		return 'f';
	else
		return 'i';
}
void insert_type_table(){
	
		q=search(yytext);
	
		if(q==0){
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("IDENTIFIER");
			count++;
		}
	
	
}
void type_check(char* one, char* two)
{
	int y;
	char* onetype;
	char* twotype;
	for(y = 0;y<count;y++)
	{
		if(strcmp(symbolTable[y].id_name,one)==0) onetype=symbolTable[y].data_type;
		if(strcmp(symbolTable[y].id_name,two)==0) twotype=symbolTable[y].data_type;	
	}
	if(strcmp(onetype,twotype)>0){ printf("type error at lineno %d\n",yylineno);exit(0);}
}
//ADD the recent parsed string into symboltable
void add(char c)
{
	q=search(yytext);
	if(q==0){
		if(c=='H')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup(type);
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Header");
			count++;
		}
		else if(c=='t')
		{	
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Punctuation");
			count++;
		}
		else if(c=='o')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Operator");
			count++;
		}
		else if(c=='r')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("Rel Op\t");
			count++;
		}
		else if(c=='k')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("KEYWORD\t");
			count++;
		}
		else if(c=='n')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("int");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("NUMBER\t");
			count++;
		}
	else if(c=='f')
		{
			symbolTable[count].id_name=strdup(yytext);
			symbolTable[count].data_type=strdup("N/A");
			symbolTable[count].line_no = countn;
			symbolTable[count].type=strdup("FUNCTION\t");
			count++;
		}
	}
}
int  sym_search(char *type)
{
	int i;
	for(i=count -1 ;i>=0&&(strcmp(symbolTable[i].id_name,"{")!=0);i--)
	{
		if(strcmp(symbolTable[i].id_name,type)==0)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}
//Search in the Symbol table whether the parsed String is present in Symbol table already
int  search(char *type)
{
	int i;
	for(i=count -1 ;i>=0;i--)
	{
		if(strcmp(symbolTable[i].id_name,type)==0)
		{
			return -1;
			break;
		}
	
	}
	return 0;
}
void add_ptr(){
	strcat(type,"*");
}
//print the abstract syntax tree
void printtree(struct node1* tree)
{
  int i;

  
 
  if (tree->left)
	{

		printtree(tree->left);
	}
 printf(" %s , ", tree->token);
  if (tree->right)
	{
   
		printtree(tree->right);
	}
 
}
