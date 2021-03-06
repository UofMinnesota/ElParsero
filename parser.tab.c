/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

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
int last_array_num = 0;
int ifnum = 0;
int m = 1;
int param_num = 0;
int isif = 0;
int ifnumbegin = 0;
int allLabel[256];
int temp_place = 8;
int fp_pos = 0;
char pt13lula[665];
enum all_type cur_type, fn_return_type;

struct var_type{
    ptr p;  		//pointer to symbol table entry
    int arrayoffset;
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
    int arrayoffset;
};

#line 113 "parser.tab.c" /* yacc.c:339  */

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
    COMMENT = 260,
    VOID = 261,
    INT = 262,
    FLOAT = 263,
    IF = 264,
    ELSE = 265,
    WHILE = 266,
    FOR = 267,
    STRUCT = 268,
    TYPEDEF = 269,
    OP_ASSIGN = 270,
    OP_OR = 271,
    OP_AND = 272,
    OP_NOT = 273,
    OP_EQ = 274,
    OP_NE = 275,
    OP_GT = 276,
    OP_LT = 277,
    OP_GE = 278,
    OP_LE = 279,
    OP_PLUS = 280,
    OP_MINUS = 281,
    OP_TIMES = 282,
    OP_DIVIDE = 283,
    MK_LB = 284,
    MK_RB = 285,
    MK_LPAREN = 286,
    MK_RPAREN = 287,
    MK_LBRACE = 288,
    MK_RBRACE = 289,
    MK_COMMA = 290,
    MK_SEMICOLON = 291,
    MK_DOT = 292,
    ERROR = 293,
    RETURN = 294
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 50 "parser.y" /* yacc.c:355  */

  struct var_type *variable;
  enum all_type nt_type;
  int num;
  struct const_type *con_pt;	/*Constant*/
  struct f_l func_list;

#line 198 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 213 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   117,   118,   122,   123,   129,   131,   129,
     157,   180,   186,   193,   196,   212,   213,   222,   224,   226,
     227,   229,   230,   233,   234,   235,   236,   239,   240,   243,
     244,   247,   248,   249,   250,   253,   255,   257,   262,   263,
     264,   267,   271,   271,   271,   272,   272,   272,   273,   274,
     275,   279,   280,   281,   285,   290,   305,   320,   321,   323,
     324,   326,   327,   330,   331,   334,   359,   382,   419,   419,
     423,   426,   431,   432,   435,   435,   435,   439,   440,   438,
     442,   447,   448,   441,   453,   453,   453,   457,   462,   485,
     530,   531,   532,   536,   543,   544,   547,   548,   550,   559,
     561,   567,   572,   579,   588,   589,   603,   604,   605,   606,
     607,   608,   611,   612,   615,   644,   659,   676,   685,   686,
     689,   708,   716,   717,   720,   722,   725,   726,   760,   762,
     763,   802,   804,   805,   868,   870,   872,   881,   888,   892,
     908
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CONST", "COMMENT", "VOID", "INT",
  "FLOAT", "IF", "ELSE", "WHILE", "FOR", "STRUCT", "TYPEDEF", "OP_ASSIGN",
  "OP_OR", "OP_AND", "OP_NOT", "OP_EQ", "OP_NE", "OP_GT", "OP_LT", "OP_GE",
  "OP_LE", "OP_PLUS", "OP_MINUS", "OP_TIMES", "OP_DIVIDE", "MK_LB",
  "MK_RB", "MK_LPAREN", "MK_RPAREN", "MK_LBRACE", "MK_RBRACE", "MK_COMMA",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
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
    -168,    29,   139,  -168,    71,  -168,  -168,  -168,     9,   194,
    -168,  -168,   139,  -168,  -168,  -168,    76,    19,     3,    66,
      56,    78,  -168,    71,    71,    71,  -168,  -168,    55,    92,
    -168,  -168,   108,    31,   102,   155,  -168,   130,  -168,   139,
     134,   158,   161,    33,   214,   102,   185,  -168,  -168,  -168,
      31,    79,   182,  -168,    31,     3,  -168,   139,   139,   185,
    -168,  -168,  -168,   160,  -168,    23,    30,    33,   183,   187,
    -168,   193,   182,  -168,   -12,    90,  -168,   203,   226,    77,
    -168,    88,  -168,  -168,  -168,    31,  -168,  -168,    31,   124,
     102,   139,   196,    33,   201,  -168,    33,   -12,   202,  -168,
      33,   -12,    59,    33,    33,  -168,  -168,  -168,  -168,  -168,
    -168,    33,    33,    33,    33,   228,  -168,  -168,    -5,   214,
     205,   205,  -168,   182,  -168,  -168,   204,  -168,   183,   207,
     206,    33,    64,    33,    65,  -168,   187,  -168,   200,   182,
    -168,   131,  -168,  -168,  -168,  -168,    33,  -168,  -168,  -168,
    -168,    33,   208,  -168,   210,  -168,  -168,   172,   213,   200,
     183,  -168,  -168,    36,  -168,  -168,   215,  -168,  -168,    40,
    -168,   172,   212,   216,    33,   156,  -168,   199,     1,   219,
      33,   218,    69,   172,  -168,    49,   211,   156,   156,    33,
    -168,   220,  -168,  -168,    33,    33,  -168,   221,    33,    68,
     222,   217,  -168,   183,  -168,  -168,  -168,   227,  -168,   223,
      62,   198,   113,   183,    33,  -168,    69,   229,   240,   224,
      69,  -168,   219,   183,  -168,  -168,  -168,   156,  -168,  -168,
     156,  -168,   225,  -168,  -168,  -168,   156,  -168
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
    -168,  -168,  -168,  -168,   242,  -168,  -168,  -168,   117,   140,
      38,  -168,    72,    11,    -9,  -168,  -168,     2,    -4,  -168,
    -168,  -168,  -168,  -168,    93,    -3,   -31,   177,   176,  -168,
     230,  -168,  -168,  -168,  -168,    94,  -167,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,    46,  -168,    51,   -43,
     165,   166,  -168,   -86,  -168,  -105,   -33,   157,   -62,   159,
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
     113,    24,    20,    12,    16,    34,   194,   114,    85,    81,
     192,   207,    18,    89,   102,   115,    94,    95,   143,     3,
     114,   144,    33,    98,    99,    49,    63,    64,   115,    18,
      78,   159,    21,    63,    64,   152,    77,   154,    85,    27,
      58,    65,    90,   132,    96,    31,    85,   134,    65,    66,
     231,   100,    50,   233,    67,   103,    66,   180,    91,   237,
      43,    67,   199,    64,    18,   103,   184,   113,   103,    28,
     103,   103,    27,   214,    33,   205,    44,    65,   190,    37,
     211,   135,    43,   178,   197,    66,   153,   155,   221,    93,
      67,    35,    36,   208,    82,    83,    33,   178,   160,    84,
      32,   178,    38,    82,    83,    78,    40,    41,    42,   178,
     122,    77,   118,   178,   178,   119,   185,    46,    47,  -130,
    -130,    54,  -130,  -130,  -130,  -130,  -130,  -130,  -130,   203,
    -130,  -130,     4,    35,    48,     5,     6,     7,  -130,    82,
      83,   210,     8,     9,   125,   213,    82,    83,    55,   191,
      64,   156,    27,   178,    56,   164,   178,   165,   166,    35,
      60,   223,   178,   203,    65,   163,    64,   203,     5,     6,
       7,   164,    66,   165,   166,     8,     9,    67,    79,   167,
      65,    93,   168,    35,    61,   169,    35,    62,    66,   103,
      23,     6,     7,    67,   104,   167,   120,     8,   168,    86,
      87,   169,   105,   106,   107,   108,   109,   110,    82,    83,
       5,     6,     7,    82,    83,    82,    83,     8,   222,   121,
     127,   142,   131,   133,   146,   193,   145,   -84,   149,   150,
     161,   151,   162,   179,   188,   206,   182,   189,   195,   198,
     226,   180,   216,   212,    26,   204,   227,   235,   215,   220,
     229,   148,   123,   225,   124,   187,   228,   224,   136,   139,
     137,     0,   140,     0,     0,     0,    80
};

static const yytype_int16 yycheck[] =
{
      43,    65,    66,    12,     2,     9,   111,    93,   175,   114,
      72,     9,     3,     2,    12,    18,    15,    29,    51,    50,
     187,   188,     3,    54,    67,    37,     3,     4,    33,     0,
      29,    36,    29,     3,     4,     4,     3,     4,    37,     3,
      44,   146,    33,     3,     4,   131,    44,   133,    81,    58,
      39,    18,    55,    96,    31,    36,    89,   100,    18,    26,
     227,    31,    31,   230,    31,    16,    26,    31,    57,   236,
      15,    31,     3,     4,     3,    16,    36,   139,    16,     3,
      16,    16,    91,    15,    29,    36,    31,    18,   174,    33,
     195,    32,    15,   157,   180,    26,    32,    32,    36,    31,
      31,    35,    36,   189,    25,    26,    29,   171,   151,    30,
      17,   175,    34,    25,    26,   119,    23,    24,    25,   183,
      32,   119,    32,   187,   188,    35,   169,    35,    36,    16,
      17,    29,    19,    20,    21,    22,    23,    24,    25,   182,
      27,    28,     3,    35,    36,     6,     7,     8,    35,    25,
      26,   194,    13,    14,    30,   198,    25,    26,     3,     3,
       4,    30,   171,   227,    34,     9,   230,    11,    12,    35,
      36,   214,   236,   216,    18,     3,     4,   220,     6,     7,
       8,     9,    26,    11,    12,    13,    14,    31,     3,    33,
      18,    31,    36,    35,    36,    39,    35,    36,    26,    16,
       6,     7,     8,    31,    17,    33,     3,    13,    36,    27,
      28,    39,    19,    20,    21,    22,    23,    24,    25,    26,
       6,     7,     8,    25,    26,    25,    26,    13,    30,     3,
      34,     3,    31,    31,    29,    36,   119,    10,    34,    32,
      32,    35,    32,    30,    32,    34,    31,    31,    29,    31,
      10,    31,    35,    32,    12,   183,    32,    32,    36,    36,
     222,   121,    85,    34,    88,   171,   220,   216,   103,   112,
     104,    -1,   113,    -1,    -1,    -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,     3,     6,     7,     8,    13,    14,
      43,    44,    53,    54,    55,    56,    57,    58,     3,    64,
       3,    33,    59,     6,    57,    58,    44,    54,     3,    69,
      70,    36,    64,    29,    65,    35,    36,    33,    34,    62,
      64,    64,    64,    15,    31,    65,    35,    36,    36,     4,
      31,    66,    67,    68,    29,     3,    34,    60,    53,    57,
      36,    36,    36,     3,     4,    18,    26,    31,    89,    90,
      91,    95,    97,    99,   100,    47,    48,    57,    58,     3,
      70,    66,    25,    26,    30,    96,    27,    28,    98,    66,
      65,    53,    63,    31,     3,     4,    31,   100,     3,     4,
      31,   100,    89,    16,    17,    19,    20,    21,    22,    23,
      24,    92,    96,    98,    29,    37,   101,   102,    32,    35,
       3,     3,    32,    67,    68,    30,    61,    34,    89,    93,
      94,    31,    89,    31,    89,    32,    90,    91,    95,    97,
      99,    95,     3,    33,    36,    48,    29,    49,    49,    34,
      32,    35,    93,    32,    93,    32,    30,    45,    51,    95,
      89,    32,    32,     3,     9,    11,    12,    33,    36,    39,
      52,    53,    71,    73,    74,    75,    76,    93,   100,    30,
      31,    72,    31,    77,    36,    89,    46,    75,    32,    31,
      93,     3,    76,    36,    15,    29,    50,    93,    31,     3,
      86,    87,    88,    89,    52,    36,    34,    76,    93,    81,
      89,    95,    32,    89,    15,    36,    35,    78,    84,    79,
      36,    36,    30,    89,    88,    34,    10,    32,    86,    50,
      85,    76,    82,    76,    80,    32,    83,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    45,    46,    44,
      44,    47,    47,    47,    48,    48,    48,    48,    49,    50,
      50,    51,    51,    52,    52,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    56,    56,    56,    57,    57,
      57,    58,    60,    61,    59,    62,    63,    59,    59,    59,
      59,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    72,    71,
      73,    74,    75,    75,    77,    78,    76,    79,    80,    76,
      81,    82,    83,    76,    84,    85,    76,    76,    76,    76,
      76,    76,    76,    76,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   101,
     102
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
#line 129 "parser.y" /* yacc.c:1646  */
    {param_num = 0;generateFuncio((yyvsp[-4].variable)->p->id);cur_scope++;

  }
#line 1479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 131 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 132 "parser.y" /* yacc.c:1646  */
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
  endFuncio((yyvsp[-8].variable)->p->id);

	}
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 158 "parser.y" /* yacc.c:1646  */
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
#line 1539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 181 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = (yyvsp[-2].func_list).func_list_num + 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_1: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 187 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.

//		printf("param_list_2: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 1566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 197 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[0].variable)->p->scope = 1;
    int aux = insert_inRegister((yyvsp[0].variable)->p->id);
    char buf[20]; sprintf(buf, "  move $%d, $a%d\n", aux, param_num++);//emit(buf);
    //char* kth23 = "Hello";pt13lula
    //char dest[12];

    //strcpy( dest, kth23 );
    strcat( pt13lula, buf );
		(yyvsp[0].variable)->p->type = (yyvsp[-1].nt_type);
		(yyvsp[0].variable)->p->first_time = 0;
//		printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = 0;			//Passing 0 as it's not an array, it's a scalar.
//		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 214 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].variable)->p->scope = 1;
		(yyvsp[-1].variable)->p->type = (yyvsp[-2].nt_type);
		(yyvsp[-1].variable)->p->first_time = 0;
		//printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = (yyvsp[0].num);		//Passing on array dimensions.
    //		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = 0;}
#line 1617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_int; cur_type=type_int;}
#line 1623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_float; cur_type=type_float;}
#line 1629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 264 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_void; cur_type=type_void;}
#line 1635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 271 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 271 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 272 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 272 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 282 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_3: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 286 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_4: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 291 "parser.y" /* yacc.c:1646  */
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
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 306 "parser.y" /* yacc.c:1646  */
    {
//VM		$$ = $1 + 1;		/*Dimension count.*/
		(yyval.func_list).func_list_num = (yyvsp[-3].func_list).func_list_num + 1;					/*Argument count.*/
    //printf("func_listnum:%d\n", $3.place);
    (yyval.func_list).place = (yyvsp[-3].func_list).place * (yyvsp[-1].func_list).place;
//		$$.func_arg_type[$$.func_list_num] = $$.func_arg_type[$$.func_list_num] + 1;	/*Dimension count.*/
//VM		if($3 != type_int) {		/*Dimension type check.*/
		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Dimension type check.*/
			printf("dim_decl_1: Array subscript is not an integer.\n");
//			printf("dim_decl_1: cexpr = %d\n", $3);
			error = 1;
		}
	}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 321 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type; (yyval.func_list).place = (yyvsp[0].func_list).place;}
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 324 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type; (yyval.func_list).place = (yyvsp[0].func_list).place;}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 326 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type; (yyval.func_list).place = (yyvsp[0].con_pt)->const_u.ival;}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 335 "parser.y" /* yacc.c:1646  */
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
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 360 "parser.y" /* yacc.c:1646  */
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

	(yyvsp[-1].variable)->p->array_dim = (yyvsp[0].func_list).func_list_num;
  //printf("arraysize:%d\n", $2.place);
  insertArray((yyvsp[-1].variable)->p->id, (yyvsp[0].func_list).place);
	}
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 383 "parser.y" /* yacc.c:1646  */
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
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 419 "parser.y" /* yacc.c:1646  */
    {isif = 1; char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf);}
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 420 "parser.y" /* yacc.c:1646  */
    {isif = 0; (yyval.func_list).place = ifnum; ifnum++;}
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 423 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum; char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf); isif = 1;}
#line 1842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 426 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum;

   char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf); isif = 1;}
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 435 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 435 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 439 "parser.y" /* yacc.c:1646  */
    {ifnum++; isif = 0;}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 440 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j test%d", (yyvsp[-5].func_list).place);emit(buf);}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 440 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lexit%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 442 "parser.y" /* yacc.c:1646  */
    {isif = 0; ifnum++;
      char bufd[20];sprintf(bufd,"  j body%d", (yyvsp[-1].func_list).place);emit(bufd);
      {char buff[20];sprintf(buff,"inc%d:", (yyvsp[-1].func_list).place);emit(buff);}
    }
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 447 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j test%d", (yyvsp[-4].func_list).place);emit(buf);}
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 448 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"body%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 450 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j inc%d", (yyvsp[-8].func_list).place);emit(buf);
     char buff[20];sprintf(buff,"lexit%d:", (yyvsp[-8].func_list).place);emit(buff);}
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 453 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j lexit%d", (yyvsp[-2].func_list).place); emit(buf);}
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 453 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lelse%d:", (yyvsp[-4].func_list).place);emit(buf);}
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 455 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lexit%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 457 "parser.y" /* yacc.c:1646  */
    {
        //endif
        char buf[20];sprintf(buf,"lelse%d:", (yyvsp[-2].func_list).place);emit(buf);
    }
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 463 "parser.y" /* yacc.c:1646  */
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
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 486 "parser.y" /* yacc.c:1646  */
    {				/*Function return type comparison goes here?*/
  if((yyvsp[-3].variable)->p->type == type_int && (yyvsp[-1].func_list).place < 32){ // integer miguel
    if((yyvsp[-3].variable)->p->scope != 0 && (yyvsp[-3].variable)->p->is_array == 0){
      if((yyvsp[-1].func_list).is_lib_func){
        char buf[20]; sprintf(buf, "  li $v0, 5");emit(buf);
        char buff[20]; sprintf(buff, "  syscall");emit(buff);
        char bufff[20]; sprintf(bufff, "  sw $v0, %d($fp)", (yyvsp[-3].variable)->p->stkPos);emit(bufff);
      }else if ((yyvsp[-1].func_list).place == type_func){
        char buf[20]; sprintf(buf, "  move $%d, $v0", insert_inRegister((yyvsp[-3].variable)->p->id));emit(buf);

      }else{
        char buf[20]; sprintf(buf, "  sw $%d, %d($fp)", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->stkPos);emit(buf);
        delete_inregister((yyvsp[-1].func_list).place);
      }
    }else if((yyvsp[-3].variable)->p->is_array == 1){
      char buff[20];
      sprintf(buff, "%d", (yyvsp[-3].variable)->arrayoffset);
      char buf[20]; sprintf(buf, "  sw $%d, _%s($%d)", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id, find_inRegister(buff));
      emit(buf);
      delete_inregister((yyvsp[-1].func_list).place);
      delete_inregister(temp_place);
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
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 533 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = type_void;
	}
#line 2019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 537 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = (yyvsp[-1].func_list).nt_type;
    char buf[20]; sprintf(buf, "  move $v0, $%d", (yyvsp[-1].func_list).place);emit(buf);
	}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 551 "parser.y" /* yacc.c:1646  */
    {
  //char bufff[20]; sprintf(bufff, "  sw $v0, %d($fp)", $1->p->stkPos);emit(bufff);
  char buf[20];
  sprintf(buf, "  sw $%d, %d($fp)", (yyvsp[0].func_list).place, (yyvsp[-2].variable)->p->stkPos);
  emit(buf);
  delete_inregister((yyvsp[0].func_list).place);
}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 562 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);;
//		printf("relop_expr: array arg # = %d.\n", $$.func_list_num);
//printf("%s\n" , $1.name);
	}
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 567 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[-2].func_list);strcpy((yyval.func_list).name, (yyvsp[-2].func_list).name);

    }
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 572 "parser.y" /* yacc.c:1646  */
    {
    (yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
    if(isif){
      char buff[20];sprintf(buff,"  beqz $%d, lelse%d", (yyvsp[0].func_list).place, ifnum);emit(buff);
    }
    }
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 579 "parser.y" /* yacc.c:1646  */
    {
      (yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
      if(isif){
        char buff[20];sprintf(buff,"  beqz $%d, lelse%d", (yyvsp[0].func_list).place, ifnum);emit(buff);
      }
      }
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 588 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);}
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 589 "parser.y" /* yacc.c:1646  */
    {int auxplace;int buf [20]; int bugg[20];
       sprintf(bugg, "%s,%d,%d", (yyvsp[-1].variable),(yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
       auxplace = insert_inRegister(bugg);
       sprintf(buf,"  %s $%d, $%d, $%d", (yyvsp[-1].variable),auxplace, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
       emit(buf);(yyval.func_list).place = auxplace;
       if(isif){
         //char buff[20];sprintf(buff,"  beqz $%d, lelse%d", auxplace, ifnum);emit(buff);
       }
      strcpy((yyval.func_list).name, (yyvsp[-2].func_list).name);
      }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 603 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "slt";}
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 604 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sle";}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 605 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sgt";}
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 606 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sge";}
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 607 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "seq";}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 608 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sne";}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 611 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 612 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 616 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = (yyvsp[-2].func_list).func_list_num + 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].func_list).func_list_num;
		strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
    //printf("aqui:%s\n", $3.name);
    if(find_inRegister((yyvsp[0].func_list).name) && (yyvsp[-2].func_list).func_list_num <=4){
      char buf[20];
      sprintf(buf, "  move $a%d, $%d", (yyvsp[-2].func_list).func_list_num,insert_inRegister((yyvsp[0].func_list).name));
      emit(buf);
    }else{
      char buf[20];
      sprintf(buf, "  move $a%d, $%d", (yyvsp[-2].func_list).func_list_num, temp_place);
      emit(buf);
    }
		//printf("nonempty_relop_expr_list_1: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
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
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 645 "parser.y" /* yacc.c:1646  */
    {					/*For function parameter number?*/ //PROBLEM???
    if(find_inRegister((yyvsp[0].func_list).name)){
      char buf[20];
      sprintf(buf, "  move $a0, $%d", insert_inRegister((yyvsp[0].func_list).name));
      emit(buf);
    }

		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].func_list).func_list_num;
		strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
//		printf("nonempty_relop_expr_list_2: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
	}
#line 2199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 659 "parser.y" /* yacc.c:1646  */
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
                             (yyval.func_list) = (yyvsp[-2].func_list);
                             (yyval.func_list).place = temp_place; }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 677 "parser.y" /* yacc.c:1646  */
    {

		(yyval.func_list) = (yyvsp[0].func_list);
		//printf("expr:%s\n", $1.name);

	}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 685 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "add";}
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 686 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sub";}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 689 "parser.y" /* yacc.c:1646  */
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

                              strcpy((yyval.func_list).name, (yyvsp[-2].func_list).name);
                              (yyval.func_list).place = temp_place;

                              }
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 709 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);


    strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
    }
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 716 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "mul";}
#line 2284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 717 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "div";}
#line 2290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 726 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type; (yyval.func_list).arrayoffset = (yyvsp[0].con_pt)->const_u.ival;
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
    //printf("id:%d place:%d\n ", $1->const_u.ival,$1->place);
    (yyval.func_list).place = (yyvsp[0].con_pt)->place;}
#line 2327 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 760 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 2333 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 762 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 2339 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 765 "parser.y" /* yacc.c:1646  */
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


  if(!strcmp((yyvsp[-3].variable)->p->id,"read") || !strcmp((yyvsp[-3].variable)->p->id,"write")){
    (yyval.func_list).is_lib_func = 1;

  }else{
    (yyval.func_list).place = type_func;
    char buf[20]; sprintf(buf,"  jal %s", (yyvsp[-3].variable)->p->id);
    emit(buf);
  }
	printf("factor: return type of (%s) is: %d\n", (yyvsp[-3].variable)->p->id, (yyval.func_list).nt_type);
}
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 807 "parser.y" /* yacc.c:1646  */
    {
  int prev_temp = temp_place;
  temp_place = find_inRegister((yyvsp[0].variable)->p->id);
  //printf("%s: %d\n", $1->p->id, $1->p->is_array);
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
    if((yyvsp[0].variable)->p->is_array){
      //printf("%d", last_array_num);
      char bufff[20];
      sprintf(bufff, "%d", (yyvsp[0].variable)->arrayoffset);

      char buff[20];
      sprintf(buff, "%s%d", (yyvsp[0].variable)->p->id, (yyvsp[0].variable)->arrayoffset);
      printf("arrayoffset:%d\n", (yyvsp[0].variable)->arrayoffset);
      temp_place = insert_inRegister(buff);

      if(temp_place < 32){
        sprintf(buf, "  lw $%d, _%s($%d)", temp_place, (yyvsp[0].variable)->p->id, find_inRegister(bufff));
        emit(buf);
        delete_inregister(prev_temp);
      }else{
        sprintf(buf, "  l.s $f%d, _%s($%d)", temp_place-32, (yyvsp[0].variable)->p->id, find_inRegister(bufff));
        emit(buf);
        delete_inregister(prev_temp);
      }

    }else{
      temp_place = insert_inRegister((yyvsp[0].variable)->p->id);
      if(temp_place < 32){
        sprintf(buf, "  lw $%d, %d($fp)", temp_place, (yyvsp[0].variable)->p->stkPos);
        emit(buf);
      }else{
        sprintf(buf, "  l.s $f%d, %d($fp)", temp_place-32, (yyvsp[0].variable)->p->stkPos);
        emit(buf);
      }
    }

  }
  (yyval.func_list).place = temp_place;
(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;			/*Type to be used in array subscript.*/
	(yyval.func_list).func_list_num = tmp_array_dim;		//# of Dimensions.
	strcpy((yyval.func_list).name, (yyvsp[0].variable)->p->id);
//	printf("factor-var_ref: variable is = %s, tmp_array_dim = %d.\n", $1->p->id, tmp_array_dim);
	if((yyvsp[0].variable)->p->is_array == 1) {	/*It's array.*/
		if((yyvsp[0].variable)->p->array_dim != tmp_array_dim) {
			printf("Incompatible array dimensions.%d:%d\n", (yyvsp[0].variable)->p->array_dim, tmp_array_dim);
			error = 1;
		}
	}
	tmp_array_dim = 0;		/*Reset global variable*/
}
#line 2447 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 868 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 870 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 873 "parser.y" /* yacc.c:1646  */
    {

		(yyval.variable) = (yyvsp[0].variable);
//		printf("var_ref: ID: %s\n", $1->p->id);
		if((yyvsp[0].variable)->p->type == type_undef)
			printf("ID (%s) undeclared.\n", (yyvsp[0].variable)->p->id);

	}
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 882 "parser.y" /* yacc.c:1646  */
    {
//	printf("var_ref: variable is = %s\n", $1->p->id);
    //printf("dim_decl_1: expr = %d\n", $2.arrayoffset);
    (yyval.variable)->arrayoffset = (yyvsp[0].func_list).arrayoffset;
}
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 893 "parser.y" /* yacc.c:1646  */
    {
		tmp_array_dim++;
    //
    (yyval.func_list) = (yyvsp[-1].func_list);

    //printf("array:%d dim:%d \n", $2.arrayoffset, tmp_array_dim);

		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Array dimension check in stmt.*/
			printf("dim: Array subscript is not an integer.\n");

			error = 1;
		}
	}
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2504 "parser.tab.c" /* yacc.c:1646  */
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
#line 910 "parser.y" /* yacc.c:1906  */

#include "lex.yy.c"
FILE *f;
void generateFuncio(char *func)
{
  int x = 0;

  emit("\n.text");
char buf[2000];
char laBuferizacionSeletiva[999];

for(x=0; x < strlen(pt13lula) ; x++)
{
  if(strlen(pt13lula)-1 == x) break;
  laBuferizacionSeletiva[x] = pt13lula[x];
}

sprintf(buf, "%s:\n%s\n%s\n%s\n%s\n%s%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n_begin_%s:\n%s",func,
	"  sw $ra, 0($sp)",
	"  sw $fp, -4($sp)",
	"  add $fp, $sp, -4",
	"  add $sp, $sp, -8",
	"  lw $2, _framesize_", func,
	"  sub $sp, $sp, $2",
	"  sw $8, 32($sp)",
	"  sw $9, 28($sp)",
	"  sw $10, 24($sp)",
	"  sw $11, 20($sp)",
	"  sw $12, 16($sp)",
	"  sw $13, 12($sp)",
	"  sw $14, 8($sp)",
	"  sw $15, 4($sp)",
 func,
 laBuferizacionSeletiva
);

for(x=0; x< sizeof(pt13lula); x++ )
{
  pt13lula[x]=0;
}
for(x=0; x< sizeof(laBuferizacionSeletiva); x++ )
{
  laBuferizacionSeletiva[x]=0;
}
emit(buf);
}

void endFuncio(char * func)
{
char buf[2000];
sprintf(buf, "\n\n_end_%s:\n%s%s%s%s%s%s%s%s%s%s%s",
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
"	lw $fp, 0($fp)"

);
emit(buf);
if(strcmp(func, "main")){
  emit("	jr $ra");
}else{
  emit("  li $v0, 10");
  emit("	syscall");
}
emit("\n.data");
char buff[20];
sprintf(buff,"_framesize_%s: .word 36", func);
emit(buff);

}

int main (int argc, char *argv[])
{
    init_symtab();
    f = fopen("file.spim", "w");
    printf("Symbol Table initialized\n");

    if(argc>0)
        yyin = fopen(argv[1],"r");
    else
        yyin=stdin;

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


    }

    cleanup_symtab(-1); //clean up the entire symbol table

    aux = arrays;

    while(aux!=NULL /*&& arrCont-- !=0*/){ ////Não vai querer remover isso bernardo

      int oxo = 1000;
      char bufArray[oxo];
      for(; oxo>=0; oxo--)
      {
        bufArray[oxo] = 0;
      }
      int where = 0;
      int x = aux->place;
      while(x>0){
        bufArray[where] = '0';
        if(x != 1){
          bufArray[where+1] = ',';
          bufArray[where+2] = ' ';
          where+=3;
        }
        x--;
      }
      char buf[2000];
      sprintf(buf, "_%s: .word %s", aux->name, bufArray);
      emit(buf);
      aux=aux->next;
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
