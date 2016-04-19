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
#line 3 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "symboltable.h"
int tokens = 0, error = 0;
static int linenumber = 1;
int cur_scope = 0;
int is_nt_func = 0;
int tmp_array_dim = 0;
int ifnum = 0;
int m = 1;
int ifnumbegin = 0;
int allLabel[256];
int temp_place = 8;
int fp_pos = 0;
enum all_type cur_type, fn_return_type;

struct var_type{
    ptr p;  		//pointer to symbol table entry
};
struct const_type{
  int con_type;		/*0: Int, 1: Float, -1: String*/
  int place;
  union {
    int ival;
    float fval;
    char *sc;
  } const_u;
};
struct f_l{	//To get details of function arguments.
    char name[256];
    int func_list_num;
    int func_arg_type[256];
    enum all_type nt_type;
    int place;
    int is_lib_func;
};

#line 107 "parser.tab.c" /* yacc.c:339  */

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
    ID = 258,
    CONST = 259,
    VOID = 260,
    INT = 261,
    FLOAT = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    FOR = 266,
    STRUCT = 267,
    TYPEDEF = 268,
    OP_ASSIGN = 269,
    OP_OR = 270,
    OP_AND = 271,
    OP_NOT = 272,
    OP_EQ = 273,
    OP_NE = 274,
    OP_GT = 275,
    OP_LT = 276,
    OP_GE = 277,
    OP_LE = 278,
    OP_PLUS = 279,
    OP_MINUS = 280,
    OP_TIMES = 281,
    OP_DIVIDE = 282,
    MK_LB = 283,
    MK_RB = 284,
    MK_LPAREN = 285,
    MK_RPAREN = 286,
    MK_LBRACE = 287,
    MK_RBRACE = 288,
    MK_COMMA = 289,
    MK_SEMICOLON = 290,
    MK_DOT = 291,
    ERROR = 292,
    RETURN = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "parser.y" /* yacc.c:355  */

  struct var_type *variable;
  enum all_type nt_type;
  int num;
  struct const_type *con_pt;	/*Constant*/
  struct f_l func_list;

#line 191 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 208 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   110,   111,   115,   116,   120,   120,   120,
     144,   167,   173,   179,   182,   191,   192,   201,   203,   205,
     206,   208,   209,   212,   213,   214,   215,   218,   219,   222,
     223,   226,   227,   228,   229,   232,   234,   236,   241,   242,
     243,   246,   250,   250,   250,   251,   251,   251,   252,   253,
     254,   258,   259,   260,   264,   269,   284,   297,   298,   300,
     301,   303,   304,   307,   308,   311,   336,   359,   396,   396,
     400,   403,   408,   409,   412,   412,   412,   416,   417,   415,
     419,   424,   425,   418,   430,   430,   430,   434,   439,   462,
     503,   504,   505,   509,   515,   516,   519,   520,   522,   524,
     526,   532,   535,   536,   539,   540,   550,   551,   552,   553,
     554,   555,   558,   559,   562,   580,   589,   602,   611,   612,
     615,   630,   634,   635,   638,   640,   643,   644,   677,   679,
     680,   713,   715,   716,   756,   758,   760,   769,   775,   779,
     791
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CONST", "VOID", "INT", "FLOAT",
  "IF", "ELSE", "WHILE", "FOR", "STRUCT", "TYPEDEF", "OP_ASSIGN", "OP_OR",
  "OP_AND", "OP_NOT", "OP_EQ", "OP_NE", "OP_GT", "OP_LT", "OP_GE", "OP_LE",
  "OP_PLUS", "OP_MINUS", "OP_TIMES", "OP_DIVIDE", "MK_LB", "MK_RB",
  "MK_LPAREN", "MK_RPAREN", "MK_LBRACE", "MK_RBRACE", "MK_COMMA",
  "MK_SEMICOLON", "MK_DOT", "ERROR", "RETURN", "$accept", "program",
  "global_decl_list", "global_decl", "function_decl", "$@1", "$@2",
  "param_list", "param", "dim_fn", "dimfn1", "expr_null", "block",
  "decl_list", "decl", "type_decl", "var_decl", "type", "struct_type",
  "tag", "$@3", "$@4", "$@5", "$@6", "id_list", "dim_decl", "cexpr",
  "mcexpr", "cfactor", "init_id_list", "init_id", "ifbegin", "$@7",
  "whilebegin", "forbegin", "stmt_list", "stmt", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "assign_expr_list",
  "nonempty_assign_expr_list", "assign_expr", "relop_expr", "relop_term",
  "relop_factor", "rel_op", "relop_expr_list", "nonempty_relop_expr_list",
  "expr", "add_op", "term", "mul_op", "factor", "var_ref", "dim",
  "struct_tail", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -168

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-168)))

#define YYTABLE_NINF -131

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -168,    37,   140,  -168,    22,  -168,  -168,  -168,    19,   162,
    -168,  -168,   140,  -168,  -168,  -168,    76,     9,    42,    67,
      49,    59,  -168,    22,    22,    22,  -168,  -168,    69,   141,
    -168,  -168,   164,    25,    92,   106,  -168,    71,  -168,   140,
     174,   188,   202,    13,   228,    92,   122,  -168,  -168,  -168,
      25,    93,   101,  -168,    25,    42,  -168,   140,   140,   122,
    -168,  -168,  -168,   112,  -168,    24,    31,    13,   116,   128,
    -168,   207,   101,  -168,    -5,    40,  -168,   146,   151,     5,
    -168,    81,  -168,  -168,  -168,    25,  -168,  -168,    25,   135,
      92,   140,   132,    13,   131,  -168,    13,    -5,   154,  -168,
      13,    -5,    58,    13,    13,  -168,  -168,  -168,  -168,  -168,
    -168,    13,    13,    13,    13,   167,  -168,  -168,    78,   228,
     163,   163,  -168,   101,  -168,  -168,   160,  -168,   116,   173,
     161,    13,    83,    13,    85,  -168,   128,  -168,   214,   101,
    -168,   177,  -168,  -168,  -168,  -168,    13,  -168,  -168,  -168,
    -168,    13,   181,  -168,   189,  -168,  -168,   175,   212,   214,
     116,  -168,  -168,    36,  -168,  -168,   187,  -168,  -168,    61,
    -168,   175,   211,   213,    13,   186,  -168,   209,    48,   217,
      13,   216,    55,   175,  -168,    52,   215,   186,   186,    13,
    -168,   219,  -168,  -168,    13,    13,  -168,   220,    13,    12,
     218,   221,  -168,   116,  -168,  -168,  -168,   238,  -168,   222,
      60,   190,   114,   116,    13,  -168,    55,   223,   241,   227,
      55,  -168,   217,   116,  -168,  -168,  -168,   186,  -168,  -168,
     186,  -168,   229,  -168,  -168,  -168,   186,  -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,    40,    38,    39,     0,     0,
       3,     6,     0,    28,    29,    30,     0,     0,    51,     0,
      50,    45,    41,     0,     0,     0,     5,    27,    65,     0,
      63,    34,     0,     0,    54,     0,    37,    42,    49,     0,
       0,     0,     0,     0,    13,    66,     0,    35,    36,    61,
       0,     0,    58,    60,     0,    52,    48,     0,    46,     0,
      32,    31,    33,   136,   127,     0,     0,     0,    67,   100,
     102,   104,   117,   121,   133,     0,    12,     0,     0,    65,
      64,     0,   118,   119,    55,     0,   122,   123,     0,     0,
      53,    43,     0,   113,   136,   128,     0,   134,   136,   129,
       0,   135,     0,     0,     0,   110,   111,   108,   106,   109,
     107,     0,     0,     0,     0,     0,   137,   138,     0,     0,
      14,    15,    62,    57,    59,    56,     0,    47,   115,     0,
     112,   113,     0,   113,     0,   124,   101,   103,   105,   116,
     120,     0,   140,     7,    10,    11,    22,    16,    17,    44,
     130,     0,     0,   125,     0,   126,   139,    26,     0,    21,
     114,   131,   132,   136,    68,    70,     0,    74,    91,     0,
       8,    25,     0,     0,   113,    24,    73,     0,   133,    20,
     113,     0,    95,    26,    92,     0,     0,    23,     0,   113,
      80,   136,    72,    90,     0,     0,    18,     0,     0,   136,
       0,    94,    97,    99,    75,    93,     9,    87,    77,     0,
       0,     0,    88,    69,     0,    71,     0,     0,     0,     0,
      95,    89,    20,    98,    96,    76,    85,     0,    81,    19,
       0,    78,     0,    86,    79,    82,     0,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,   240,  -168,  -168,  -168,   142,   138,
      32,  -168,    79,    11,    -9,  -168,  -168,     2,    -4,  -168,
    -168,  -168,  -168,  -168,   133,    -3,   -18,   178,   176,  -168,
     224,  -168,  -168,  -168,  -168,    94,  -167,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,    46,  -168,    51,   -43,
     165,   168,  -168,   -86,  -168,  -105,   -33,   157,   -62,   158,
     -64,  -168,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    11,   157,   186,    75,    76,   147,
     196,   158,   170,   171,    13,    14,    15,    59,    17,    22,
      57,   126,    39,    92,    19,    45,    51,    52,    53,    29,
      30,   172,   181,   173,   174,   175,   176,   183,   217,   219,
     234,   209,   232,   236,   218,   230,   200,   201,   202,   128,
      69,    70,   111,   177,   130,    71,   112,    72,    88,    73,
      74,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    97,   101,    27,    16,    25,   138,   129,   192,   141,
     113,    24,    18,    12,    16,    34,    63,    64,    85,    43,
     192,   207,    20,   114,   102,    18,   214,    94,    95,    49,
      65,   115,    81,    33,    98,    99,    89,     3,    66,    18,
      78,   159,    93,    67,    31,   152,    77,   154,    85,    27,
      58,    21,    90,   132,    96,    50,    85,   134,   199,    64,
     231,   100,   194,   233,    63,    64,   180,   103,    91,   237,
      33,   118,    65,   103,   119,   103,   114,   113,    65,    28,
      66,    37,    27,    43,   115,    67,    66,   205,   190,   135,
     211,    67,    38,   178,   197,   221,   184,    33,   103,    44,
     103,    35,    36,   208,    56,    82,    83,   178,   160,    55,
     143,   178,   122,   144,   153,    78,   155,    82,    83,   178,
      54,    77,    84,   178,   178,    79,   185,    86,    87,  -130,
    -130,   103,  -130,  -130,  -130,  -130,  -130,  -130,  -130,   203,
    -130,  -130,    93,     4,   104,     5,     6,     7,  -130,   120,
      32,   210,     8,     9,   121,   213,    40,    41,    42,    82,
      83,   131,    27,   178,   125,   127,   178,    23,     6,     7,
     142,   223,   178,   203,     8,    46,    47,   203,   163,    64,
       5,     6,     7,   164,   133,   165,   166,     8,     9,   191,
      64,   146,    65,   149,   164,   151,   165,   166,    35,    48,
      66,    82,    83,    65,   150,    67,   156,   167,    35,    60,
     168,    66,   161,   169,    82,    83,    67,   182,   167,   222,
     162,   168,    35,    61,   169,   105,   106,   107,   108,   109,
     110,    82,    83,     5,     6,     7,    35,    62,    82,    83,
       8,   179,   188,   189,   193,   195,   198,   -84,   206,   180,
     226,   212,    26,   215,   229,   216,   225,   220,   227,   148,
     235,   145,   204,   123,   124,   187,   228,   224,   136,   139,
      80,   140,   137
};

static const yytype_uint8 yycheck[] =
{
      43,    65,    66,    12,     2,     9,   111,    93,   175,   114,
      72,     9,     3,     2,    12,    18,     3,     4,    51,    14,
     187,   188,     3,    28,    67,     3,    14,     3,     4,     4,
      17,    36,    50,    28,     3,     4,    54,     0,    25,     3,
      44,   146,    30,    30,    35,   131,    44,   133,    81,    58,
      39,    32,    55,    96,    30,    30,    89,   100,     3,     4,
     227,    30,    14,   230,     3,     4,    30,    15,    57,   236,
      28,    31,    17,    15,    34,    15,    28,   139,    17,     3,
      25,    32,    91,    14,    36,    30,    25,    35,   174,    31,
     195,    30,    33,   157,   180,    35,    35,    28,    15,    30,
      15,    34,    35,   189,    33,    24,    25,   171,   151,     3,
      32,   175,    31,    35,    31,   119,    31,    24,    25,   183,
      28,   119,    29,   187,   188,     3,   169,    26,    27,    15,
      16,    15,    18,    19,    20,    21,    22,    23,    24,   182,
      26,    27,    30,     3,    16,     5,     6,     7,    34,     3,
      17,   194,    12,    13,     3,   198,    23,    24,    25,    24,
      25,    30,   171,   227,    29,    33,   230,     5,     6,     7,
       3,   214,   236,   216,    12,    34,    35,   220,     3,     4,
       5,     6,     7,     8,    30,    10,    11,    12,    13,     3,
       4,    28,    17,    33,     8,    34,    10,    11,    34,    35,
      25,    24,    25,    17,    31,    30,    29,    32,    34,    35,
      35,    25,    31,    38,    24,    25,    30,    30,    32,    29,
      31,    35,    34,    35,    38,    18,    19,    20,    21,    22,
      23,    24,    25,     5,     6,     7,    34,    35,    24,    25,
      12,    29,    31,    30,    35,    28,    30,     9,    33,    30,
       9,    31,    12,    35,   222,    34,    33,    35,    31,   121,
      31,   119,   183,    85,    88,   171,   220,   216,   103,   112,
      46,   113,   104
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,     3,     5,     6,     7,    12,    13,
      42,    43,    52,    53,    54,    55,    56,    57,     3,    63,
       3,    32,    58,     5,    56,    57,    43,    53,     3,    68,
      69,    35,    63,    28,    64,    34,    35,    32,    33,    61,
      63,    63,    63,    14,    30,    64,    34,    35,    35,     4,
      30,    65,    66,    67,    28,     3,    33,    59,    52,    56,
      35,    35,    35,     3,     4,    17,    25,    30,    88,    89,
      90,    94,    96,    98,    99,    46,    47,    56,    57,     3,
      69,    65,    24,    25,    29,    95,    26,    27,    97,    65,
      64,    52,    62,    30,     3,     4,    30,    99,     3,     4,
      30,    99,    88,    15,    16,    18,    19,    20,    21,    22,
      23,    91,    95,    97,    28,    36,   100,   101,    31,    34,
       3,     3,    31,    66,    67,    29,    60,    33,    88,    92,
      93,    30,    88,    30,    88,    31,    89,    90,    94,    96,
      98,    94,     3,    32,    35,    47,    28,    48,    48,    33,
      31,    34,    92,    31,    92,    31,    29,    44,    50,    94,
      88,    31,    31,     3,     8,    10,    11,    32,    35,    38,
      51,    52,    70,    72,    73,    74,    75,    92,    99,    29,
      30,    71,    30,    76,    35,    88,    45,    74,    31,    30,
      92,     3,    75,    35,    14,    28,    49,    92,    30,     3,
      85,    86,    87,    88,    51,    35,    33,    75,    92,    80,
      88,    94,    31,    88,    14,    35,    34,    77,    83,    78,
      35,    35,    29,    88,    87,    33,     9,    31,    85,    49,
      84,    75,    81,    75,    79,    31,    82,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    44,    45,    43,
      43,    46,    46,    46,    47,    47,    47,    47,    48,    49,
      49,    50,    50,    51,    51,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    56,    56,
      56,    57,    59,    60,    58,    61,    62,    58,    58,    58,
      58,    63,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    71,    70,
      72,    73,    74,    74,    76,    77,    75,    78,    79,    75,
      80,    81,    82,    75,    83,    84,    75,    75,    75,    75,
      75,    75,    75,    75,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,   100,
     101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     0,     0,    10,
       6,     3,     1,     0,     2,     2,     3,     3,     4,     4,
       0,     1,     0,     2,     1,     1,     0,     2,     1,     1,
       1,     4,     4,     4,     2,     3,     3,     3,     1,     1,
       1,     2,     0,     0,     6,     0,     0,     5,     3,     2,
       1,     1,     3,     4,     2,     3,     4,     3,     1,     3,
       1,     1,     3,     1,     3,     1,     2,     3,     0,     4,
       1,     4,     2,     1,     0,     0,     5,     0,     0,     7,
       0,     0,     0,     9,     0,     0,     7,     3,     4,     4,
       2,     1,     2,     3,     1,     0,     3,     1,     3,     1,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     3,     4,     4,     1,     2,     2,
       4,     5,     5,     1,     2,     2,     1,     2,     2,     3,
       2
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
        case 7:
#line 120 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 120 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 121 "parser.y" /* yacc.c:1646  */
    {
//	printf("func_defn_x: %s, decl: %d, num: %d\n", $2->p->id, $2->p->arg_num, $4.func_list_num);
	if(((yyvsp[-9].nt_type) != (yyvsp[-8].variable)->p->return_type) && ((yyvsp[-8].variable)->p->is_lib_func == 0) && ((yyvsp[-8].variable)->p->type == type_func)) {	/*Comparing with declaration.*/
		printf("Decl: Incompatible return type. Fn = %s\n", (yyvsp[-8].variable)->p->id);
		error = 1;
	}
	if(((yyvsp[-8].variable)->p->arg_num != (yyvsp[-6].func_list).func_list_num) && ((yyvsp[-8].variable)->p->is_lib_func == 0) && ((yyvsp[-8].variable)->p->type == type_func)) {
		if((yyvsp[-8].variable)->p->arg_num < (yyvsp[-6].func_list).func_list_num)
			printf("func_defn_x: too many arguments in function (%s)\n", (yyvsp[-8].variable)->p->id);
		else
			printf("func_defn_x: too few arguments in function (%s)\n", (yyvsp[-8].variable)->p->id);
		error = 1;	/*Set Error Flag.*/
	}
	if((yyvsp[-9].nt_type) != fn_return_type) {		/*Comparing with return type from function body.*/
		printf("Block: Incompatible return type. Fn = %s\n", (yyvsp[-8].variable)->p->id);
//		printf("fn_return_type = %d, p->return_type = %d, type = %d.\n", fn_return_type, $2->p->return_type, $1);

		error = 1;
	}

	check_func_details((yyvsp[-8].variable), (yyvsp[-6].func_list));
	}
#line 1505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 145 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[-4].variable)->p->return_type = (yyvsp[-5].nt_type);
		(yyvsp[-4].variable)->p->type = type_func;
		(yyvsp[-4].variable)->p->arg_num = (yyvsp[-2].func_list).func_list_num;

		copy_func_details((yyvsp[-4].variable), (yyvsp[-2].func_list));
/*
		for(int i = 1; i <= $4.func_list_num; i++) {
			$1.func_dim_list[i] = $4.func_arg_type[i];
			printf("func_decl: func_dim_list = %d\n", $1.func_dim_list[i]);
		}
*/
//		printf("func_decl: func_dim_list = %d\n", $2->p->func_dim_list[1]);
//		printf("func_decl: func_dim_list = %d\n", $2->p->func_dim_list[2]);
/*
		printf("Function decl: %s\t\t", $2->p->id);
		printf("Return type: %d\t\t", $2->p->return_type);
		printf("Param # = %d\n", $4);
*/
	}
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 168 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = (yyvsp[-2].func_list).func_list_num + 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_1: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 174 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_2: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 183 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[0].variable)->p->scope = 1;
		(yyvsp[0].variable)->p->type = (yyvsp[-1].nt_type);
		(yyvsp[0].variable)->p->first_time = 0;
//		printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = 0;			//Passing 0 as it's not an array, it's a scalar.
//		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 193 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].variable)->p->scope = 1;
		(yyvsp[-1].variable)->p->type = (yyvsp[-2].nt_type);
		(yyvsp[-1].variable)->p->first_time = 0;
		//printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = (yyvsp[0].num);		//Passing on array dimensions.
    //		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = 0;}
#line 1600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_int; cur_type=type_int;}
#line 1606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_float; cur_type=type_float;}
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_void; cur_type=type_void;}
#line 1618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 250 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 251 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 251 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 261 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_3: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 265 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_4: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 270 "parser.y" /* yacc.c:1646  */
    {
//VM		$$ = 1;			/*Dimension count.*/
		(yyval.func_list).func_list_num = 1;				/*Argument count.*/
    (yyval.func_list).place = (yyvsp[-1].func_list).place;
    //printf("place:%d", $2.place); //el par
//		$$.func_arg_type[$$.func_list_num] = 1;		/*Dimension count.*/
//VM		if($2 != type_int) {		/*Dimension type check.*/
		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Dimension type check.*/
			printf("dim_decl_1: Array subscript is not an integer.\n");
//			printf("dim_decl_1: cexpr = %d\n", $2);
			error = 1;
		}

	}
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 285 "parser.y" /* yacc.c:1646  */
    {
//VM		$$ = $1 + 1;		/*Dimension count.*/
		(yyval.func_list).func_list_num = (yyvsp[-3].func_list).func_list_num + 1;					/*Argument count.*/
//		$$.func_arg_type[$$.func_list_num] = $$.func_arg_type[$$.func_list_num] + 1;	/*Dimension count.*/
//VM		if($3 != type_int) {		/*Dimension type check.*/
		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Dimension type check.*/
			printf("dim_decl_1: Array subscript is not an integer.\n");
//			printf("dim_decl_1: cexpr = %d\n", $3);
			error = 1;
		}
	}
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 298 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type; (yyval.func_list).place = (yyvsp[0].func_list).place;}
#line 1699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 301 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type; (yyval.func_list).place = (yyvsp[0].func_list).place;}
#line 1705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 303 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type; (yyval.func_list).place = (yyvsp[0].con_pt)->const_u.ival;}
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 312 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].variable)->p->first_time==0) {
                	printf("ID (%s) redeclared\n",(yyvsp[0].variable)->p->id);
			error = 1;
		}
                else  {//ID being seen for the first time
                fp_pos -= 4;
                (yyvsp[0].variable)->p->stkPos = fp_pos;
                      	(yyvsp[0].variable)->p->first_time=0;
                        (yyval.variable) = (yyvsp[0].variable);

//			printf("init_id_1: id seen for first time.\n");
		}
                  (yyvsp[0].variable)->p->type=cur_type;
	/*Variable declaration upgraded?*/
/*
                  printf("Scope: %d - %s is of type ", cur_scope, $1->p->id);
                  if($1->p->type==type_int)
                      printf("int\n");
                  if($1->p->type==type_float)
                      printf("float\n");
*/
        }
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 337 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].variable)->p->first_time==0) {
                	printf("ID (%s) redeclared\n",(yyvsp[-1].variable)->p->id);
			error = 1;
		}
                else  //ID being seen for the first time
                	(yyvsp[-1].variable)->p->first_time=0;
                (yyvsp[-1].variable)->p->type=cur_type;
	/*Variable declaration upgraded?*/
/*
                  printf("Scope: %d - %s is of type ", cur_scope, $1->p->id);
                  if($1->p->type==type_int)
                      printf("int\n");
                  if($1->p->type==type_float)
                      printf("float\n");
*/
	(yyvsp[-1].variable)->p->is_array = 1;
//VM	$1->p->array_dim = $2;
	(yyvsp[-1].variable)->p->array_dim = (yyvsp[0].func_list).func_list_num;
  //printf("%d", $2.place);
  insertArray((yyvsp[-1].variable)->p->id, (yyvsp[0].func_list).place);
	}
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 360 "parser.y" /* yacc.c:1646  */
    {

  //printf("%s ------\n" , $1->p->id);
  fp_pos -= 4;
  (yyvsp[-2].variable)->p->stkPos = fp_pos;
  if((yyvsp[-2].variable)->p->scope != 0 && (yyvsp[-2].variable)->p->is_array == 0){
    if((yyvsp[0].func_list).place != type_func && !(yyvsp[0].func_list).is_lib_func){
      char buf[20];
      sprintf(buf, "  sw $%d, %d($fp)", (yyvsp[0].func_list).place, (yyvsp[-2].variable)->p->stkPos);
      emit(buf);
      delete_inregister((yyvsp[0].func_list).place);
    }
  }

                if((yyvsp[-2].variable)->p->first_time==0) {
                 	printf("ID (%s) redeclared\n",(yyvsp[-2].variable)->p->id);
			error = 1;
		}
               	else{  //ID being seen for the first time
                	(yyvsp[-2].variable)->p->first_time=0;

                }
               	(yyvsp[-2].variable)->p->type=cur_type;
                //printf("%s\n", $1->p->id); //$$ = $1;

	/*Variable declaration upgraded?*/
/*
                  printf("Scope: %d - %s is of type ", cur_scope, $1->p->id);
                  if($1->p->type==type_int)
                      printf("int\n");
                  if($1->p->type==type_float)
                      printf("float\n");
*/
        }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 396 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf);}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 397 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum; char buf[20];sprintf(buf,"  beqz $%d, lelse%d", (yyvsp[0].func_list).place, ifnum++);emit(buf); }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 400 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum; char buf[20];sprintf(buf,"test%d:", ifnum++);emit(buf);}
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 403 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum;

   char buf[20];sprintf(buf,"test%d:", ifnum++);emit(buf);}
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 412 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 412 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 416 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  beqz $%d, lexit%d", (yyvsp[0].func_list).place, (yyvsp[-2].func_list).place);emit(buf); }
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 417 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j test%d", (yyvsp[-5].func_list).place);emit(buf);}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 417 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lexit%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 419 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  beqz $%d, lexit%d", (yyvsp[0].func_list).place, (yyvsp[-1].func_list).place);emit(buf);
      char bufd[20];sprintf(bufd,"  j body%d", (yyvsp[-1].func_list).place);emit(bufd);
      {char buff[20];sprintf(buff,"inc%d:", (yyvsp[-1].func_list).place);emit(buff);}
    }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 424 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j test%d", (yyvsp[-4].func_list).place);emit(buf);}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 425 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"body%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 427 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j inc%d", (yyvsp[-8].func_list).place);emit(buf);
     char buff[20];sprintf(buff,"lexit%d:", (yyvsp[-8].func_list).place);emit(buff);}
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 430 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j lexit%d", (yyvsp[-2].func_list).place); emit(buf);}
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 430 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lelse%d:", (yyvsp[-4].func_list).place);emit(buf);}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 432 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lexit%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 434 "parser.y" /* yacc.c:1646  */
    {
        //endif
        char buf[20];sprintf(buf,"lelse%d:", (yyvsp[-2].func_list).place);emit(buf);
    }
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 440 "parser.y" /* yacc.c:1646  */
    {
	//printf("func_call-stmt: %s, decl: %d, num: %d\n", $1->p->id, $1->p->arg_num, $3.func_list_num);
  //printf("func_call-stmt: %s, decl: %s, %d\n", $1->p->id, $3.name, $3.place);

//	print_func_details($3);

//Argument # check.
	if(((yyvsp[-3].variable)->p->arg_num != (yyvsp[-1].func_list).func_list_num) && ((yyvsp[-3].variable)->p->is_lib_func == 0) && ((yyvsp[-3].variable)->p->type == type_func)) {
		if((yyvsp[-3].variable)->p->arg_num < (yyvsp[-1].func_list).func_list_num)
			printf("func_call-stmt: too many arguments in function (%s)\n", (yyvsp[-3].variable)->p->id);
		else
			printf("func_call-stmt: too few arguments in function (%s)\n", (yyvsp[-3].variable)->p->id);

		error = 1;		/*Set Error Flag.*/
	}

//Scalar or Pointer?
//	ptr p=lookup($3.name, 1);



	}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 463 "parser.y" /* yacc.c:1646  */
    {				/*Function return type comparison goes here?*/
  if((yyvsp[-3].variable)->p->type == type_int && (yyvsp[-1].func_list).place < 32){ // integer
    if((yyvsp[-3].variable)->p->scope != 0 && (yyvsp[-3].variable)->p->is_array == 0 && !(yyvsp[-1].func_list).is_lib_func){
      if((yyvsp[-1].func_list).place != type_func){
        char buf[20]; sprintf(buf, "  sw $%d, %d($fp)", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->stkPos);emit(buf);
        delete_inregister((yyvsp[-1].func_list).place);
      }else{
        char buf[20]; sprintf(buf, "  li $v0, 5");emit(buf);
        char buff[20]; sprintf(buff, "  syscall");emit(buff);
        char bufff[20]; sprintf(bufff, "  sw $v0, %d($fp)", (yyvsp[-3].variable)->p->stkPos);emit(bufff);

      }
    }else if((yyvsp[-3].variable)->p->is_array == 1){
      char buff[20];
      char buf[20]; sprintf(buf, "  sw $%d, _%s($%d)", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id, temp_place);
      emit(buf);
      delete_inregister((yyvsp[-1].func_list).place);
    }else{

      char buf[20]; sprintf(buf, "  sw $%d, _%s", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id);emit(buf);
      delete_inregister((yyvsp[-1].func_list).place);
    }
  }else{ //float
    if((yyvsp[-3].variable)->p->scope != 0){
      char buf[20]; sprintf(buf, "  s.s $f%d, %d($fp)", (yyvsp[-1].func_list).place - 32, (yyvsp[-3].variable)->p->stkPos);emit(buf);
      delete_inregister((yyvsp[-1].func_list).place);
    }else{
      char buf[20]; sprintf(buf, "  s.s $f%d, _%s", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id);emit(buf);
      delete_inregister((yyvsp[-1].func_list).place);
    }
  }

//		printf("stmt: ID = %s, type = %d, return_type = %d\n", $1->p->id, $1->p->type, $3);
		if((yyvsp[-3].variable)->p->type != (yyvsp[-1].func_list).nt_type && (is_nt_func == 1)) {
			printf("ID = %s : Incompatible return types\n", (yyvsp[-3].variable)->p->id);
			error = 1;	/*Set Error Flag.*/
		}
		is_nt_func = 0;		/*Reset flag so that non functions are not checked for return type*/
			/*Need to handle read (int) and fread (float).*/
	}
#line 1988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 506 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = type_void;
	}
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 510 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = (yyvsp[-1].func_list).nt_type;
	}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 527 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);;
//		printf("relop_expr: array arg # = %d.\n", $$.func_list_num);
//printf("%s\n" , $1.name);
	}
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 532 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[-2].func_list);strcpy((yyval.func_list).name, (yyvsp[-2].func_list).name);}
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 535 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);}
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 536 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);}
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 539 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);}
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 540 "parser.y" /* yacc.c:1646  */
    {int auxplace;int buf [20]; int bugg[20];
       sprintf(bugg, "%s,%d,%d", (yyvsp[-1].variable),(yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
       auxplace = insert_inRegister(bugg);
       sprintf(buf,"  %s $%d, $%d, $%d", (yyvsp[-1].variable),auxplace, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
       emit(buf);(yyval.func_list).place = auxplace;
        delete_inregister(auxplace);}
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 550 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "slt";}
#line 2055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 551 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sle";}
#line 2061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 552 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sgt";}
#line 2067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 553 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sge";}
#line 2073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 554 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "seq";}
#line 2079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 555 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sne";}
#line 2085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 558 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 559 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 2097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 563 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = (yyvsp[-2].func_list).func_list_num + 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].func_list).func_list_num;
		strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
		printf("nonempty_relop_expr_list_1: name = %s, arg # = %d, array dim# = %d & %d.\n", (yyval.func_list).name, (yyval.func_list).func_list_num, (yyval.func_list).func_arg_type[1], (yyval.func_list).func_arg_type[2]);
//Scalar or Pointer?
/*
		ptr p=lookup($3.name, 1);
		if(p->array_dim == 0) {
			if(p->array_dim != $3.func_list_num) {
				printf("nonempty_relop_expr_list_1: Scalar Issue.\n");
				error = 1;
			}
		}

*/
	}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 581 "parser.y" /* yacc.c:1646  */
    {					/*For function parameter number?*/ //PROBLEM???
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].func_list).func_list_num;
		strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
//		printf("nonempty_relop_expr_list_2: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
	}
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 589 "parser.y" /* yacc.c:1646  */
    {temp_place = insert_inRegister((yyvsp[-2].func_list).name);
                              char buf[20];
                             if(temp_place < 32){
                               sprintf(buf, "  %s $%d, $%d, $%d ", (yyvsp[-1].variable), temp_place, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
                             }else{
                               if((yyvsp[-1].variable) == "add"){
                                 sprintf(buf, "  add.s $f%d, $f%d, $%d ", temp_place-32, (yyvsp[-2].func_list).place-32, (yyvsp[0].func_list).place);
                               }else{
                                 sprintf(buf, "  sub.s $f%d, $f%d, $%d ", temp_place-32, (yyvsp[-2].func_list).place-32, (yyvsp[0].func_list).place);
                               }
                             }
                             emit(buf);
                             (yyval.func_list).place = temp_place; }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 603 "parser.y" /* yacc.c:1646  */
    {

		(yyval.func_list) = (yyvsp[0].func_list);
		//printf("expr:%s\n", $1.name);

	}
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 611 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "add";}
#line 2165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 612 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sub";}
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 615 "parser.y" /* yacc.c:1646  */
    {temp_place = insert_inRegister((yyvsp[-2].func_list).name);
                              char buf[20];
                              if(temp_place < 32){
                                sprintf(buf, "  %s $%d, $%d, $%d", (yyvsp[-1].variable), temp_place, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
                                emit(buf);
                              }else{
                                if((yyvsp[-1].variable) == "mul"){
                                  sprintf(buf, "  mul.s $f%d, $f%d, $%d", temp_place - 32, (yyvsp[-2].func_list).place - 32, (yyvsp[0].func_list).place);
                                  emit(buf);
                                }else{
                                  sprintf(buf, "  div.s $f%d, $f%d, $%d", temp_place - 32, (yyvsp[-2].func_list).place -32, (yyvsp[0].func_list).place);
                                  emit(buf);
                                }
                              }
                              (yyvsp[-2].func_list).place = temp_place;}
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 631 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 634 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "mul";}
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 635 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "div";}
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 644 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;
    char na[256];
    sprintf(na, "%d", (yyvsp[0].con_pt)->const_u.ival);

    if(!find_inRegister(na)){
      if((yyvsp[0].con_pt)->con_type != -1){
        if((yyvsp[0].con_pt)->const_u.ival){
          (yyvsp[0].con_pt)->place = insert_inRegister(na);
          char buf[20];
          sprintf(buf, "  li $%d, %d", (yyvsp[0].con_pt)->place, (yyvsp[0].con_pt)->const_u.ival);
          emit(buf);
        }else{
          (yyvsp[0].con_pt)->place = 0;
        }
      }else{
        (yyvsp[0].con_pt)->place = insert_inRegister(na);
        char buff[20];
        sprintf(buff, "  li $v0, 4");
        emit(buff);
        char buf[20];
        strcpy(strings[m], (yyvsp[0].con_pt)->const_u.sc);
        sprintf(buf, "  la $a0, m%d", m++);
        emit(buf);
        char bufff[20];
        sprintf(bufff, "  syscall");
        emit(bufff);
      }
    }else{
      (yyvsp[0].con_pt)->place = insert_inRegister(na);
    }
    (yyval.func_list).place = (yyvsp[0].con_pt)->place;}
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 677 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 679 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 682 "parser.y" /* yacc.c:1646  */
    {
	printf("func_call-factor: %s, decl: %d, num: %d\n", (yyvsp[-3].variable)->p->id, (yyvsp[-3].variable)->p->arg_num, (yyvsp[-1].func_list).func_list_num);

	print_func_details((yyvsp[-1].func_list));

	if(((yyvsp[-3].variable)->p->arg_num != (yyvsp[-1].func_list).func_list_num) && ((yyvsp[-3].variable)->p->is_lib_func == 0) && ((yyvsp[-3].variable)->p->type == type_func)) {
		if((yyvsp[-3].variable)->p->arg_num < (yyvsp[-1].func_list).func_list_num)
			printf("func_call-factor: too many arguments in function (%s)\n", (yyvsp[-3].variable)->p->id);
		else
			printf("func_call-factor: too few arguments in function (%s)\n", (yyvsp[-3].variable)->p->id);
		error = 1;	/*Set Error Flag.*/
	}
//	printf("factor: ID type - %d\n", $1->p->type);
	if((yyvsp[-3].variable)->p->type == type_func) {
		is_nt_func = 1;		/*Set flint vector[3];ag so that only functions are checked for return type.*/
		if(!strcmp((yyvsp[-3].variable)->p->id, "read")) {
			(yyvsp[-3].variable)->p->return_type = type_int;
//			printf("read() function\n");
		}
		if(!strcmp((yyvsp[-3].variable)->p->id, "fread")) {
			(yyvsp[-3].variable)->p->return_type = type_float;
//			printf("fread() function\n");
		}
	}
	(yyval.func_list).nt_type = (yyvsp[-3].variable)->p->return_type;	/*Function return type passed to factor.*/
  (yyval.func_list).place = type_func;
  if((yyvsp[-3].variable)->p->id == "read" || (yyvsp[-3].variable)->p->id == "write"){
    (yyval.func_list).is_lib_func = 1;
  }
	printf("factor: return type of (%s) is: %d\n", (yyvsp[-3].variable)->p->id, (yyval.func_list).nt_type);
}
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 718 "parser.y" /* yacc.c:1646  */
    {

  temp_place = find_inRegister((yyvsp[0].variable)->p->id);

  if((yyvsp[0].variable)->p->scope == 0 && !temp_place){
    char buf[20];
    temp_place = insert_inRegister((yyvsp[0].variable)->p->id);
    if(temp_place < 32){
      sprintf(buf, "  lw $%d, _%s", temp_place, (yyvsp[0].variable)->p->id);
      emit(buf);
    }else{
      sprintf(buf, "  l.s $f%d, _%s", temp_place-32, (yyvsp[0].variable)->p->id);
      emit(buf);
    }
  }else if (!temp_place){
    char buf[20];
    temp_place = insert_inRegister((yyvsp[0].variable)->p->id);
    if(temp_place < 32){
      sprintf(buf, "  lw $%d, %d($fp)", temp_place, (yyvsp[0].variable)->p->stkPos);
      emit(buf);
    }else{
      sprintf(buf, "  l.s $f%d, %d($fp)", temp_place-32, (yyvsp[0].variable)->p->stkPos);
      emit(buf);
    }
  }
  (yyval.func_list).place = temp_place;
(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;			/*Type to be used in array subscript.*/
	(yyval.func_list).func_list_num = tmp_array_dim;		//# of Dimensions.
	strcpy((yyval.func_list).name, (yyvsp[0].variable)->p->id);
//	printf("factor-var_ref: variable is = %s, tmp_array_dim = %d.\n", $1->p->id, tmp_array_dim);
	if((yyvsp[0].variable)->p->is_array == 1) {	/*It's array.*/
		if((yyvsp[0].variable)->p->array_dim != tmp_array_dim) {
			printf("Incompatible array dimensions.\n");
			error = 1;
		}
	}
	tmp_array_dim = 0;		/*Reset global variable*/
}
#line 2336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 756 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2342 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 758 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 761 "parser.y" /* yacc.c:1646  */
    {

		(yyval.variable) = (yyvsp[0].variable);
//		printf("var_ref: ID: %s\n", $1->p->id);
		if((yyvsp[0].variable)->p->type == type_undef)
			printf("ID (%s) undeclared.\n", (yyvsp[0].variable)->p->id);

	}
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 770 "parser.y" /* yacc.c:1646  */
    {
//	printf("var_ref: variable is = %s\n", $1->p->id);

}
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 780 "parser.y" /* yacc.c:1646  */
    {
		tmp_array_dim++;

		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Array dimension check in stmt.*/
			printf("dim: Array subscript is not an integer.\n");
//			printf("dim_decl_1: expr = %d\n", $2);
			error = 1;
		}
	}
#line 2384 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2388 "parser.tab.c" /* yacc.c:1646  */
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
#line 793 "parser.y" /* yacc.c:1906  */

#include "lex.yy.c"
FILE *f;
void generateFuncio(char * func)
{
char buf[2000];
sprintf(buf, "%s:\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n_begin_%s:",func,
	"  sw $ra, 0($sp)",
	"  sw $fp, -4($sp)",
	"  add $fp, $sp, -4",
	"  add $sp, $sp, -8",
	"  lw $2, _framesize_main",
	"  sub $sp, $sp, $2",
	"  sw $8, 32($sp)",
	"  sw $9, 28($sp)",
	"  sw $10, 24($sp)",
	"  sw $11, 20($sp)",
	"  sw $12, 16($sp)",
	"  sw $13, 12($sp)",
	"  sw $14, 8($sp)",
	"  sw $15, 4($sp)",
 func
);
emit(buf);
}

void endFuncio(char * func)
{
char buf[2000];
sprintf(buf, "\n\n_end_%s:\n%s%s%s%s%s%s%s%s%s%s%s%s%s",
func,
"	lw $8, 32($sp)\n",
"	lw $9, 28($sp)\n",
"	lw $10, 24($sp)\n",
"	lw $11, 20($sp)\n",
"	lw $12, 16($sp)\n",
"	lw $13, 12($sp)\n",
"	lw $14, 8($sp)\n",
"	lw $15, 4($sp)\n",
"	lw $ra, 4($fp)\n",
"	add $sp, $fp, 4\n",
"	lw $fp, 0($fp)\n",
"	li $v0, 10\n",
"	syscall\n"

);
emit(buf);
}
void generateMain()
{
char buf[2000];
sprintf(buf, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n%s","main:",
	"  sw $ra, 0($sp)",
	"  sw $fp, -4($sp)",
	"  add $fp, $sp, -4",
	"  add $sp, $sp, -8",
	"  lw $2, _framesize_main",
	"  sub $sp, $sp, $2",
	"  sw $8, 32($sp)",
	"  sw $9, 28($sp)",
	"  sw $10, 24($sp)",
	"  sw $11, 20($sp)",
	"  sw $12, 16($sp)",
	"  sw $13, 12($sp)",
	"  sw $14, 8($sp)",
	"  sw $15, 4($sp)",
  "_begin_main:"
);
emit(buf);
}

void endMain()
{
char buf[2000];
sprintf(buf, "\n\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
"_end_main:\n",
"	lw $8, 32($sp)\n",
"	lw $9, 28($sp)\n",
"	lw $10, 24($sp)\n",
"	lw $11, 20($sp)\n",
"	lw $12, 16($sp)\n",
"	lw $13, 12($sp)\n",
"	lw $14, 8($sp)\n",
"	lw $15, 4($sp)\n",
"	lw $ra, 4($fp)\n",
"	add $sp, $fp, 4\n",
"	lw $fp, 0($fp)\n",
"	li $v0, 10\n",
"	syscall\n"

);
emit(buf);
}

int main (int argc, char *argv[])
{
    init_symtab();
    f = fopen("file.spim", "w");
    printf("Symbol Table initialized\n");
    emit(".text");
    if(argc>0)
        yyin = fopen(argv[1],"r");
    else
        yyin=stdin;
    generateMain();
    registr aux = arrays;
    while(aux!=NULL){
      //printf("ok87-\n");
      //prev = aux;
        aux=(registr *)aux->next;
    }
    yyparse();
    aux = arrays;
    while(aux!=NULL){
      //printf("ok87-ss\n");
      //prev = aux;
        aux=(registr *)aux->next;
    }
    endMain();
    //print_symtab();
    if (error == 1)
	printf("%s\n", "Parsing completed. Errors found.");
    else{
      registr aux = arrays;
      while(aux!=NULL){
        //printf("ok87-++\n");
        //prev = aux;
          aux=(registr *)aux->next;
      }
    	printf("%s\n", "Parsing completed. No errors found.");
      emit("\n.data");
      char buf[20];
      ptr p;
      int i, value = 0;
      for(i=0;i<TABLESIZE;i++){
          p=symtab[i];
          while(p!=NULL){
              if(p->type == type_int || p->type == type_float){
                  sprintf(buf, "_%s: .word %d", p->id, value);
                  emit(buf);
              }

              p=p->next;
          }
      }
      sprintf(buf, "_framesize_main: .word 36", 2, 2);
      emit(buf);

    }
//    print_symtab();
aux = arrays;
while(aux!=NULL){
  //printf("ok87-\n");
  //prev = aux;
    aux=(registr *)aux->next;
}
    cleanup_symtab(-1); //clean up the entire symbol table
    /////////Eu acho que isso tá bem errado<<<<<<< aumentei para 2000 e parou o seg fault

    aux = arrays;
    while(aux!=NULL){
      //printf("ok87\n");
      //prev = aux;
        aux=(registr *)aux->next;
    }
    aux = arrays;
    //printf("%s\n", "Shit reached here");
    while(aux!=NULL /*&& arrCont-- !=0*/){ ////Não vai querer remover isso bernardo
      ///////////// --------- CONTADOR ACIMA
      int oxo = 100;
      char bufArray[oxo];
      for(; oxo>=0; oxo--)
      {
        bufArray[oxo] = 0;
      }
      int where = 0;
        int x = aux->place;
        //printf("%s - %d\n", "Shit reached here! dim:", x);
        while(x>0){
          //printf("%s - %d\n", "added! dim:", x);
          bufArray[where] = '0';
          if(x != 1){
            bufArray[where+1] = ',';
            bufArray[where+2] = ' ';
            where+=3;
          }

          x--;
        }
          //printf("%s%s\n", "Shit reached here? 1 - ",aux->name);
char buf[200];
        sprintf(buf, "_%s: .word %s", aux->name, bufArray);  ///essa funcao tá fudendo tudo
          //printf("%s%s\n", "Shit reached here? 2 - ",aux->name);
        emit(buf);
        //printf("%s%s\n", "Shit reached here? 3 - ",aux->name);
        //aux->next = NULL;  // /works with this M<<<<<<<<<<<<<<<<<<<<<<
        //if(aux != NULL && ((aux->next))!=NULL)
        //if(aux->next)
        //if(aux->flago == 0)
        {
          //printf("%s\n", "Shit got inside...");

          aux=aux->next;
        }
        //printf("%s\n", "Shit reached");
    }
    char buf[20];
    m--;
    while(m > 0){
      sprintf(buf,"m%d: .asciiz %s", m, strings[m]);
      emit(buf);
      m--;
    }
    //print_registers();
    clear_inregister();
    //printf("%s\n", "Shit reached here too");
    fclose(f);
    return 0;
} /* main */
/*
int main (int argc, char *argv[])
{
    init_symtab();
    f = fopen("file.spim", "w");
    printf("Symbol Table initialized\n");
    emit(".text");
    if(argc>0)
        yyin = fopen(argv[1],"r");
    else
        yyin=stdin;
    generateMain();
    yyparse();
    endMain();
    //print_symtab();
    if (error == 1)
	printf("%s\n", "Parsing completed. Errors found.");
    else{
    	printf("%s\n", "Parsing completed. No errors found.");
      emit("\n.data");
      char buf[20];
      ptr p;
      int i, value = 0;
      for(i=0;i<TABLESIZE;i++){
          p=symtab[i];
          while(p!=NULL){
              if(p->type == type_int || p->type == type_float){
                  sprintf(buf, "_%s: .word %d", p->id, value);
                  emit(buf);
              }

              p=p->next;
          }
      }
      sprintf(buf, "_framesize_main: .word 36", 2, 2);
      emit(buf);

    }
//    print_symtab();
    cleanup_symtab(-1); //clean up the entire symbol table
/// funciona com 21 por motivos desconhecidos// 21 dividido por 3?
    char bufArray[100];
    int where = 0;
    regist aux2 = arrays;
    while(aux2!=NULL){

        while(aux2->place>0){

          bufArray[where] = '0';
          if(aux2->place != 1){
            bufArray[where+1] = ',';
            bufArray[where+2] = ' ';
            where+=3;
          }

          aux2->place--;
        }
        char buf[100];
        sprintf(buf, "_%s: .word %s", aux2->name, bufArray);
        printf("%s%s\n", "Shit reached here? 3 - ",aux2->name);
        emit(buf);
        aux2=aux2->next;
    }
    //print_registers();
    //clear_inregister();
    fclose(f);
    return 0;
} /* main */


yyerror (char *mesg)
  {
      printf("%s\t%d\t%s\t%s\n", "Error found in Line ", linenumber, "next token: ", yytext );
      printf("%s\n", mesg);
      exit(1);
  }
  emit (char *mesg)
    {
        /*printf("%s\t%d\t%s\t%s\n", "Error found in Line ", linenumber, "next token: ", yytext );*/
        /*printf("%s\n", mesg);
        */


        if (f == NULL)
        {
            printf("Error opening file!\n");
            exit(1);
        }


        fprintf(f, "%s\n", mesg);

    }

void copy_func_details(struct var_type *v, struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
		if((v->p->is_lib_func == 0) && (v->p->type == type_func))
			v->p->func_dim_list[i] = q.func_arg_type[i];
//		printf("copy_func_details: func_dim_list = %d\n", v->p->func_dim_list[i]);
	}
}

/*
struct f_l copy_func_call_details(struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
		if((v->p->is_lib_func == 0) && (v->p->type == type_func))
			v->p->func_dim_list[i] = q.func_arg_type[i];
//		printf("copy_func_details: func_dim_list = %d\n", v->p->func_dim_list[i]);
	}
}
*/

void print_func_details(struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
//		if((v->p->is_lib_func == 0) && (v->p->type == type_func))
//			v->p->func_dim_list[i] = q.func_arg_type[i];
//		printf("print_func_details: func_dim_list = %d\n", q.func_arg_type[i]);
	}
}

void check_func_details(struct var_type *v, struct f_l q) {
	int i;
	for(i = 1; i <= q.func_list_num; i++) {
		if((v->p->is_lib_func == 0) && (v->p->type == type_func)) {
			if((v->p->func_dim_list[i] == q.func_arg_type[i]))	;
//				printf("Func (%s): No scalar issues.\n", v->p->id);
			else {
				printf("Func (%s): Scalar issues.\n", v->p->id);
				error = 1;
			}
		}
	}
}
