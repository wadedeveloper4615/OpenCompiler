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
#include "cua.h"
#include "c.y.h"
#include "c.l.h"

char * idSimbol;
char * nom_fitxerRA, * nom_fitxerC3A;
struct t_simbol simbol, simbol_tmp;
int currentScope;
long long tmpValor;
Boolean arrayDeclaracio = FALSE;
struct t_infoBison * pparam;
struct t_infoBison * pcamp;
struct t_infoBison * recordsetParam;
struct t_infoBison * recordsetCamp;
struct t_infoBison * tmpCondicio;
int num_errors;
int tipus_var_funcio_retorn;
char * valor_retorn;
struct Cua * llista_seguents_funcio_retorn;
int count;
int funcioDeclaradaCorrecte = FALSE;
Boolean errFuncDeclaration = FALSE;
t_registreActivacio * registreActivacioGlobal, * registreActivacioFuncions;
t_registreC3A * C3AGlobal, * C3AFuncions;
char strCastingC3A[4], strOperacioC3A[5];
t_quadrupleC3A * quadrupleC3A;
int conditional_if_while_for;
int tipus_var_tmp;

/* Line 371 of yacc.c  */
#line 104 "c.tab.c"

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
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     PLUS = 284,
     MINUS = 285,
     MUL = 286,
     DIV = 287,
     MOD = 288,
     TYPEDEF = 289,
     EXTERN = 290,
     STATIC = 291,
     AUTO = 292,
     REGISTER = 293,
     INLINE = 294,
     RESTRICT = 295,
     CHAR = 296,
     SHORT = 297,
     INT = 298,
     LONG = 299,
     SIGNED = 300,
     UNSIGNED = 301,
     FLOAT = 302,
     DOUBLE = 303,
     CONST = 304,
     VOLATILE = 305,
     VOID = 306,
     BOOL = 307,
     COMPLEX = 308,
     IMAGINARY = 309,
     STRUCT = 310,
     UNION = 311,
     ENUM = 312,
     ELLIPSIS = 313,
     CASE = 314,
     DEFAULT = 315,
     IF = 316,
     ELSE = 317,
     SWITCH = 318,
     WHILE = 319,
     DO = 320,
     FOR = 321,
     GOTO = 322,
     CONTINUE = 323,
     BREAK = 324,
     RETURN = 325
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 37 "c.y"
 	   
    struct t_infoBison {   
       char * valor;
       char * valorC3A;
       int constant;      
       int tipus_var;
       int array;
       long tam_array;
       int array_indexat;
       char * array_indexat_offset;
       int camp_struct_indexat;
       int offset_camp_struct_indexat;
       int funcio;
       int num_funcio_parametres;
       int num_struct_camps;
       struct t_infoBison * seguent_param_funcio;
       struct t_infoBison * seguent_camp_struct;
	   struct Cua * llista_certs;       
  	   struct Cua * llista_falsos;
	   struct Cua * llista_seguents;
	   int punter_quadruple;
       void * no_definit;	
    } infoBison;


/* Line 387 of yacc.c  */
#line 243 "c.tab.c"
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
#line 271 "c.tab.c"

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
#define YYLAST   1661

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNRULES -- Number of states.  */
#define YYNSTATES  400

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,     2,     2,     2,    79,     2,
      71,    72,    90,     2,    78,     2,    75,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    89,
      82,    88,    83,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    73,     2,    74,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,    85,    77,    80,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
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
     156,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    71,
     111,    72,    -1,    92,    -1,    93,    73,   111,    74,    -1,
      93,    71,    72,    -1,    93,    71,    94,    72,    -1,    93,
      75,     3,    -1,    93,     7,     3,    -1,    93,     8,    -1,
      93,     9,    -1,    71,   139,    72,    76,   143,    77,    -1,
      71,   139,    72,    76,   143,    78,    77,    -1,   109,    -1,
      94,    78,   109,    -1,    93,    -1,     8,    95,    -1,     9,
      95,    -1,    96,    97,    -1,     6,    95,    -1,     6,    71,
     139,    72,    -1,    79,    -1,    31,    -1,    29,    -1,    30,
      -1,    80,    -1,    81,    -1,    95,    -1,    71,   139,    72,
      97,    -1,    97,    -1,    98,    31,    97,    -1,    98,    32,
      97,    -1,    98,    33,    97,    -1,    98,    -1,    99,    29,
      98,    -1,    99,    30,    98,    -1,    99,    -1,   100,    10,
      99,    -1,   100,    11,    99,    -1,   100,    -1,   101,    82,
     100,    -1,   101,    83,   100,    -1,   101,    12,   100,    -1,
     101,    13,   100,    -1,   101,    -1,   102,    14,   101,    -1,
     102,    15,   101,    -1,   102,    -1,   103,    79,   102,    -1,
     103,    -1,   104,    84,   103,    -1,   104,    -1,   105,    85,
     104,    -1,   105,    -1,   106,    16,   105,    -1,   106,    -1,
     107,    17,   106,    -1,   107,    -1,   107,    86,   111,    87,
     108,    -1,   108,    -1,    95,   110,   109,    -1,    88,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
     109,    -1,   111,    78,   109,    -1,   108,    -1,   114,    89,
      -1,   114,   115,    89,    -1,   117,    -1,   117,   114,    -1,
     118,    -1,   118,   114,    -1,   129,    -1,   129,   114,    -1,
     130,    -1,   130,   114,    -1,   116,    -1,   115,    78,   116,
      -1,   131,    -1,   131,    88,   142,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    51,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    47,    -1,    48,
      -1,    45,    -1,    46,    -1,    52,    -1,    53,    -1,    54,
      -1,   119,    -1,   126,    -1,    28,    -1,   120,     3,    76,
     121,    77,    -1,   120,    76,   121,    77,    -1,   120,     3,
      -1,    55,    -1,    56,    -1,   122,    -1,   121,   122,    -1,
     123,   124,    89,    -1,   118,   123,    -1,   118,    -1,   129,
     123,    -1,   129,    -1,   125,    -1,   124,    78,   125,    -1,
     131,    -1,    87,   112,    -1,   131,    87,   112,    -1,    57,
      76,   127,    77,    -1,    57,     3,    76,   127,    77,    -1,
      57,    76,   127,    78,    77,    -1,    57,     3,    76,   127,
      78,    77,    -1,    57,     3,    -1,   128,    -1,   127,    78,
     128,    -1,     3,    -1,     3,    88,   112,    -1,    49,    -1,
      40,    -1,    50,    -1,    39,    -1,   133,   132,    -1,   132,
      -1,     3,    -1,    71,   131,    72,    -1,   132,    73,   134,
     109,    74,    -1,   132,    73,   134,    74,    -1,   132,    73,
     109,    74,    -1,   132,    73,    36,   134,   109,    74,    -1,
     132,    73,   134,    36,   109,    74,    -1,   132,    73,   134,
      90,    74,    -1,   132,    73,    90,    74,    -1,   132,    73,
      74,    -1,   132,    71,   135,    72,    -1,   132,    71,   138,
      72,    -1,   132,    71,    72,    -1,    90,    -1,    90,   134,
      -1,    90,   133,    -1,    90,   134,   133,    -1,   129,    -1,
     134,   129,    -1,   136,    -1,   136,    78,    58,    -1,   137,
      -1,   136,    78,   137,    -1,   114,   131,    -1,   114,   140,
      -1,   114,    -1,     3,    -1,   138,    78,     3,    -1,   123,
      -1,   123,   140,    -1,   133,    -1,   141,    -1,   133,   141,
      -1,    71,   140,    72,    -1,    73,    74,    -1,    73,   109,
      74,    -1,   141,    73,    74,    -1,   141,    73,   109,    74,
      -1,    73,    90,    74,    -1,   141,    73,    90,    74,    -1,
      71,    72,    -1,    71,   135,    72,    -1,   141,    71,    72,
      -1,   141,    71,   135,    72,    -1,   109,    -1,    76,   143,
      77,    -1,    76,   143,    78,    77,    -1,   142,    -1,   144,
     142,    -1,   143,    78,   142,    -1,   143,    78,   144,   142,
      -1,   145,    88,    -1,   146,    -1,   145,   146,    -1,    73,
     112,    74,    -1,    75,     3,    -1,   148,    -1,   149,    -1,
     152,    -1,   153,    -1,   154,    -1,   155,    -1,     3,    87,
     147,    -1,    59,   112,    87,   147,    -1,    60,    87,   147,
      -1,    76,    77,    -1,    76,   150,    77,    -1,   151,    -1,
     150,   151,    -1,   113,    -1,   147,    -1,    89,    -1,   111,
      89,    -1,    61,    71,   111,    72,   147,    -1,    61,    71,
     111,    72,   147,    62,   147,    -1,    63,    71,   111,    72,
     147,    -1,    64,    71,   111,    72,   147,    -1,    65,   147,
      64,    71,   111,    72,    89,    -1,    66,    71,   152,   152,
      72,   147,    -1,    66,    71,   152,   152,   111,    72,   147,
      -1,    66,    71,   113,   152,    72,   147,    -1,    66,    71,
     113,   152,   111,    72,   147,    -1,    67,     3,    89,    -1,
      68,    89,    -1,    69,    89,    -1,    70,    89,    -1,    70,
     111,    89,    -1,   157,    -1,   156,   157,    -1,   158,    -1,
     113,    -1,   114,   131,   159,   149,    -1,   114,   131,   149,
      -1,   113,    -1,   159,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    81,    82,    83,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,   100,   101,   105,   106,
     107,   108,   109,   110,   114,   115,   116,   117,   118,   119,
     123,   124,   128,   129,   130,   131,   135,   136,   137,   141,
     142,   143,   147,   148,   149,   150,   151,   155,   156,   157,
     161,   162,   166,   167,   171,   172,   176,   177,   181,   182,
     186,   187,   191,   192,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   210,   211,   215,   219,   220,
     224,   225,   226,   227,   228,   229,   230,   231,   235,   236,
     240,   241,   245,   246,   247,   248,   249,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   271,   272,   273,   277,   278,   282,   283,   287,
     291,   292,   293,   294,   298,   299,   303,   304,   305,   309,
     310,   311,   312,   313,   317,   318,   322,   323,   327,   328,
     329,   333,   337,   338,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   359,   360,   361,
     362,   366,   367,   372,   373,   377,   378,   382,   383,   384,
     388,   389,   393,   394,   398,   399,   400,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   418,   419,
     420,   424,   425,   426,   427,   431,   435,   436,   440,   441,
     445,   446,   447,   448,   449,   450,   454,   455,   456,   460,
     461,   465,   466,   470,   471,   475,   476,   480,   481,   482,
     486,   487,   488,   489,   490,   491,   495,   496,   497,   498,
     499,   503,   504,   508,   509,   513,   514,   518,   519
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "PLUS", "MINUS", "MUL", "DIV", "MOD", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "RESTRICT", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "BOOL", "COMPLEX", "IMAGINARY", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'&'", "'~'", "'!'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'*'", "$accept",
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
     325,    40,    41,    91,    93,    46,   123,   125,    44,    38,
     126,    33,    60,    62,    94,   124,    63,    58,    61,    59,
      42
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
     118,   118,   119,   119,   119,   120,   120,   121,   121,   122,
     123,   123,   123,   123,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   144,   145,   145,   146,   146,
     147,   147,   147,   147,   147,   147,   148,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   154,   154,   155,   155,   155,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159
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
     144,     0,    78,   157,     0,    88,    90,   143,     0,    81,
      83,   114,     0,    85,    87,     1,   232,     0,   136,     0,
     134,     0,   161,   159,   158,     0,    79,     0,     0,   237,
       0,   236,     0,     0,     0,   142,     0,   121,     0,   117,
       0,   123,     0,     0,   129,     0,   145,   162,   160,    89,
      90,     2,     3,     4,     0,     0,     0,    26,    27,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,    24,    28,    29,   215,     6,    18,    30,
       0,    32,    36,    39,    42,    47,    50,    52,    54,    56,
      58,    60,    62,    75,     0,   213,   214,   200,   201,     0,
     211,   202,   203,   204,   205,     2,     0,   188,    91,   238,
     235,   170,   156,   169,     0,   163,   165,     0,     0,   153,
       0,     0,     0,     0,   120,   113,   118,     0,     0,   124,
     126,   122,   130,     0,    30,    77,   137,   131,   135,     0,
       0,    22,     0,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,   227,   228,   229,     0,     0,   172,     0,
       0,    12,    13,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    64,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     210,   212,     0,     0,   191,     0,     0,     0,   196,     0,
       0,   167,   174,   168,   175,   154,     0,   155,     0,     0,
     152,   148,     0,   147,     0,     0,   112,   127,     0,   119,
       0,   132,   206,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,   226,   230,     5,     0,   174,   173,     0,
      11,     8,     0,    16,     0,    10,    63,    33,    34,    35,
      37,    38,    40,    41,    45,    46,    43,    44,    48,    49,
      51,    53,    55,    57,    59,     0,    76,     0,   199,   189,
       0,   192,   195,   197,   184,     0,     0,   178,     0,     0,
     176,     0,     0,   164,   166,   171,     0,     0,   151,   146,
     125,   128,    23,     0,   207,     0,     0,     0,     0,     0,
       0,     0,    31,     9,     0,     7,     0,   198,   190,   193,
       0,   185,   177,   182,   179,   186,     0,   180,     0,     0,
     149,   150,   217,   219,   220,     0,     0,     0,     0,     0,
       0,    17,    61,   194,   187,   183,   181,     0,     0,   224,
       0,   222,     0,    14,     0,   218,   221,   225,   223,    15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   117,   118,   292,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   217,
     134,   176,    26,    70,    44,    45,    28,    29,    30,    31,
      78,    79,    80,   168,   169,    32,    59,    60,    33,    34,
      61,    47,    48,    64,   325,   155,   156,   157,   199,   326,
     254,   244,   245,   246,   247,   248,   136,   137,   138,   139,
     140,   141,   142,   143,   144,    35,    36,    37,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -279
static const yytype_int16 yypact[] =
{
    1574,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,    17,  -279,    14,  1574,  1574,
    -279,    48,  -279,  1574,  1574,  1387,  -279,  -279,   -22,    66,
    -279,    23,  -279,    99,   -39,  -279,  1329,    81,     7,  -279,
    -279,    85,  1604,  -279,  -279,  -279,  -279,    66,   -30,    37,
    -279,    57,  -279,  -279,    99,    23,  -279,   563,   982,  -279,
      14,  -279,  1461,  1233,   398,    81,  1604,  1604,   268,  -279,
      40,  1604,    67,  1141,  -279,    21,  -279,  -279,  -279,  -279,
      86,    98,  -279,  -279,  1174,  1185,  1185,  -279,  -279,  -279,
    1141,   148,   122,   177,   195,   776,   202,   280,   200,   214,
     790,   883,  -279,  -279,  -279,  -279,  -279,  -279,   189,   207,
    1141,  -279,   187,    32,   213,    55,   225,   227,   220,   222,
     310,     6,  -279,  -279,   -32,  -279,  -279,  -279,  -279,   642,
    -279,  -279,  -279,  -279,  -279,  -279,   963,  -279,  -279,  -279,
    -279,  -279,  -279,    16,   257,   252,  -279,   -40,    41,  -279,
     258,   259,   415,  1417,  -279,  -279,  -279,  1141,   -23,  -279,
     247,  -279,  -279,    28,  -279,  -279,  -279,  -279,  -279,   776,
     883,  -279,   883,  -279,  -279,   248,   776,  1141,  1141,  1141,
     273,   721,   250,  -279,  -279,  -279,   -18,    68,   -26,   269,
     337,  -279,  -279,  1051,  1141,   339,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  1141,  -279,  1141,
    1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,
    1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,  -279,
    -279,  -279,  1141,   340,  -279,   174,   982,    53,  -279,   343,
     453,  -279,    62,  -279,    93,  -279,  1543,  -279,   341,   970,
    -279,  -279,  1141,  -279,   274,   275,  -279,  -279,    40,  -279,
    1141,  -279,  -279,   278,   279,   776,  -279,    87,    90,    97,
     276,   819,   819,  -279,  -279,  -279,  1272,   165,  -279,  1062,
    -279,  -279,   104,  -279,     8,  -279,  -279,  -279,  -279,  -279,
     187,   187,    32,    32,   213,   213,   213,   213,    55,    55,
     225,   227,   220,   222,   310,    64,  -279,   281,  -279,  -279,
     872,  -279,  -279,  -279,  -279,   282,   284,  -279,   285,   286,
      93,  1504,   506,  -279,  -279,  -279,   287,   288,  -279,  -279,
    -279,  -279,   277,   277,  -279,   776,   776,   776,  1141,  1080,
    1095,   963,  -279,  -279,  1141,  -279,  1141,  -279,  -279,  -279,
     982,  -279,  -279,  -279,  -279,  -279,   291,  -279,   290,   292,
    -279,  -279,   296,  -279,  -279,   106,   776,   109,   776,   116,
     190,  -279,  -279,  -279,  -279,  -279,  -279,   776,   263,  -279,
     776,  -279,   776,  -279,   952,  -279,  -279,  -279,  -279,  -279
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,  -279,  -279,  -279,   -20,  -279,  -112,    59,    77,    71,
      61,   133,   134,   135,   137,   132,  -279,   -79,   -67,  -279,
     -70,   -84,   -19,     0,  -279,   305,  -279,   194,  -279,  -279,
     297,   -64,   -59,  -279,   107,  -279,   348,   -76,    79,  -279,
     -21,   -35,   -28,   -62,   -68,  -279,   152,  -279,    75,  -128,
    -215,   -66,    58,  -278,  -279,   163,  -102,  -279,   -16,  -279,
     272,  -180,  -279,  -279,  -279,  -279,   377,  -279,  -279
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,   147,   148,   190,   175,   154,    46,   161,   218,   178,
      40,   282,   162,    75,   166,    63,   185,    40,   164,    40,
      38,   175,   171,   236,    58,   253,    40,    69,    49,    50,
      71,    58,   257,    53,    54,    27,    88,   330,   258,    65,
     196,   197,   360,    40,    90,   286,   238,   250,   135,    90,
      66,    51,   198,   149,    57,   268,   150,   239,    83,   170,
     238,   222,   223,   174,    43,    40,   269,   226,   227,    58,
     288,   284,   330,   153,   181,   183,   184,   272,    41,   147,
     174,     8,   355,   267,   276,    41,   238,   249,   175,   250,
      17,    18,   237,    39,    41,   265,   259,   178,   177,   166,
     174,   349,   350,    42,    43,   271,    43,   297,   298,   299,
     197,    41,   197,    43,    84,    85,   360,   277,   278,   279,
     135,   198,    62,   198,    52,   252,   242,   167,   243,    86,
      43,    81,   251,   249,   294,   250,   293,   228,   229,     8,
     285,   322,   238,    87,   172,   173,   238,   174,    17,    18,
     296,   356,    73,    62,    74,    81,    81,    81,   317,   345,
      81,    76,   346,   175,   331,   238,   332,   315,   238,   347,
     287,   316,   281,   344,    68,   238,   353,   352,   388,   147,
     321,   390,   354,   329,   238,   179,   341,   238,   392,    43,
      81,   175,   336,   187,   238,   337,   200,   201,   202,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,    75,   219,   220,
     221,   252,   174,   224,   225,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   186,   286,    62,   250,   230,
     231,    87,    81,   372,   373,   374,    77,   170,   188,   153,
     174,   319,   320,   147,   359,   273,   153,   274,   287,    81,
     203,    81,   204,   366,   205,   369,   189,   393,   394,   174,
      77,    77,    77,   191,   389,    77,   391,   382,   375,   377,
     379,   300,   301,   192,   147,   395,   153,   381,   397,   193,
     398,   308,   309,   147,   383,   216,     1,   304,   305,   306,
     307,   302,   303,   194,   233,    77,   232,   234,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   235,   147,   359,   255,
     256,   153,   260,   261,   270,   275,   174,   280,    87,   283,
     290,   289,   295,   318,   335,   165,    40,   348,   338,   339,
     342,   343,   396,   351,   361,   357,   362,    77,   387,   363,
     364,   370,   371,   384,   385,   310,   386,   311,   314,   312,
      89,     1,   313,   163,    77,   340,    77,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   145,    92,    93,    94,    82,    95,    96,   334,   380,
     323,   241,    56,     0,   249,   324,   250,     0,   145,    92,
      93,    94,     0,    95,    96,     0,     0,    97,    98,    99,
       0,     0,     0,    43,   158,     0,     0,     0,     8,     0,
       0,     0,     0,     0,    97,    98,    99,    17,    18,     0,
       0,   262,     0,     0,     0,     8,   145,    92,    93,    94,
       0,    95,    96,     0,    17,    18,     0,     0,     0,   111,
       0,     0,   159,     0,     0,     0,     0,   113,   114,   115,
       0,     0,    97,    98,    99,     0,   111,     0,   160,   263,
       0,     0,     0,     0,   113,   114,   115,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,   145,
      92,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,   327,     0,     0,
       0,     0,   113,   114,   115,    97,    98,    99,     0,     0,
       0,     0,     0,   328,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,   111,     0,     0,
     367,     0,     0,     0,     0,   113,   114,   115,     0,     0,
       0,     1,    97,    98,    99,     0,   368,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,   100,   101,   102,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,    67,
     112,     0,   113,   114,   115,    91,    92,    93,    94,     0,
      95,    96,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    97,    98,    99,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,   100,   101,   102,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,     0,    67,   240,
       0,   113,   114,   115,   145,    92,    93,    94,     0,    95,
      96,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      97,    98,    99,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    91,
      92,    93,    94,     0,    95,    96,     0,     0,     0,     0,
       0,     0,   111,   145,    92,    93,    94,     0,    95,    96,
     113,   114,   115,     0,     0,    97,    98,    99,     0,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      98,    99,   145,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,   100,   101,   102,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    97,    98,
      99,     0,    67,     0,     0,   113,   114,   115,     0,     0,
       0,   111,     0,     0,     0,   116,     0,     0,     0,   113,
     114,   115,     0,     0,     0,   145,    92,    93,    94,   195,
      95,    96,     0,     0,     0,     0,   145,    92,    93,    94,
     111,    95,    96,     0,     0,     0,     0,     0,   113,   114,
     115,    97,    98,    99,     0,     0,     0,     0,   116,     0,
       0,     1,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,   111,     0,   242,     0,   243,   146,   358,
       0,   113,   114,   115,   111,   145,    92,    93,    94,     0,
      95,    96,   113,   114,   115,     0,   145,    92,    93,    94,
       0,    95,    96,   145,    92,    93,    94,     0,    95,    96,
       0,    97,    98,    99,     0,   145,    92,    93,    94,     0,
      95,    96,    97,    98,    99,     0,     0,     0,     0,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       8,    97,    98,    99,     0,     0,     0,     0,     0,    17,
      18,     0,     0,   111,     0,   242,     0,   243,   146,   399,
       0,   113,   114,   115,   111,     0,   242,     0,   243,   146,
       0,   111,   113,   114,   115,     0,     0,     0,     0,   113,
     114,   115,     0,   111,   145,    92,    93,    94,   146,    95,
      96,   113,   114,   115,     0,   145,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    99,   145,    92,    93,    94,     0,    95,    96,
       0,    97,    98,    99,     0,     0,     0,     0,   145,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,   291,    97,    98,    99,     0,     0,     0,
     113,   114,   115,   111,     0,     0,     0,     0,   351,     0,
       0,   113,   114,   115,   145,    92,    93,    94,     0,    95,
      96,   111,   376,     0,     0,     0,     0,     0,     0,   113,
     114,   115,     0,     0,     0,     0,   111,   378,     0,     0,
      97,    98,    99,     0,   113,   114,   115,   145,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,   145,    92,
      93,    94,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,    97,    98,    99,     0,     0,     0,     0,
       0,     0,   111,     0,    97,    98,    99,     0,     0,     0,
     113,   114,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,   182,     0,     0,     0,
       0,     1,     0,     0,   113,   114,   115,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,   152,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   324,   250,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,    43,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,    68,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,   266,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,    67,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,   365,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   333,     1,     0,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-279)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    68,    68,   105,    83,    73,    27,    74,   120,    85,
       3,   191,    74,    48,    78,    43,   100,     3,    77,     3,
       3,   100,    81,    17,     3,   153,     3,    46,    28,    29,
      46,     3,    72,    33,    34,    35,    64,   252,    78,    78,
     110,   111,   320,     3,    65,    71,    78,    73,    67,    70,
      89,     3,   111,    72,    76,    78,    72,    89,    88,    80,
      78,    29,    30,    83,    90,     3,    89,    12,    13,     3,
     198,    89,   287,    73,    94,    95,    96,   179,    71,   146,
     100,    40,    74,   167,   186,    71,    78,    71,   167,    73,
      49,    50,    86,    76,    71,   162,   158,   173,    77,   163,
     120,   281,   282,    89,    90,    77,    90,   219,   220,   221,
     180,    71,   182,    90,    77,    78,   394,   187,   188,   189,
     139,   180,    43,   182,    76,   153,    73,    87,    75,    72,
      90,    52,   153,    71,   204,    73,   203,    82,    83,    40,
      72,    88,    78,    64,    77,    78,    78,   167,    49,    50,
     217,    87,    71,    74,    73,    76,    77,    78,   242,    72,
      81,    76,    72,   242,    71,    78,    73,   237,    78,    72,
     198,   238,   191,   275,    88,    78,    72,   289,    72,   246,
     246,    72,    78,   250,    78,    87,   270,    78,    72,    90,
     111,   270,   259,    71,    78,   262,     7,     8,     9,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   252,    31,    32,
      33,   249,   242,    10,    11,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    87,    71,   158,    73,    14,
      15,   162,   163,   345,   346,   347,    52,   268,    71,   249,
     270,    77,    78,   320,   320,   180,   256,   182,   286,   180,
      71,   182,    73,   331,    75,   332,    71,    77,    78,   289,
      76,    77,    78,    71,   376,    81,   378,   356,   348,   349,
     350,   222,   223,     3,   351,   387,   286,   354,   390,    89,
     392,   230,   231,   360,   360,    88,    28,   226,   227,   228,
     229,   224,   225,    89,    84,   111,    79,    85,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    16,   394,   394,    72,
      78,   331,    74,    74,    87,    87,   356,    64,   259,    89,
       3,    72,     3,     3,     3,    77,     3,    71,    74,    74,
      72,    72,    89,    76,    72,    74,    72,   163,    62,    74,
      74,    74,    74,    72,    74,   232,    74,   233,   236,   234,
      65,    28,   235,    76,   180,   268,   182,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,     3,     4,     5,     6,    57,     8,     9,   256,   351,
     247,   139,    35,    -1,    71,    72,    73,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    29,    30,    31,
      -1,    -1,    -1,    90,    36,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    49,    50,    -1,
      -1,    36,    -1,    -1,    -1,    40,     3,     4,     5,     6,
      -1,     8,     9,    -1,    49,    50,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    -1,    29,    30,    31,    -1,    71,    -1,    90,    74,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    81,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,    90,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    81,     3,     4,     5,     6,    -1,
       8,     9,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,    77,
      -1,    79,    80,    81,     3,     4,     5,     6,    -1,     8,
       9,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    71,     3,     4,     5,     6,    -1,     8,     9,
      79,    80,    81,    -1,    -1,    29,    30,    31,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    29,    30,
      31,    -1,    76,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    89,    -1,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,     3,     4,     5,     6,    89,
       8,     9,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      71,     8,     9,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    29,    30,    31,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    79,    80,    81,    71,     3,     4,     5,     6,    -1,
       8,     9,    79,    80,    81,    -1,     3,     4,     5,     6,
      -1,     8,     9,     3,     4,     5,     6,    -1,     8,     9,
      -1,    29,    30,    31,    -1,     3,     4,     5,     6,    -1,
       8,     9,    29,    30,    31,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    79,    80,    81,    71,    -1,    73,    -1,    75,    76,
      -1,    71,    79,    80,    81,    -1,    -1,    -1,    -1,    79,
      80,    81,    -1,    71,     3,     4,     5,     6,    76,     8,
       9,    79,    80,    81,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,     3,     4,     5,     6,    -1,     8,     9,
      -1,    29,    30,    31,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    29,    30,    31,    -1,    -1,    -1,
      79,    80,    81,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    79,    80,    81,     3,     4,     5,     6,    -1,     8,
       9,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      29,    30,    31,    -1,    79,    80,    81,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    29,    30,    31,    -1,    -1,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    71,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    79,    80,    81,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    72,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    90,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    88,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    77,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    76,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    72,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   113,   114,   117,   118,
     119,   120,   126,   129,   130,   156,   157,   158,     3,    76,
       3,    71,    89,    90,   115,   116,   131,   132,   133,   114,
     114,     3,    76,   114,   114,     0,   157,    76,     3,   127,
     128,   131,   129,   133,   134,    78,    89,    76,    88,   113,
     114,   149,   159,    71,    73,   132,    76,   118,   121,   122,
     123,   129,   127,    88,    77,    78,    72,   129,   133,   116,
     131,     3,     4,     5,     6,     8,     9,    29,    30,    31,
      59,    60,    61,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    77,    79,    80,    81,    89,    92,    93,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   111,   113,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     3,    76,   109,   142,   113,
     149,     3,    72,   114,   135,   136,   137,   138,    36,    74,
      90,   109,   134,   121,   123,    77,   122,    87,   124,   125,
     131,   123,    77,    78,    95,   108,   112,    77,   128,    87,
      71,    95,    71,    95,    95,   112,    87,    71,    71,    71,
     147,    71,     3,    89,    89,    89,   111,   111,   123,   139,
       7,     8,     9,    71,    73,    75,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    88,   110,    97,    31,
      32,    33,    29,    30,    10,    11,    12,    13,    82,    83,
      14,    15,    79,    84,    85,    16,    17,    86,    78,    89,
      77,   151,    73,    75,   142,   143,   144,   145,   146,    71,
      73,   131,   133,   140,   141,    72,    78,    72,    78,   134,
      74,    74,    36,    74,    90,   109,    77,   112,    78,    89,
      87,    77,   147,   139,   139,    87,   147,   111,   111,   111,
      64,   113,   152,    89,    89,    72,    71,   133,   140,    72,
       3,    72,    94,   109,   111,     3,   109,    97,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   103,   104,   105,   106,   111,   109,   112,     3,    77,
      78,   142,    88,   146,    72,   135,   140,    74,    90,   109,
     141,    71,    73,    58,   137,     3,   109,   109,    74,    74,
     125,   112,    72,    72,   147,    72,    72,    72,    71,   152,
     152,    76,    97,    72,    78,    74,    87,    74,    77,   142,
     144,    72,    72,    74,    74,    72,   135,    74,    90,   109,
      74,    74,   147,   147,   147,   111,    72,   111,    72,   111,
     143,   109,   108,   142,    72,    74,    74,    62,    72,   147,
      72,   147,    72,    77,    78,   147,    89,   147,   147,    77
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
      
/* Line 1792 of yacc.c  */
#line 2126 "c.tab.c"
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
#line 523 "c.y"


extern char yytext[];
extern int column;

void printC3AFuncions(t_registreC3A * pC3A, char * nom_funcio) {
   t_quadrupleC3A * pQuadruple;
   Cua * llista_quadruples;

   fprintf(fCodi3A, "SUBRUTINA %s:\n\n", nom_funcio);
   
   llista_quadruples = pC3A -> quadrupleC3A;
    
   for (;primer(llista_quadruples);) {
      pQuadruple = (struct t_quadrupleC3A *) primer(llista_quadruples);
      fprintf(fCodi3A, "\tLINIA %d: %s\n", pQuadruple -> num_sentencia, pQuadruple -> sentenciaC3A);
      
      desencuar(llista_quadruples);
   }
   fprintf(fCodi3A, "\n");
   
   fprintf(fCodi3A, "HALT\n\n");
}

void printC3AGlobal(t_registreC3A * pC3A) {
   t_quadrupleC3A * pQuadruple;
   Cua * llista_quadruples;

   fprintf(fCodi3A, "GLOBAL:\n\n");
   
   llista_quadruples = pC3A -> quadrupleC3A;
    
   for (;primer(llista_quadruples);) {
      pQuadruple = (struct t_quadrupleC3A *) primer(llista_quadruples);
      fprintf(fCodi3A, "\tLINIA %d: %s\n", pQuadruple -> num_sentencia, pQuadruple -> sentenciaC3A);
      
      desencuar(llista_quadruples);
   }
}
 
char * tipusDadesID(int idTipus, int espais) {
   char * tdades = (char *) malloc(10);
   
   strcpy(tdades, "");
   
   if (espais) {
      switch (idTipus) {
         case -1: strcpy(tdades, "NULL     "); break;
         case 0: strcpy(tdades, "VOID     "); break;
         case 1: strcpy(tdades, "CHAR     "); break;
         case 2: strcpy(tdades, "SHORT    "); break;
         case 3: strcpy(tdades, "INT      "); break;
         case 4: strcpy(tdades, "LONG     "); break;
         case 5: strcpy(tdades, "FLOAT    "); break;
         case 6: strcpy(tdades, "DOUBLE   "); break;
         case 7: strcpy(tdades, "STRING   "); break;
         case 8: strcpy(tdades, "STRUCT   "); break;
      }
   }
   else {
      switch (idTipus) {
         case -1: strcpy(tdades, "NULL"); break;
         case 0: strcpy(tdades, "VOID"); break;
         case 1: strcpy(tdades, "CHAR"); break;
         case 2: strcpy(tdades, "SHORT"); break;
         case 3: strcpy(tdades, "INT"); break;
         case 4: strcpy(tdades, "LONG"); break;
         case 5: strcpy(tdades, "FLOAT"); break;
         case 6: strcpy(tdades, "DOUBLE"); break;
         case 7: strcpy(tdades, "STRING"); break;
         case 8: strcpy(tdades, "STRUCT"); break;
      }   
   }
   return tdades;
}

int init_analisi_sintactic_O(char * fileOutput, char * nomFitxerRA, char * nomFitxerC3A) {
   int error; 
   
   nom_fitxerRA = nomFitxerRA;
   nom_fitxerC3A = nomFitxerC3A;
   yyout = fopen(fileOutput, "w");

   fRegActivacio = fopen(nomFitxerRA, "w");
   fCodi3A = fopen(nomFitxerC3A, "w");
   
   num_errors = 0; valor_retorn = NULL;
   if ((yyout == NULL) || (fRegActivacio == NULL) || (fCodi3A == NULL)) 
    { error = EXIT_FAILURE; }
   else 
   { error = EXIT_SUCCESS; }

   return error;

}

void printRegistreActivacioGlobal(t_registreActivacio * pRegistreActivacio) {
   t_cadenaRegistreActivacio * pvalors;
   
   fprintf(fRegActivacio, "GLOBAL\n");
      
   pvalors = pRegistreActivacio -> primer_llista_locals;
   fprintf(fRegActivacio, "\n[ + ] Variables Globals (nom_param tipus_param tipus_param_tamany offset)\n\n");
   
   for (;pvalors;) {
      if (pvalors -> es_array == FALSE) { 
         fprintf(fRegActivacio, "\t\t[ - ] %s %s %d %d\n", pvalors -> nom, tipusDadesID(pvalors -> tipus, 0), pvalors -> tam_tipus, pvalors -> offset);
      }
      else {
         fprintf(fRegActivacio, "\t\t[ - ] %s %s[%lu] %d %d\n", pvalors -> nom, tipusDadesID(pvalors -> tipus, 0), pvalors -> tam_array, pvalors -> tam_tipus, pvalors -> offset);
      }
      
      pvalors = pvalors -> seguent;
   }
   
   pvalors = pRegistreActivacio -> primer_llista_temporals;
   fprintf(fRegActivacio, "\n[ + ] Variables Temporals (nom_param tipus_param tipus_param_tamany offset)\n\n");
   
   for (;pvalors;) {
      fprintf(fRegActivacio, "\t\t[ - ] %s %s %d %d\n", pvalors -> nom, tipusDadesID(pvalors -> tipus, 0), pvalors -> tam_tipus, pvalors -> offset);
      
      pvalors = pvalors -> seguent;
   }     
   fprintf(fRegActivacio, "\n\n"); 
}

int end_analisi_sintactic_O() {
   int error;
   
   printRegistreActivacioGlobal(registreActivacioGlobal);
   printC3AGlobal(C3AGlobal);
   error = fclose(yyout);
   error |= fclose(fRegActivacio);
   error |= fclose(fCodi3A);
   
   if (num_errors > 0) {
      remove(nom_fitxerRA);
      remove(nom_fitxerC3A);         
      fprintf(stdout, "\n\n\t-----------------------------------------------------");
      fprintf(stdout, "\n\t\t[ ERR ] Compiled with %d error/s\n", num_errors);
      fprintf(stdout, "\t-----------------------------------------------------\n\n");
   }
   else {
      fprintf(stdout, "\n\n\t-----------------------------------------------------");
      fprintf(stdout, "\n\t\t[ OK ] Compilation generated successfully\n"); 
      fprintf(stdout, "\t-----------------------------------------------------\n\n");
   }
   
   if (error == 0) 
    { error = EXIT_SUCCESS; }
   else
    { error = EXIT_FAILURE; }
   
   return error; 
}

int iniC3A(t_registreC3A * pC3A) {
     
   if (pC3A != NULL) {

      pC3A -> num_quadruples = 0;
	  pC3A -> quadrupleC3A = crear_cua();

      return 0;         
   }
   return -1;
}

int iniRegistreActivacio(t_registreActivacio * pRegistreActivacio, char * nom_registre) {
     
   if (pRegistreActivacio != NULL) {
      pRegistreActivacio -> nom_registre = malloc(strlen(nom_registre) + 1); strcpy(pRegistreActivacio -> nom_registre, nom_registre);                    
      pRegistreActivacio -> num_llista_parametres = 0;
      pRegistreActivacio -> num_llista_locals = 0;
      pRegistreActivacio -> num_llista_temporals = 0;
      pRegistreActivacio -> currentOffset = 0; 
      
      pRegistreActivacio -> primer_llista_parametres = NULL;
      pRegistreActivacio -> primer_llista_locals = NULL;
      pRegistreActivacio -> primer_llista_temporals = NULL;
      pRegistreActivacio -> ultim_llista_parametres = NULL;
      pRegistreActivacio -> ultim_llista_locals = NULL;
      pRegistreActivacio -> ultim_llista_temporals = NULL;
      
      return 0;         
   }
   return -1;
}

int analisi_semantic() {
   int error;
   
   registreActivacioGlobal = (t_registreActivacio *) malloc(sizeof(t_registreActivacio));
   iniRegistreActivacio(registreActivacioGlobal, "GLOBAL");
   
   C3AGlobal = (t_registreC3A *) malloc(sizeof(t_registreC3A));
   iniC3A(C3AGlobal);
   
   if (yyparse() == 0)
    { error =  EXIT_SUCCESS; }
   else
    { error =  EXIT_FAILURE; }
   
   return error;
}

int main(int argc, char *argv[]) {
    if (argc == 3) {
      char * fRA, * fC3A;
      if (init_analisi_lexic_I(argv[1]) == EXIT_SUCCESS) {
         fRA = (char *) malloc(strlen(argv[2]) + 4);
         fC3A = (char *) malloc(strlen(argv[2]) + 5); 
         sprintf(fRA, "%s.ra", argv[2]);
         sprintf(fC3A, "%s.c3a", argv[2]);                               
         if (init_analisi_sintactic_O(argv[2], fRA, fC3A) == EXIT_SUCCESS) {
            gestioParaulesReservades();       
            analisi_semantic();
         
            end_analisi_lexic_I(); 
            end_analisi_sintactic_O();
         }
         else {
            printf("\n\n###########################################################\n");
            printf("###\t\t\t\t\t\t\t###\n");
            printf("###\t[ ERR ] El fitxers de sortida %s %s %s no s'han creat\t###\n", argv[2], fRA, fC3A);
            printf("###\t\t\t\t\t\t\t###\n");      
            printf("###########################################################\n\n");       
         }
      }
      else {
         printf("\n\n###########################################################\n");
         printf("###\t\t\t\t\t\t\t###\n");
         printf("###\t[ ERR ] El fitxer d'entrada %s no existeix\t###\n", argv[1]);
         printf("###\t\t\t\t\t\t\t###\n");      
         printf("###########################################################\n\n");       
      }
   }         
   else {
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