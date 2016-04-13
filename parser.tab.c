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
int temp_place = 8;
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

#line 101 "parser.tab.c" /* yacc.c:339  */

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
#line 38 "parser.y" /* yacc.c:355  */

  struct var_type *variable;
  enum all_type nt_type;
  int num;
  struct const_type *con_pt;	/*Constant*/
  struct f_l func_list;

#line 185 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 202 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

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
       0,    99,    99,   103,   104,   108,   109,   113,   113,   113,
     136,   159,   165,   171,   174,   183,   184,   193,   195,   197,
     198,   200,   201,   204,   205,   206,   207,   210,   211,   214,
     215,   218,   219,   220,   221,   224,   226,   228,   233,   234,
     235,   238,   242,   242,   242,   243,   243,   243,   244,   245,
     246,   250,   251,   252,   256,   261,   273,   286,   287,   289,
     290,   292,   293,   296,   297,   300,   321,   343,   369,   370,
     373,   373,   373,   376,   377,   379,   381,   383,   405,   416,
     417,   418,   422,   428,   429,   432,   433,   435,   436,   438,
     444,   447,   448,   451,   452,   457,   458,   459,   460,   461,
     462,   465,   466,   469,   487,   496,   497,   506,   507,   510,
     511,   515,   516,   519,   521,   524,   525,   533,   535,   536,
     565,   567,   568,   583,   585,   587,   595,   599,   603,   615
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
  "mcexpr", "cfactor", "init_id_list", "init_id", "stmt_list", "stmt",
  "$@7", "$@8", "assign_expr_list", "nonempty_assign_expr_list",
  "assign_expr", "relop_expr", "relop_term", "relop_factor", "rel_op",
  "relop_expr_list", "nonempty_relop_expr_list", "expr", "add_op", "term",
  "mul_op", "factor", "var_ref", "dim", "struct_tail", YY_NULLPTR
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

#define YYPACT_NINF -163

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-163)))

#define YYTABLE_NINF -120

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -163,    27,   191,  -163,    30,  -163,  -163,  -163,    22,   208,
    -163,  -163,   191,  -163,  -163,  -163,    63,    16,    45,   167,
      43,    51,  -163,    30,    30,    30,  -163,  -163,    83,   190,
    -163,  -163,   193,    32,    62,   100,  -163,    74,  -163,   191,
     195,   198,   200,    35,   211,    62,   114,  -163,  -163,  -163,
      32,   118,   210,  -163,    32,    45,  -163,   191,   191,   114,
    -163,  -163,  -163,    95,  -163,    25,    28,    35,   119,   113,
    -163,   187,   210,  -163,    -6,   102,  -163,   138,   151,    -2,
    -163,    96,  -163,  -163,  -163,    32,  -163,  -163,    32,   144,
      62,   191,   133,    35,   148,  -163,    35,    -6,   161,  -163,
      35,    -6,     6,    35,    35,  -163,  -163,  -163,  -163,  -163,
    -163,    35,    35,    35,    35,   171,  -163,  -163,   129,   211,
     203,   203,  -163,   210,  -163,  -163,   162,  -163,   119,   168,
     185,    35,    91,    35,    97,  -163,   113,  -163,   214,   210,
    -163,   147,  -163,  -163,  -163,  -163,    35,  -163,  -163,  -163,
    -163,    35,   209,  -163,   212,  -163,  -163,   145,   213,   214,
     119,  -163,  -163,    31,   215,   216,   217,  -163,  -163,    64,
    -163,   145,    66,  -163,   206,    57,   220,    35,    35,    35,
      75,   145,  -163,     0,   218,    66,   219,  -163,  -163,    35,
      35,  -163,   221,    99,   222,   101,   223,   225,  -163,   119,
    -163,  -163,  -163,    67,   197,   166,    66,    66,    35,    35,
      75,   224,  -163,   220,   235,  -163,   119,   226,  -163,  -163,
    -163,    66,    75,  -163,   229,    66,  -163
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
      32,    31,    33,   125,   116,     0,     0,     0,    67,    89,
      91,    93,   106,   110,   122,     0,    12,     0,     0,    65,
      64,     0,   107,   108,    55,     0,   111,   112,     0,     0,
      53,    43,     0,   102,   125,   117,     0,   123,   125,   118,
       0,   124,     0,     0,     0,    99,   100,    97,    95,    98,
      96,     0,     0,     0,     0,     0,   126,   127,     0,     0,
      14,    15,    62,    57,    59,    56,     0,    47,   104,     0,
     101,   102,     0,   102,     0,   113,    90,    92,    94,   105,
     109,     0,   129,     7,    10,    11,    22,    16,    17,    44,
     119,     0,     0,   114,     0,   115,   128,    26,     0,    21,
     103,   120,   121,   125,     0,     0,     0,    70,    80,     0,
       8,    25,    24,    69,     0,   122,    20,   102,     0,   102,
      84,    26,    81,     0,     0,    23,   125,    68,    79,     0,
       0,    18,     0,     0,     0,   125,     0,    83,    86,    88,
      71,    82,     9,     0,     0,    77,     0,     0,     0,   102,
       0,     0,    78,    20,    76,    73,    87,     0,    85,    72,
      19,     0,    84,    75,     0,     0,    74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,  -163,   238,  -163,  -163,  -163,   135,   134,
      49,  -163,    82,     7,   -11,  -163,  -163,     5,    -3,  -163,
    -163,  -163,  -163,  -163,   115,    -5,   -34,   179,   177,  -163,
     227,    85,  -162,  -163,  -163,    44,  -163,    58,   -43,   164,
     165,  -163,   -91,  -163,  -103,   -33,   158,   -67,   159,   -62,
    -163,  -163
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    11,   157,   184,    75,    76,   147,
     191,   158,   170,   171,    13,    14,    15,    59,    17,    22,
      57,   126,    39,    92,    19,    45,    51,    52,    53,    29,
      30,   172,   173,   181,   211,   196,   197,   198,   128,    69,
      70,   111,   174,   130,    71,   112,    72,    88,    73,    74,
     116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    27,   129,    97,   101,   113,    25,    16,   138,    12,
     187,   141,    43,    34,    24,   103,    81,    16,    85,    18,
      89,   103,   114,   187,   102,    20,    33,     3,    94,    95,
     115,    98,    99,    18,    18,   201,    49,   135,    63,    64,
     152,    78,   154,   159,   214,   215,    58,    27,    85,    77,
      90,    31,    65,   132,    21,    96,    85,   134,   100,   223,
      66,   177,    50,   226,    91,    67,    28,    63,    64,   186,
      64,   189,   113,    33,   164,    37,   165,   166,   195,    64,
      27,    65,   103,    65,    38,   114,   192,   204,   194,    66,
      54,    66,    65,   115,    67,   175,    67,    43,   167,   182,
      66,   168,   212,    55,   169,    67,   103,    56,   160,   175,
     175,    33,   103,    44,   103,   208,    78,    79,   217,   175,
      82,    83,   153,   175,    77,    93,   183,   122,   155,   104,
     206,    93,    32,   118,   103,   193,   119,   199,    40,    41,
      42,   120,    82,    83,   175,   175,   203,    84,   163,    64,
       5,     6,     7,   164,   121,   165,   166,     8,     9,   175,
      27,   143,    65,   175,   144,   216,   127,   199,    82,    83,
      66,    82,    83,   125,   142,    67,   156,   167,   131,   199,
     168,  -119,  -119,   169,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,   133,  -119,  -119,     4,   149,     5,     6,     7,   150,
    -119,    35,    36,     8,     9,   105,   106,   107,   108,   109,
     110,    82,    83,    23,     6,     7,     5,     6,     7,   151,
       8,    82,    83,     8,    46,    47,   213,    35,    48,    35,
      60,   146,    35,    61,    35,    62,    86,    87,    82,    83,
     161,   188,   176,   162,   221,   178,   179,   180,   190,   177,
      26,   202,   205,   207,   145,   148,   185,   219,   209,   210,
     225,   222,   220,   200,   123,   124,   224,   136,   218,   137,
     139,     0,   140,    80
};

static const yytype_int16 yycheck[] =
{
      43,    12,    93,    65,    66,    72,     9,     2,   111,     2,
     172,   114,    14,    18,     9,    15,    50,    12,    51,     3,
      54,    15,    28,   185,    67,     3,    28,     0,     3,     4,
      36,     3,     4,     3,     3,    35,     4,    31,     3,     4,
     131,    44,   133,   146,   206,   207,    39,    58,    81,    44,
      55,    35,    17,    96,    32,    30,    89,   100,    30,   221,
      25,    30,    30,   225,    57,    30,     3,     3,     4,     3,
       4,    14,   139,    28,     8,    32,    10,    11,     3,     4,
      91,    17,    15,    17,    33,    28,   177,   190,   179,    25,
      28,    25,    17,    36,    30,   157,    30,    14,    32,    35,
      25,    35,    35,     3,    38,    30,    15,    33,   151,   171,
     172,    28,    15,    30,    15,    14,   119,     3,   209,   181,
      24,    25,    31,   185,   119,    30,   169,    31,    31,    16,
      31,    30,    17,    31,    15,   178,    34,   180,    23,    24,
      25,     3,    24,    25,   206,   207,   189,    29,     3,     4,
       5,     6,     7,     8,     3,    10,    11,    12,    13,   221,
     171,    32,    17,   225,    35,   208,    33,   210,    24,    25,
      25,    24,    25,    29,     3,    30,    29,    32,    30,   222,
      35,    15,    16,    38,    18,    19,    20,    21,    22,    23,
      24,    30,    26,    27,     3,    33,     5,     6,     7,    31,
      34,    34,    35,    12,    13,    18,    19,    20,    21,    22,
      23,    24,    25,     5,     6,     7,     5,     6,     7,    34,
      12,    24,    25,    12,    34,    35,    29,    34,    35,    34,
      35,    28,    34,    35,    34,    35,    26,    27,    24,    25,
      31,    35,    29,    31,     9,    30,    30,    30,    28,    30,
      12,    33,    31,    31,   119,   121,   171,    33,    35,    34,
      31,    35,   213,   181,    85,    88,   222,   103,   210,   104,
     112,    -1,   113,    46
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
      35,    35,    35,     3,     4,    17,    25,    30,    77,    78,
      79,    83,    85,    87,    88,    46,    47,    56,    57,     3,
      69,    65,    24,    25,    29,    84,    26,    27,    86,    65,
      64,    52,    62,    30,     3,     4,    30,    88,     3,     4,
      30,    88,    77,    15,    16,    18,    19,    20,    21,    22,
      23,    80,    84,    86,    28,    36,    89,    90,    31,    34,
       3,     3,    31,    66,    67,    29,    60,    33,    77,    81,
      82,    30,    77,    30,    77,    31,    78,    79,    83,    85,
      87,    83,     3,    32,    35,    47,    28,    48,    48,    33,
      31,    34,    81,    31,    81,    31,    29,    44,    50,    83,
      77,    31,    31,     3,     8,    10,    11,    32,    35,    38,
      51,    52,    70,    71,    81,    88,    29,    30,    30,    30,
      30,    72,    35,    77,    45,    70,     3,    71,    35,    14,
      28,    49,    81,    77,    81,     3,    74,    75,    76,    77,
      51,    35,    33,    77,    83,    31,    31,    31,    14,    35,
      34,    73,    35,    29,    71,    71,    77,    81,    76,    33,
      49,     9,    35,    71,    74,    31,    71
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
      66,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      72,    73,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    89,    90
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
       1,     1,     3,     1,     3,     1,     2,     3,     2,     1,
       0,     0,     5,     5,     9,     7,     5,     4,     4,     2,
       1,     2,     3,     1,     0,     3,     1,     3,     1,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     4,     4,     1,     2,     2,     4,
       5,     5,     1,     2,     2,     1,     2,     2,     3,     2
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
#line 113 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1453 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 113 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1459 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 114 "parser.y" /* yacc.c:1646  */
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
#line 1485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 137 "parser.y" /* yacc.c:1646  */
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
#line 1510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 160 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = (yyvsp[-2].func_list).func_list_num + 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_1: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 166 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].num);	//Populating dimension for each function argument.
//		printf("param_list_2: func_list_num = %d, func_arg_type = %d.\n", $$.func_list_num, $$.func_arg_type[$$.func_list_num]);
	}
#line 1530 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 1536 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 175 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[0].variable)->p->scope = 1;
		(yyvsp[0].variable)->p->type = (yyvsp[-1].nt_type);
		(yyvsp[0].variable)->p->first_time = 0;
//		printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = 0;			//Passing 0 as it's not an array, it's a scalar.
//		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "parser.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].variable)->p->scope = 1;
		(yyvsp[-1].variable)->p->type = (yyvsp[-2].nt_type);
		(yyvsp[-1].variable)->p->first_time = 0;
//		printf("param: scope = 1 for ID %s\n", $2->p->id);
		(yyval.num) = (yyvsp[0].num);		//Passing on array dimensions.
//		printf("param: scope = 1 for ID %s, array_dim = %d.\n", $2->p->id, $$);
	}
#line 1562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = (yyvsp[0].num) + 1;}
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.num) = 0;}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_int; cur_type=type_int;}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_float; cur_type=type_float;}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.nt_type) = type_void; cur_type=type_void;}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 242 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 242 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 243 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 243 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope); cur_scope--;}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 253 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_3: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 257 "parser.y" /* yacc.c:1646  */
    {
	printf("id_list_4: #dims = %d\n", (yyvsp[0].func_list));		/*Array? When is this used?*/
}
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 262 "parser.y" /* yacc.c:1646  */
    {
//VM		$$ = 1;			/*Dimension count.*/
		(yyval.func_list).func_list_num = 1;				/*Argument count.*/
//		$$.func_arg_type[$$.func_list_num] = 1;		/*Dimension count.*/
//VM		if($2 != type_int) {		/*Dimension type check.*/
		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Dimension type check.*/
			printf("dim_decl_1: Array subscript is not an integer.\n");
//			printf("dim_decl_1: cexpr = %d\n", $2);
			error = 1;
		}
	}
#line 1654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 274 "parser.y" /* yacc.c:1646  */
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
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 287 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type;}
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].func_list).nt_type;}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 301 "parser.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].variable)->p->first_time==0) {
                	printf("ID (%s) redeclared\n",(yyvsp[0].variable)->p->id);
			error = 1;
		}
                else  {//ID being seen for the first time
                      	(yyvsp[0].variable)->p->first_time=0;
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
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 322 "parser.y" /* yacc.c:1646  */
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
//	printf("init_id_2: #dims = %d\n", $1->p->array_dim);
	}
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 344 "parser.y" /* yacc.c:1646  */
    {
  printf("%s ------\n" , (yyvsp[-2].variable)->p->id);
  char buf[20]; sprintf(buf, "sw $%d, %s", (yyvsp[0].func_list).place, (yyvsp[0].func_list).name);emit(buf);
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
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 373 "parser.y" /* yacc.c:1646  */
    {cur_scope++;}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 373 "parser.y" /* yacc.c:1646  */
    {cleanup_symtab(cur_scope);cur_scope--;}
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 384 "parser.y" /* yacc.c:1646  */
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
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 406 "parser.y" /* yacc.c:1646  */
    {				/*Function return type comparison goes here?*/
  char buf[20]; sprintf(buf, "sw $%d, %s", (yyvsp[-1].func_list).place, (yyvsp[-3].variable)->p->id);emit(buf);
//		printf("stmt: ID = %s, type = %d, return_type = %d\n", $1->p->id, $1->p->type, $3);
		if((yyvsp[-3].variable)->p->type != (yyvsp[-1].func_list).nt_type && (is_nt_func == 1)) {
			printf("ID = %s : Incompatible return types\n", (yyvsp[-3].variable)->p->id);
			error = 1;	/*Set Error Flag.*/
		}
		is_nt_func = 0;		/*Reset flag so that non functions are not checked for return type*/
			/*Need to handle read (int) and fread (float).*/
	}
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 419 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = type_void;
	}
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 423 "parser.y" /* yacc.c:1646  */
    {
		fn_return_type = (yyvsp[-1].func_list).nt_type;
	}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 439 "parser.y" /* yacc.c:1646  */
    {
		(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);;
//		printf("relop_expr: array arg # = %d.\n", $$.func_list_num);
printf("%s\n" , (yyvsp[0].func_list).name);
	}
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 447 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);printf("%s\n" , (yyvsp[0].func_list).name);}
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 451 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);printf("%s\n" , (yyvsp[0].func_list).name);}
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 465 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 466 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).func_list_num = 0;}
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 470 "parser.y" /* yacc.c:1646  */
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
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 488 "parser.y" /* yacc.c:1646  */
    {					/*For function parameter number?*/ //PROBLEM???
		(yyval.func_list).func_list_num = 1;
		(yyval.func_list).func_arg_type[(yyval.func_list).func_list_num] = (yyvsp[0].func_list).func_list_num;
		strcpy((yyval.func_list).name, (yyvsp[0].func_list).name);
//		printf("nonempty_relop_expr_list_2: name = %s, arg # = %d, array dim# = %d & %d.\n", $$.name, $$.func_list_num, $$.func_arg_type[1], $$.func_arg_type[2]);
	}
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 496 "parser.y" /* yacc.c:1646  */
    {char buf[20]; sprintf(buf, "%s $%d, $%d, $%d ", (yyvsp[-1].variable), temp_place, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);emit(buf); (yyval.func_list).place = temp_place; temp_place = 8 + (temp_place + 1) % 8; (yyvsp[-2].func_list).place = temp_place;}
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 498 "parser.y" /* yacc.c:1646  */
    {

		(yyval.func_list) = (yyvsp[0].func_list);
		//printf("expr:%s\n", $$.name);

	}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 506 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "add";}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 507 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "sub";}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 510 "parser.y" /* yacc.c:1646  */
    {char buf[20]; sprintf(buf, "%s $%d, $%d, $%d", (yyvsp[-1].variable), temp_place, (yyvsp[-2].func_list).place, (yyvsp[0].func_list).place);emit(buf);temp_place = 8 + (temp_place + 1) % 8; (yyvsp[-2].func_list).place = temp_place;}
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 512 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list) = (yyvsp[0].func_list);}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 515 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "mul";}
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 516 "parser.y" /* yacc.c:1646  */
    {(yyval.variable) = "div";}
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 525 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;
    if((yyvsp[0].con_pt)->place == 0){
      (yyvsp[0].con_pt)->place = temp_place;
      temp_place = 8 + (temp_place + 1) % 8;
    }
    char buf[20]; sprintf(buf, "li $%d, %d", (yyvsp[0].con_pt)->place, (yyvsp[0].con_pt)->const_u.ival);emit(buf); (yyval.func_list).place = (yyvsp[0].con_pt)->place;}
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 533 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 535 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].con_pt)->con_type;}
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 538 "parser.y" /* yacc.c:1646  */
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
		is_nt_func = 1;		/*Set flag so that only functions are checked for return type.*/
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
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 570 "parser.y" /* yacc.c:1646  */
    {char buf[20]; sprintf(buf, "lw $%s, %s", (yyvsp[0].variable)->p->id, (yyvsp[0].variable)->p->id);emit(buf);
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
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 583 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 585 "parser.y" /* yacc.c:1646  */
    {(yyval.func_list).nt_type = (yyvsp[0].variable)->p->type;}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 588 "parser.y" /* yacc.c:1646  */
    {

		(yyval.variable) = (yyvsp[0].variable);
//		printf("var_ref: ID: %s\n", $1->p->id);
		if((yyvsp[0].variable)->p->type == type_undef)
			printf("ID (%s) undeclared.\n", (yyvsp[0].variable)->p->id);
	}
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 596 "parser.y" /* yacc.c:1646  */
    {
//	printf("var_ref: variable is = %s\n", $1->p->id);
}
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 604 "parser.y" /* yacc.c:1646  */
    {
		tmp_array_dim++;

		if((yyvsp[-1].func_list).nt_type != type_int) {		/*Array dimension check in stmt.*/
			printf("dim: Array subscript is not an integer.\n");
//			printf("dim_decl_1: expr = %d\n", $2);
			error = 1;
		}
	}
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2078 "parser.tab.c" /* yacc.c:1646  */
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
#line 617 "parser.y" /* yacc.c:1906  */

#include "lex.yy.c"
FILE *f;

void generateMain()
{
char buf[2000];
sprintf(buf, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n%s","main:",
	"sw $ra, 0($sp)",
	"sw $fp, -4($sp)",
	"add $fp, $sp, -4",
	"add $sp, $sp, -8",
	"lw $2, _framesize_main",
	"sub $sp, $sp, $2",
	"sw $8, 32($sp)",
	"sw $9, 28($sp)",
	"sw $10, 24($sp)",
	"sw $11, 20($sp)",
	"sw $12, 16($sp)",
	"sw $13, 12($sp)",
	"sw $14, 8($sp)",
	"sw $15, 4($sp)",
  "_begin_main:"
);
emit(buf);
}

void endMain()
{
char buf[2000];
sprintf(buf, "\n\n\t%s%s%s%s%s%s%s%s%s%s%s%s%s%s",
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
    f = fopen("file.txt", "w");
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
      int i, size = 0;
      for(i=0;i<TABLESIZE;i++){
          p=symtab[i];
          while(p!=NULL){

              if(p->type != type_func){
                sprintf(buf, "_%s: .word %d", p->id, size);
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
