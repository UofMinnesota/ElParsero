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
int ifnum = 0;
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
};

#line 105 "parser.tab.c" /* yacc.c:339  */

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
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 42 "parser.y" /* yacc.c:355  */

  struct var_type *variable;
  enum all_type nt_type;
  int num;
  struct const_type *con_pt;	/*Constant*/
  struct f_l func_list;

#line 189 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 204 "parser.tab.c" /* yacc.c:358  */

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
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

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
       0,   104,   104,   108,   109,   113,   114,   118,   118,   118,
     142,   165,   171,   177,   180,   189,   190,   199,   201,   203,
     204,   206,   207,   210,   211,   212,   213,   216,   217,   220,
     221,   224,   225,   226,   227,   230,   232,   234,   239,   240,
     241,   244,   248,   248,   248,   249,   249,   249,   250,   251,
     252,   256,   257,   258,   262,   267,   282,   295,   296,   298,
     299,   301,   302,   305,   306,   309,   334,   357,   391,   391,
     395,   397,   398,   401,   401,   401,   405,   406,   404,   407,
     409,   409,   409,   413,   418,   440,   475,   476,   477,   481,
     487,   488,   491,   492,   494,   495,   497,   503,   506,   507,
     510,   511,   521,   522,   523,   524,   525,   526,   529,   530,
     533,   551,   560,   573,   582,   583,   586,   601,   605,   606,
     609,   611,   614,   615,   629,   631,   632,   661,   663,   664,
     704,   706,   708,   716,   722,   726,   738
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
  "whilebegin", "stmt_list", "stmt", "$@8", "$@9", "$@10", "$@11", "$@12",
  "$@13", "assign_expr_list", "nonempty_assign_expr_list", "assign_expr",
  "relop_expr", "relop_term", "relop_factor", "rel_op", "relop_expr_list",
  "nonempty_relop_expr_list", "expr", "add_op", "term", "mul_op", "factor",
  "var_ref", "dim", "struct_tail", YY_NULLPTR
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

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -169,    73,   145,  -169,    20,  -169,  -169,  -169,    23,   204,
    -169,  -169,   145,  -169,  -169,  -169,    74,    17,    47,   109,
      77,    94,  -169,    20,    20,    20,  -169,  -169,    72,   143,
    -169,  -169,   162,    11,   103,   102,  -169,   112,  -169,   145,
     189,   192,   194,    81,   207,   103,   144,  -169,  -169,  -169,
      11,   147,   153,  -169,    11,    47,  -169,   145,   145,   144,
    -169,  -169,  -169,   133,  -169,    28,    32,    81,   150,   157,
    -169,   183,   153,  -169,    -3,    84,  -169,   172,   188,    55,
    -169,   131,  -169,  -169,  -169,    11,  -169,  -169,    11,   170,
     103,   145,   165,    81,   185,  -169,    81,    -3,   202,  -169,
      81,    -3,     7,    81,    81,  -169,  -169,  -169,  -169,  -169,
    -169,    81,    81,    81,    81,   230,  -169,  -169,    87,   207,
     208,   208,  -169,   153,  -169,  -169,   201,  -169,   150,   209,
     203,    81,    63,    81,    92,  -169,   157,  -169,   206,   153,
    -169,   193,  -169,  -169,  -169,  -169,    81,  -169,  -169,  -169,
    -169,    81,   210,  -169,   211,  -169,  -169,   129,   214,   206,
     150,  -169,  -169,    40,  -169,  -169,   205,  -169,  -169,    46,
    -169,   129,   213,   215,    57,  -169,   212,    65,   218,    81,
     219,   100,   129,  -169,     2,   217,    57,    57,    81,   221,
    -169,  -169,    81,    81,  -169,   222,    81,    82,   220,   223,
    -169,   150,  -169,  -169,  -169,   229,  -169,    75,   196,   166,
     150,    81,    81,   100,   225,   239,   228,  -169,   218,   150,
     226,  -169,  -169,  -169,    57,  -169,   100,    57,  -169,   231,
    -169,  -169,    57,  -169
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
      32,    31,    33,   132,   123,     0,     0,     0,    67,    96,
      98,   100,   113,   117,   129,     0,    12,     0,     0,    65,
      64,     0,   114,   115,    55,     0,   118,   119,     0,     0,
      53,    43,     0,   109,   132,   124,     0,   130,   132,   125,
       0,   131,     0,     0,     0,   106,   107,   104,   102,   105,
     103,     0,     0,     0,     0,     0,   133,   134,     0,     0,
      14,    15,    62,    57,    59,    56,     0,    47,   111,     0,
     108,   109,     0,   109,     0,   120,    97,    99,   101,   112,
     116,     0,   136,     7,    10,    11,    22,    16,    17,    44,
     126,     0,     0,   121,     0,   122,   135,    26,     0,    21,
     110,   127,   128,   132,    68,    70,     0,    73,    87,     0,
       8,    25,     0,     0,    24,    72,     0,   129,    20,   109,
       0,    91,    26,    88,     0,     0,    23,     0,   109,   132,
      71,    86,     0,     0,    18,     0,     0,   132,     0,    90,
      93,    95,    74,    89,     9,    83,    76,     0,     0,    84,
      69,     0,   109,     0,     0,     0,     0,    85,    20,    94,
       0,    92,    75,    81,     0,    19,    91,     0,    77,     0,
      82,    78,     0,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,  -169,   227,  -169,  -169,  -169,   135,   139,
      34,  -169,    83,     9,   -11,  -169,  -169,     1,    -5,  -169,
    -169,  -169,  -169,  -169,     4,    -4,   -20,   171,   175,  -169,
     224,  -169,  -169,  -169,    93,  -168,  -169,  -169,  -169,  -169,
    -169,  -169,    41,  -169,    53,   -43,   168,   164,  -169,   -91,
    -169,  -102,   -35,   160,   -67,   156,   -58,  -169,  -169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    11,   157,   185,    75,    76,   147,
     194,   158,   170,   171,    13,    14,    15,    59,    17,    22,
      57,   126,    39,    92,    19,    45,    51,    52,    53,    29,
      30,   172,   180,   173,   174,   175,   182,   214,   216,   231,
     215,   227,   198,   199,   200,   128,    69,    70,   111,   176,
     130,    71,   112,    72,    88,    73,    74,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    27,   129,    16,    25,   113,   190,    97,   101,   138,
      24,    12,   141,    16,    34,    49,    85,   103,   190,   205,
      18,    32,   103,    18,   102,   114,    20,    40,    41,    42,
      81,    94,    95,   115,    89,    98,    99,   203,   135,    78,
     152,    50,   154,    18,   159,    77,    85,    27,    58,    63,
      64,    90,    31,   132,    85,    21,   228,   134,    96,   230,
     189,    64,   100,    65,   233,   164,    91,   165,   166,    43,
     179,    66,   113,     3,    65,    33,    67,    28,   103,   192,
      27,   183,    66,    33,    63,    64,    43,    67,   195,   167,
     103,   208,   168,   114,   153,   169,   211,   206,    65,   177,
      33,   115,    44,   197,    64,    55,    66,   103,   160,    37,
     217,    67,    93,   177,    78,   118,   177,    65,   119,   143,
      77,   220,   144,   155,   177,    66,   184,    38,   177,   177,
      67,    54,   163,    64,     5,     6,     7,   164,   201,   165,
     166,     8,     9,    35,    36,    56,    65,    79,     4,   207,
       5,     6,     7,   210,    66,    82,    83,     8,     9,    67,
      27,   167,   122,    93,   168,   103,   177,   169,   219,   177,
     201,    82,    83,   104,   177,   120,    84,    46,    47,    86,
      87,  -126,  -126,   201,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,   121,  -126,  -126,    82,    83,    35,    48,   127,   125,
    -126,   105,   106,   107,   108,   109,   110,    82,    83,    23,
       6,     7,     5,     6,     7,   131,     8,    82,    83,     8,
      82,    83,   156,    35,    60,   218,    35,    61,    35,    62,
      82,    83,   133,   142,   149,   181,   146,   151,   -80,    26,
     150,   161,   162,   178,   187,   188,   193,   191,   223,   196,
     204,   179,   225,   209,   145,   212,   123,   213,   222,   224,
     148,   226,   232,   124,   186,   202,   221,   229,   137,   140,
      80,   136,   139
};

static const yytype_uint8 yycheck[] =
{
      43,    12,    93,     2,     9,    72,   174,    65,    66,   111,
       9,     2,   114,    12,    18,     4,    51,    15,   186,   187,
       3,    17,    15,     3,    67,    28,     3,    23,    24,    25,
      50,     3,     4,    36,    54,     3,     4,    35,    31,    44,
     131,    30,   133,     3,   146,    44,    81,    58,    39,     3,
       4,    55,    35,    96,    89,    32,   224,   100,    30,   227,
       3,     4,    30,    17,   232,     8,    57,    10,    11,    14,
      30,    25,   139,     0,    17,    28,    30,     3,    15,    14,
      91,    35,    25,    28,     3,     4,    14,    30,   179,    32,
      15,   193,    35,    28,    31,    38,    14,   188,    17,   157,
      28,    36,    30,     3,     4,     3,    25,    15,   151,    32,
      35,    30,    30,   171,   119,    31,   174,    17,    34,    32,
     119,   212,    35,    31,   182,    25,   169,    33,   186,   187,
      30,    28,     3,     4,     5,     6,     7,     8,   181,    10,
      11,    12,    13,    34,    35,    33,    17,     3,     3,   192,
       5,     6,     7,   196,    25,    24,    25,    12,    13,    30,
     171,    32,    31,    30,    35,    15,   224,    38,   211,   227,
     213,    24,    25,    16,   232,     3,    29,    34,    35,    26,
      27,    15,    16,   226,    18,    19,    20,    21,    22,    23,
      24,     3,    26,    27,    24,    25,    34,    35,    33,    29,
      34,    18,    19,    20,    21,    22,    23,    24,    25,     5,
       6,     7,     5,     6,     7,    30,    12,    24,    25,    12,
      24,    25,    29,    34,    35,    29,    34,    35,    34,    35,
      24,    25,    30,     3,    33,    30,    28,    34,     9,    12,
      31,    31,    31,    29,    31,    30,    28,    35,     9,    30,
      33,    30,   218,    31,   119,    35,    85,    34,    33,    31,
     121,    35,    31,    88,   171,   182,   213,   226,   104,   113,
      46,   103,   112
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
      35,    35,    35,     3,     4,    17,    25,    30,    84,    85,
      86,    90,    92,    94,    95,    46,    47,    56,    57,     3,
      69,    65,    24,    25,    29,    91,    26,    27,    93,    65,
      64,    52,    62,    30,     3,     4,    30,    95,     3,     4,
      30,    95,    84,    15,    16,    18,    19,    20,    21,    22,
      23,    87,    91,    93,    28,    36,    96,    97,    31,    34,
       3,     3,    31,    66,    67,    29,    60,    33,    84,    88,
      89,    30,    84,    30,    84,    31,    85,    86,    90,    92,
      94,    90,     3,    32,    35,    47,    28,    48,    48,    33,
      31,    34,    88,    31,    88,    31,    29,    44,    50,    90,
      84,    31,    31,     3,     8,    10,    11,    32,    35,    38,
      51,    52,    70,    72,    73,    74,    88,    95,    29,    30,
      71,    30,    75,    35,    84,    45,    73,    31,    30,     3,
      74,    35,    14,    28,    49,    88,    30,     3,    81,    82,
      83,    84,    51,    35,    33,    74,    88,    84,    90,    31,
      84,    14,    35,    34,    76,    79,    77,    35,    29,    84,
      88,    83,    33,     9,    31,    49,    35,    80,    74,    81,
      74,    78,    31,    74
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
      72,    73,    73,    75,    76,    74,    77,    78,    74,    74,
      79,    80,    74,    74,    74,    74,    74,    74,    74,    74,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    97
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
       1,     2,     1,     0,     0,     5,     0,     0,     7,     9,
       0,     0,     7,     3,     4,     4,     2,     1,     2,     3,
       1,     0,     3,     1,     3,     1,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     4,     4,     1,     2,     2,     4,     5,     5,     1,
       2,     2,     1,     2,     2,     3,     2
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
#line 118 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1462 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1468 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "parser.y" /* yacc.c:1646  */
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
#line 1495 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 143 "parser.y" /* yacc.c:1646  */
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
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 166 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = (yyvsp[-2].func_list).func_list_num + 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_1: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 172 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_2: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 1546 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[0].variable)->p->scope = 1;
		(yyvsp[0].variable)->p->type = (yyvsp[-1].nt_type);
		(yyvsp[0].variable)->p->first_time = 0;
//		printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = 0;			//Passing 0 as it's not an array, it's a scalar.
//		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 191 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].variable)->p->scope = 1;
		(yyvsp[-1].variable)->p->type = (yyvsp[-2].nt_type);
		(yyvsp[-1].variable)->p->first_time = 0;
		//printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = (yyvsp[0].num);		//Passing on array dimensions.
    //		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = 0;}
#line 1590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_int; cur_type=type_int;}
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_float; cur_type=type_float;}
#line 1602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_void; cur_type=type_void;}
#line 1608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 248 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 248 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 249 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 249 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 259 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_3: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 263 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_4: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 268 "parser.y" /* yacc.c:1646  */
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
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 283 "parser.y" /* yacc.c:1646  */
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
#line 1683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 296 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type; (yyval.func_list).place = (yyvsp[0].func_list).place;}
#line 1689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type; (yyval.func_list).place = (yyvsp[0].func_list).place;}
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 301 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type; (yyval.func_list).place = (yyvsp[0].con_pt)->const_u.ival;}
#line 1701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 310 "parser.y" /* yacc.c:1646  */
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
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 335 "parser.y" /* yacc.c:1646  */
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
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 358 "parser.y" /* yacc.c:1646  */
    {

  //printf("%s ------\n" , $1->p->id);
  fp_pos -= 4;
  (yyvsp[-2].variable)->p->stkPos = fp_pos;
  if((yyvsp[-2].variable)->p->scope != 0 && (yyvsp[-2].variable)->p->is_array == 0){
    char buf[20];
    sprintf(buf, "  sw $%d, %d($fp)", (yyvsp[0].func_list).place, (yyvsp[-2].variable)->p->stkPos);
    emit(buf);
    delete_inregister(reg, (yyvsp[0].func_list).place);
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
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 391 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"test%d:", ifnum);emit(buf);}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 392 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum; char buf[20];sprintf(buf,"  beqz $%d, lelse%d", (yyvsp[0].func_list).place, ifnum++);emit(buf); }
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 395 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).place = ifnum; char buf[20];sprintf(buf,"test%d:", ifnum++);emit(buf);}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 401 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 401 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 405 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  beqz $%d, lexit%d", (yyvsp[0].func_list).place, (yyvsp[-2].func_list).place);emit(buf); }
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 406 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j test%d", (yyvsp[-5].func_list).place);emit(buf);}
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 406 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lexit%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 409 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"  j lexit%d", (yyvsp[-2].func_list).place); emit(buf);}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 409 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lelse%d:", (yyvsp[-4].func_list).place);emit(buf);}
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 411 "parser.y" /* yacc.c:1646  */
    {char buf[20];sprintf(buf,"lexit%d:", (yyvsp[-6].func_list).place);emit(buf);}
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 413 "parser.y" /* yacc.c:1646  */
    {
        //endif
        char buf[20];sprintf(buf,"lelse%d:", (yyvsp[-2].func_list).place);emit(buf);
    }
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 419 "parser.y" /* yacc.c:1646  */
    {
	printf("func_call-stmt: %s, decl: %d, num: %d\n", (yyvsp[-3].variable)->p->id, (yyvsp[-3].variable)->p->arg_num, (yyvsp[-1].func_list).func_list_num);

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
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 441 "parser.y" /* yacc.c:1646  */
    {				/*Function return type comparison goes here?*/
  if((yyvsp[-3].variable)->p->type == type_int && (yyvsp[-1].func_list).place < 32){ // integer
    if((yyvsp[-3].variable)->p->scope != 0 && (yyvsp[-3].variable)->p->is_array == 0){
      char buf[20]; sprintf(buf, "  sw $%d, %d($fp)", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->stkPos);emit(buf);
      delete_inregister(reg, (yyvsp[-1].func_list).place);
    }else if((yyvsp[-3].variable)->p->is_array == 1){
      char buff[20];


      char buf[20]; sprintf(buf, "  sw $%d, _%s($%d)", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id, temp_place);
      emit(buf);

      delete_inregister(reg, (yyvsp[-1].func_list).place);
    }else{
      char buf[20]; sprintf(buf, "  sw $%d, _%s", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id);emit(buf);
      delete_inregister(reg, (yyvsp[-1].func_list).place);
    }
  }else{ //float
    if((yyvsp[-3].variable)->p->scope != 0){
      char buf[20]; sprintf(buf, "  s.s $f%d, %d($fp)", (yyvsp[-1].func_list).place - 32, (yyvsp[-3].variable)->p->stkPos);emit(buf);
      delete_inregister(reg, (yyvsp[-1].func_list).place);
    }else{
      char buf[20]; sprintf(buf, "  s.s $f%d, _%s", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id);emit(buf);
      delete_inregister(reg, (yyvsp[-1].func_list).place);
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
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 478 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = type_void;
	}
#line 1940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 482 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = (yyvsp[-1].func_list).nt_type;
	}
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 498 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);;
//		printf("relop_expr: array arg # = %d.\n", $$.func_list_num);
//printf("%s\n" , $1.name);
	}
#line 1958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 506 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);}
#line 1964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 510 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);}
#line 1970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 511 "parser.y" /* yacc.c:1646  */
    {int auxplace;int buf [20]; int bugg[20];
       sprintf(bugg, "%s,%d,%d", (yyvsp[-1].variable),(yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
       auxplace = insert_inRegister(bugg);
       sprintf(buf,"  %s $%d, $%d, $%d", (yyvsp[-1].variable),auxplace, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);
       emit(buf);(yyval.func_list).place = auxplace;
        delete_inregister(reg,auxplace);}
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 521 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "slt";}
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 522 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sle";}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 523 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sgt";}
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 524 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sge";}
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 525 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "seq";}
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 526 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sne";}
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 529 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 530 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 534 "parser.y" /* yacc.c:1646  */
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
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 552 "parser.y" /* yacc.c:1646  */
    {					/*For function parameter number?*/ //PROBLEM???
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].func_list).func_list_num;
		strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
//		printf("nonempty_relop_expr_list_2: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
	}
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 560 "parser.y" /* yacc.c:1646  */
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
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 574 "parser.y" /* yacc.c:1646  */
    {

		(yyval.func_list) = (yyvsp[0].func_list);
		//printf("expr:%s\n", $1.name);

	}
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 582 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "add";}
#line 2097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 583 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sub";}
#line 2103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 586 "parser.y" /* yacc.c:1646  */
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
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 602 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 605 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "mul";}
#line 2135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 606 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "div";}
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 615 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;
    char na[256];
    sprintf(na, "%d", (yyvsp[0].con_pt)->const_u.ival);

    if(!find_inRegister(na)){
      (yyvsp[0].con_pt)->place = insert_inRegister(na);
      char buf[20];
      sprintf(buf, "  li $%d, %d", (yyvsp[0].con_pt)->place, (yyvsp[0].con_pt)->const_u.ival);
      emit(buf);
    }
    (yyvsp[0].con_pt)->place = insert_inRegister(na);
    (yyval.func_list).place = (yyvsp[0].con_pt)->place;}
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 629 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 631 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 634 "parser.y" /* yacc.c:1646  */
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
	printf("factor: return type of (%s) is: %d\n", (yyvsp[-3].variable)->p->id, (yyval.func_list).nt_type);
}
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 666 "parser.y" /* yacc.c:1646  */
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
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 704 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 706 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 709 "parser.y" /* yacc.c:1646  */
    {

		(yyval.variable) = (yyvsp[0].variable);
//		printf("var_ref: ID: %s\n", $1->p->id);
		if((yyvsp[0].variable)->p->type == type_undef)
			printf("ID (%s) undeclared.\n", (yyvsp[0].variable)->p->id);
	}
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 717 "parser.y" /* yacc.c:1646  */
    {
//	printf("var_ref: variable is = %s\n", $1->p->id);

}
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 727 "parser.y" /* yacc.c:1646  */
    {
		tmp_array_dim++;

		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Array dimension check in stmt.*/
			printf("dim: Array subscript is not an integer.\n");
//			printf("dim_decl_1: expr = %d\n", $2);
			error = 1;
		}
	}
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2296 "parser.tab.c" /* yacc.c:1646  */
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
#line 740 "parser.y" /* yacc.c:1906  */

#include "lex.yy.c"
FILE *f;

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
    //print_registers();
    //clear_inregister();
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
