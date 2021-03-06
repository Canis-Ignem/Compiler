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
   #include <iostream>
   #include <vector>
   #include <string>
   using namespace std; 

   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   void yyerror (const char *msg) {
     printf("line %d: %s at '%s'\n", yylineno, msg, yytext) ;
   }

   #include "Codigo.hpp"
   #include "Aux.hpp"


   expresionstruct makecomparison(std::string &s1, std::string &s2, std::string &s3) ;
   expresionstruct makearithmetic(std::string &s1, std::string &s2, std::string &s3) ;
   vector<int> *unir(vector<int> lis1, vector<int> lis2);
   Codigo codigo;


#line 91 "parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    TIDENTIFIER = 258,
    TINTEGER = 259,
    TFLOAT = 260,
    TDFLOAT = 261,
    TDINT = 262,
    TVAR = 263,
    TMUL = 264,
    TRES = 265,
    TSUM = 266,
    TDIV = 267,
    TEQ = 268,
    TIN = 269,
    TOUT = 270,
    TINOUT = 271,
    TGREATER = 272,
    TLESSER = 273,
    TDIST = 274,
    TGREATEREQ = 275,
    TLESSEREQ = 276,
    TSEMIC = 277,
    TASSIG = 278,
    TLBRACE = 279,
    TRBRACE = 280,
    TDOTS = 281,
    TRBRACKET = 282,
    TLBRACKET = 283,
    TCOMA = 284,
    TLBLOCK = 285,
    TRBLOCK = 286,
    RPROGRAM = 287,
    RBEGIN = 288,
    RENDPROGRAM = 289,
    TPROC = 290,
    TIF = 291,
    TTHEN = 292,
    TWHILE = 293,
    TDO = 294,
    TUNTIL = 295,
    TELSE = 296,
    TSKIP = 297,
    TREAD = 298,
    TPRINT = 299,
    TFOR = 300,
    TTO = 301,
    TFROM = 302,
    TENDFOR = 303,
    TARR = 304,
    TNOT = 305,
    TOR = 306,
    TAND = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "parser.y" /* yacc.c:355  */

     string *str ; 
    vector<string> *list ;
    varStruct *varS;
    expresionstruct *expr ;
    int number ;
    vector<int> *numlist; 

#line 193 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 210 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    80,    90,    92,    97,   100,   109,   114,
     117,   118,   119,   124,   125,   129,   129,   133,   135,   138,
     147,   148,   149,   152,   159,   162,   165,   170,   179,   189,
     197,   211,   197,   225,   224,   241,   257,   257,   269,   278,
     287,   298,   302,   328,   332,   339,   345,   352,   354,   358,
     362,   367,   371,   375,   379,   383,   387,   391,   395,   399,
     406,   409,   427
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENTIFIER", "TINTEGER", "TFLOAT",
  "TDFLOAT", "TDINT", "TVAR", "TMUL", "TRES", "TSUM", "TDIV", "TEQ", "TIN",
  "TOUT", "TINOUT", "TGREATER", "TLESSER", "TDIST", "TGREATEREQ",
  "TLESSEREQ", "TSEMIC", "TASSIG", "TLBRACE", "TRBRACE", "TDOTS",
  "TRBRACKET", "TLBRACKET", "TCOMA", "TLBLOCK", "TRBLOCK", "RPROGRAM",
  "RBEGIN", "RENDPROGRAM", "TPROC", "TIF", "TTHEN", "TWHILE", "TDO",
  "TUNTIL", "TELSE", "TSKIP", "TREAD", "TPRINT", "TFOR", "TTO", "TFROM",
  "TENDFOR", "TARR", "TNOT", "TOR", "TAND", "$accept", "programa", "$@1",
  "bloque", "declaraciones", "lista_de_ident", "resto_lista_id", "tipo",
  "decl_de_subprogs", "decl_de_subprograma", "$@2", "argumentos",
  "lista_de_param", "clase_par", "resto_lis_de_param",
  "lista_de_sentencias", "sentencia", "$@3", "$@4", "$@5", "$@6", "var",
  "expr", "M", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -112

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define YYTABLE_NINF -42

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-42)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -28,    13,    19,  -112,  -112,     1,    15,     6,    24,    18,
    -112,    25,    32,    31,    23,    18,    61,  -112,     8,  -112,
    -112,     5,  -112,    45,    35,    46,    47,    -1,    43,    52,
      23,    55,  -112,    25,  -112,  -112,  -112,    60,    56,  -112,
    -112,  -112,     5,     5,   103,     5,  -112,     5,    -1,     5,
      36,    54,  -112,  -112,     2,  -112,    15,    24,     1,   118,
     190,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,    82,    63,  -112,  -112,   154,    23,   280,    62,
     170,     5,    87,    72,    73,   206,  -112,    71,    74,    76,
    -112,   320,   306,   306,   320,   357,   357,   357,   357,   357,
     357,   357,    68,  -112,     5,     5,  -112,    75,    84,    85,
      86,   221,    81,  -112,  -112,    -3,  -112,  -112,  -112,  -112,
     343,   190,    23,    69,  -112,  -112,  -112,     5,    88,  -112,
    -112,  -112,     8,    23,  -112,     5,   280,    24,    89,  -112,
      94,   265,  -112,   111,    24,  -112,   109,   121,  -112,   105,
     124,   123,   125,  -112,  -112,    23,  -112,    -3,  -112,   126,
    -112,     8,    23,  -112,    89,   127,   108,  -112,   129,  -112,
    -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     6,     0,     0,    14,
       3,     9,     0,     0,    26,    14,     0,     7,     0,    15,
      41,     0,    62,     0,     0,     0,     0,     0,     0,     0,
      26,    29,    13,     9,    11,    10,    12,     0,    18,    43,
      47,    48,     0,     0,     0,     0,    62,     0,     0,     0,
       0,     0,     4,    25,     0,     8,     6,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    62,     0,    26,    62,     0,
       0,     0,     0,    43,     0,     0,     5,     0,     0,     0,
      60,    56,    55,    57,    59,    50,    54,    53,    58,    51,
      52,    49,     0,    62,     0,     0,    62,     0,     0,     0,
       0,     0,     0,    28,    27,     0,    17,    16,    61,    33,
      44,    45,    26,     0,    38,    39,    40,     0,     0,    20,
      21,    22,     0,    26,    62,     0,    62,     0,    24,    62,
       0,     0,    30,     0,     0,    19,     0,     0,    62,     0,
       0,     0,     0,    35,    36,    26,    42,     0,    34,     0,
      62,     0,    26,    31,    24,     0,     0,    23,     0,    32,
      37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,  -112,    95,   101,   -56,   128,  -111,   143,  -112,
    -112,  -112,  -112,     3,    -5,   -30,  -112,  -112,  -112,  -112,
    -112,    22,   -25,   -43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     7,     9,    12,    17,    37,    14,    15,
      38,    58,    88,   132,   145,    29,    30,   149,   166,   133,
     159,    31,    44,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    87,    20,    77,     1,    83,    40,    41,    39,    40,
      41,   129,   130,   131,    34,    35,     3,    59,    60,     4,
      76,   138,    78,     8,    80,     6,    20,    11,    10,    85,
      42,   104,   105,    42,    19,   108,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   107,    28,    50,
     164,    28,    43,    13,    16,    43,   111,    36,    18,    21,
     119,    22,    23,   122,    33,    24,    25,    26,    27,    46,
      79,    47,    28,    51,    48,    49,    84,    52,    54,   120,
     121,   143,    56,    81,    57,    82,   102,   103,   151,   109,
     112,   140,   134,   142,   -41,   113,   146,   115,   117,   118,
     123,   116,   136,   139,   128,   154,   124,   125,   126,   135,
     141,   144,    61,    62,    63,    64,    65,   163,   137,   147,
      66,    67,    68,    69,    70,   160,    71,    61,    62,    63,
      64,    65,   165,    72,   152,    66,    67,    68,    69,    70,
      73,    71,   150,   153,   155,    90,   156,   158,    72,   157,
     162,   170,   168,    89,    74,    75,   169,    86,    32,   167,
     161,    55,     0,    61,    62,    63,    64,    65,     0,    74,
      75,    66,    67,    68,    69,    70,     0,    71,   106,    61,
      62,    63,    64,    65,    72,     0,     0,    66,    67,    68,
      69,    70,     0,    71,     0,     0,     0,   110,     0,     0,
      72,     0,     0,    65,     0,    74,    75,    66,    67,    68,
      69,    70,     0,    71,     0,    61,    62,    63,    64,    65,
      72,    74,    75,    66,    67,    68,    69,    70,   114,    71,
      61,    62,    63,    64,    65,     0,    72,     0,    66,    67,
      68,    69,    70,     0,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,   127,     0,     0,
       0,     0,    74,    75,    61,    62,    63,    64,    65,     0,
       0,     0,    66,    67,    68,    69,    70,     0,    71,    61,
      62,    63,    64,    65,     0,    72,     0,    66,    67,    68,
      69,    70,     0,    71,     0,     0,   148,     0,     0,     0,
      72,     0,     0,     0,     0,    61,    74,    75,    64,    65,
       0,     0,     0,    66,    67,    68,    69,    70,     0,    71,
       0,    74,    75,    65,     0,     0,    72,    66,    67,    68,
      69,    70,     0,    71,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,    65,    74,    75,     0,
      66,    67,    68,    69,    70,     0,    71,     0,     0,     0,
     -42,    74,    75,    72,   -42,   -42,   -42,   -42,   -42,     0,
     -42,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
      30,    57,     3,    46,    32,     3,     4,     5,     3,     4,
       5,    14,    15,    16,     6,     7,     3,    42,    43,     0,
      45,   132,    47,     8,    49,    24,     3,     3,    22,    54,
      28,    74,    75,    28,     3,    78,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    77,    49,    27,
     161,    49,    50,    35,    29,    50,    81,    49,    26,    36,
     103,    38,    39,   106,     3,    42,    43,    44,    45,    24,
      48,    36,    49,    30,    28,    28,    54,    25,    23,   104,
     105,   137,    22,    47,    28,    31,     4,    24,   144,    27,
       3,   134,   122,   136,    22,    22,   139,    26,    22,    31,
      25,    27,   127,   133,    23,   148,    22,    22,    22,    40,
     135,    22,     9,    10,    11,    12,    13,   160,    30,    25,
      17,    18,    19,    20,    21,   155,    23,     9,    10,    11,
      12,    13,   162,    30,    25,    17,    18,    19,    20,    21,
      37,    23,    31,    22,    39,    27,    22,    22,    30,    26,
      24,    22,    25,    58,    51,    52,    48,    56,    15,   164,
     157,    33,    -1,     9,    10,    11,    12,    13,    -1,    51,
      52,    17,    18,    19,    20,    21,    -1,    23,    24,     9,
      10,    11,    12,    13,    30,    -1,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    13,    -1,    51,    52,    17,    18,    19,
      20,    21,    -1,    23,    -1,     9,    10,    11,    12,    13,
      30,    51,    52,    17,    18,    19,    20,    21,    22,    23,
       9,    10,    11,    12,    13,    -1,    30,    -1,    17,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    51,    52,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    23,     9,
      10,    11,    12,    13,    -1,    30,    -1,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    41,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,     9,    51,    52,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    -1,    23,
      -1,    51,    52,    13,    -1,    -1,    30,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    13,    51,    52,    -1,
      17,    18,    19,    20,    21,    -1,    23,    -1,    -1,    -1,
      13,    51,    52,    30,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    54,     3,     0,    55,    24,    56,     8,    57,
      22,     3,    58,    35,    61,    62,    29,    59,    26,     3,
       3,    36,    38,    39,    42,    43,    44,    45,    49,    68,
      69,    74,    61,     3,     6,     7,    49,    60,    63,     3,
       4,     5,    28,    50,    75,    76,    24,    36,    28,    28,
      74,    30,    25,    68,    23,    59,    22,    28,    64,    75,
      75,     9,    10,    11,    12,    13,    17,    18,    19,    20,
      21,    23,    30,    37,    51,    52,    75,    76,    75,    74,
      75,    47,    31,     3,    74,    75,    57,    58,    65,    56,
      27,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,     4,    24,    76,    76,    24,    68,    76,    27,
      27,    75,     3,    22,    22,    26,    27,    22,    31,    76,
      75,    75,    76,    25,    22,    22,    22,    46,    23,    14,
      15,    16,    66,    72,    68,    40,    75,    30,    60,    68,
      76,    75,    76,    58,    22,    67,    76,    25,    41,    70,
      31,    58,    25,    22,    76,    39,    22,    26,    22,    73,
      68,    66,    24,    76,    60,    68,    71,    67,    25,    48,
      22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    57,    57,    58,    59,    59,
      60,    60,    60,    61,    61,    63,    62,    64,    64,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      70,    71,    69,    72,    69,    69,    73,    69,    69,    69,
      69,    74,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     5,     6,     0,     2,     3,     0,
       1,     1,     1,     2,     0,     0,     6,     3,     0,     5,
       1,     1,     1,     6,     0,     2,     0,     4,     4,     1,
       0,     0,    13,     0,    10,     9,     0,    14,     5,     5,
       5,     1,     9,     1,     4,     4,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     0
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
#line 81 "parser.y" /* yacc.c:1646  */
    { codigo.anadirInstruccion("prog: " + *(yyvsp[0].str) ) ;}
#line 1447 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "parser.y" /* yacc.c:1646  */
    {
            codigo.anadirInstruccion("halt;");
        codigo.escribir() ; 
           }
#line 1456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 90 "parser.y" /* yacc.c:1646  */
    {}
#line 1462 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "parser.y" /* yacc.c:1646  */
    {
              codigo.anadirDeclaraciones(*(yyvsp[-4].list),*(yyvsp[-2].str));
              delete (yyvsp[-4].list); delete (yyvsp[-2].str) ;
            }
#line 1471 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "parser.y" /* yacc.c:1646  */
    {}
#line 1477 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "parser.y" /* yacc.c:1646  */
    {
               (yyval.list) = (yyvsp[0].list); 
             (yyval.list)->push_back(*(yyvsp[-1].str));
             
             }
#line 1487 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 109 "parser.y" /* yacc.c:1646  */
    { 
             (yyval.list) = (yyvsp[0].list) ;
             (yyval.list)->push_back(*(yyvsp[-1].str));

            }
#line 1497 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.list) = new vector<string>;}
#line 1503 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.str)= (yyvsp[0].str);}
#line 1509 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyval.str)= (yyvsp[0].str);}
#line 1515 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.str)= (yyvsp[0].str);}
#line 1521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "parser.y" /* yacc.c:1646  */
    {}
#line 1527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 129 "parser.y" /* yacc.c:1646  */
    {codigo.anadirInstruccion("procedure " + *(yyvsp[0].str));}
#line 1533 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 130 "parser.y" /* yacc.c:1646  */
    { codigo.anadirInstruccion("end " + *(yyvsp[-4].str)); }
#line 1539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 133 "parser.y" /* yacc.c:1646  */
    {}
#line 1545 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "parser.y" /* yacc.c:1646  */
    {}
#line 1551 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 138 "parser.y" /* yacc.c:1646  */
    {
          
          for(int i= 0; i<(yyvsp[-4].list)->size();  i++){
              codigo.anadirInstruccion(*(yyvsp[-2].str)  + *(yyvsp[-1].str) +" "+  (yyvsp[-4].list)->at(i) + ";") ;
              }
            }
#line 1562 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "parser.y" /* yacc.c:1646  */
    { *(yyval.str) = "val_ ";}
#line 1568 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 148 "parser.y" /* yacc.c:1646  */
    {*(yyval.str) = "resul_ ";}
#line 1574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 149 "parser.y" /* yacc.c:1646  */
    {*(yyval.str) = "ref_ ";}
#line 1580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 153 "parser.y" /* yacc.c:1646  */
    {
            for(int i= 0; i<(yyvsp[-4].list)->size();  i++){
              codigo.anadirInstruccion(*(yyvsp[-2].str) + *(yyvsp[-1].str) + " "+ (yyvsp[-4].list)->at(i) + ";") ;
              }
            
          }
#line 1591 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 159 "parser.y" /* yacc.c:1646  */
    {}
#line 1597 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 162 "parser.y" /* yacc.c:1646  */
    {
            (yyval.numlist) = new vector<int>;
            (yyval.numlist)=unir(*(yyvsp[-1].numlist),*(yyvsp[0].numlist)); }
#line 1605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.numlist) = new vector<int>;}
#line 1611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 170 "parser.y" /* yacc.c:1646  */
    { 
        
            codigo.anadirInstruccion((yyvsp[-3].varS)->str + *(yyvsp[-2].str) + (yyvsp[-1].expr)->str + ";") ; 
          (yyval.numlist) = new vector<int>;
          delete (yyvsp[-3].varS) ; delete (yyvsp[-1].expr);
          
        
          }
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 179 "parser.y" /* yacc.c:1646  */
    { 
        
            codigo.anadirInstruccion((yyvsp[-3].varS)->str + *(yyvsp[-2].str) + (yyvsp[-1].varS)->str + ";") ; 
          (yyval.numlist) = new vector<int>;
          delete (yyvsp[-3].varS) ; delete (yyvsp[-1].varS);
          
        
          }
#line 1637 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 189 "parser.y" /* yacc.c:1646  */
    { 
              (yyval.numlist) = new vector<int>;
              if((yyvsp[0].varS)->list.size()==0){
                codigo.anadirInstruccion("goto notAnArrayError");
              }

              }
#line 1649 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 197 "parser.y" /* yacc.c:1646  */
    { 
                             if((yyvsp[-5].varS)->list.size()!=0){
                            codigo.anadirInstruccion("goto notAnArrayError");
                            }
                            codigo.anadirInstruccion((yyvsp[-5].varS)->str +" = " + (yyvsp[-3].expr)->str+";");
                              string temp = codigo.nuevoId(); 
                              codigo.anadirInstruccion(temp +" = " + (yyvsp[-1].expr)->str +";");
                              codigo.anadirInstruccion("if " + (yyvsp[-5].varS)->str +" < "+ temp +" goto " + to_string((yyvsp[0].number)+4));
                              codigo.anadirInstruccion("goto");
                              


                              }
#line 1667 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 211 "parser.y" /* yacc.c:1646  */
    {
                              
                              codigo.anadirInstruccion("goto " + to_string((yyvsp[-4].number)+2) );
                              vector<int> tmp2 ;
                              tmp2.push_back((yyvsp[-4].number)+3) ;
                              codigo.completarInstrucciones(tmp2,(yyvsp[0].number)+1) ;
                            
                          
                          }
#line 1681 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.numlist) = new vector<int>;}
#line 1687 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 225 "parser.y" /* yacc.c:1646  */
    {
              codigo.anadirInstruccion("if "+ (yyvsp[-3].expr)->str +" goto " + to_string((yyvsp[0].number)+2));
              codigo.anadirInstruccion("goto");
              }
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 228 "parser.y" /* yacc.c:1646  */
    {

              vector<int> tmp1 ; tmp1.push_back((yyvsp[-5].number)+1) ;
            codigo.completarInstrucciones(tmp1, (yyvsp[-2].number)) ;

              codigo.completarInstrucciones((yyvsp[-8].expr)->trues,(yyvsp[-5].number)) ;
            codigo.completarInstrucciones((yyvsp[-8].expr)->falses,(yyvsp[-2].number)) ;

            (yyval.numlist) = new vector<int>;
            (yyval.numlist) = (yyvsp[-3].numlist);

            }
#line 1713 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 241 "parser.y" /* yacc.c:1646  */
    {


              codigo.completarInstrucciones((yyvsp[-6].expr)->trues,(yyvsp[-4].number)) ;
              codigo.completarInstrucciones((yyvsp[-6].expr)->falses,(yyvsp[-2].number)+1) ;
              codigo.anadirInstruccion("if "+ (yyvsp[-6].expr)->str + " goto ");
              vector<int> tmp1 ; tmp1.push_back((yyvsp[-2].number)) ;
              codigo.completarInstrucciones(tmp1, (yyvsp[-7].number)+1) ;
              codigo.completarInstrucciones(*(yyvsp[-3].numlist),(yyvsp[-7].number)+1) ;
             
              
              (yyval.numlist) = new vector<int>;
              delete (yyvsp[-6].expr) ;


            }
#line 1734 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 257 "parser.y" /* yacc.c:1646  */
    {
              codigo.anadirInstruccion("if "+ (yyvsp[-2].expr)->str +" goto " + to_string((yyvsp[0].number)+2));
              codigo.anadirInstruccion("goto "+to_string((yyvsp[-6].number)));
              }
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 261 "parser.y" /* yacc.c:1646  */
    { 

              (yyval.numlist) = new vector<int>;
              codigo.completarInstrucciones((yyvsp[-7].expr)->trues,(yyvsp[-5].number)) ;
            codigo.completarInstrucciones((yyvsp[-7].expr)->falses,(yyvsp[-11].number));

        }
#line 1755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 269 "parser.y" /* yacc.c:1646  */
    {

              codigo.anadirInstruccion("if " + (yyvsp[-2].expr)->str + " goto ");
              codigo.completarInstrucciones((yyvsp[-2].expr)->falses,(yyvsp[-1].number)) ;
              (yyval.numlist) = new vector<int>;
              (yyval.numlist)->push_back((yyvsp[-1].number));
              delete (yyvsp[-2].expr);
             }
#line 1768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 278 "parser.y" /* yacc.c:1646  */
    {
                  if((yyvsp[-2].varS)->list.size()!=0){
                codigo.anadirInstruccion("goto cantReadAnArrayError");
              }
                  
                  (yyval.numlist) = new vector<int>;
                  codigo.anadirInstruccion("read " + (yyvsp[-2].varS)->str+ ";");
            }
#line 1781 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 287 "parser.y" /* yacc.c:1646  */
    {                
                (yyval.numlist) = new vector<int>;
                codigo.anadirInstruccion("write " + (yyvsp[-2].expr)->str +";");
            }
#line 1790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 298 "parser.y" /* yacc.c:1646  */
    {  (yyval.varS) = new varStruct;
          (yyval.varS)->str=*(yyvsp[0].str);  
          }
#line 1798 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 302 "parser.y" /* yacc.c:1646  */
    {
      vector<string> tmp1;
      tmp1.push_back(*(yyvsp[-5].str));
      codigo.anadirDeclaraciones(tmp1, *(yyvsp[-8].str));
      (yyval.varS) = new varStruct;
      (yyval.varS)->str = *(yyvsp[-5].str);
      (yyval.varS)->list= *(yyvsp[-2].list);
      codigo.anadirInstruccion(*(yyvsp[-8].str)+*(yyvsp[-7].str)+*(yyvsp[-6].str)+" " + *(yyvsp[-5].str) + *(yyvsp[-4].str) +*(yyvsp[-3].str));

      for(int i= 0; i<(yyvsp[-2].list)->size();  i++){
              codigo.anadirInstruccion((yyvsp[-2].list)->at(i) + ",") ;         

      }

      codigo.anadirInstruccion(*(yyvsp[-1].str)+";");
      
    }
#line 1820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "parser.y" /* yacc.c:1646  */
    {codigo.anadirInstruccion((yyvsp[-3].expr)->str + " "+ *(yyvsp[-2].str) + " "+ (yyvsp[0].expr)->str);
            codigo.completarInstrucciones((yyvsp[-3].expr)->falses,(yyvsp[-1].number));
                      (yyval.expr)->trues=*unir((yyvsp[-3].expr)->trues,(yyvsp[0].expr)->trues);
                      (yyval.expr)->falses=(yyvsp[0].expr)->falses; 
                      *(yyval.expr) = makearithmetic((yyvsp[-3].expr)->str,*(yyvsp[-2].str),(yyvsp[0].expr)->str) ;

                      }
#line 1838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 339 "parser.y" /* yacc.c:1646  */
    {
                        codigo.completarInstrucciones((yyvsp[-3].expr)->trues,(yyvsp[-1].number));
                        (yyval.expr)->trues=(yyvsp[0].expr)->trues;
                        (yyval.expr)->falses=*unir((yyvsp[-3].expr)->falses,(yyvsp[0].expr)->falses);
                        codigo.anadirInstruccion((yyvsp[-3].expr)->str + " "+ *(yyvsp[-2].str) + " "+ (yyvsp[0].expr)->str  );
                        *(yyval.expr) = makearithmetic((yyvsp[-3].expr)->str,*(yyvsp[-2].str),(yyvsp[0].expr)->str) ; }
#line 1849 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 345 "parser.y" /* yacc.c:1646  */
    {
          (yyval.expr)->trues=(yyvsp[0].expr)->falses;
                (yyval.expr)->falses=(yyvsp[0].expr)->trues; 
                codigo.anadirInstruccion(*(yyvsp[-1].str) + " "+ (yyvsp[0].expr)->str);

                }
#line 1860 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1880 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1888 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1896 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1912 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 379 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1928 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1952 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new expresionstruct;

         codigo.anadirInstruccion("if "+(yyvsp[0].expr)->str+ " == 0 goto ERRORDIV0");
       *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;

      delete (yyvsp[-2].expr); delete (yyvsp[0].expr);  }
#line 1963 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 406 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr);  }
#line 1969 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 409 "parser.y" /* yacc.c:1646  */
    {
       (yyval.expr) = new expresionstruct;
       int i = std::stoi(*(yyvsp[-1].str));
       (yyval.expr)->str = (yyvsp[-3].expr)->str + *(yyvsp[-2].str) + *(yyvsp[-1].str) + *(yyvsp[0].str);
       }
#line 1979 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 427 "parser.y" /* yacc.c:1646  */
    { (yyval.number) = codigo.obtenRef() ; }
#line 1985 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1989 "parser.cpp" /* yacc.c:1646  */
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
#line 430 "parser.y" /* yacc.c:1906  */


expresionstruct makecomparison(std::string &s1, std::string &s2, std::string &s3) {
  expresionstruct tmp ; 
  tmp.trues.push_back(codigo.obtenRef()) ;
  tmp.falses.push_back(codigo.obtenRef()+1) ;
  codigo.anadirInstruccion("if " + s1 + s2 + s3 + " goto") ;
  codigo.anadirInstruccion("goto") ;
  return tmp ;
}


expresionstruct makearithmetic(std::string &s1, std::string &s2, std::string &s3) {
  expresionstruct tmp ; 
  tmp.str = codigo.nuevoId() ;
  codigo.anadirInstruccion(tmp.str + ":=" + s1 + s2 + s3 + ";") ;     
  return tmp ;
}

vector<int> *unir(vector<int> A, vector<int> B){

vector<int> *nuevo;
nuevo = new vector<int>(A);


nuevo->insert(nuevo->end(),B.begin(),B.end());
 return nuevo;
}
