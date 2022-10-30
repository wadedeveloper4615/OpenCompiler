/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "c.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "global.h"
#include "c.y.h"
#include "c.l.h"

int num_errors;

/* Line 371 of yacc.c  */
#line 80 "c.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "c.tab.h".  */
#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     PTR_OP = 261,
     INC_OP = 262,
     DEC_OP = 263,
     LEFT_OP = 264,
     RIGHT_OP = 265,
     LE_OP = 266,
     GE_OP = 267,
     EQ_OP = 268,
     NE_OP = 269,
     SEMI_OP = 270,
     OCURLY_OP = 271,
     CCURLY_OP = 272,
     COMMA_OP = 273,
     COLON_OP = 274,
     EQUAL_OP = 275,
     OPENPAREN_OP = 276,
     CLOSEPAREN_OP = 277,
     OPENBRACE_OP = 278,
     CLOSEBRACE_OP = 279,
     PERIOD_OP = 280,
     NOT_OP = 281,
     LESS_OP = 282,
     GREATER_OP = 283,
     TILDE_OP = 284,
     XOR_OP = 285,
     QUESTION_OP = 286,
     AND_OP = 287,
     OR_OP = 288,
     MUL_ASSIGN = 289,
     DIV_ASSIGN = 290,
     MOD_ASSIGN = 291,
     ADD_ASSIGN = 292,
     SUB_ASSIGN = 293,
     LEFT_ASSIGN = 294,
     RIGHT_ASSIGN = 295,
     AND_ASSIGN = 296,
     XOR_ASSIGN = 297,
     OR_ASSIGN = 298,
     TYPE_NAME = 299,
     PLUS_OP = 300,
     MINUS_OP = 301,
     TIMES_OP = 302,
     DIV_OP = 303,
     MOD_OP = 304,
     BIT_OR = 305,
     BIT_AND = 306,
     TYPEDEF = 307,
     EXTERN = 308,
     STATIC = 309,
     AUTO = 310,
     REGISTER = 311,
     INLINE = 312,
     RESTRICT = 313,
     CHAR = 314,
     SHORT = 315,
     INT = 316,
     LONG = 317,
     SIGNED = 318,
     UNSIGNED = 319,
     FLOAT = 320,
     DOUBLE = 321,
     CONST = 322,
     VOLATILE = 323,
     VOID = 324,
     SIZEOF = 325,
     BOOL = 326,
     COMPLEX = 327,
     IMAGINARY = 328,
     STRUCT = 329,
     UNION = 330,
     ENUM = 331,
     ELLIPSIS = 332,
     CASE = 333,
     DEFAULT = 334,
     IF = 335,
     ELSE = 336,
     SWITCH = 337,
     WHILE = 338,
     DO = 339,
     FOR = 340,
     GOTO = 341,
     CONTINUE = 342,
     BREAK = 343,
     RETURN = 344
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 13 "c.y"
 	   
    struct CompilerInfo {   
       char *identifier;     
       VariableType type;
	   VariableSignType sign;
	   StorageType storage;
	   DeclarationType declarationType;
	   ExpressionPtr expression;
	   Boolean constant;
       void *noDefinition;	
    } CompilerInfo;


/* Line 387 of yacc.c  */
#line 226 "c.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_C_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 254 "c.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1604

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNRULES -- Number of states.  */
#define YYNSTATES  400

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    50,    58,    60,    64,    66,
      69,    72,    75,    78,    83,    85,    87,    89,    91,    93,
      95,    97,   102,   104,   108,   112,   116,   118,   122,   126,
     128,   132,   136,   138,   142,   146,   150,   154,   156,   160,
     164,   166,   170,   172,   176,   178,   182,   184,   188,   190,
     194,   196,   202,   204,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   236,   238,   241,
     245,   247,   250,   252,   255,   257,   260,   262,   265,   267,
     271,   273,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   323,   328,   331,   333,   335,   337,   340,
     344,   347,   349,   352,   354,   356,   360,   362,   365,   369,
     374,   380,   386,   393,   396,   398,   402,   404,   408,   410,
     412,   414,   416,   419,   421,   423,   427,   433,   438,   443,
     450,   457,   463,   468,   472,   477,   482,   486,   488,   491,
     494,   498,   500,   503,   505,   509,   511,   515,   518,   521,
     523,   525,   529,   531,   534,   536,   538,   541,   545,   548,
     552,   556,   561,   565,   570,   573,   577,   581,   586,   588,
     592,   597,   599,   602,   606,   611,   614,   616,   619,   623,
     626,   628,   630,   632,   634,   636,   638,   642,   647,   651,
     654,   658,   660,   663,   665,   667,   669,   672,   678,   686,
     692,   698,   706,   713,   721,   728,   736,   740,   743,   746,
     749,   753,   755,   758,   760,   762,   767,   771,   773
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    21,
     110,    22,    -1,    91,    -1,    92,    23,   110,    24,    -1,
      92,    21,    22,    -1,    92,    21,    93,    22,    -1,    92,
      25,     3,    -1,    92,     6,     3,    -1,    92,     7,    -1,
      92,     8,    -1,    21,   138,    22,    16,   142,    17,    -1,
      21,   138,    22,    16,   142,    18,    17,    -1,   108,    -1,
      93,    18,   108,    -1,    92,    -1,     7,    94,    -1,     8,
      94,    -1,    95,    96,    -1,    70,    94,    -1,    70,    21,
     138,    22,    -1,    51,    -1,    47,    -1,    45,    -1,    46,
      -1,    29,    -1,    26,    -1,    94,    -1,    21,   138,    22,
      96,    -1,    96,    -1,    97,    47,    96,    -1,    97,    48,
      96,    -1,    97,    49,    96,    -1,    97,    -1,    98,    45,
      97,    -1,    98,    46,    97,    -1,    98,    -1,    99,     9,
      98,    -1,    99,    10,    98,    -1,    99,    -1,   100,    27,
      99,    -1,   100,    28,    99,    -1,   100,    11,    99,    -1,
     100,    12,    99,    -1,   100,    -1,   101,    13,   100,    -1,
     101,    14,   100,    -1,   101,    -1,   102,    51,   101,    -1,
     102,    -1,   103,    30,   102,    -1,   103,    -1,   104,    50,
     103,    -1,   104,    -1,   105,    32,   104,    -1,   105,    -1,
     106,    33,   105,    -1,   106,    -1,   106,    31,   110,    19,
     107,    -1,   107,    -1,    94,   109,   108,    -1,    20,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
     108,    -1,   110,    18,   108,    -1,   107,    -1,   113,    15,
      -1,   113,   114,    15,    -1,   116,    -1,   116,   113,    -1,
     117,    -1,   117,   113,    -1,   128,    -1,   128,   113,    -1,
     129,    -1,   129,   113,    -1,   115,    -1,   114,    18,   115,
      -1,   130,    -1,   130,    20,   141,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    69,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    65,    -1,    66,
      -1,    63,    -1,    64,    -1,    71,    -1,    72,    -1,    73,
      -1,   118,    -1,   125,    -1,    44,    -1,   119,     3,    16,
     120,    17,    -1,   119,    16,   120,    17,    -1,   119,     3,
      -1,    74,    -1,    75,    -1,   121,    -1,   120,   121,    -1,
     122,   123,    15,    -1,   117,   122,    -1,   117,    -1,   128,
     122,    -1,   128,    -1,   124,    -1,   123,    18,   124,    -1,
     130,    -1,    19,   111,    -1,   130,    19,   111,    -1,    76,
      16,   126,    17,    -1,    76,     3,    16,   126,    17,    -1,
      76,    16,   126,    18,    17,    -1,    76,     3,    16,   126,
      18,    17,    -1,    76,     3,    -1,   127,    -1,   126,    18,
     127,    -1,     3,    -1,     3,    20,   111,    -1,    67,    -1,
      58,    -1,    68,    -1,    57,    -1,   132,   131,    -1,   131,
      -1,     3,    -1,    21,   130,    22,    -1,   131,    23,   133,
     108,    24,    -1,   131,    23,   133,    24,    -1,   131,    23,
     108,    24,    -1,   131,    23,    54,   133,   108,    24,    -1,
     131,    23,   133,    54,   108,    24,    -1,   131,    23,   133,
      47,    24,    -1,   131,    23,    47,    24,    -1,   131,    23,
      24,    -1,   131,    21,   134,    22,    -1,   131,    21,   137,
      22,    -1,   131,    21,    22,    -1,    47,    -1,    47,   133,
      -1,    47,   132,    -1,    47,   133,   132,    -1,   128,    -1,
     133,   128,    -1,   135,    -1,   135,    18,    77,    -1,   136,
      -1,   135,    18,   136,    -1,   113,   130,    -1,   113,   139,
      -1,   113,    -1,     3,    -1,   137,    18,     3,    -1,   122,
      -1,   122,   139,    -1,   132,    -1,   140,    -1,   132,   140,
      -1,    21,   139,    22,    -1,    23,    24,    -1,    23,   108,
      24,    -1,   140,    23,    24,    -1,   140,    23,   108,    24,
      -1,    23,    47,    24,    -1,   140,    23,    47,    24,    -1,
      21,    22,    -1,    21,   134,    22,    -1,   140,    21,    22,
      -1,   140,    21,   134,    22,    -1,   108,    -1,    16,   142,
      17,    -1,    16,   142,    18,    17,    -1,   141,    -1,   143,
     141,    -1,   142,    18,   141,    -1,   142,    18,   143,   141,
      -1,   144,    20,    -1,   145,    -1,   144,   145,    -1,    23,
     111,    24,    -1,    25,     3,    -1,   147,    -1,   148,    -1,
     151,    -1,   152,    -1,   153,    -1,   154,    -1,     3,    19,
     146,    -1,    78,   111,    19,   146,    -1,    79,    19,   146,
      -1,    16,    17,    -1,    16,   149,    17,    -1,   150,    -1,
     149,   150,    -1,   112,    -1,   146,    -1,    15,    -1,   110,
      15,    -1,    80,    21,   110,    22,   146,    -1,    80,    21,
     110,    22,   146,    81,   146,    -1,    82,    21,   110,    22,
     146,    -1,    83,    21,   110,    22,   146,    -1,    84,   146,
      83,    21,   110,    22,    15,    -1,    85,    21,   151,   151,
      22,   146,    -1,    85,    21,   151,   151,   110,    22,   146,
      -1,    85,    21,   112,   151,    22,   146,    -1,    85,    21,
     112,   151,   110,    22,   146,    -1,    86,     3,    15,    -1,
      87,    15,    -1,    88,    15,    -1,    89,    15,    -1,    89,
     110,    15,    -1,   156,    -1,   155,   156,    -1,   157,    -1,
     112,    -1,   113,   130,   158,   148,    -1,   113,   130,   148,
      -1,   112,    -1,   158,   112,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    73,    82,    91,    98,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   114,   115,   119,   123,
     124,   125,   126,   127,   131,   132,   133,   134,   135,   136,
     140,   144,   148,   152,   153,   154,   158,   162,   163,   167,
     171,   172,   176,   180,   181,   182,   183,   187,   191,   192,
     196,   200,   204,   208,   212,   216,   220,   224,   228,   232,
     236,   240,   244,   248,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   266,   267,   271,   275,   276,
     290,   291,   297,   301,   306,   307,   308,   309,   313,   320,
     324,   331,   335,   336,   337,   338,   339,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   361,   362,   363,   367,   368,   372,   373,   377,
     381,   382,   383,   384,   388,   389,   393,   394,   395,   399,
     400,   401,   402,   403,   407,   408,   412,   413,   417,   418,
     419,   423,   427,   428,   439,   443,   444,   445,   446,   451,
     452,   453,   454,   455,   456,   457,   458,   462,   463,   464,
     465,   469,   470,   475,   476,   480,   481,   485,   486,   487,
     491,   492,   496,   497,   501,   502,   503,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   521,   522,
     523,   527,   528,   529,   530,   534,   538,   539,   543,   544,
     548,   549,   550,   551,   552,   553,   557,   558,   559,   563,
     564,   568,   569,   573,   574,   578,   579,   583,   584,   585,
     589,   590,   591,   592,   593,   594,   598,   599,   600,   601,
     602,   606,   610,   614,   619,   635,   636,   640,   641
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "SEMI_OP", "OCURLY_OP", "CCURLY_OP",
  "COMMA_OP", "COLON_OP", "EQUAL_OP", "OPENPAREN_OP", "CLOSEPAREN_OP",
  "OPENBRACE_OP", "CLOSEBRACE_OP", "PERIOD_OP", "NOT_OP", "LESS_OP",
  "GREATER_OP", "TILDE_OP", "XOR_OP", "QUESTION_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "PLUS_OP", "MINUS_OP", "TIMES_OP", "DIV_OP", "MOD_OP",
  "BIT_OR", "BIT_AND", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "INLINE", "RESTRICT", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "SIZEOF",
  "BOOL", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   121,
     122,   122,   122,   122,   123,   123,   124,   124,   124,   125,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   129,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   142,   142,   142,   142,   143,   144,   144,   145,   145,
     146,   146,   146,   146,   146,   146,   147,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     2,     1,     1,     1,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     2,     3,     4,
       5,     5,     6,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     4,     4,     6,
       6,     5,     4,     3,     4,     4,     3,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     3,     1,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     3,     4,     2,     3,     3,     4,     1,     3,
       4,     1,     2,     3,     4,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     1,     2,     1,     1,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   111,    92,    93,    94,    95,    96,   141,   139,    98,
      99,   100,   101,   104,   105,   102,   103,   138,   140,    97,
     106,   107,   108,   115,   116,     0,   234,     0,    80,    82,
     109,     0,   110,    84,    86,     0,   231,   233,   133,     0,
     144,    78,     0,   157,     0,    88,    90,   143,     0,    81,
      83,   114,     0,    85,    87,     1,   232,     0,   136,     0,
     134,     0,   161,   159,   158,    79,     0,     0,     0,   237,
       0,   236,     0,     0,     0,   142,     0,   121,     0,   117,
       0,   123,     0,     0,   129,     0,   145,   162,   160,    89,
      90,     2,     3,     4,     0,     0,   215,   209,     0,    29,
      28,    26,    27,    25,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,    18,    30,
       0,    32,    36,    39,    42,    47,    50,    52,    54,    56,
      58,    60,    62,    75,     0,   213,   214,   200,   201,     0,
     211,   202,   203,   204,   205,     2,     0,   188,    91,   238,
     235,   170,   156,   169,     0,   163,   165,     0,   153,    25,
       0,     0,     0,     0,   120,   113,   118,     0,     0,   124,
     126,   122,   130,     0,    30,    77,   137,   131,   135,     0,
       0,    19,    20,     0,   172,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,   227,   228,   229,     0,
       0,    12,    13,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
     210,   212,     0,     0,   191,     0,     0,     0,   196,     0,
       0,   167,   174,   168,   175,   154,     0,     0,   155,   152,
       0,   148,   147,    25,     0,     0,   112,   127,   119,     0,
       0,   132,   206,     0,     5,     0,   174,   173,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,   226,   230,
      11,     8,     0,    16,     0,    10,    63,    33,    34,    35,
      37,    38,    40,    41,    45,    46,    43,    44,    48,    49,
      51,    53,    55,    57,     0,    59,    76,     0,   199,   189,
       0,   192,   195,   197,   184,     0,     0,   178,    25,     0,
     176,     0,     0,   164,   166,   171,     0,   151,     0,   146,
     125,   128,     0,     0,    31,    23,   207,     0,     0,     0,
       0,     0,     0,     0,     9,     7,     0,   198,   190,   193,
       0,   185,   177,   182,   179,   186,     0,   180,    25,     0,
     149,   150,     0,   217,   219,   220,     0,     0,     0,     0,
       0,    17,    61,   194,   187,   183,   181,    14,     0,     0,
       0,   224,     0,   222,     0,    15,   218,   221,   225,   223
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   117,   118,   292,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   217,
     134,   176,    26,    70,    44,    45,    28,    29,    30,    31,
      78,    79,    80,   168,   169,    32,    59,    60,    33,    34,
      61,    47,    48,    64,   325,   155,   156,   157,   185,   326,
     254,   244,   245,   246,   247,   248,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    35,    36,    37,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -309
static const yytype_int16 yypact[] =
{
    1502,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,    75,  -309,    39,  1502,  1502,
    -309,   111,  -309,  1502,  1502,   519,  -309,  -309,    16,    80,
    -309,  -309,    18,    79,   228,  -309,  1305,   155,    10,  -309,
    -309,    34,  1528,  -309,  -309,  -309,  -309,    80,    92,   131,
    -309,    83,  -309,  -309,    79,  -309,    18,   297,   988,  -309,
      39,  -309,  1331,   748,   822,   155,  1528,  1528,  1365,  -309,
      42,  1528,   233,  1232,  -309,    52,  -309,  -309,  -309,  -309,
     100,   122,  -309,  -309,  1259,  1259,  -309,  -309,   667,  -309,
    -309,  -309,  -309,  -309,  -309,  1286,  1232,   149,   167,   177,
     180,   471,   201,   227,   223,   229,  1047,  -309,   183,   382,
    1232,  -309,    85,   213,   258,    76,   260,   212,   239,   221,
     245,   176,  -309,  -309,   230,  -309,  -309,  -309,  -309,   384,
    -309,  -309,  -309,  -309,  -309,  -309,   952,  -309,  -309,  -309,
    -309,  -309,  -309,    43,   275,   280,  -309,    59,  -309,   279,
      77,   282,   837,  1391,  -309,  -309,  -309,  1232,   237,  -309,
     288,  -309,  -309,    68,  -309,  -309,  -309,  -309,  -309,   471,
     667,  -309,  -309,    97,    47,   277,   667,  -309,   291,   471,
    1232,  1232,  1232,   232,   593,   296,  -309,  -309,  -309,   242,
     313,  -309,  -309,  1056,  1232,   314,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  1232,  -309,  1232,
    1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,
    1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,  -309,  1232,
    -309,  -309,  1232,   316,  -309,   261,   988,   191,  -309,   700,
    1092,  -309,    53,  -309,   216,  -309,  1476,   317,  -309,  -309,
     979,  -309,  -309,   300,  1232,   301,  -309,  -309,  -309,    42,
    1232,  -309,  -309,   305,  -309,  1424,   243,  -309,  1107,   306,
     471,  -309,   121,   178,   197,   308,  1142,  1142,  -309,  -309,
    -309,  -309,   199,  -309,    -4,  -309,  -309,  -309,  -309,  -309,
      85,    85,   213,   213,   258,   258,   258,   258,    76,    76,
     260,   212,   239,   221,   262,   245,  -309,   309,  -309,  -309,
     893,  -309,  -309,  -309,  -309,   310,   312,  -309,   311,   315,
     216,  1450,  1171,  -309,  -309,  -309,   350,  -309,   354,  -309,
    -309,  -309,   320,   952,  -309,   320,  -309,   471,   471,   471,
    1232,  1198,  1225,  1232,  -309,  -309,  1232,  -309,  -309,  -309,
     988,  -309,  -309,  -309,  -309,  -309,   318,  -309,   366,   369,
    -309,  -309,   266,   249,  -309,  -309,   205,   471,   206,   471,
     207,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   920,   471,
     322,  -309,   471,  -309,   471,  -309,  -309,  -309,  -309,  -309
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -309,  -309,   -68,  -309,   -96,    67,    71,     6,
      78,   106,   161,   162,   160,   166,  -309,   -65,   -67,  -309,
      -5,  -100,   -10,     0,  -309,   331,  -309,    40,  -309,  -309,
     328,   -56,   -58,  -309,   129,  -309,   349,   -75,    32,  -309,
     -22,   -39,   -13,   -63,   -70,  -309,   151,  -309,  -127,  -137,
    -227,   -66,    65,  -308,  -309,   164,  -107,  -309,   -29,  -309,
     270,  -186,  -309,  -309,  -309,  -309,   377,  -309,  -309
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,   147,   148,   154,   193,    46,   188,   161,   287,    75,
     178,   162,   360,    40,   239,   174,   253,    71,   175,   164,
     355,    40,   166,   171,   218,   330,   181,   182,    49,    50,
      63,    42,    57,    53,    54,    27,    69,   187,   174,    42,
     184,   175,    40,   150,    90,    40,    40,   277,    90,   330,
      76,    88,   174,   273,    41,    58,    40,   135,   170,   279,
      42,   167,   149,    42,   249,    43,   250,   267,   275,   177,
     250,    58,   272,   153,   249,    62,   250,   257,    38,   147,
     360,   258,   281,    58,    81,   271,    43,   226,   227,    43,
      43,    39,    77,   183,    43,   265,    87,   260,   178,   174,
     351,   352,   175,   228,   229,    86,    62,   166,    81,    81,
      81,   199,    83,    81,    51,   239,    77,    77,    77,   274,
      68,    77,   184,   297,   298,   299,    43,    52,   184,   135,
      81,   251,   219,   220,   221,     8,   293,     8,    77,   239,
     252,   179,   317,   347,    17,    18,    17,    18,    84,    85,
     296,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   189,   174,
     341,   276,   316,   346,   174,   183,    73,   175,    74,   147,
     321,   183,   344,   329,   286,   282,   283,   284,   190,   200,
     201,   202,    62,   336,    87,    81,   239,   338,   191,   294,
     348,   192,   174,    77,   203,   175,   204,   236,   205,   237,
     174,   322,    81,    75,   242,   239,   243,   353,    81,   349,
      77,   354,   194,   239,   239,   239,    77,   390,   392,   394,
     195,   314,   304,   305,   306,   307,   252,   331,   196,   332,
     373,   374,   375,    65,   197,   238,    66,   170,   239,   153,
     172,   173,   268,   147,   359,   269,   153,   289,   222,   223,
     239,   366,   276,   232,   275,   369,   250,   224,   225,   233,
     391,   234,   393,   230,   231,   153,   147,   235,   319,   320,
     239,   356,   396,   387,   388,   398,   381,   399,   174,   300,
     301,   382,    87,   147,   383,   302,   303,   255,   256,   278,
      91,    92,    93,   259,    94,    95,   261,   270,   308,   309,
     280,   288,    96,    67,    97,   285,   290,   295,    98,   318,
     335,   147,   359,    99,   337,   339,   100,   342,   345,   350,
     389,   153,   361,   357,   362,   363,   343,   397,   310,   364,
     384,     1,   101,   102,   103,   376,   378,   380,   104,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   105,    20,    21,
      22,    23,    24,    25,   370,   106,   107,   108,   371,   109,
     110,   111,   112,   113,   114,   115,   116,    91,    92,    93,
     385,    94,    95,   386,   311,   313,   312,    89,   340,    96,
      67,   240,   206,   315,   163,    98,    82,   334,   372,   241,
      99,   323,    56,   100,     0,     0,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,     0,     0,     1,   101,
     102,   103,     0,     0,     0,   104,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   105,    20,    21,    22,    23,    24,
      25,     0,   106,   107,   108,     0,   109,   110,   111,   112,
     113,   114,   115,   116,    91,    92,    93,     0,    94,    95,
       0,     0,     0,     0,     0,     0,    96,    67,     0,     0,
       0,     0,    98,     0,     0,     0,     0,    99,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,    55,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,     0,   109,   110,   111,   112,   113,   114,   115,
     116,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
      20,    21,    22,    23,    24,    25,   145,    92,    93,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   101,   102,
     103,     0,     0,     0,   104,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   105,    20,    21,    22,    23,    24,    25,
     145,    92,    93,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,    99,     0,     0,   100,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     1,   101,   102,   103,     0,     0,     0,   104,     0,
       0,   249,   324,   250,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   105,    20,    21,
      22,    23,    24,    25,     1,     0,     0,    43,     0,     0,
       0,   151,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     152,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,    20,
      21,    22,    23,    24,    25,   145,    92,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,    92,    93,    98,    94,    95,   158,     0,    99,     0,
       0,   100,     0,     0,     0,     0,     0,     0,    98,     0,
       0,   262,     0,    99,     0,     0,   100,   101,   102,   159,
       0,     0,     0,   104,     0,     0,   160,     0,     0,     0,
       8,     0,   101,   102,   263,     0,     0,     0,   104,    17,
      18,   264,   105,     0,     0,     8,   145,    92,    93,     0,
      94,    95,     0,     0,    17,    18,     0,   105,     0,   146,
     358,     0,     0,     0,    98,     0,   242,     0,   243,    99,
       0,     0,   100,   145,    92,    93,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,   146,   395,   101,   102,
     103,    98,     0,   242,   104,   243,    99,     0,     0,   100,
       0,     0,     0,     0,     0,   145,    92,    93,     0,    94,
      95,     0,     0,   105,     0,   101,   102,   103,   146,     0,
       0,   104,     0,    98,     0,   242,     0,   243,    99,     0,
       0,   100,   145,    92,    93,     0,    94,    95,     0,     0,
     105,   145,    92,    93,     0,    94,    95,   101,   102,   103,
      98,     0,     0,   104,   146,    99,     0,     0,   100,    98,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,   105,     0,   101,   102,   103,     0,     0,     0,
     104,     0,     0,   101,   102,   103,     0,     8,     0,   104,
       0,     0,     0,     0,     0,     0,    17,    18,     0,   105,
     145,    92,    93,     0,    94,    95,     0,     0,   105,   145,
      92,    93,   198,    94,    95,     0,     0,     0,    98,     0,
       0,     0,     0,    99,     0,     0,   100,    98,   291,     0,
       0,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,     0,   101,   102,   103,   145,    92,    93,   104,    94,
      95,   101,   102,   103,     0,     0,     0,   104,     0,     0,
     145,    92,    93,    98,    94,    95,   327,   105,    99,     0,
       0,   100,     0,   343,     0,     0,   105,     0,    98,     0,
       0,     0,     0,    99,     0,     0,   100,   101,   102,   328,
       0,     0,     0,   104,     0,   145,    92,    93,     0,    94,
      95,     0,   101,   102,   103,     0,     0,    96,   104,     0,
       0,     0,   105,    98,     0,     0,     0,     0,    99,     0,
       0,   100,     0,     0,   145,    92,    93,   105,    94,    95,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
       0,     0,    98,   104,     0,   367,     0,    99,     0,     0,
     100,   145,    92,    93,     0,    94,    95,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   101,   102,   368,    98,
     377,     0,   104,     0,    99,     0,     0,   100,   145,    92,
      93,     0,    94,    95,     0,   145,    92,    93,     0,    94,
      95,   105,     0,   101,   102,   103,    98,   379,     0,   104,
       0,    99,     0,    98,   100,     0,     0,     0,    99,     0,
       0,   100,   145,    92,    93,     0,    94,    95,   105,     0,
     101,   102,   103,     0,     0,     0,   104,   101,   102,   103,
     180,     0,     0,   104,     0,    99,     0,     0,   100,   145,
      92,    93,     0,    94,    95,   105,     0,     0,     0,     0,
       0,     0,   105,     0,   101,   102,   103,   186,     0,     0,
     104,     0,    99,     0,     0,   100,     0,     0,     0,     0,
       0,    67,     0,     0,     0,    68,     0,     0,     0,   105,
       0,   101,   102,   103,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     1,
       0,     0,     0,     0,     0,     0,   105,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     1,    20,    21,    22,    23,
      24,    25,   165,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,    20,    21,    22,    23,    24,    25,   266,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     1,    20,    21,    22,    23,
      24,    25,     0,     0,     0,   275,   324,   250,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,    20,    21,    22,    23,    24,    25,     1,     0,
       0,    43,   365,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     1,    20,    21,    22,    23,    24,
      25,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       1,    20,    21,    22,    23,    24,    25,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     1,    20,    21,    22,
      23,    24,    25,   333,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     1,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,    20,
      21,    22,    23,    24,    25
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-309)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    68,    68,    73,   111,    27,   106,    74,   194,    48,
      85,    74,   320,     3,    18,    83,   153,    46,    83,    77,
      24,     3,    78,    81,   120,   252,    94,    95,    28,    29,
      43,    21,    16,    33,    34,    35,    46,   105,   106,    21,
      98,   106,     3,    72,    66,     3,     3,   184,    70,   276,
      16,    64,   120,   180,    15,     3,     3,    67,    80,   186,
      21,    19,    72,    21,    21,    47,    23,   167,    21,    17,
      23,     3,   179,    73,    21,    43,    23,    18,     3,   146,
     388,    22,   189,     3,    52,    17,    47,    11,    12,    47,
      47,    16,    52,    98,    47,   162,    64,   160,   173,   167,
     286,   287,   167,    27,    28,    22,    74,   163,    76,    77,
      78,   116,    20,    81,     3,    18,    76,    77,    78,    22,
      20,    81,   180,   219,   220,   221,    47,    16,   186,   139,
      98,   153,    47,    48,    49,    58,   203,    58,    98,    18,
     153,    19,   242,    22,    67,    68,    67,    68,    17,    18,
     217,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,    19,   237,
     270,   184,   239,   280,   242,   180,    21,   242,    23,   246,
     246,   186,   278,   250,   194,   190,   191,   192,    21,     6,
       7,     8,   160,   260,   162,   163,    18,   264,    21,   204,
      22,    21,   270,   163,    21,   270,    23,    31,    25,    33,
     278,    20,   180,   252,    23,    18,    25,    18,   186,    22,
     180,    22,    21,    18,    18,    18,   186,    22,    22,    22,
       3,   236,   226,   227,   228,   229,   249,    21,    15,    23,
     347,   348,   349,    15,    15,    15,    18,   269,    18,   249,
      17,    18,    15,   320,   320,    18,   256,    15,    45,    46,
      18,   331,   275,    51,    21,   332,    23,     9,    10,    30,
     377,    50,   379,    13,    14,   275,   343,    32,    17,    18,
      18,    19,   389,    17,    18,   392,   353,   394,   356,   222,
     223,   356,   260,   360,   360,   224,   225,    22,    18,    22,
       3,     4,     5,    24,     7,     8,    24,    19,   230,   231,
      19,    15,    15,    16,    17,    83,     3,     3,    21,     3,
       3,   388,   388,    26,    24,    24,    29,    22,    22,    21,
      81,   331,    22,    24,    22,    24,    16,    15,   232,    24,
      22,    44,    45,    46,    47,   350,   351,   352,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    24,    78,    79,    80,    24,    82,
      83,    84,    85,    86,    87,    88,    89,     3,     4,     5,
      24,     7,     8,    24,   233,   235,   234,    66,   269,    15,
      16,    17,    20,   237,    76,    21,    57,   256,   343,   139,
      26,   247,    35,    29,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,     3,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,     0,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,
      -1,    21,    22,    23,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    44,    -1,    -1,    47,    -1,    -1,
      -1,     3,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      22,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    21,     7,     8,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    24,    -1,    26,    -1,    -1,    29,    45,    46,    47,
      -1,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    45,    46,    47,    -1,    -1,    -1,    51,    67,
      68,    54,    70,    -1,    -1,    58,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    67,    68,    -1,    70,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    29,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    45,    46,
      47,    21,    -1,    23,    51,    25,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    70,    -1,    45,    46,    47,    16,    -1,
      -1,    51,    -1,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      70,     3,     4,     5,    -1,     7,     8,    45,    46,    47,
      21,    -1,    -1,    51,    16,    26,    -1,    -1,    29,    21,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    70,    -1,    45,    46,    47,    -1,    -1,    -1,
      51,    -1,    -1,    45,    46,    47,    -1,    58,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    70,     3,
       4,     5,    15,     7,     8,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    21,    22,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,     3,     4,     5,    51,     7,
       8,    45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,
       3,     4,     5,    21,     7,     8,    24,    70,    26,    -1,
      -1,    29,    -1,    16,    -1,    -1,    70,    -1,    21,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    45,    46,    47,
      -1,    -1,    -1,    51,    -1,     3,     4,     5,    -1,     7,
       8,    -1,    45,    46,    47,    -1,    -1,    15,    51,    -1,
      -1,    -1,    70,    21,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    -1,     3,     4,     5,    70,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    21,    51,    -1,    24,    -1,    26,    -1,    -1,
      29,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    45,    46,    47,    21,
      22,    -1,    51,    -1,    26,    -1,    -1,    29,     3,     4,
       5,    -1,     7,     8,    -1,     3,     4,     5,    -1,     7,
       8,    70,    -1,    45,    46,    47,    21,    22,    -1,    51,
      -1,    26,    -1,    21,    29,    -1,    -1,    -1,    26,    -1,
      -1,    29,     3,     4,     5,    -1,     7,     8,    70,    -1,
      45,    46,    47,    -1,    -1,    -1,    51,    45,    46,    47,
      21,    -1,    -1,    51,    -1,    26,    -1,    -1,    29,     3,
       4,     5,    -1,     7,     8,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    45,    46,    47,    21,    -1,    -1,
      51,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,    70,
      -1,    45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    44,    71,    72,    73,    74,
      75,    76,    17,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    17,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    44,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    21,    22,    23,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,    75,    76,    44,    -1,
      -1,    47,    22,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    44,    71,    72,    73,    74,    75,
      76,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      44,    71,    72,    73,    74,    75,    76,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    44,    71,    72,    73,
      74,    75,    76,    77,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    44,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      71,    72,    73,    74,    75,    76,   112,   113,   116,   117,
     118,   119,   125,   128,   129,   155,   156,   157,     3,    16,
       3,    15,    21,    47,   114,   115,   130,   131,   132,   113,
     113,     3,    16,   113,   113,     0,   156,    16,     3,   126,
     127,   130,   128,   132,   133,    15,    18,    16,    20,   112,
     113,   148,   158,    21,    23,   131,    16,   117,   120,   121,
     122,   128,   126,    20,    17,    18,    22,   128,   132,   115,
     130,     3,     4,     5,     7,     8,    15,    17,    21,    26,
      29,    45,    46,    47,    51,    70,    78,    79,    80,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    92,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   110,   112,   146,   147,   148,   149,
     150,   151,   152,   153,   154,     3,    16,   108,   141,   112,
     148,     3,    22,   113,   134,   135,   136,   137,    24,    47,
      54,   108,   133,   120,   122,    17,   121,    19,   123,   124,
     130,   122,    17,    18,    94,   107,   111,    17,   127,    19,
      21,    94,    94,   110,   122,   138,    21,    94,   111,    19,
      21,    21,    21,   146,    21,     3,    15,    15,    15,   110,
       6,     7,     8,    21,    23,    25,    20,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,   109,    96,    47,
      48,    49,    45,    46,     9,    10,    11,    12,    27,    28,
      13,    14,    51,    30,    50,    32,    31,    33,    15,    18,
      17,   150,    23,    25,   141,   142,   143,   144,   145,    21,
      23,   130,   132,   139,   140,    22,    18,    18,    22,    24,
     133,    24,    24,    47,    54,   108,    17,   111,    15,    18,
      19,    17,   146,   138,    22,    21,   132,   139,    22,   138,
      19,   146,   110,   110,   110,    83,   112,   151,    15,    15,
       3,    22,    93,   108,   110,     3,   108,    96,    96,    96,
      97,    97,    98,    98,    99,    99,    99,    99,   100,   100,
     101,   102,   103,   104,   110,   105,   108,   111,     3,    17,
      18,   141,    20,   145,    22,   134,   139,    24,    47,   108,
     140,    21,    23,    77,   136,     3,   108,    24,   108,    24,
     124,   111,    22,    16,    96,    22,   146,    22,    22,    22,
      21,   151,   151,    18,    22,    24,    19,    24,    17,   141,
     143,    22,    22,    24,    24,    22,   134,    24,    47,   108,
      24,    24,   142,   146,   146,   146,   110,    22,   110,    22,
     110,   108,   107,   141,    22,    24,    24,    17,    18,    81,
      22,   146,    22,   146,    22,    17,   146,    15,   146,   146
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 65 "c.y"
    {
                                             (yyval.CompilerInfo).expression = (ExpressionPtr)malloc(sizeof(Expression));
											 (yyval.CompilerInfo).expression->node.string = (char *) malloc(strlen((yyvsp[(1) - (1)].CompilerInfo).identifier)+1);
                                             strcpy((yyval.CompilerInfo).expression->node.string, (yyvsp[(1) - (1)].CompilerInfo).identifier);
                                             (yyval.CompilerInfo).expression->node.type = TYPE_NULL;
                                             (yyval.CompilerInfo).expression->node.constant = FALSE;
	                                         fprintf(yyout,"IDENTIFIER REDUCE to primary_expression\n");
											}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 73 "c.y"
    {
                                             (yyval.CompilerInfo).expression = (ExpressionPtr)malloc(sizeof(Expression));
											 (yyval.CompilerInfo).expression->node.string = (char *) malloc(strlen((yyvsp[(1) - (1)].CompilerInfo).identifier));
											 memset((yyval.CompilerInfo).expression->node.string,0,strlen((yyvsp[(1) - (1)].CompilerInfo).identifier));
                                             strcpy((yyval.CompilerInfo).expression->node.string, (yyvsp[(1) - (1)].CompilerInfo).identifier);
                                             (yyval.CompilerInfo).expression->node.type = (yyvsp[(1) - (1)].CompilerInfo).type;
                                             (yyval.CompilerInfo).expression->node.constant = TRUE;
	                                         fprintf(yyout,"'%s' CONSTANT REDUCE to primary_expression\n",(yyval.CompilerInfo).expression->node.string);
											}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 82 "c.y"
    {
                                             (yyval.CompilerInfo).expression = (ExpressionPtr)malloc(sizeof(Expression));
											 (yyval.CompilerInfo).expression->node.string = (char *) malloc(strlen((yyvsp[(1) - (1)].CompilerInfo).identifier));
											 memset((yyval.CompilerInfo).expression->node.string,0,strlen((yyvsp[(1) - (1)].CompilerInfo).identifier));
                                             strcpy((yyval.CompilerInfo).expression->node.string, (yyvsp[(1) - (1)].CompilerInfo).identifier);
                                             (yyval.CompilerInfo).expression->node.type = (yyvsp[(1) - (1)].CompilerInfo).type;
                                             (yyval.CompilerInfo).expression->node.constant = TRUE;
	                                         fprintf(yyout,"'%s' STRING_LITERAL REDUCE to primary_expression\n",(yyval.CompilerInfo).expression->node.string);
											}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 91 "c.y"
    {
                                             (yyval.CompilerInfo).expression = (yyvsp[(2) - (3)].CompilerInfo).expression;
	                                         fprintf(yyout,"OPENPAREN_OP expression CLOSEPAREN_OP REDUCE to primary_expression\n");
											}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 98 "c.y"
    {
                                                                                          (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                                                      fprintf(yyout,"primary_expression REDUCE to postfix_expression\n");
																						 }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 102 "c.y"
    {fprintf(yyout,"postfix_expression OPENBRACE_OP expression CLOSEBRACE_OP REDUCE to postfix_expression\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 103 "c.y"
    {fprintf(yyout,"postfix_expression OPENPAREN_OP CLOSEPAREN_OP REDUCE to postfix_expression\n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 104 "c.y"
    {fprintf(yyout,"postfix_expression OPENPAREN_OP argument_expression_list CLOSEPAREN_OP REDUCE to postfix_expression\n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 105 "c.y"
    {fprintf(yyout,"postfix_expression PERIOD_OP IDENTIFIER REDUCE to postfix_expression\n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 106 "c.y"
    {fprintf(yyout,"postfix_expression PTR_OP IDENTIFIER REDUCE to postfix_expression\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 107 "c.y"
    {fprintf(yyout,"postfix_expression INC_OP REDUCE to postfix_expression\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 108 "c.y"
    {fprintf(yyout,"postfix_expression DEC_OP REDUCE to postfix_expression\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 109 "c.y"
    {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list CCURLY_OP REDUCE to postfix_expression\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 110 "c.y"
    {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list COMMA_OP CCURLY_OP REDUCE to postfix_expression\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 114 "c.y"
    {fprintf(yyout,"assignment_expression REDUCE to argument_expression_list\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 115 "c.y"
    {fprintf(yyout,"argument_expression_list COMMA_OP assignment_expression REDUCE to argument_expression_list\n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 119 "c.y"
    {
                                                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                 fprintf(yyout,"postfix_expression REDUCE to unary_expression\n");
													}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 123 "c.y"
    {fprintf(yyout,"INC_OP unary_expression REDUCE to unary_expression\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 124 "c.y"
    {fprintf(yyout,"DEC_OP unary_expression REDUCE to unary_expression\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 125 "c.y"
    {fprintf(yyout,"unary_operator cast_expression REDUCE to unary_expression\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 126 "c.y"
    {fprintf(yyout,"SIZEOF unary_expression REDUCE to unary_expression\n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 127 "c.y"
    {fprintf(yyout,"SIZEOF OPENPAREN_OP type_name CLOSEPAREN_OP REDUCE to unary_expression\n");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 131 "c.y"
    {fprintf(yyout,"BIT_AND REDUCE to unary_operator\n");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 132 "c.y"
    {fprintf(yyout,"TIMES_OP REDUCE to unary_operator\n");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 133 "c.y"
    {fprintf(yyout,"PLUS_OP REDUCE to unary_operator\n");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 134 "c.y"
    {fprintf(yyout,"MINUS_OP REDUCE to unary_operator\n");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 135 "c.y"
    {fprintf(yyout,"TILDE_OP REDUCE to unary_operator\n");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 136 "c.y"
    {fprintf(yyout,"NOT_OP REDUCE to unary_operator\n");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 140 "c.y"
    {
                                                             (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                         fprintf(yyout,"unary_expression REDUCE to cast_expression\n");
															}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 144 "c.y"
    {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP cast_expression REDUCE to cast_expression\n");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 148 "c.y"
    {
                                                           (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                       fprintf(yyout,"cast_expression REDUCE to multiplicative_expression\n");
														  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 152 "c.y"
    {fprintf(yyout,"multiplicative_expression TIMES_OP cast_expression REDUCE to multiplicative_expression\n");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 153 "c.y"
    {fprintf(yyout,"multiplicative_expression DIV_OP cast_expression REDUCE to multiplicative_expression\n");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 154 "c.y"
    {fprintf(yyout,"multiplicative_expression MOD_OP cast_expression REDUCE to multiplicative_expression\n");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 158 "c.y"
    {
                                                               (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                           fprintf(yyout,"multiplicative_expression REDUCE to additive_expression\n");
															  }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 162 "c.y"
    {fprintf(yyout,"additive_expression PLUS_OP multiplicative_expression REDUCE to additive_expression\n");}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 163 "c.y"
    {fprintf(yyout,"additive_expression MINUS_OP multiplicative_expression REDUCE to additive_expression\n");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 167 "c.y"
    {
                                                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                 fprintf(yyout,"additive_expression REDUCE to shift_expression\n");
													}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 171 "c.y"
    {fprintf(yyout,"shift_expression LEFT_OP additive_expression REDUCE to shift_expression\n");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 172 "c.y"
    {fprintf(yyout,"shift_expression RIGHT_OP additive_expression REDUCE to shift_expression\n");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 176 "c.y"
    {
                                                         (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                     fprintf(yyout,"shift_expression REDUCE to relational_expression\n");
														}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 180 "c.y"
    {fprintf(yyout,"relational_expression LESS_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 181 "c.y"
    {fprintf(yyout,"relational_expression GREATER_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 182 "c.y"
    {fprintf(yyout,"relational_expression LE_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 183 "c.y"
    {fprintf(yyout,"relational_expression GE_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 187 "c.y"
    {
                                                         (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                     fprintf(yyout,"relational_expression REDUCE to equality_expression\n");
														}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 191 "c.y"
    {fprintf(yyout,"equality_expression EQ_OP relational_expression REDUCE to equality_expression\n");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 192 "c.y"
    {fprintf(yyout,"equality_expression NE_OP relational_expression REDUCE to equality_expression\n");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 196 "c.y"
    {
                                                    (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                fprintf(yyout,"equality_expression REDUCE to and_expression\n");
												   }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 200 "c.y"
    {fprintf(yyout,"and_expression BIT_AND equality_expression REDUCE to and_expression\n");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 204 "c.y"
    {
                                                       (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                   fprintf(yyout,"and_expression REDUCE to exclusive_or_expression\n");
													  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 208 "c.y"
    {fprintf(yyout,"exclusive_or_expression XOR_OP and_expression REDUCE to exclusive_or_expression\n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 212 "c.y"
    {
                                                                (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                            fprintf(yyout,"exclusive_or_expression REDUCE to inclusive_or_expression\n");
															   }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 216 "c.y"
    {fprintf(yyout,"inclusive_or_expression BIT_OR exclusive_or_expression REDUCE to inclusive_or_expression\n");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 220 "c.y"
    {
                                                             (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                         fprintf(yyout,"inclusive_or_expression REDUCE to logical_and_expression\n");
															}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 224 "c.y"
    {fprintf(yyout,"logical_and_expression AND_OP inclusive_or_expression REDUCE to logical_and_expression\n");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 228 "c.y"
    {
                                                          (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                      fprintf(yyout,"logical_and_expression REDUCE to logical_or_expression\n");
														 }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 232 "c.y"
    {fprintf(yyout,"logical_or_expression OR_OP logical_and_expression REDUCE to logical_or_expression\n");}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 236 "c.y"
    {
                                                                                    (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                                                fprintf(yyout,"logical_or_expression REDUCE to conditional_expression\n");
																				   }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 240 "c.y"
    {fprintf(yyout,"logical_or_expression QUESTION_OP expression COLON_OP conditional_expression REDUCE to conditional_expression\n");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 244 "c.y"
    {
                                                                  (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                              fprintf(yyout,"conditional_expression REDUCE to assignment_expression\n");
																 }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 248 "c.y"
    {fprintf(yyout,"unary_expression assignment_operator assignment_expression REDUCE to assignment_expression\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 252 "c.y"
    {fprintf(yyout,"EQUAL_OP REDUCE to assignment_operator\n");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 253 "c.y"
    {fprintf(yyout,"MUL_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 254 "c.y"
    {fprintf(yyout,"DIV_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 255 "c.y"
    {fprintf(yyout,"MOD_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 256 "c.y"
    {fprintf(yyout,"ADD_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 257 "c.y"
    {fprintf(yyout,"SUB_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 258 "c.y"
    {fprintf(yyout,"LEFT_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 259 "c.y"
    {fprintf(yyout,"RIGHT_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 260 "c.y"
    {fprintf(yyout,"AND_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 261 "c.y"
    {fprintf(yyout,"XOR_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 262 "c.y"
    {fprintf(yyout,"OR_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 266 "c.y"
    {fprintf(yyout,"assignment_expression REDUCE to expression\n");}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 267 "c.y"
    {fprintf(yyout," expression COMMA_OP assignment_expression REDUCE to expression\n");}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 271 "c.y"
    {fprintf(yyout,"conditional_expression REDUCE to constant_expression\n");}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 275 "c.y"
    {fprintf(yyout,"declaration_specifiers SEMI_OP REDUCE to declaration\n");}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 276 "c.y"
    {
                                                             (yyval.CompilerInfo).sign = (yyvsp[(1) - (3)].CompilerInfo).sign;
	                                                         (yyval.CompilerInfo).type = (yyvsp[(1) - (3)].CompilerInfo).type;
	                                                         (yyval.CompilerInfo).storage = (yyvsp[(1) - (3)].CompilerInfo).storage;
	                                                         (yyval.CompilerInfo).identifier = (yyvsp[(2) - (3)].CompilerInfo).identifier;
	                                                         (yyval.CompilerInfo).expression = (yyvsp[(2) - (3)].CompilerInfo).expression;
															 if ((yyval.CompilerInfo).expression==NULL)
															   fprintf(yyout,"'%d %d %d %s' => declaration_specifiers init_declarator_list SEMI_OP REDUCE to declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
															 else
															   fprintf(yyout,"'%d %d %d %s <Array>' => declaration_specifiers init_declarator_list SEMI_OP REDUCE to declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
															}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 290 "c.y"
    {fprintf(yyout,"storage_class_specifier REDUCE to declaration_specifiers\n");}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 291 "c.y"
    {
	                                                  (yyval.CompilerInfo).sign = (yyvsp[(2) - (2)].CompilerInfo).sign;
	                                                  (yyval.CompilerInfo).type = (yyvsp[(2) - (2)].CompilerInfo).type;
	                                                  (yyval.CompilerInfo).storage = (yyvsp[(1) - (2)].CompilerInfo).storage;
	                                                  fprintf(yyout,"%d %d %d => storage_class_specifier declaration_specifiers REDUCE to declaration_specifiers\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type);
													 }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 297 "c.y"
    {
	                                                   (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
													   fprintf(yyout,"type_specifier REDUCE to declaration_specifiers\n");
													 }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 301 "c.y"
    {
	                                                   (yyval.CompilerInfo).sign = (yyvsp[(1) - (2)].CompilerInfo).sign;
	                                                   (yyval.CompilerInfo).type = (yyvsp[(2) - (2)].CompilerInfo).type;
													   fprintf(yyout,"%d %d => type_specifier declaration_specifiers REDUCE to declaration_specifiers\n",(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type);
													 }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 306 "c.y"
    {fprintf(yyout,"type_qualifier REDUCE to declaration_specifiers\n");}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 307 "c.y"
    {fprintf(yyout,"type_qualifier declaration_specifiers SEMI_OP REDUCE to declaration_specifiers\n");}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 308 "c.y"
    {fprintf(yyout,"function_specifier REDUCE to declaration_specifiers\n");}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 309 "c.y"
    {fprintf(yyout,"function_specifier declaration_specifiers REDUCE to declaration_specifiers\n");}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 313 "c.y"
    {
                                                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
								                     if ((yyvsp[(1) - (1)].CompilerInfo).expression==NULL)
	                                                   fprintf(yyout,"'%s' => init_declarator REDUCE to init_declarator_list\n",(yyval.CompilerInfo).identifier);
												     else
	                                                   fprintf(yyout,"'%s' <Array> => init_declarator REDUCE to init_declarator_list\n",(yyval.CompilerInfo).identifier);
													}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 320 "c.y"
    {fprintf(yyout,"init_declarator_list COMMA_OP init_declarator REDUCE to init_declarator_list\n");}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 324 "c.y"
    {
                                       (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
								       if ((yyvsp[(1) - (1)].CompilerInfo).expression==NULL)
	                                     fprintf(yyout,"'%s' => declarator REDUCE to init_declarator\n",(yyval.CompilerInfo).identifier);
									   else	 
	                                     fprintf(yyout,"'%s' <Array> => declarator REDUCE to init_declarator\n",(yyval.CompilerInfo).identifier);
									  }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 331 "c.y"
    {fprintf(yyout,"declarator EQUAL_OP initializer REDUCE to init_declarator\n");}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 335 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_NONE;fprintf(yyout,"TYPEDEF REDUCE to storage_class_specifier\n");}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 336 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_EXTERN;fprintf(yyout,"EXTERN REDUCE to storage_class_specifier\n");}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 337 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_STATIC;fprintf(yyout,"STATIC REDUCE to storage_class_specifier\n");}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 338 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_AUTO;fprintf(yyout,"AUTO REDUCE to storage_class_specifier\n");}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 339 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_REGISTER;fprintf(yyout,"REGISTER REDUCE to storage_class_specifier\n");}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 343 "c.y"
    {fprintf(yyout,"VOID REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_VOID;}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 344 "c.y"
    {fprintf(yyout,"CHAR REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_CHARACTER;}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 345 "c.y"
    {fprintf(yyout,"SHORT REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_SHORT;}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 346 "c.y"
    {fprintf(yyout,"INT REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_INTEGER;}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 347 "c.y"
    {fprintf(yyout,"LONG REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_LONG;}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 348 "c.y"
    {fprintf(yyout,"FLOAT REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_FLOAT;}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 349 "c.y"
    {fprintf(yyout,"DOUBLE REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_DOUBLE;}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 350 "c.y"
    {fprintf(yyout,"SIGNED REDUCE to type_specifier\n"); (yyval.CompilerInfo).sign = TYPE_SIGNED;}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 351 "c.y"
    {fprintf(yyout,"UNSIGNED REDUCE to type_specifier\n"); (yyval.CompilerInfo).sign = TYPE_UNSIGNED;}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 352 "c.y"
    {fprintf(yyout,"BOOL REDUCE to type_specifier\n"); (yyval.CompilerInfo).type = TYPE_INTEGER;}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 353 "c.y"
    {fprintf(yyout,"COMPLEX REDUCE to type_specifier\n");}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 354 "c.y"
    {fprintf(yyout,"IMAGINARY REDUCE to type_specifier\n");}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 355 "c.y"
    {fprintf(yyout,"struct_or_union_specifier REDUCE to type_specifier\n");}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 356 "c.y"
    {fprintf(yyout,"enum_specifier REDUCE to type_specifier\n");}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 357 "c.y"
    {fprintf(yyout,"type_specifier TYPE_NAME REDUCE to type_specifier\n");}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 361 "c.y"
    {fprintf(yyout,"struct_or_union IDENTIFIER OCURLY_OP struct_declaration_list CCURLY_OP REDUCE to struct_or_union_specifier\n");}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 362 "c.y"
    {fprintf(yyout,"struct_or_union OCURLY_OP struct_declaration_list CCURLY_OP REDUCE to struct_or_union_specifier\n");}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 363 "c.y"
    {fprintf(yyout,"struct_or_union IDENTIFIER REDUCE to struct_or_union_specifier\n");}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 367 "c.y"
    {fprintf(yyout,"STRUCT REDUCE to struct_or_union\n");}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 368 "c.y"
    {fprintf(yyout,"UNION REDUCE to struct_or_union\n");}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 372 "c.y"
    {fprintf(yyout,"struct_declaration REDUCE to struct_declaration_list\n");}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 373 "c.y"
    {fprintf(yyout,"struct_declaration_list struct_declaration REDUCE to struct_declaration_list\n");}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 377 "c.y"
    {fprintf(yyout,"specifier_qualifier_list struct_declarator_list SEMI_OP REDUCE to struct_declaration\n");}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 381 "c.y"
    {fprintf(yyout,"type_specifier specifier_qualifier_list REDUCE to specifier_qualifier_list\n");}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 382 "c.y"
    {fprintf(yyout,"type_specifier REDUCE to specifier_qualifier_list\n");}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 383 "c.y"
    {fprintf(yyout,"type_qualifier specifier_qualifier_list REDUCE to specifier_qualifier_list\n");}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 384 "c.y"
    {fprintf(yyout,"type_qualifier REDUCE to specifier_qualifier_list\n");}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 388 "c.y"
    {fprintf(yyout,"struct_declarator REDUCE to struct_declarator_list\n");}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 389 "c.y"
    {fprintf(yyout,"struct_declarator_list COMMA_OP struct_declarator REDUCE to struct_declarator_list\n");}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 393 "c.y"
    {fprintf(yyout,"declarator REDUCE to struct_declarator\n");}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 394 "c.y"
    {fprintf(yyout,"COLON_OP constant_expression REDUCE to struct_declarator\n");}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 395 "c.y"
    {fprintf(yyout,"declarator COLON_OP constant_expression REDUCE to struct_declarator\n");}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 399 "c.y"
    {fprintf(yyout,"ENUM OCURLY_OP enumerator_list CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 400 "c.y"
    {fprintf(yyout,"ENUM IDENTIFIER OCURLY_OP enumerator_list CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 401 "c.y"
    {fprintf(yyout,"ENUM OCURLY_OP enumerator_list COMMA_OP CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 402 "c.y"
    {fprintf(yyout,"ENUM IDENTIFIER OCURLY_OP enumerator_list COMMA_OP CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 403 "c.y"
    {fprintf(yyout,"ENUM IDENTIFIER REDUCE to enum_specifier\n");}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 407 "c.y"
    {fprintf(yyout,"enumerator REDUCE to enumerator_list\n");}
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 408 "c.y"
    {fprintf(yyout,"enumerator_list COMMA_OP enumerator REDUCE to enumerator_list\n");}
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 412 "c.y"
    {fprintf(yyout,"IDENTIFIER REDUCE to enumerator\n");}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 413 "c.y"
    {fprintf(yyout,"IDENTIFIER EQUAL_OP constant_expression REDUCE to enumerator\n");}
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 417 "c.y"
    {fprintf(yyout,"CONST REDUCE to type_qualifier\n");}
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 418 "c.y"
    {fprintf(yyout,"RESTRICT REDUCE to type_qualifier\n");}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 419 "c.y"
    {fprintf(yyout,"VOLATILE REDUCE to type_qualifier\n");}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 423 "c.y"
    {fprintf(yyout,"INLINE REDUCE to function_specifier\n");}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 427 "c.y"
    {fprintf(yyout,"pointer direct_declarator REDUCE to declarator\n");}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 428 "c.y"
    {
                                  (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
								  if ((yyvsp[(1) - (1)].CompilerInfo).expression==NULL)
	                                fprintf(yyout,"'%s' => direct_declarator REDUCE to declarator\n",(yyval.CompilerInfo).identifier);
								  else
	                                fprintf(yyout,"'%s' <Array> => direct_declarator REDUCE to declarator\n",(yyval.CompilerInfo).identifier);
								 }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 439 "c.y"
    {
	                                                                                                   (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                                                                   fprintf(yyout,"'%s' => IDENTIFIER REDUCE to direct_declarator\n",(yyval.CompilerInfo).identifier);
																									  }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 443 "c.y"
    {fprintf(yyout,"OPENPAREN_OP declarator CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 444 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 445 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 446 "c.y"
    {
	                                                                                                   (yyval.CompilerInfo) = (yyvsp[(1) - (4)].CompilerInfo);
	                                                                                                   (yyval.CompilerInfo).expression = (yyvsp[(3) - (4)].CompilerInfo).expression;
	                                                                                                   fprintf(yyout,"direct_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");
																									  }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 451 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP STATIC type_qualifier_list assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 452 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list STATIC assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 453 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list TIMES_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 454 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 455 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 456 "c.y"
    {fprintf(yyout,"direct_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 457 "c.y"
    {fprintf(yyout,"direct_declarator OPENPAREN_OP identifier_list CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 458 "c.y"
    {fprintf(yyout,"direct_declarator OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 462 "c.y"
    {fprintf(yyout,"TIMES_OP REDUCE to pointer\n");}
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 463 "c.y"
    {fprintf(yyout,"TIMES_OP type_qualifier_list REDUCE to pointer\n");}
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 464 "c.y"
    {fprintf(yyout,"TIMES_OP pointer REDUCE to pointer\n");}
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 465 "c.y"
    {fprintf(yyout,"TIMES_OP type_qualifier_list pointer REDUCE to pointer\n");}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 469 "c.y"
    {fprintf(yyout,"type_qualifier REDUCE to type_qualifier_list\n");}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 470 "c.y"
    {fprintf(yyout,"type_qualifier_list type_qualifier REDUCE to type_qualifier_list\n");}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 475 "c.y"
    {fprintf(yyout,"parameter_list REDUCE to parameter_type_list\n");}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 476 "c.y"
    {fprintf(yyout,"parameter_list COMMA_OP ELLIPSIS REDUCE to parameter_type_list\n");}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 480 "c.y"
    {fprintf(yyout,"parameter_declaration REDUCE to parameter_list\n");}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 481 "c.y"
    {fprintf(yyout,"parameter_list COMMA_OP parameter_declaration REDUCE to parameter_list\n");}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 485 "c.y"
    {fprintf(yyout,"declaration_specifiers declarator REDUCE to parameter_declaration\n");}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 486 "c.y"
    {fprintf(yyout,"declaration_specifiers abstract_declarator REDUCE to parameter_declaration\n");}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 487 "c.y"
    {fprintf(yyout,"declaration_specifiers REDUCE to parameter_declaration\n");}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 491 "c.y"
    {fprintf(yyout,"IDENTIFIER REDUCE to identifier_list\n");}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 492 "c.y"
    {fprintf(yyout,"identifier_list COMMA_OP IDENTIFIER REDUCE to identifier_list\n");}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 496 "c.y"
    {fprintf(yyout,"specifier_qualifier_list REDUCE to type_name\n");}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 497 "c.y"
    {fprintf(yyout,"specifier_qualifier_list abstract_declarator REDUCE to type_name\n");}
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 501 "c.y"
    {fprintf(yyout,"pointer REDUCE to abstract_declarator\n");}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 502 "c.y"
    {fprintf(yyout,"direct_abstract_declarator REDUCE to abstract_declarator\n");}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 503 "c.y"
    {fprintf(yyout,"pointer direct_abstract_declarator REDUCE to abstract_declarator\n");}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 507 "c.y"
    {fprintf(yyout,"OPENPAREN_OP abstract_declarator CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 508 "c.y"
    {fprintf(yyout,"OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 509 "c.y"
    {fprintf(yyout,"OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 510 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 511 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 512 "c.y"
    {fprintf(yyout,"OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 513 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 514 "c.y"
    {fprintf(yyout,"OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 515 "c.y"
    {fprintf(yyout,"OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 516 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 517 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 521 "c.y"
    {fprintf(yyout,"assignment_expression REDUCE to initializer\n");}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 522 "c.y"
    {fprintf(yyout,"OCURLY_OP initializer_list CCURLY_OP REDUCE to initializer\n");}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 523 "c.y"
    {fprintf(yyout,"OCURLY_OP initializer_list COMMA_OP CCURLY_OP REDUCE to initializer\n");}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 527 "c.y"
    {fprintf(yyout,"initializer REDUCE to initializer_list\n");}
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 528 "c.y"
    {fprintf(yyout,"designation initializer REDUCE to initializer_list\n");}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 529 "c.y"
    {fprintf(yyout,"initializer_list COMMA_OP initializer REDUCE to initializer_list\n");}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 530 "c.y"
    {fprintf(yyout,"initializer_list COMMA_OP designation initializer REDUCE to initializer_list\n");}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 534 "c.y"
    {fprintf(yyout,"designator_list EQUAL_OP REDUCE to designation\n");}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 538 "c.y"
    {fprintf(yyout,"designator REDUCE to designator_list\n");}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 539 "c.y"
    {fprintf(yyout,"designator_list designator EQUAL_OP REDUCE to designator_list\n");}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 543 "c.y"
    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 544 "c.y"
    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 548 "c.y"
    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 549 "c.y"
    {fprintf(yyout,"compound_statement REDUCE to statement\n");}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 550 "c.y"
    {fprintf(yyout,"expression_statement REDUCE to statement\n");}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 551 "c.y"
    {fprintf(yyout,"selection_statement REDUCE to statement\n");}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 552 "c.y"
    {fprintf(yyout,"iteration_statement REDUCE to statement\n");}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 553 "c.y"
    {fprintf(yyout,"jump_statement REDUCE to statement\n");}
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 557 "c.y"
    {fprintf(yyout,"IDENTIFIER COLON_OP statement REDUCE to labeled_statement\n");}
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 558 "c.y"
    {fprintf(yyout,"CASE constant_expression COLON_OP statement REDUCE to labeled_statement\n");}
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 559 "c.y"
    {fprintf(yyout,"DEFAULT COLON_OP statement REDUCE to labeled_statement\n");}
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 563 "c.y"
    {fprintf(yyout,"OCURLY_OP CCURLY_OP REDUCE to compound_statement\n");}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 564 "c.y"
    {fprintf(yyout,"OCURLY_OP block_item_list CCURLY_OP REDUCE to compound_statement\n");}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 568 "c.y"
    {fprintf(yyout,"block_item REDUCE to block_item_list\n");}
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 569 "c.y"
    {fprintf(yyout,"block_item_list block_item REDUCE to block_item_list\n");}
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 573 "c.y"
    {fprintf(yyout,"declaration REDUCE to block_item\n");}
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 574 "c.y"
    {fprintf(yyout,"statement REDUCE to block_item\n");}
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 578 "c.y"
    {fprintf(yyout,"SEMI_OP REDUCE to expression_statement\n");}
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 579 "c.y"
    {fprintf(yyout,"expression SEMI_OP REDUCE to expression_statement\n");}
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 583 "c.y"
    {fprintf(yyout,"IF OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to selection_statement\n");}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 584 "c.y"
    {fprintf(yyout,"IF OPENPAREN_OP expression CLOSEPAREN_OP statement ELSE statement REDUCE to selection_statement\n");}
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 585 "c.y"
    {fprintf(yyout,"SWITCH OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to selection_statement\n");}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 589 "c.y"
    {fprintf(yyout,"WHILE OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 590 "c.y"
    {fprintf(yyout,"DO statement WHILE OPENPAREN_OP expression CLOSEPAREN_OP SEMI_OP REDUCE to iteration_statement\n");}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 591 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP expression_statement expression_statement CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 592 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP expression_statement expression_statement expression CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 593 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP declaration expression_statement CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 594 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP declaration expression_statement expression CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 598 "c.y"
    {fprintf(yyout,"GOTO IDENTIFIER SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 599 "c.y"
    {fprintf(yyout,"CONTINUE SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 600 "c.y"
    {fprintf(yyout,"BREAK SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 601 "c.y"
    {fprintf(yyout,"RETURN SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 602 "c.y"
    {fprintf(yyout,"RETURN expression SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 606 "c.y"
    {
                                             (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                         fprintf(yyout,"external_declaration REDUCE to translation_unit\n");
											}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 610 "c.y"
    {fprintf(yyout,"translation_unit external_declaration REDUCE to translation_unit\n");}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 614 "c.y"
    {
                           (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
						   (yyval.CompilerInfo).declarationType = DECLARATION_FUNCTION;
	                       fprintf(yyout,"function_definition REDUCE to external_declaration\n");
						  }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 619 "c.y"
    {
                           (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
						   (yyval.CompilerInfo).declarationType = DECLARATION_VARIABLE;
                           (yyval.CompilerInfo).sign = (yyvsp[(1) - (1)].CompilerInfo).sign;
                           (yyval.CompilerInfo).type = (yyvsp[(1) - (1)].CompilerInfo).type;
                           (yyval.CompilerInfo).storage = (yyvsp[(1) - (1)].CompilerInfo).storage;
                           (yyval.CompilerInfo).identifier = (yyvsp[(1) - (1)].CompilerInfo).identifier;															 
                           (yyval.CompilerInfo).expression = (yyvsp[(1) - (1)].CompilerInfo).expression;
						   if ((yyval.CompilerInfo).expression==NULL)
	                         fprintf(yyout,"'%d %d %d %s' => declaration REDUCE to external_declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
						   else
	                         fprintf(yyout,"'%d %d %d %s <Array>' => declaration REDUCE to external_declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
						  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 635 "c.y"
    {fprintf(yyout,"declaration_specifiers declarator declaration_list compound_statement REDUCE to function_definition\n");}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 636 "c.y"
    {fprintf(yyout,"declaration_specifiers declarator compound_statement REDUCE to function_definition\n");}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 640 "c.y"
    {fprintf(yyout,"declaration REDUCE to declaration_list\n");}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 641 "c.y"
    {fprintf(yyout,"declaration_list declaration REDUCE to declaration_list\n");}
    break;


/* Line 1792 of yacc.c  */
#line 3659 "c.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 645 "c.y"


extern char yytext[];
extern int column;

int initializeSyntacticAnalysis(char * fileOutput) {
 int error; 
   
 yyout = fopen(fileOutput, "w");

 num_errors = 0; 
 if (yyout == NULL) { 
  error = EXIT_FAILURE; 
 } else { 
  error = EXIT_SUCCESS; 
 }
 return error;
}

int symanticAnalysis() {
 int error;
   
 if (yyparse() == 0){
  error =  EXIT_SUCCESS;
 } else {
  error =  EXIT_FAILURE;
 }
 return error;
}


int endSyntacticAnalysis() {
 int error;
   
 error = fclose(yyout);
   
 if (num_errors > 0) {
  fprintf(stdout, "\n\n\t-----------------------------------------------------");
  fprintf(stdout, "\n\t\t[ ERR ] Compiled with %d error/s\n", num_errors);
  fprintf(stdout, "\t-----------------------------------------------------\n\n");
 }
 else {
  fprintf(stdout, "\n\n\t-----------------------------------------------------");
  fprintf(stdout, "\n\t\t[ OK ] Compilation generated successfully\n"); 
  fprintf(stdout, "\t-----------------------------------------------------\n\n");
 }
 if (error == 0){
  error = EXIT_SUCCESS; 
 } else { 
  error = EXIT_FAILURE;
 }
 return error; 
}

int main(int argc, char *argv[]) {
 if (argc == 3) {
  if (initializeLexicalAnalysis(argv[1]) == EXIT_SUCCESS) {
   if (initializeSyntacticAnalysis(argv[2]) == EXIT_SUCCESS) {
    symanticAnalysis();
    endLexicalAnalysis(); 
    endSyntacticAnalysis();
   } else {
    printf("\n\n###########################################################\n");
    printf("###\t\t\t\t\t\t\t###\n");
    printf("###\t[ ERR ] El fitxers de sortida %s no s'han creat\t###\n", argv[2]);
    printf("###\t\t\t\t\t\t\t###\n");      
    printf("###########################################################\n\n");       
   }
  } else {
   printf("\n\n###########################################################\n");
   printf("###\t\t\t\t\t\t\t###\n");
   printf("###\t[ ERR ] El fitxer d'entrada %s no existeix\t###\n", argv[1]);
   printf("###\t\t\t\t\t\t\t###\n");      
   printf("###########################################################\n\n");       
  }
 } else {
  printf("\n\n###########################################################################\n");
  printf("###\t\t\t\t\t\t\t\t\t###\n");
  printf("###\t[ USE ] %s [ F_IN ] [ F_OUT ]      \t\t\t###\n", argv[0]);
  printf("###\t[ EX  ] %s input.txt output.txt\t\t\t###\n", argv[0]);
  printf("###\t\t\t\t\t\t\t\t\t###\n");      
  printf("###########################################################################\n\n");
 }
}

void yyerror(char * explanation){
 fprintf(stderr, "Parse error: %s\n", explanation);
 exit(1);
}