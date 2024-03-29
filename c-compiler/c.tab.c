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

/* Line 371 of yacc.c  */
#line 76 "c.tab.c"

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
# define YYERROR_VERBOSE 1
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
     LONGLONG = 318,
     SIGNED = 319,
     UNSIGNED = 320,
     FLOAT = 321,
     DOUBLE = 322,
     CONST = 323,
     VOLATILE = 324,
     VOID = 325,
     SIZEOF = 326,
     BOOL = 327,
     COMPLEX = 328,
     IMAGINARY = 329,
     STRUCT = 330,
     UNION = 331,
     ENUM = 332,
     ELLIPSIS = 333,
     CASE = 334,
     DEFAULT = 335,
     IF = 336,
     ELSE = 337,
     SWITCH = 338,
     WHILE = 339,
     DO = 340,
     FOR = 341,
     GOTO = 342,
     CONTINUE = 343,
     BREAK = 344,
     RETURN = 345
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 9 "c.y"
 	   
    struct CompilerInfo {   
       char *identifier;     
       VariableType type;
	   VariableSignType sign;
	   StorageType storage;
	   DeclarationType declarationType;
	   Boolean constant; 

       void *noDefinition;	
    } CompilerInfo;


/* Line 387 of yacc.c  */
#line 223 "c.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
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
#line 264 "c.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1575

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNRULES -- Number of states.  */
#define YYNSTATES  401

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

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
      85,    86,    87,    88,    89,    90
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
     313,   315,   317,   319,   325,   330,   333,   335,   337,   339,
     342,   346,   349,   351,   354,   356,   358,   362,   364,   367,
     371,   376,   382,   388,   395,   398,   400,   404,   406,   410,
     412,   414,   416,   418,   421,   423,   425,   429,   435,   440,
     445,   452,   459,   465,   470,   474,   479,   484,   488,   490,
     493,   496,   500,   502,   505,   507,   511,   513,   517,   520,
     523,   525,   527,   531,   533,   536,   538,   540,   543,   547,
     550,   554,   558,   563,   567,   572,   575,   579,   583,   588,
     590,   594,   599,   601,   604,   608,   613,   616,   618,   621,
     625,   628,   630,   632,   634,   636,   638,   640,   644,   649,
     653,   656,   660,   662,   665,   667,   669,   671,   674,   680,
     688,   694,   700,   708,   715,   723,   730,   738,   742,   745,
     748,   751,   755,   757,   760,   762,   764,   769,   773,   775
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     156,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    21,
     111,    22,    -1,    92,    -1,    93,    23,   111,    24,    -1,
      93,    21,    22,    -1,    93,    21,    94,    22,    -1,    93,
      25,     3,    -1,    93,     6,     3,    -1,    93,     7,    -1,
      93,     8,    -1,    21,   139,    22,    16,   143,    17,    -1,
      21,   139,    22,    16,   143,    18,    17,    -1,   109,    -1,
      94,    18,   109,    -1,    93,    -1,     7,    95,    -1,     8,
      95,    -1,    96,    97,    -1,    71,    95,    -1,    71,    21,
     139,    22,    -1,    51,    -1,    47,    -1,    45,    -1,    46,
      -1,    29,    -1,    26,    -1,    95,    -1,    21,   139,    22,
      97,    -1,    97,    -1,    98,    47,    97,    -1,    98,    48,
      97,    -1,    98,    49,    97,    -1,    98,    -1,    99,    45,
      98,    -1,    99,    46,    98,    -1,    99,    -1,   100,     9,
      99,    -1,   100,    10,    99,    -1,   100,    -1,   101,    27,
     100,    -1,   101,    28,   100,    -1,   101,    11,   100,    -1,
     101,    12,   100,    -1,   101,    -1,   102,    13,   101,    -1,
     102,    14,   101,    -1,   102,    -1,   103,    51,   102,    -1,
     103,    -1,   104,    30,   103,    -1,   104,    -1,   105,    50,
     104,    -1,   105,    -1,   106,    32,   105,    -1,   106,    -1,
     107,    33,   106,    -1,   107,    -1,   107,    31,   111,    19,
     108,    -1,   108,    -1,    95,   110,   109,    -1,    20,    -1,
      34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
     109,    -1,   111,    18,   109,    -1,   108,    -1,   114,    15,
      -1,   114,   115,    15,    -1,   117,    -1,   117,   114,    -1,
     118,    -1,   118,   114,    -1,   129,    -1,   129,   114,    -1,
     130,    -1,   130,   114,    -1,   116,    -1,   115,    18,   116,
      -1,   131,    -1,   131,    20,   142,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    56,    -1,    70,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,    66,
      -1,    67,    -1,    64,    -1,    65,    -1,    72,    -1,    73,
      -1,    74,    -1,   119,    -1,   126,    -1,    44,    -1,   120,
       3,    16,   121,    17,    -1,   120,    16,   121,    17,    -1,
     120,     3,    -1,    75,    -1,    76,    -1,   122,    -1,   121,
     122,    -1,   123,   124,    15,    -1,   118,   123,    -1,   118,
      -1,   129,   123,    -1,   129,    -1,   125,    -1,   124,    18,
     125,    -1,   131,    -1,    19,   112,    -1,   131,    19,   112,
      -1,    77,    16,   127,    17,    -1,    77,     3,    16,   127,
      17,    -1,    77,    16,   127,    18,    17,    -1,    77,     3,
      16,   127,    18,    17,    -1,    77,     3,    -1,   128,    -1,
     127,    18,   128,    -1,     3,    -1,     3,    20,   112,    -1,
      68,    -1,    58,    -1,    69,    -1,    57,    -1,   133,   132,
      -1,   132,    -1,     3,    -1,    21,   131,    22,    -1,   132,
      23,   134,   109,    24,    -1,   132,    23,   134,    24,    -1,
     132,    23,   109,    24,    -1,   132,    23,    54,   134,   109,
      24,    -1,   132,    23,   134,    54,   109,    24,    -1,   132,
      23,   134,    47,    24,    -1,   132,    23,    47,    24,    -1,
     132,    23,    24,    -1,   132,    21,   135,    22,    -1,   132,
      21,   138,    22,    -1,   132,    21,    22,    -1,    47,    -1,
      47,   134,    -1,    47,   133,    -1,    47,   134,   133,    -1,
     129,    -1,   134,   129,    -1,   136,    -1,   136,    18,    78,
      -1,   137,    -1,   136,    18,   137,    -1,   114,   131,    -1,
     114,   140,    -1,   114,    -1,     3,    -1,   138,    18,     3,
      -1,   123,    -1,   123,   140,    -1,   133,    -1,   141,    -1,
     133,   141,    -1,    21,   140,    22,    -1,    23,    24,    -1,
      23,   109,    24,    -1,   141,    23,    24,    -1,   141,    23,
     109,    24,    -1,    23,    47,    24,    -1,   141,    23,    47,
      24,    -1,    21,    22,    -1,    21,   135,    22,    -1,   141,
      21,    22,    -1,   141,    21,   135,    22,    -1,   109,    -1,
      16,   143,    17,    -1,    16,   143,    18,    17,    -1,   142,
      -1,   144,   142,    -1,   143,    18,   142,    -1,   143,    18,
     144,   142,    -1,   145,    20,    -1,   146,    -1,   145,   146,
      -1,    23,   112,    24,    -1,    25,     3,    -1,   148,    -1,
     149,    -1,   152,    -1,   153,    -1,   154,    -1,   155,    -1,
       3,    19,   147,    -1,    79,   112,    19,   147,    -1,    80,
      19,   147,    -1,    16,    17,    -1,    16,   150,    17,    -1,
     151,    -1,   150,   151,    -1,   113,    -1,   147,    -1,    15,
      -1,   111,    15,    -1,    81,    21,   111,    22,   147,    -1,
      81,    21,   111,    22,   147,    82,   147,    -1,    83,    21,
     111,    22,   147,    -1,    84,    21,   111,    22,   147,    -1,
      85,   147,    84,    21,   111,    22,    15,    -1,    86,    21,
     152,   152,    22,   147,    -1,    86,    21,   152,   152,   111,
      22,   147,    -1,    86,    21,   113,   152,    22,   147,    -1,
      86,    21,   113,   152,   111,    22,   147,    -1,    87,     3,
      15,    -1,    88,    15,    -1,    89,    15,    -1,    90,    15,
      -1,    90,   111,    15,    -1,   157,    -1,   156,   157,    -1,
     158,    -1,   113,    -1,   114,   131,   159,   149,    -1,   114,
     131,   149,    -1,   113,    -1,   159,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    71,    78,    85,    92,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   108,   109,   113,   117,
     118,   119,   120,   121,   125,   126,   127,   128,   129,   130,
     134,   138,   142,   146,   147,   148,   152,   156,   157,   161,
     165,   166,   170,   174,   175,   176,   177,   181,   185,   186,
     190,   194,   198,   202,   206,   210,   214,   218,   222,   226,
     230,   234,   238,   242,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   260,   264,   268,   272,   273,
     283,   284,   290,   294,   299,   300,   301,   302,   306,   310,
     314,   318,   322,   323,   324,   325,   326,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   349,   350,   351,   355,   356,   360,   361,
     365,   369,   370,   371,   372,   376,   377,   381,   382,   383,
     387,   388,   389,   390,   391,   395,   396,   400,   401,   405,
     406,   407,   411,   415,   416,   424,   428,   429,   430,   431,
     435,   436,   437,   438,   439,   440,   441,   442,   449,   450,
     451,   452,   456,   457,   462,   463,   467,   468,   472,   473,
     474,   478,   479,   483,   484,   488,   489,   490,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   508,
     509,   510,   514,   515,   516,   517,   521,   525,   526,   530,
     531,   535,   536,   537,   538,   539,   540,   547,   548,   549,
     553,   554,   561,   565,   569,   570,   577,   578,   582,   583,
     584,   588,   589,   590,   591,   592,   593,   597,   598,   599,
     600,   601,   608,   613,   620,   625,   637,   638,   649,   650
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "INLINE", "RESTRICT", "CHAR", "SHORT", "INT", "LONG", "LONGLONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "SIZEOF", "BOOL", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     122,   123,   123,   123,   123,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   143,   143,   143,   143,   144,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     153,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159
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
       1,     1,     1,     5,     4,     2,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     2,     3,
       4,     5,     5,     6,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     4,     4,
       6,     6,     5,     4,     3,     4,     4,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     2,     3,     4,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     2,     1,     1,     1,     2,     5,     7,
       5,     5,     7,     6,     7,     6,     7,     3,     2,     2,
       2,     3,     1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   112,    92,    93,    94,    95,    96,   142,   140,    98,
      99,   100,   101,   102,   105,   106,   103,   104,   139,   141,
      97,   107,   108,   109,   116,   117,     0,   235,     0,    80,
      82,   110,     0,   111,    84,    86,     0,   232,   234,   134,
       0,   145,    78,     0,   158,     0,    88,    90,   144,     0,
      81,    83,   115,     0,    85,    87,     1,   233,     0,   137,
       0,   135,     0,   162,   160,   159,    79,     0,     0,     0,
     238,     0,   237,     0,     0,     0,   143,     0,   122,     0,
     118,     0,   124,     0,     0,   130,     0,   146,   163,   161,
      89,    90,     2,     3,     4,     0,     0,   216,   210,     0,
      29,    28,    26,    27,    25,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,    18,
      30,     0,    32,    36,    39,    42,    47,    50,    52,    54,
      56,    58,    60,    62,    75,     0,   214,   215,   201,   202,
       0,   212,   203,   204,   205,   206,     2,     0,   189,    91,
     239,   236,   171,   157,   170,     0,   164,   166,     0,   154,
      25,     0,     0,     0,     0,   121,   114,   119,     0,     0,
     125,   127,   123,   131,     0,    30,    77,   138,   132,   136,
       0,     0,    19,    20,     0,   173,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,     0,   228,   229,   230,
       0,     0,    12,    13,     0,     0,     0,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,   211,   213,     0,     0,   192,     0,     0,     0,   197,
       0,     0,   168,   175,   169,   176,   155,     0,     0,   156,
     153,     0,   149,   148,    25,     0,     0,   113,   128,   120,
       0,     0,   133,   207,     0,     5,     0,   175,   174,     0,
       0,     0,   209,     0,     0,     0,     0,     0,     0,   227,
     231,    11,     8,     0,    16,     0,    10,    63,    33,    34,
      35,    37,    38,    40,    41,    45,    46,    43,    44,    48,
      49,    51,    53,    55,    57,     0,    59,    76,     0,   200,
     190,     0,   193,   196,   198,   185,     0,     0,   179,    25,
       0,   177,     0,     0,   165,   167,   172,     0,   152,     0,
     147,   126,   129,     0,     0,    31,    23,   208,     0,     0,
       0,     0,     0,     0,     0,     9,     7,     0,   199,   191,
     194,     0,   186,   178,   183,   180,   187,     0,   181,    25,
       0,   150,   151,     0,   218,   220,   221,     0,     0,     0,
       0,     0,    17,    61,   195,   188,   184,   182,    14,     0,
       0,     0,   225,     0,   223,     0,    15,   219,   222,   226,
     224
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   118,   119,   293,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   218,
     135,   177,    27,    71,    45,    46,    29,    30,    31,    32,
      79,    80,    81,   169,   170,    33,    60,    61,    34,    35,
      62,    48,    49,    65,   326,   156,   157,   158,   186,   327,
     255,   245,   246,   247,   248,   249,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    36,    37,    38,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -300
static const yytype_int16 yypact[] =
{
    1471,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,    44,  -300,    10,  1471,
    1471,  -300,    95,  -300,  1471,  1471,   289,  -300,  -300,     8,
      63,  -300,  -300,    37,    65,    84,  -300,  1295,    87,    58,
    -300,  -300,    75,  1498,  -300,  -300,  -300,  -300,    63,   110,
     151,  -300,   114,  -300,  -300,    65,  -300,    37,   365,  1013,
    -300,    10,  -300,  1322,   767,   842,    87,  1498,  1498,   733,
    -300,    23,  1498,   214,  1221,  -300,    52,  -300,  -300,  -300,
    -300,   137,   144,  -300,  -300,  1248,  1248,  -300,  -300,   665,
    -300,  -300,  -300,  -300,  -300,  -300,  1275,  1221,   157,   178,
     200,   217,   541,   221,   193,   220,   234,  1020,  -300,   133,
     275,  1221,  -300,   181,   188,   227,   117,   231,   201,   228,
     215,   240,    91,  -300,  -300,   132,  -300,  -300,  -300,  -300,
     453,  -300,  -300,  -300,  -300,  -300,  -300,   959,  -300,  -300,
    -300,  -300,  -300,  -300,    20,   258,   267,  -300,   113,  -300,
     264,    24,   266,   873,  1356,  -300,  -300,  -300,  1221,   173,
    -300,   273,  -300,  -300,    60,  -300,  -300,  -300,  -300,  -300,
     541,   665,  -300,  -300,   124,    25,   274,   665,  -300,   278,
     541,  1221,  1221,  1221,   216,   590,   283,  -300,  -300,  -300,
     175,   296,  -300,  -300,  1071,  1221,   299,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  1221,  -300,
    1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,
    1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,  -300,
    1221,  -300,  -300,  1221,   303,  -300,   229,  1013,   142,  -300,
     699,  1078,  -300,    62,  -300,   174,  -300,  1444,   304,  -300,
    -300,   986,  -300,  -300,   295,  1221,   300,  -300,  -300,  -300,
      23,  1221,  -300,  -300,   298,  -300,  1390,   199,  -300,  1105,
     301,   541,  -300,   131,   148,   156,   305,  1132,  1132,  -300,
    -300,  -300,  -300,   159,  -300,    76,  -300,  -300,  -300,  -300,
    -300,   181,   181,   188,   188,   227,   227,   227,   227,   117,
     117,   231,   201,   228,   215,   237,   240,  -300,   306,  -300,
    -300,   900,  -300,  -300,  -300,  -300,   307,   309,  -300,   310,
     311,   174,  1417,  1160,  -300,  -300,  -300,   312,  -300,   314,
    -300,  -300,  -300,   323,   959,  -300,   323,  -300,   541,   541,
     541,  1221,  1187,  1214,  1221,  -300,  -300,  1221,  -300,  -300,
    -300,  1013,  -300,  -300,  -300,  -300,  -300,   318,  -300,   336,
     343,  -300,  -300,   243,   245,  -300,  -300,   164,   541,   165,
     541,   167,  -300,  -300,  -300,  -300,  -300,  -300,  -300,   932,
     541,   313,  -300,   541,  -300,   541,  -300,  -300,  -300,  -300,
    -300
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,  -300,  -300,   -20,  -300,  -104,    40,    42,    -3,
      51,   138,   140,   141,   139,   145,  -300,   -79,   -67,  -300,
     -78,  -100,   -35,     0,  -300,   317,  -300,   -26,  -300,  -300,
     302,   -69,   -62,  -300,   107,  -300,   320,   -77,   226,  -300,
     -22,   -34,   -33,   -57,   -70,  -300,   128,  -300,   -61,  -135,
    -199,   -68,    48,  -299,  -300,   147,  -109,  -300,    15,  -300,
     248,  -181,  -300,  -300,  -300,  -300,   357,  -300,  -300
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      28,   149,   148,   194,   155,   176,    47,   189,   162,   179,
     167,    64,    70,    41,   288,    76,   165,   219,   163,   254,
     172,   184,   361,    41,    58,    42,    41,    78,   176,    50,
      51,    43,    89,   136,    54,    55,    28,   185,   150,   200,
      41,   250,   168,   251,    43,    91,   276,    39,   251,    91,
     278,    78,    78,    78,   331,    59,    78,    44,    43,   171,
      40,    41,    72,    59,   175,    41,    59,    44,   268,   178,
      44,   273,    44,    78,   154,   182,   183,   272,   331,    43,
     148,   282,     8,   250,    44,   251,   188,   175,   151,   176,
     361,    77,    18,    19,   240,   167,   266,   179,    52,    66,
     356,   175,    67,   184,   261,   136,   352,   353,    74,   184,
      75,    53,    44,   283,   284,   285,   298,   299,   300,   185,
     274,   253,   237,     8,   238,   185,   280,   295,   227,   228,
      84,   258,   252,    18,    19,   259,    87,   294,    78,   201,
     202,   203,   240,   318,   229,   230,   275,   239,   175,   240,
     240,   297,   277,   348,   204,    78,   205,    69,   206,   315,
     287,    78,   323,   180,   176,   243,   240,   244,    85,    86,
     349,   342,   347,   317,   240,   345,   190,   354,   350,   322,
     148,   355,   240,   240,   330,   240,   391,   393,   269,   395,
     290,   270,   176,   240,   337,   332,   196,   333,   339,   191,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   253,   175,    76,
     276,   192,   251,   175,   305,   306,   307,   308,   220,   221,
     222,   173,   174,   223,   224,   197,   225,   226,   193,   374,
     375,   376,   195,   277,   231,   232,   320,   321,   171,   198,
     154,   175,   233,   360,   148,   240,   357,   154,   234,   175,
     388,   389,   367,   301,   302,   235,   370,   303,   304,   392,
      63,   394,   236,   377,   379,   381,   154,   148,   383,    82,
     256,   397,   309,   310,   399,   257,   400,   382,   260,    56,
     262,    88,   271,   384,   148,   207,   279,   281,   289,   291,
     286,    63,   296,    82,    82,    82,   319,   336,    82,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   338,
     343,   360,   148,   346,   340,    82,   351,   390,   398,   362,
     358,   363,   154,     1,   364,   365,   371,   175,   372,   344,
     385,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     386,    21,    22,    23,    24,    25,    26,   387,    92,    93,
      94,   311,    95,    96,   312,   314,   313,   341,    83,   164,
      97,    68,    98,   316,    90,   335,    99,    63,   242,    88,
      82,   100,   373,    57,   101,   324,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     1,
     102,   103,   104,    82,     0,     0,   105,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   106,    21,    22,    23,
      24,    25,    26,     0,   107,   108,   109,     0,   110,   111,
     112,   113,   114,   115,   116,   117,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,    97,    68,
     241,     0,     0,     0,    99,     0,     0,     0,     0,   100,
       0,     0,   101,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   102,   103,
     104,     0,     0,     0,   105,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   106,    21,    22,    23,    24,    25,
      26,     0,   107,   108,   109,     0,   110,   111,   112,   113,
     114,   115,   116,   117,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,    97,    68,     0,     0,
       0,     0,    99,     0,     0,     0,     0,   100,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,     0,
       0,     0,   105,   146,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,    99,   106,     0,     0,     0,   100,     0,     0,   101,
     107,   108,   109,     0,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     1,   102,   103,   104,     0,     0,
       0,   105,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   106,    21,    22,    23,    24,    25,    26,   146,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,   100,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,     0,     0,     0,     1,
     102,   103,   104,     0,     0,     0,   105,     0,     0,     0,
     250,   325,   251,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   106,    21,    22,    23,
      24,    25,    26,     1,     0,     0,    44,     0,     0,     0,
     166,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     152,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,    25,    26,   146,    93,    94,     0,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,   159,     0,   100,     0,
       0,   101,     0,     0,     0,     0,   146,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,   102,   103,   160,
       0,     0,     0,   105,    99,     0,   161,   263,     0,   100,
       8,     0,   101,   146,    93,    94,     0,    95,    96,     0,
      18,    19,     0,   106,     0,     0,   147,   359,   102,   103,
     264,    99,     0,   243,   105,   244,   100,   265,     0,   101,
       0,     8,     0,     0,     0,   146,    93,    94,     0,    95,
      96,    18,    19,     0,   106,   102,   103,   104,   147,   396,
       0,   105,     0,    99,     0,   243,     0,   244,   100,     0,
       0,   101,   146,    93,    94,     0,    95,    96,     0,     0,
       0,   106,     0,     0,     0,   147,     0,   102,   103,   104,
      99,     0,   243,   105,   244,   100,     0,     0,   101,   146,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   102,   103,   104,    99,     0,     0,
     105,     0,   100,     0,     0,   101,   146,    93,    94,     0,
      95,    96,     0,   146,    93,    94,     0,    95,    96,   147,
     106,   102,   103,   104,    99,   199,     0,   105,     0,   100,
       0,    99,   101,     0,     8,     0,   100,     0,     0,   101,
       0,     0,     0,     0,    18,    19,     0,   106,   102,   103,
     104,     0,     0,     0,   105,   102,   103,   104,     0,     0,
       0,   105,     0,     0,   146,    93,    94,     0,    95,    96,
       0,   146,    93,    94,   106,    95,    96,     0,     0,     0,
       0,   106,    99,   292,     0,     0,     0,   100,     0,    99,
     101,     0,   328,     0,   100,     0,     0,   101,   146,    93,
      94,     0,    95,    96,     0,     0,   102,   103,   104,     0,
       0,   344,   105,   102,   103,   329,    99,     0,     0,   105,
       0,   100,     0,     0,   101,   146,    93,    94,     0,    95,
      96,     0,   106,     0,     0,     0,     0,    97,     0,   106,
     102,   103,   104,    99,     0,     0,   105,     0,   100,     0,
       0,   101,     0,   146,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,   106,   102,   103,   104,
       0,    99,     0,   105,   368,     0,   100,     0,     0,   101,
     146,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,   106,     0,   102,   103,   369,    99,   378,
       0,   105,     0,   100,     0,     0,   101,   146,    93,    94,
       0,    95,    96,     0,   146,    93,    94,     0,    95,    96,
       0,   106,   102,   103,   104,    99,   380,     0,   105,     0,
     100,     0,    99,   101,     0,     0,     0,   100,     0,     0,
     101,   146,    93,    94,     0,    95,    96,     0,   106,   102,
     103,   104,     0,     0,     0,   105,   102,   103,   104,   181,
       0,     0,   105,     0,   100,     0,     0,   101,   146,    93,
      94,     0,    95,    96,     0,   106,     0,     0,     0,     0,
       0,     0,   106,   102,   103,   104,   187,     0,     0,   105,
       0,   100,     0,     0,   101,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,    69,     0,     0,     0,   106,
     102,   103,   104,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,     1,
       0,     0,     0,     0,     0,     0,   106,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     1,    21,    22,    23,
      24,    25,    26,   267,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,   325,   251,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,    25,    26,     1,     0,     0,    44,     0,   366,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     1,    21,    22,    23,    24,    25,    26,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     1,    21,
      22,    23,    24,    25,    26,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     1,    21,    22,    23,    24,
      25,    26,   334,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     1,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
      21,    22,    23,    24,    25,    26
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-300)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    69,    69,   112,    74,    84,    28,   107,    75,    86,
      79,    44,    47,     3,   195,    49,    78,   121,    75,   154,
      82,    99,   321,     3,    16,    15,     3,    53,   107,    29,
      30,    21,    65,    68,    34,    35,    36,    99,    73,   117,
       3,    21,    19,    23,    21,    67,    21,     3,    23,    71,
     185,    77,    78,    79,   253,     3,    82,    47,    21,    81,
      16,     3,    47,     3,    84,     3,     3,    47,   168,    17,
      47,   180,    47,    99,    74,    95,    96,    17,   277,    21,
     147,   190,    58,    21,    47,    23,   106,   107,    73,   168,
     389,    16,    68,    69,    18,   164,   163,   174,     3,    15,
      24,   121,    18,   181,   161,   140,   287,   288,    21,   187,
      23,    16,    47,   191,   192,   193,   220,   221,   222,   181,
     181,   154,    31,    58,    33,   187,   187,   205,    11,    12,
      20,    18,   154,    68,    69,    22,    22,   204,   164,     6,
       7,     8,    18,   243,    27,    28,    22,    15,   168,    18,
      18,   218,   185,    22,    21,   181,    23,    20,    25,   237,
     195,   187,    20,    19,   243,    23,    18,    25,    17,    18,
      22,   271,   281,   240,    18,   279,    19,    18,    22,   247,
     247,    22,    18,    18,   251,    18,    22,    22,    15,    22,
      15,    18,   271,    18,   261,    21,     3,    23,   265,    21,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   250,   238,   253,
      21,    21,    23,   243,   227,   228,   229,   230,    47,    48,
      49,    17,    18,    45,    46,    15,     9,    10,    21,   348,
     349,   350,    21,   276,    13,    14,    17,    18,   270,    15,
     250,   271,    51,   321,   321,    18,    19,   257,    30,   279,
      17,    18,   332,   223,   224,    50,   333,   225,   226,   378,
      44,   380,    32,   351,   352,   353,   276,   344,   357,    53,
      22,   390,   231,   232,   393,    18,   395,   354,    24,     0,
      24,    65,    19,   361,   361,    20,    22,    19,    15,     3,
      84,    75,     3,    77,    78,    79,     3,     3,    82,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    24,
      22,   389,   389,    22,    24,    99,    21,    82,    15,    22,
      24,    22,   332,    44,    24,    24,    24,   357,    24,    16,
      22,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      24,    72,    73,    74,    75,    76,    77,    24,     3,     4,
       5,   233,     7,     8,   234,   236,   235,   270,    58,    77,
      15,    16,    17,   238,    67,   257,    21,   161,   140,   163,
     164,    26,   344,    36,    29,   248,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    44,
      45,    46,    47,   187,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     3,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      -1,    -1,    51,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    21,    71,    -1,    -1,    -1,    26,    -1,    -1,    29,
      79,    80,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    44,    45,    46,    47,    -1,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,     3,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      21,    22,    23,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    44,    -1,    -1,    47,    -1,    -1,    -1,
      17,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       3,    72,    73,    74,    75,    76,    77,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,     3,     4,     5,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    51,    21,    -1,    54,    24,    -1,    26,
      58,    -1,    29,     3,     4,     5,    -1,     7,     8,    -1,
      68,    69,    -1,    71,    -1,    -1,    16,    17,    45,    46,
      47,    21,    -1,    23,    51,    25,    26,    54,    -1,    29,
      -1,    58,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,    68,    69,    -1,    71,    45,    46,    47,    16,    17,
      -1,    51,    -1,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,     3,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    16,    -1,    45,    46,    47,
      21,    -1,    23,    51,    25,    26,    -1,    -1,    29,     3,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    45,    46,    47,    21,    -1,    -1,
      51,    -1,    26,    -1,    -1,    29,     3,     4,     5,    -1,
       7,     8,    -1,     3,     4,     5,    -1,     7,     8,    16,
      71,    45,    46,    47,    21,    15,    -1,    51,    -1,    26,
      -1,    21,    29,    -1,    58,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    68,    69,    -1,    71,    45,    46,
      47,    -1,    -1,    -1,    51,    45,    46,    47,    -1,    -1,
      -1,    51,    -1,    -1,     3,     4,     5,    -1,     7,     8,
      -1,     3,     4,     5,    71,     7,     8,    -1,    -1,    -1,
      -1,    71,    21,    22,    -1,    -1,    -1,    26,    -1,    21,
      29,    -1,    24,    -1,    26,    -1,    -1,    29,     3,     4,
       5,    -1,     7,     8,    -1,    -1,    45,    46,    47,    -1,
      -1,    16,    51,    45,    46,    47,    21,    -1,    -1,    51,
      -1,    26,    -1,    -1,    29,     3,     4,     5,    -1,     7,
       8,    -1,    71,    -1,    -1,    -1,    -1,    15,    -1,    71,
      45,    46,    47,    21,    -1,    -1,    51,    -1,    26,    -1,
      -1,    29,    -1,     3,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    45,    46,    47,
      -1,    21,    -1,    51,    24,    -1,    26,    -1,    -1,    29,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    45,    46,    47,    21,    22,
      -1,    51,    -1,    26,    -1,    -1,    29,     3,     4,     5,
      -1,     7,     8,    -1,     3,     4,     5,    -1,     7,     8,
      -1,    71,    45,    46,    47,    21,    22,    -1,    51,    -1,
      26,    -1,    21,    29,    -1,    -1,    -1,    26,    -1,    -1,
      29,     3,     4,     5,    -1,     7,     8,    -1,    71,    45,
      46,    47,    -1,    -1,    -1,    51,    45,    46,    47,    21,
      -1,    -1,    51,    -1,    26,    -1,    -1,    29,     3,     4,
       5,    -1,     7,     8,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    45,    46,    47,    21,    -1,    -1,    51,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    20,    -1,    -1,    -1,    71,
      45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    44,    72,    73,    74,
      75,    76,    77,    17,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    44,    -1,    -1,    47,    -1,    22,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    44,    72,    73,    74,    75,    76,    77,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    44,    72,
      73,    74,    75,    76,    77,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    44,    72,    73,    74,    75,
      76,    77,    78,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    44,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    72,    73,    74,    75,    76,    77,   113,   114,   117,
     118,   119,   120,   126,   129,   130,   156,   157,   158,     3,
      16,     3,    15,    21,    47,   115,   116,   131,   132,   133,
     114,   114,     3,    16,   114,   114,     0,   157,    16,     3,
     127,   128,   131,   129,   133,   134,    15,    18,    16,    20,
     113,   114,   149,   159,    21,    23,   132,    16,   118,   121,
     122,   123,   129,   127,    20,    17,    18,    22,   129,   133,
     116,   131,     3,     4,     5,     7,     8,    15,    17,    21,
      26,    29,    45,    46,    47,    51,    71,    79,    80,    81,
      83,    84,    85,    86,    87,    88,    89,    90,    92,    93,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   111,   113,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     3,    16,   109,   142,
     113,   149,     3,    22,   114,   135,   136,   137,   138,    24,
      47,    54,   109,   134,   121,   123,    17,   122,    19,   124,
     125,   131,   123,    17,    18,    95,   108,   112,    17,   128,
      19,    21,    95,    95,   111,   123,   139,    21,    95,   112,
      19,    21,    21,    21,   147,    21,     3,    15,    15,    15,
     111,     6,     7,     8,    21,    23,    25,    20,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   110,    97,
      47,    48,    49,    45,    46,     9,    10,    11,    12,    27,
      28,    13,    14,    51,    30,    50,    32,    31,    33,    15,
      18,    17,   151,    23,    25,   142,   143,   144,   145,   146,
      21,    23,   131,   133,   140,   141,    22,    18,    18,    22,
      24,   134,    24,    24,    47,    54,   109,    17,   112,    15,
      18,    19,    17,   147,   139,    22,    21,   133,   140,    22,
     139,    19,   147,   111,   111,   111,    84,   113,   152,    15,
      15,     3,    22,    94,   109,   111,     3,   109,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   102,   103,   104,   105,   111,   106,   109,   112,     3,
      17,    18,   142,    20,   146,    22,   135,   140,    24,    47,
     109,   141,    21,    23,    78,   137,     3,   109,    24,   109,
      24,   125,   112,    22,    16,    97,    22,   147,    22,    22,
      22,    21,   152,   152,    18,    22,    24,    19,    24,    17,
     142,   144,    22,    22,    24,    24,    22,   135,    24,    47,
     109,    24,    24,   143,   147,   147,   147,   111,    22,   111,
      22,   111,   109,   108,   142,    22,    24,    24,    17,    18,
      82,    22,   147,    22,   147,    22,    17,   147,    15,   147,
     147
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 64 "c.y"
    {
											 (yyval.CompilerInfo).identifier = (char *) malloc(strlen((yyvsp[(1) - (1)].CompilerInfo).identifier)+1);
                                             strcpy((yyval.CompilerInfo).identifier, (yyvsp[(1) - (1)].CompilerInfo).identifier);
                                             (yyval.CompilerInfo).type = TYPE_NULL;
                                             (yyval.CompilerInfo).constant = FALSE;
	                                         fprintf(yyout,"IDENTIFIER REDUCE to primary_expression\n");
											}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 71 "c.y"
    {
											 (yyval.CompilerInfo).identifier = (char *) malloc(strlen((yyvsp[(1) - (1)].CompilerInfo).identifier)+1);
                                             strcpy((yyval.CompilerInfo).identifier, (yyvsp[(1) - (1)].CompilerInfo).identifier);
                                             (yyval.CompilerInfo).type = TYPE_NULL;
                                             (yyval.CompilerInfo).constant = TRUE;
	                                         fprintf(yyout,"'%s' CONSTANT REDUCE to primary_expression\n",(yyval.CompilerInfo).identifier);
											}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 78 "c.y"
    {
											 (yyval.CompilerInfo).identifier = (char *) malloc(strlen((yyvsp[(1) - (1)].CompilerInfo).identifier)+1);
                                             strcpy((yyval.CompilerInfo).identifier, (yyvsp[(1) - (1)].CompilerInfo).identifier);
                                             (yyval.CompilerInfo).type = TYPE_NULL;
                                             (yyval.CompilerInfo).constant = TRUE;
	                                         fprintf(yyout,"'%s' STRING_LITERAL REDUCE to primary_expression\n",(yyval.CompilerInfo).identifier);
											}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 85 "c.y"
    {
                                             (yyval.CompilerInfo) = (yyvsp[(2) - (3)].CompilerInfo);
	                                         fprintf(yyout,"OPENPAREN_OP expression CLOSEPAREN_OP REDUCE to primary_expression\n");
											}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 92 "c.y"
    {
                                                                                          (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                                                      fprintf(yyout,"<EXP> primary_expression REDUCE to postfix_expression\n");
																						 }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 96 "c.y"
    {fprintf(yyout,"postfix_expression OPENBRACE_OP expression CLOSEBRACE_OP REDUCE to postfix_expression\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 97 "c.y"
    {fprintf(yyout,"postfix_expression OPENPAREN_OP CLOSEPAREN_OP REDUCE to postfix_expression\n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 98 "c.y"
    {fprintf(yyout,"postfix_expression OPENPAREN_OP argument_expression_list CLOSEPAREN_OP REDUCE to postfix_expression\n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 99 "c.y"
    {fprintf(yyout,"postfix_expression PERIOD_OP IDENTIFIER REDUCE to postfix_expression\n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 100 "c.y"
    {fprintf(yyout,"postfix_expression PTR_OP IDENTIFIER REDUCE to postfix_expression\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 101 "c.y"
    {fprintf(yyout,"postfix_expression INC_OP REDUCE to postfix_expression\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 102 "c.y"
    {fprintf(yyout,"postfix_expression DEC_OP REDUCE to postfix_expression\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 103 "c.y"
    {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list CCURLY_OP REDUCE to postfix_expression\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 104 "c.y"
    {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list COMMA_OP CCURLY_OP REDUCE to postfix_expression\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 108 "c.y"
    {fprintf(yyout,"assignment_expression REDUCE to argument_expression_list\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 109 "c.y"
    {fprintf(yyout,"argument_expression_list COMMA_OP assignment_expression REDUCE to argument_expression_list\n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 113 "c.y"
    {
                                                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                 fprintf(yyout,"<EXP> postfix_expression REDUCE to unary_expression\n");
													}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 117 "c.y"
    {fprintf(yyout,"INC_OP unary_expression REDUCE to unary_expression\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 118 "c.y"
    {fprintf(yyout,"DEC_OP unary_expression REDUCE to unary_expression\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 119 "c.y"
    {fprintf(yyout,"unary_operator cast_expression REDUCE to unary_expression\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 120 "c.y"
    {fprintf(yyout,"SIZEOF unary_expression REDUCE to unary_expression\n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 121 "c.y"
    {fprintf(yyout,"SIZEOF OPENPAREN_OP type_name CLOSEPAREN_OP REDUCE to unary_expression\n");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 125 "c.y"
    {fprintf(yyout,"BIT_AND REDUCE to unary_operator\n");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 126 "c.y"
    {fprintf(yyout,"TIMES_OP REDUCE to unary_operator\n");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 127 "c.y"
    {fprintf(yyout,"PLUS_OP REDUCE to unary_operator\n");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 128 "c.y"
    {fprintf(yyout,"MINUS_OP REDUCE to unary_operator\n");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 129 "c.y"
    {fprintf(yyout,"TILDE_OP REDUCE to unary_operator\n");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 130 "c.y"
    {fprintf(yyout,"NOT_OP REDUCE to unary_operator\n");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 134 "c.y"
    {
                                                             (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                         fprintf(yyout,"<EXP> unary_expression REDUCE to cast_expression\n");
															}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 138 "c.y"
    {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP cast_expression REDUCE to cast_expression\n");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 142 "c.y"
    {
                                                           (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                       fprintf(yyout,"<EXP> cast_expression REDUCE to multiplicative_expression\n");
														  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 146 "c.y"
    {fprintf(yyout,"multiplicative_expression TIMES_OP cast_expression REDUCE to multiplicative_expression\n");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 147 "c.y"
    {fprintf(yyout,"multiplicative_expression DIV_OP cast_expression REDUCE to multiplicative_expression\n");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 148 "c.y"
    {fprintf(yyout,"multiplicative_expression MOD_OP cast_expression REDUCE to multiplicative_expression\n");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 152 "c.y"
    {
                                                               (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                           fprintf(yyout,"<EXP> multiplicative_expression REDUCE to additive_expression\n");
															  }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 156 "c.y"
    {fprintf(yyout,"additive_expression PLUS_OP multiplicative_expression REDUCE to additive_expression\n");}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 157 "c.y"
    {fprintf(yyout,"additive_expression MINUS_OP multiplicative_expression REDUCE to additive_expression\n");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 161 "c.y"
    {
                                                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                 fprintf(yyout,"<EXP> additive_expression REDUCE to shift_expression\n");
													}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 165 "c.y"
    {fprintf(yyout,"shift_expression LEFT_OP additive_expression REDUCE to shift_expression\n");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 166 "c.y"
    {fprintf(yyout,"shift_expression RIGHT_OP additive_expression REDUCE to shift_expression\n");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 170 "c.y"
    {
                                                         (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                     fprintf(yyout,"<EXP> shift_expression REDUCE to relational_expression\n");
														}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 174 "c.y"
    {fprintf(yyout,"relational_expression LESS_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 175 "c.y"
    {fprintf(yyout,"relational_expression GREATER_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 176 "c.y"
    {fprintf(yyout,"relational_expression LE_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 177 "c.y"
    {fprintf(yyout,"relational_expression GE_OP shift_expression REDUCE to relational_expression\n");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 181 "c.y"
    {
                                                         (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                     fprintf(yyout,"<EXP> relational_expression REDUCE to equality_expression\n");
														}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 185 "c.y"
    {fprintf(yyout,"equality_expression EQ_OP relational_expression REDUCE to equality_expression\n");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 186 "c.y"
    {fprintf(yyout,"equality_expression NE_OP relational_expression REDUCE to equality_expression\n");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 190 "c.y"
    {
                                                    (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                fprintf(yyout,"<EXP> equality_expression REDUCE to and_expression\n");
												   }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 194 "c.y"
    {fprintf(yyout,"and_expression BIT_AND equality_expression REDUCE to and_expression\n");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 198 "c.y"
    {
                                                       (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                   fprintf(yyout,"<EXP> and_expression REDUCE to exclusive_or_expression\n");
													  }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 202 "c.y"
    {fprintf(yyout,"exclusive_or_expression XOR_OP and_expression REDUCE to exclusive_or_expression\n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 206 "c.y"
    {
                                                                (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                            fprintf(yyout,"<EXP> exclusive_or_expression REDUCE to inclusive_or_expression\n");
															   }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 210 "c.y"
    {fprintf(yyout,"inclusive_or_expression BIT_OR exclusive_or_expression REDUCE to inclusive_or_expression\n");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 214 "c.y"
    {
                                                             (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                         fprintf(yyout,"<EXP> inclusive_or_expression REDUCE to logical_and_expression\n");
															}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 218 "c.y"
    {fprintf(yyout,"logical_and_expression AND_OP inclusive_or_expression REDUCE to logical_and_expression\n");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 222 "c.y"
    {
                                                          (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                      fprintf(yyout,"<EXP> logical_and_expression REDUCE to logical_or_expression\n");
														 }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 226 "c.y"
    {fprintf(yyout,"logical_or_expression OR_OP logical_and_expression REDUCE to logical_or_expression\n");}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 230 "c.y"
    {
                                                                                    (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                                                fprintf(yyout,"<EXP> logical_or_expression REDUCE to conditional_expression\n");
																				   }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 234 "c.y"
    {fprintf(yyout,"logical_or_expression QUESTION_OP expression COLON_OP conditional_expression REDUCE to conditional_expression\n");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 238 "c.y"
    {
                                                                  (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                              fprintf(yyout,"<EXP> conditional_expression REDUCE to assignment_expression\n");
																 }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 242 "c.y"
    {fprintf(yyout,"unary_expression assignment_operator assignment_expression REDUCE to assignment_expression\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 246 "c.y"
    {fprintf(yyout,"EQUAL_OP REDUCE to assignment_operator\n");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 247 "c.y"
    {fprintf(yyout,"MUL_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 248 "c.y"
    {fprintf(yyout,"DIV_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 249 "c.y"
    {fprintf(yyout,"MOD_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 250 "c.y"
    {fprintf(yyout,"ADD_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 251 "c.y"
    {fprintf(yyout,"SUB_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 252 "c.y"
    {fprintf(yyout,"LEFT_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 253 "c.y"
    {fprintf(yyout,"RIGHT_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 254 "c.y"
    {fprintf(yyout,"AND_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 255 "c.y"
    {fprintf(yyout,"XOR_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 256 "c.y"
    {fprintf(yyout,"OR_ASSIGN REDUCE to assignment_operator\n");}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 260 "c.y"
    {
		                                         (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
		                                         fprintf(yyout,"<EXP> assignment_expression REDUCE to expression\n");
											    }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 264 "c.y"
    {fprintf(yyout," expression COMMA_OP assignment_expression REDUCE to expression\n");}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 268 "c.y"
    {fprintf(yyout,"conditional_expression REDUCE to constant_expression\n");}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 272 "c.y"
    {fprintf(yyout,"declaration_specifiers SEMI_OP REDUCE to declaration\n");}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 273 "c.y"
    {
                                                             (yyval.CompilerInfo).sign = (yyvsp[(1) - (3)].CompilerInfo).sign;
	                                                         (yyval.CompilerInfo).type = (yyvsp[(1) - (3)].CompilerInfo).type;
	                                                         (yyval.CompilerInfo).storage = (yyvsp[(1) - (3)].CompilerInfo).storage;
	                                                         (yyval.CompilerInfo).identifier = (yyvsp[(2) - (3)].CompilerInfo).identifier;
															 fprintf(yyout,"'%d %d %d %s' => declaration_specifiers init_declarator_list SEMI_OP REDUCE to declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
															}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 283 "c.y"
    {fprintf(yyout,"storage_class_specifier REDUCE to declaration_specifiers\n");}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 284 "c.y"
    {
	                                                  (yyval.CompilerInfo).sign = (yyvsp[(2) - (2)].CompilerInfo).sign;
	                                                  (yyval.CompilerInfo).type = (yyvsp[(2) - (2)].CompilerInfo).type;
	                                                  (yyval.CompilerInfo).storage = (yyvsp[(1) - (2)].CompilerInfo).storage;
	                                                  fprintf(yyout,"%d %d %d => storage_class_specifier declaration_specifiers REDUCE to declaration_specifiers\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type);
													 }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 290 "c.y"
    {
	                                                   (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
													   fprintf(yyout,"%d %d type_specifier REDUCE to declaration_specifiers\n",(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type);
													 }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 294 "c.y"
    {
	                                                   (yyval.CompilerInfo).sign = (yyvsp[(1) - (2)].CompilerInfo).sign;
	                                                   (yyval.CompilerInfo).type = (yyvsp[(2) - (2)].CompilerInfo).type;
													   fprintf(yyout,"%d %d => type_specifier declaration_specifiers REDUCE to declaration_specifiers\n",(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type);
													 }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 299 "c.y"
    {fprintf(yyout,"type_qualifier REDUCE to declaration_specifiers\n");}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 300 "c.y"
    {fprintf(yyout,"type_qualifier declaration_specifiers SEMI_OP REDUCE to declaration_specifiers\n");}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 301 "c.y"
    {fprintf(yyout,"function_specifier REDUCE to declaration_specifiers\n");}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 302 "c.y"
    {fprintf(yyout,"function_specifier declaration_specifiers REDUCE to declaration_specifiers\n");}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 306 "c.y"
    {
                                                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                 fprintf(yyout,"'%s' => init_declarator REDUCE to init_declarator_list\n",(yyval.CompilerInfo).identifier);
													}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 310 "c.y"
    {fprintf(yyout,"init_declarator_list COMMA_OP init_declarator REDUCE to init_declarator_list\n");}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 314 "c.y"
    {
                                       (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                   fprintf(yyout,"'%s' => declarator REDUCE to init_declarator\n",(yyval.CompilerInfo).identifier);
									  }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 318 "c.y"
    {fprintf(yyout,"declarator EQUAL_OP initializer REDUCE to init_declarator\n");}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 322 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_NONE;     fprintf(yyout,"TYPEDEF REDUCE to storage_class_specifier\n");}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 323 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_EXTERN;   fprintf(yyout,"EXTERN REDUCE to storage_class_specifier\n");}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 324 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_STATIC;   fprintf(yyout,"STATIC REDUCE to storage_class_specifier\n");}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 325 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_AUTO;     fprintf(yyout,"AUTO REDUCE to storage_class_specifier\n");}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 326 "c.y"
    {(yyval.CompilerInfo).storage = STORAGE_REGISTER; fprintf(yyout,"REGISTER REDUCE to storage_class_specifier\n");}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 330 "c.y"
    {(yyval.CompilerInfo).type = TYPE_VOID;      fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 331 "c.y"
    {(yyval.CompilerInfo).type = TYPE_CHARACTER; fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 332 "c.y"
    {(yyval.CompilerInfo).type = TYPE_SHORT;     fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 333 "c.y"
    {(yyval.CompilerInfo).type = TYPE_INTEGER;   fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 334 "c.y"
    {(yyval.CompilerInfo).type = TYPE_LONG;      fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 335 "c.y"
    {(yyval.CompilerInfo).type = TYPE_LONG64;    fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 336 "c.y"
    {(yyval.CompilerInfo).type = TYPE_FLOAT;     fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 337 "c.y"
    {(yyval.CompilerInfo).type = TYPE_DOUBLE;    fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 338 "c.y"
    {(yyval.CompilerInfo).sign = TYPE_SIGNED;    fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).sign); }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 339 "c.y"
    {(yyval.CompilerInfo).sign = TYPE_UNSIGNED;  fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).sign); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 340 "c.y"
    {(yyval.CompilerInfo).type = TYPE_INTEGER;   fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 341 "c.y"
    {(yyval.CompilerInfo).type = TYPE_COMPLEX;   fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 342 "c.y"
    {(yyval.CompilerInfo).type = TYPE_IMAGINARY; fprintf(yyout,"%d REDUCE to type_specifier\n",(yyval.CompilerInfo).type); }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 343 "c.y"
    {fprintf(yyout,"struct_or_union_specifier REDUCE to type_specifier\n");}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 344 "c.y"
    {fprintf(yyout,"enum_specifier REDUCE to type_specifier\n");}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 345 "c.y"
    {fprintf(yyout,"type_specifier TYPE_NAME REDUCE to type_specifier\n");}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 349 "c.y"
    {fprintf(yyout,"struct_or_union IDENTIFIER OCURLY_OP struct_declaration_list CCURLY_OP REDUCE to struct_or_union_specifier\n");}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 350 "c.y"
    {fprintf(yyout,"struct_or_union OCURLY_OP struct_declaration_list CCURLY_OP REDUCE to struct_or_union_specifier\n");}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 351 "c.y"
    {fprintf(yyout,"struct_or_union IDENTIFIER REDUCE to struct_or_union_specifier\n");}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 355 "c.y"
    {fprintf(yyout,"STRUCT REDUCE to struct_or_union\n");}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 356 "c.y"
    {fprintf(yyout,"UNION REDUCE to struct_or_union\n");}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 360 "c.y"
    {fprintf(yyout,"struct_declaration REDUCE to struct_declaration_list\n");}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 361 "c.y"
    {fprintf(yyout,"struct_declaration_list struct_declaration REDUCE to struct_declaration_list\n");}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 365 "c.y"
    {fprintf(yyout,"specifier_qualifier_list struct_declarator_list SEMI_OP REDUCE to struct_declaration\n");}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 369 "c.y"
    {fprintf(yyout,"type_specifier specifier_qualifier_list REDUCE to specifier_qualifier_list\n");}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 370 "c.y"
    {fprintf(yyout,"type_specifier REDUCE to specifier_qualifier_list\n");}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 371 "c.y"
    {fprintf(yyout,"type_qualifier specifier_qualifier_list REDUCE to specifier_qualifier_list\n");}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 372 "c.y"
    {fprintf(yyout,"type_qualifier REDUCE to specifier_qualifier_list\n");}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 376 "c.y"
    {fprintf(yyout,"struct_declarator REDUCE to struct_declarator_list\n");}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 377 "c.y"
    {fprintf(yyout,"struct_declarator_list COMMA_OP struct_declarator REDUCE to struct_declarator_list\n");}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 381 "c.y"
    {fprintf(yyout,"declarator REDUCE to struct_declarator\n");}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 382 "c.y"
    {fprintf(yyout,"COLON_OP constant_expression REDUCE to struct_declarator\n");}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 383 "c.y"
    {fprintf(yyout,"declarator COLON_OP constant_expression REDUCE to struct_declarator\n");}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 387 "c.y"
    {fprintf(yyout,"ENUM OCURLY_OP enumerator_list CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 388 "c.y"
    {fprintf(yyout,"ENUM IDENTIFIER OCURLY_OP enumerator_list CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 389 "c.y"
    {fprintf(yyout,"ENUM OCURLY_OP enumerator_list COMMA_OP CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 390 "c.y"
    {fprintf(yyout,"ENUM IDENTIFIER OCURLY_OP enumerator_list COMMA_OP CCURLY_OP REDUCE to enum_specifier\n");}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 391 "c.y"
    {fprintf(yyout,"ENUM IDENTIFIER REDUCE to enum_specifier\n");}
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 395 "c.y"
    {fprintf(yyout,"enumerator REDUCE to enumerator_list\n");}
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 396 "c.y"
    {fprintf(yyout,"enumerator_list COMMA_OP enumerator REDUCE to enumerator_list\n");}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 400 "c.y"
    {fprintf(yyout,"IDENTIFIER REDUCE to enumerator\n");}
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 401 "c.y"
    {fprintf(yyout,"IDENTIFIER EQUAL_OP constant_expression REDUCE to enumerator\n");}
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 405 "c.y"
    {fprintf(yyout,"CONST REDUCE to type_qualifier\n");}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 406 "c.y"
    {fprintf(yyout,"RESTRICT REDUCE to type_qualifier\n");}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 407 "c.y"
    {fprintf(yyout,"VOLATILE REDUCE to type_qualifier\n");}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 411 "c.y"
    {fprintf(yyout,"INLINE REDUCE to function_specifier\n");}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 415 "c.y"
    {fprintf(yyout,"pointer direct_declarator REDUCE to declarator\n");}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 416 "c.y"
    {
                                  (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                              fprintf(yyout,"'%s' => direct_declarator REDUCE to declarator\n",(yyval.CompilerInfo).identifier);
								 }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 424 "c.y"
    {
	                                                                                                   (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
	                                                                                                   fprintf(yyout,"'%s' => IDENTIFIER REDUCE to direct_declarator\n",(yyval.CompilerInfo).identifier);
																									  }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 428 "c.y"
    {fprintf(yyout,"OPENPAREN_OP declarator CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 429 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 430 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 431 "c.y"
    {
	                                                                                                   (yyval.CompilerInfo) = (yyvsp[(1) - (4)].CompilerInfo);
	                                                                                                   fprintf(yyout,"direct_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");
																									  }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 435 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP STATIC type_qualifier_list assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 436 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list STATIC assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 437 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list TIMES_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 438 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 439 "c.y"
    {fprintf(yyout,"direct_declarator OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 440 "c.y"
    {fprintf(yyout,"direct_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 441 "c.y"
    {fprintf(yyout,"direct_declarator OPENPAREN_OP identifier_list CLOSEPAREN_OP REDUCE to direct_declarator\n");}
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 442 "c.y"
    {
		                                                                                               (yyval.CompilerInfo) = (yyvsp[(1) - (3)].CompilerInfo);
		                                                                                               fprintf(yyout,"'%s' => direct_declarator OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_declarator\n",(yyval.CompilerInfo).identifier);
																									  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 449 "c.y"
    {fprintf(yyout,"TIMES_OP REDUCE to pointer\n");}
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 450 "c.y"
    {fprintf(yyout,"TIMES_OP type_qualifier_list REDUCE to pointer\n");}
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 451 "c.y"
    {fprintf(yyout,"TIMES_OP pointer REDUCE to pointer\n");}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 452 "c.y"
    {fprintf(yyout,"TIMES_OP type_qualifier_list pointer REDUCE to pointer\n");}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 456 "c.y"
    {fprintf(yyout,"type_qualifier REDUCE to type_qualifier_list\n");}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 457 "c.y"
    {fprintf(yyout,"type_qualifier_list type_qualifier REDUCE to type_qualifier_list\n");}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 462 "c.y"
    {fprintf(yyout,"parameter_list REDUCE to parameter_type_list\n");}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 463 "c.y"
    {fprintf(yyout,"parameter_list COMMA_OP ELLIPSIS REDUCE to parameter_type_list\n");}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 467 "c.y"
    {fprintf(yyout,"parameter_declaration REDUCE to parameter_list\n");}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 468 "c.y"
    {fprintf(yyout,"parameter_list COMMA_OP parameter_declaration REDUCE to parameter_list\n");}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 472 "c.y"
    {fprintf(yyout,"declaration_specifiers declarator REDUCE to parameter_declaration\n");}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 473 "c.y"
    {fprintf(yyout,"declaration_specifiers abstract_declarator REDUCE to parameter_declaration\n");}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 474 "c.y"
    {fprintf(yyout,"declaration_specifiers REDUCE to parameter_declaration\n");}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 478 "c.y"
    {fprintf(yyout,"IDENTIFIER REDUCE to identifier_list\n");}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 479 "c.y"
    {fprintf(yyout,"identifier_list COMMA_OP IDENTIFIER REDUCE to identifier_list\n");}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 483 "c.y"
    {fprintf(yyout,"specifier_qualifier_list REDUCE to type_name\n");}
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 484 "c.y"
    {fprintf(yyout,"specifier_qualifier_list abstract_declarator REDUCE to type_name\n");}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 488 "c.y"
    {fprintf(yyout,"pointer REDUCE to abstract_declarator\n");}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 489 "c.y"
    {fprintf(yyout,"direct_abstract_declarator REDUCE to abstract_declarator\n");}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 490 "c.y"
    {fprintf(yyout,"pointer direct_abstract_declarator REDUCE to abstract_declarator\n");}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 494 "c.y"
    {fprintf(yyout,"OPENPAREN_OP abstract_declarator CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 495 "c.y"
    {fprintf(yyout,"OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 496 "c.y"
    {fprintf(yyout,"OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 497 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 498 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 499 "c.y"
    {fprintf(yyout,"OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 500 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 501 "c.y"
    {fprintf(yyout,"OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 502 "c.y"
    {fprintf(yyout,"OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 503 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 504 "c.y"
    {fprintf(yyout,"direct_abstract_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 508 "c.y"
    {fprintf(yyout,"assignment_expression REDUCE to initializer\n");}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 509 "c.y"
    {fprintf(yyout,"OCURLY_OP initializer_list CCURLY_OP REDUCE to initializer\n");}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 510 "c.y"
    {fprintf(yyout,"OCURLY_OP initializer_list COMMA_OP CCURLY_OP REDUCE to initializer\n");}
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 514 "c.y"
    {fprintf(yyout,"initializer REDUCE to initializer_list\n");}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 515 "c.y"
    {fprintf(yyout,"designation initializer REDUCE to initializer_list\n");}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 516 "c.y"
    {fprintf(yyout,"initializer_list COMMA_OP initializer REDUCE to initializer_list\n");}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 517 "c.y"
    {fprintf(yyout,"initializer_list COMMA_OP designation initializer REDUCE to initializer_list\n");}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 521 "c.y"
    {fprintf(yyout,"designator_list EQUAL_OP REDUCE to designation\n");}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 525 "c.y"
    {fprintf(yyout,"designator REDUCE to designator_list\n");}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 526 "c.y"
    {fprintf(yyout,"designator_list designator EQUAL_OP REDUCE to designator_list\n");}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 530 "c.y"
    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 531 "c.y"
    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 535 "c.y"
    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 536 "c.y"
    {fprintf(yyout,"compound_statement REDUCE to statement\n");}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 537 "c.y"
    {fprintf(yyout,"expression_statement REDUCE to statement\n");}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 538 "c.y"
    {fprintf(yyout,"selection_statement REDUCE to statement\n");}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 539 "c.y"
    {fprintf(yyout,"iteration_statement REDUCE to statement\n");}
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 540 "c.y"
    {
		                     (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
		                     fprintf(yyout,"<EXP> jump_statement REDUCE to statement\n");
							}
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 547 "c.y"
    {fprintf(yyout,"IDENTIFIER COLON_OP statement REDUCE to labeled_statement\n");}
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 548 "c.y"
    {fprintf(yyout,"CASE constant_expression COLON_OP statement REDUCE to labeled_statement\n");}
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 549 "c.y"
    {fprintf(yyout,"DEFAULT COLON_OP statement REDUCE to labeled_statement\n");}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 553 "c.y"
    {fprintf(yyout,"OCURLY_OP CCURLY_OP REDUCE to compound_statement\n");}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 554 "c.y"
    {
		                                   (yyval.CompilerInfo) = (yyvsp[(2) - (3)].CompilerInfo);
		                                   fprintf(yyout,"<EXP> OCURLY_OP block_item_list CCURLY_OP REDUCE to compound_statement\n");
										  }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 561 "c.y"
    {
		                          (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
		                          fprintf(yyout,"<EXP> block_item REDUCE to block_item_list\n");
								 }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 565 "c.y"
    {fprintf(yyout,"block_item_list block_item REDUCE to block_item_list\n");}
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 569 "c.y"
    {fprintf(yyout,"declaration REDUCE to block_item\n");}
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 570 "c.y"
    {
		            (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
		            fprintf(yyout,"<EXP> statement REDUCE to block_item\n");
				   }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 577 "c.y"
    {fprintf(yyout,"SEMI_OP REDUCE to expression_statement\n");}
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 578 "c.y"
    {fprintf(yyout,"expression SEMI_OP REDUCE to expression_statement\n");}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 582 "c.y"
    {fprintf(yyout,"IF OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to selection_statement\n");}
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 583 "c.y"
    {fprintf(yyout,"IF OPENPAREN_OP expression CLOSEPAREN_OP statement ELSE statement REDUCE to selection_statement\n");}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 584 "c.y"
    {fprintf(yyout,"SWITCH OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to selection_statement\n");}
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 588 "c.y"
    {fprintf(yyout,"WHILE OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 589 "c.y"
    {fprintf(yyout,"DO statement WHILE OPENPAREN_OP expression CLOSEPAREN_OP SEMI_OP REDUCE to iteration_statement\n");}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 590 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP expression_statement expression_statement CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 591 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP expression_statement expression_statement expression CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 592 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP declaration expression_statement CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 593 "c.y"
    {fprintf(yyout,"FOR OPENPAREN_OP declaration expression_statement expression CLOSEPAREN_OP statement REDUCE to iteration_statement\n");}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 597 "c.y"
    {fprintf(yyout,"GOTO IDENTIFIER SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 598 "c.y"
    {fprintf(yyout,"CONTINUE SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 599 "c.y"
    {fprintf(yyout,"BREAK SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 600 "c.y"
    {fprintf(yyout,"RETURN SEMI_OP REDUCE to jump_statement\n");}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 601 "c.y"
    {
		                         (yyval.CompilerInfo) = (yyvsp[(2) - (3)].CompilerInfo);
		                         fprintf(yyout,"<EXP> RETURN expression SEMI_OP REDUCE to jump_statement\n");
								}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 608 "c.y"
    {
                                             (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
											 addToSymbolTable((yyvsp[(1) - (1)].CompilerInfo).identifier, (yyvsp[(1) - (1)].CompilerInfo).type, (yyvsp[(1) - (1)].CompilerInfo).sign, (yyvsp[(1) - (1)].CompilerInfo).storage, (yyvsp[(1) - (1)].CompilerInfo).declarationType, (yyvsp[(1) - (1)].CompilerInfo).constant);
	                                         fprintf(yyout,"<EXP> external_declaration REDUCE to translation_unit\n");
											}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 613 "c.y"
    {
											 addToSymbolTable((yyvsp[(2) - (2)].CompilerInfo).identifier, (yyvsp[(2) - (2)].CompilerInfo).type, (yyvsp[(2) - (2)].CompilerInfo).sign, (yyvsp[(2) - (2)].CompilerInfo).storage, (yyvsp[(2) - (2)].CompilerInfo).declarationType, (yyvsp[(2) - (2)].CompilerInfo).constant);
		                                     fprintf(yyout,"<EXP> translation_unit external_declaration REDUCE to translation_unit\n");
											}
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 620 "c.y"
    {
                           (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
						   (yyval.CompilerInfo).declarationType = DECLARATION_FUNCTION;
						   fprintf(yyout,"'%d %d %d %s' => function_definition REDUCE to external_declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
						  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 625 "c.y"
    {
                           (yyval.CompilerInfo) = (yyvsp[(1) - (1)].CompilerInfo);
						   (yyval.CompilerInfo).declarationType = DECLARATION_VARIABLE;
                           (yyval.CompilerInfo).sign = (yyvsp[(1) - (1)].CompilerInfo).sign;
                           (yyval.CompilerInfo).type = (yyvsp[(1) - (1)].CompilerInfo).type;
                           (yyval.CompilerInfo).storage = (yyvsp[(1) - (1)].CompilerInfo).storage;
                           (yyval.CompilerInfo).identifier = (yyvsp[(1) - (1)].CompilerInfo).identifier;															 
	                       fprintf(yyout,"'%d %d %d %s' => declaration REDUCE to external_declaration\n",(yyval.CompilerInfo).storage,(yyval.CompilerInfo).sign,(yyval.CompilerInfo).type,(yyval.CompilerInfo).identifier);
						  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 637 "c.y"
    {fprintf(yyout,"declaration_specifiers declarator declaration_list compound_statement REDUCE to function_definition\n");}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 638 "c.y"
    { 
		                                                                     
		                                                                     (yyval.CompilerInfo).sign = (yyvsp[(1) - (3)].CompilerInfo).sign;
                                                                             (yyval.CompilerInfo).type = (yyvsp[(1) - (3)].CompilerInfo).type;
																			 (yyval.CompilerInfo).storage = (yyvsp[(1) - (3)].CompilerInfo).storage;
																			 (yyval.CompilerInfo).identifier = (yyvsp[(2) - (3)].CompilerInfo).identifier;	
		                                                                     fprintf(yyout,"<EXP> declaration_specifiers declarator compound_statement REDUCE to function_definition\n");
																			}
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 649 "c.y"
    {fprintf(yyout,"declaration REDUCE to declaration_list\n");}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 650 "c.y"
    {fprintf(yyout,"declaration_list declaration REDUCE to declaration_list\n");}
    break;


/* Line 1792 of yacc.c  */
#line 3799 "c.tab.c"
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
  *++yylsp = yyloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 653 "c.y"


void yyerror(const char* s) {
	fprintf(stderr, "Parse error on line %d column %d : %s\n", yylineno, column, s);
	num_errors++;
}