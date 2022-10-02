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
     SEMI_OP = 271,
     OCURLY_OP = 272,
     CCURLY_OP = 273,
     COMMA_OP = 274,
     AND_OP = 275,
     OR_OP = 276,
     MUL_ASSIGN = 277,
     DIV_ASSIGN = 278,
     MOD_ASSIGN = 279,
     ADD_ASSIGN = 280,
     SUB_ASSIGN = 281,
     LEFT_ASSIGN = 282,
     RIGHT_ASSIGN = 283,
     AND_ASSIGN = 284,
     XOR_ASSIGN = 285,
     OR_ASSIGN = 286,
     TYPE_NAME = 287,
     PLUS = 288,
     MINUS = 289,
     MUL = 290,
     DIV = 291,
     MOD = 292,
     BIT_OR = 293,
     BIT_AND = 294,
     TYPEDEF = 295,
     EXTERN = 296,
     STATIC = 297,
     AUTO = 298,
     REGISTER = 299,
     INLINE = 300,
     RESTRICT = 301,
     CHAR = 302,
     SHORT = 303,
     INT = 304,
     LONG = 305,
     SIGNED = 306,
     UNSIGNED = 307,
     FLOAT = 308,
     DOUBLE = 309,
     CONST = 310,
     VOLATILE = 311,
     VOID = 312,
     BOOL = 313,
     COMPLEX = 314,
     IMAGINARY = 315,
     STRUCT = 316,
     UNION = 317,
     ENUM = 318,
     ELLIPSIS = 319,
     CASE = 320,
     DEFAULT = 321,
     IF = 322,
     ELSE = 323,
     SWITCH = 324,
     WHILE = 325,
     DO = 326,
     FOR = 327,
     GOTO = 328,
     CONTINUE = 329,
     BREAK = 330,
     RETURN = 331
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
#line 249 "c.tab.c"
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
#line 277 "c.tab.c"

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
#define YYLAST   1667

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  238
/* YYNRULES -- Number of states.  */
#define YYNSTATES  400

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,     2,     2,     2,     2,     2,     2,
      77,    78,    91,     2,    82,     2,    81,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,    92,
      85,    90,    86,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    87,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    83,     2,     2,     2,
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
      75,    76
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
     158,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    77,
     113,    78,    -1,    94,    -1,    95,    79,   113,    80,    -1,
      95,    77,    78,    -1,    95,    77,    96,    78,    -1,    95,
      81,     3,    -1,    95,     7,     3,    -1,    95,     8,    -1,
      95,     9,    -1,    77,   141,    78,    17,   145,    18,    -1,
      77,   141,    78,    17,   145,    19,    18,    -1,   111,    -1,
      96,    82,   111,    -1,    95,    -1,     8,    97,    -1,     9,
      97,    -1,    98,    99,    -1,     6,    97,    -1,     6,    77,
     141,    78,    -1,    39,    -1,    35,    -1,    33,    -1,    34,
      -1,    83,    -1,    84,    -1,    97,    -1,    77,   141,    78,
      99,    -1,    99,    -1,   100,    35,    99,    -1,   100,    36,
      99,    -1,   100,    37,    99,    -1,   100,    -1,   101,    33,
     100,    -1,   101,    34,   100,    -1,   101,    -1,   102,    10,
     101,    -1,   102,    11,   101,    -1,   102,    -1,   103,    85,
     102,    -1,   103,    86,   102,    -1,   103,    12,   102,    -1,
     103,    13,   102,    -1,   103,    -1,   104,    14,   103,    -1,
     104,    15,   103,    -1,   104,    -1,   105,    39,   104,    -1,
     105,    -1,   106,    87,   105,    -1,   106,    -1,   107,    38,
     106,    -1,   107,    -1,   108,    20,   107,    -1,   108,    -1,
     109,    21,   108,    -1,   109,    -1,   109,    88,   113,    89,
     110,    -1,   110,    -1,    97,   112,   111,    -1,    90,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    31,    -1,
     111,    -1,   113,    19,   111,    -1,   110,    -1,   116,    16,
      -1,   116,   117,    16,    -1,   119,    -1,   119,   116,    -1,
     120,    -1,   120,   116,    -1,   131,    -1,   131,   116,    -1,
     132,    -1,   132,   116,    -1,   118,    -1,   117,    19,   118,
      -1,   133,    -1,   133,    90,   144,    -1,    40,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    57,    -1,    47,
      -1,    48,    -1,    49,    -1,    50,    -1,    53,    -1,    54,
      -1,    51,    -1,    52,    -1,    58,    -1,    59,    -1,    60,
      -1,   121,    -1,   128,    -1,    32,    -1,   122,     3,    17,
     123,    18,    -1,   122,    17,   123,    18,    -1,   122,     3,
      -1,    61,    -1,    62,    -1,   124,    -1,   123,   124,    -1,
     125,   126,    16,    -1,   120,   125,    -1,   120,    -1,   131,
     125,    -1,   131,    -1,   127,    -1,   126,    19,   127,    -1,
     133,    -1,    89,   114,    -1,   133,    89,   114,    -1,    63,
      17,   129,    18,    -1,    63,     3,    17,   129,    18,    -1,
      63,    17,   129,    19,    18,    -1,    63,     3,    17,   129,
      19,    18,    -1,    63,     3,    -1,   130,    -1,   129,    19,
     130,    -1,     3,    -1,     3,    90,   114,    -1,    55,    -1,
      46,    -1,    56,    -1,    45,    -1,   135,   134,    -1,   134,
      -1,     3,    -1,    77,   133,    78,    -1,   134,    79,   136,
     111,    80,    -1,   134,    79,   136,    80,    -1,   134,    79,
     111,    80,    -1,   134,    79,    42,   136,   111,    80,    -1,
     134,    79,   136,    42,   111,    80,    -1,   134,    79,   136,
      91,    80,    -1,   134,    79,    91,    80,    -1,   134,    79,
      80,    -1,   134,    77,   137,    78,    -1,   134,    77,   140,
      78,    -1,   134,    77,    78,    -1,    91,    -1,    91,   136,
      -1,    91,   135,    -1,    91,   136,   135,    -1,   131,    -1,
     136,   131,    -1,   138,    -1,   138,    19,    64,    -1,   139,
      -1,   138,    19,   139,    -1,   116,   133,    -1,   116,   142,
      -1,   116,    -1,     3,    -1,   140,    19,     3,    -1,   125,
      -1,   125,   142,    -1,   135,    -1,   143,    -1,   135,   143,
      -1,    77,   142,    78,    -1,    79,    80,    -1,    79,   111,
      80,    -1,   143,    79,    80,    -1,   143,    79,   111,    80,
      -1,    79,    91,    80,    -1,   143,    79,    91,    80,    -1,
      77,    78,    -1,    77,   137,    78,    -1,   143,    77,    78,
      -1,   143,    77,   137,    78,    -1,   111,    -1,    17,   145,
      18,    -1,    17,   145,    19,    18,    -1,   144,    -1,   146,
     144,    -1,   145,    19,   144,    -1,   145,    19,   146,   144,
      -1,   147,    90,    -1,   148,    -1,   147,   148,    -1,    79,
     114,    80,    -1,    81,     3,    -1,   150,    -1,   151,    -1,
     154,    -1,   155,    -1,   156,    -1,   157,    -1,     3,    89,
     149,    -1,    65,   114,    89,   149,    -1,    66,    89,   149,
      -1,    17,    18,    -1,    17,   152,    18,    -1,   153,    -1,
     152,   153,    -1,   115,    -1,   149,    -1,    92,    -1,   113,
      92,    -1,    67,    77,   113,    78,   149,    -1,    67,    77,
     113,    78,   149,    68,   149,    -1,    69,    77,   113,    78,
     149,    -1,    70,    77,   113,    78,   149,    -1,    71,   149,
      70,    77,   113,    78,    16,    -1,    72,    77,   154,   154,
      78,   149,    -1,    72,    77,   154,   154,   113,    78,   149,
      -1,    72,    77,   115,   154,    78,   149,    -1,    72,    77,
     115,   154,   113,    78,   149,    -1,    73,     3,    16,    -1,
      74,    16,    -1,    75,    16,    -1,    76,    16,    -1,    76,
     113,    16,    -1,   159,    -1,   158,   159,    -1,   160,    -1,
     115,    -1,   116,   133,   161,   151,    -1,   116,   133,   151,
      -1,   115,    -1,   161,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    83,    84,    85,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   102,   103,   107,   108,
     109,   110,   111,   112,   116,   117,   118,   119,   120,   121,
     125,   126,   130,   131,   132,   133,   137,   138,   139,   143,
     144,   145,   149,   150,   151,   152,   153,   157,   158,   159,
     163,   164,   168,   169,   173,   174,   178,   179,   183,   184,
     188,   189,   193,   194,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   212,   213,   217,   221,   222,
     226,   227,   228,   229,   230,   231,   232,   233,   237,   238,
     242,   243,   247,   248,   249,   250,   251,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   273,   274,   275,   279,   280,   284,   285,   289,
     293,   294,   295,   296,   300,   301,   305,   306,   307,   311,
     312,   313,   314,   315,   319,   320,   324,   325,   329,   330,
     331,   335,   339,   340,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   361,   362,   363,
     364,   368,   369,   374,   375,   379,   380,   384,   385,   386,
     390,   391,   395,   396,   400,   401,   402,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   420,   421,
     422,   426,   427,   428,   429,   433,   437,   438,   442,   443,
     447,   448,   449,   450,   451,   452,   456,   457,   458,   462,
     463,   467,   468,   472,   473,   477,   478,   482,   483,   484,
     488,   489,   490,   491,   492,   493,   497,   498,   499,   500,
     501,   505,   506,   510,   511,   515,   516,   520,   521
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "SEMI_OP", "OCURLY_OP",
  "CCURLY_OP", "COMMA_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "BIT_OR", "BIT_AND", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "INLINE", "RESTRICT", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "BOOL", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'~'", "'!'", "'<'", "'>'", "'^'", "'?'", "':'", "'='", "'*'", "';'",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
     325,   326,   327,   328,   329,   330,   331,    40,    41,    91,
      93,    46,    44,   126,    33,    60,    62,    94,    63,    58,
      61,    42,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   100,   100,   100,   101,   101,   101,   102,
     102,   102,   103,   103,   103,   103,   103,   104,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     125,   125,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   135,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   144,   144,
     144,   145,   145,   145,   145,   146,   147,   147,   148,   148,
     149,   149,   149,   149,   149,   149,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   156,   156,   156,   156,   156,   157,   157,   157,   157,
     157,   158,   158,   159,   159,   160,   160,   161,   161
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
      90,     2,     3,     4,     0,     0,     0,   209,    26,    27,
      25,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    29,   215,     6,    18,    30,
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
       0,   167,   174,   168,   175,   154,     0,     0,   155,     0,
     152,   148,     0,   147,     0,     0,   112,   127,   119,     0,
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
#define YYPACT_NINF -271
static const yytype_int16 yypact[] =
{
    1572,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,    61,  -271,     8,  1572,  1572,
    -271,   149,  -271,  1572,  1572,  1344,  -271,  -271,    45,   146,
    -271,  -271,    36,    87,    42,  -271,  1280,   105,    34,  -271,
    -271,   138,  1604,  -271,  -271,  -271,  -271,   146,    91,    33,
    -271,   107,  -271,  -271,    87,  -271,    36,   388,   996,  -271,
       8,  -271,  1428,  1233,   660,   105,  1604,  1604,   520,  -271,
      37,  1604,   156,  1173,  -271,    38,  -271,  -271,  -271,  -271,
     129,   134,  -271,  -271,  1185,  1225,  1225,  -271,  -271,  -271,
    -271,  -271,  1173,   151,   201,   205,   206,   613,   212,   295,
     283,   286,  1066,   830,  -271,  -271,  -271,  -271,    58,   202,
    1173,  -271,   161,   126,   157,     7,   179,   267,   220,   271,
     291,     1,  -271,  -271,     6,  -271,  -271,  -271,  -271,   470,
    -271,  -271,  -271,  -271,  -271,  -271,   973,  -271,  -271,  -271,
    -271,  -271,  -271,    43,   235,   296,  -271,    12,    -2,  -271,
     234,   238,   714,  1507,  -271,  -271,  -271,  1173,   145,  -271,
     230,  -271,  -271,   135,  -271,  -271,  -271,  -271,  -271,   613,
     830,  -271,   830,  -271,  -271,   231,   613,  1173,  1173,  1173,
     251,   552,   306,  -271,  -271,  -271,   153,    41,   -22,   245,
     321,  -271,  -271,  1082,  1173,   323,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,  -271,  1173,  -271,  1173,
    1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,
    1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  -271,
    -271,  -271,  1173,   326,  -271,   216,   996,    75,  -271,   309,
     724,  -271,    44,  -271,   141,  -271,  1539,   327,  -271,  1012,
    -271,  -271,  1173,  -271,   253,   254,  -271,  -271,  -271,    37,
    1173,  -271,  -271,   257,   259,   613,  -271,    51,    52,    53,
     261,   233,   233,  -271,  -271,  -271,  1376,   178,  -271,  1103,
    -271,  -271,    66,  -271,    11,  -271,  -271,  -271,  -271,  -271,
     161,   161,   126,   126,   157,   157,   157,   157,     7,     7,
     179,   267,   220,   271,   291,    -9,  -271,   262,  -271,  -271,
     891,  -271,  -271,  -271,  -271,   265,   266,  -271,   268,   293,
     141,  1460,   777,  -271,  -271,  -271,   294,   297,  -271,  -271,
    -271,  -271,   322,   322,  -271,   613,   613,   613,  1173,  1119,
    1165,   973,  -271,  -271,  1173,  -271,  1173,  -271,  -271,  -271,
     996,  -271,  -271,  -271,  -271,  -271,   269,  -271,   298,   299,
    -271,  -271,   277,  -271,  -271,    62,   613,    67,   613,    68,
     228,  -271,  -271,  -271,  -271,  -271,  -271,   613,   330,  -271,
     613,  -271,   613,  -271,   914,  -271,  -271,  -271,  -271,  -271
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,  -271,  -271,   -20,  -271,  -112,    29,    35,   -39,
      50,   143,   147,   142,   148,   159,  -271,   -79,   -67,  -271,
     -86,   -84,   -29,     0,  -271,   315,  -271,   219,  -271,  -271,
     308,   -57,   -65,  -271,   133,  -271,   341,   -76,   227,  -271,
     -21,   -35,   -28,   -42,   -70,  -271,   152,  -271,    93,   -41,
    -111,   -66,    59,  -270,  -271,   164,  -102,  -271,    -4,  -271,
     264,  -177,  -271,  -271,  -271,  -271,   369,  -271,  -271
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,   147,   148,   154,   175,   190,    46,   161,   218,   178,
     238,    40,   164,    75,   282,    63,   171,    69,   185,   226,
     227,   166,   236,   175,    41,   238,   196,   197,    49,    50,
     238,   257,   162,    53,    54,    27,    88,    40,   135,    40,
      40,    58,    71,   149,     8,    90,    40,    40,   198,    90,
     360,    84,    85,    17,    18,   286,   177,   250,    65,   170,
     238,    66,    57,   174,    38,   200,   201,   202,   150,    43,
     238,   238,   238,   153,   181,   183,   184,   272,    39,   147,
     356,   238,   174,   267,   276,    42,   238,   238,   175,   237,
     258,   355,   228,   229,   197,   265,   197,   178,   239,    43,
     174,   277,   278,   279,   349,   350,   166,   297,   298,   299,
     135,    42,   253,    42,    42,   198,   259,   198,   294,   285,
     249,   249,   250,   250,   360,   252,   167,    43,    43,   345,
     346,   347,   251,     8,    43,   203,   293,   204,    58,   205,
     388,   330,    17,    18,   353,   390,   392,   174,   354,    58,
     296,   315,    51,   271,   242,    76,   243,   288,   317,   222,
     223,   268,   281,   175,   269,   322,    52,   224,   225,   284,
     287,   316,   238,   344,   172,   173,   330,   352,    43,   147,
     321,    83,    73,   329,    74,    86,   341,   304,   305,   306,
     307,   175,   336,   230,   231,   337,   219,   220,   221,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,    75,   331,    68,
     332,   252,   174,   179,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   319,   320,   145,    92,    93,    94,
     186,    95,    96,   372,   373,   374,   393,   394,   170,   153,
     174,   300,   301,   147,   359,   286,   153,   250,   287,   302,
     303,   366,   375,   377,   379,   369,    98,    99,   100,   174,
      62,    77,   101,   273,   389,   274,   391,   382,   187,    81,
     308,   309,   188,   189,   147,   395,   153,   381,   397,   191,
     398,    87,   216,   147,   383,    77,    77,    77,   192,   193,
      77,    62,   194,    81,    81,    81,   232,   233,    81,   234,
     113,   235,    40,   255,   260,   256,   114,   115,   261,   270,
     275,   280,   283,   289,   290,   116,   295,   147,   359,   318,
     335,   153,    77,   338,   339,   342,   174,   343,   348,   351,
      81,     1,   357,   361,   362,   387,   396,   384,   363,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   364,   370,   310,   312,   371,   385,   386,
     311,    89,    77,   313,   163,    62,   249,   324,   250,    87,
      81,    91,    92,    93,    94,   314,    95,    96,    82,    77,
      43,    77,   340,   241,    56,    67,    97,    81,   334,    81,
     380,   323,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    98,    99,   100,     0,     0,     0,   101,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,   102,   103,   104,     0,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,     0,     0,     0,
       0,   114,   115,    91,    92,    93,    94,     0,    95,    96,
     116,     0,     0,     0,     0,     0,    87,    67,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    98,    99,   100,     0,     0,     0,   101,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   102,   103,   104,   165,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
       0,     0,     1,   114,   115,   145,    92,    93,    94,     0,
      95,    96,   116,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     1,    98,    99,   100,     0,     0,
       0,   101,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,   113,
      67,     0,     0,     0,     0,   114,   115,     0,     0,     0,
       0,     0,     0,     0,   116,     0,    98,    99,   100,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,     0,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,    98,    99,   100,   114,   115,     0,   101,
       0,     0,   158,     0,     0,   116,     8,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    18,   145,    92,    93,
      94,     0,    95,    96,     0,     0,     0,   145,    92,    93,
      94,     0,    95,    96,     0,     0,     0,   113,     0,     0,
     159,     0,     0,   114,   115,     0,     0,    98,    99,   100,
       0,   160,     0,   101,     0,     0,   262,    98,    99,   100,
       8,     0,     0,   101,     0,     0,     0,     0,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,   113,     0,     0,   263,     0,     0,   114,   115,     0,
       0,   113,     0,     0,   327,   264,     0,   114,   115,     0,
      98,    99,   100,     0,     0,   328,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,   367,     0,     0,
     114,   115,     1,    98,    99,   100,     0,     0,   368,   101,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   145,    92,    93,    94,     0,    95,
      96,     0,     0,     0,     0,     0,     0,   113,   146,   358,
       0,     0,     0,   114,   115,     0,     0,   145,    92,    93,
      94,     0,    95,    96,    98,    99,   100,     0,     0,     0,
     101,   146,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,   100,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
     242,     0,   243,     0,   114,   115,   145,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
     146,   113,     0,   242,     0,   243,     0,   114,   115,   145,
      92,    93,    94,     0,    95,    96,    98,    99,   100,     0,
       0,     0,   101,   146,     0,   145,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,     0,     0,
     113,   101,   242,     0,   243,     0,   114,   115,     8,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,   145,
      92,    93,    94,   113,    95,    96,     0,     0,     0,   114,
     115,     0,   195,     0,     0,   145,    92,    93,    94,   113,
      95,    96,     0,     0,     0,   114,   115,     0,     0,    98,
      99,   100,     0,     0,     0,   101,   145,    92,    93,    94,
       0,    95,    96,     0,     0,    98,    99,   100,     0,     0,
     351,   101,   145,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,     0,
       0,     0,   101,   113,     0,     0,     0,     0,     0,   114,
     115,     0,    98,    99,   100,     0,     0,     0,   101,   113,
     291,     0,     0,     0,     0,   114,   115,     0,   145,    92,
      93,    94,     0,    95,    96,     0,   145,    92,    93,    94,
     113,    95,    96,     0,     0,     0,   114,   115,   145,    92,
      93,    94,     0,    95,    96,     0,   113,   376,    98,    99,
     100,     0,   114,   115,   101,     0,    98,    99,   100,     0,
       0,     0,   101,     0,     0,     0,     0,     0,    98,    99,
     100,     0,     0,     0,   101,     0,     0,     0,   145,    92,
      93,    94,     0,    95,    96,     0,   151,     0,     0,     0,
       0,     0,   113,   378,     0,     0,     0,     0,   114,   115,
     113,     0,     0,     0,     0,     0,   114,   115,    98,    99,
     100,     0,   180,     0,   101,     1,     0,     0,   114,   115,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    67,     0,     0,
       0,     0,   182,     0,     0,     0,     0,     0,   114,   115,
       0,   152,     1,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     1,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,   286,   324,   250,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,    43,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     1,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   266,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   365,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     1,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   333,     1,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-271)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    68,    68,    73,    83,   107,    27,    74,   120,    85,
      19,     3,    77,    48,   191,    43,    81,    46,   102,    12,
      13,    78,    21,   102,    16,    19,   112,   113,    28,    29,
      19,    19,    74,    33,    34,    35,    64,     3,    67,     3,
       3,     3,    46,    72,    46,    66,     3,     3,   113,    70,
     320,    18,    19,    55,    56,    77,    18,    79,    16,    80,
      19,    19,    17,    83,     3,     7,     8,     9,    72,    91,
      19,    19,    19,    73,    94,    95,    96,   179,    17,   146,
      89,    19,   102,   167,   186,    77,    19,    19,   167,    88,
      78,    80,    85,    86,   180,   162,   182,   173,    92,    91,
     120,   187,   188,   189,   281,   282,   163,   219,   220,   221,
     139,    77,   153,    77,    77,   180,   158,   182,   204,    78,
      77,    77,    79,    79,   394,   153,    89,    91,    91,    78,
      78,    78,   153,    46,    91,    77,   203,    79,     3,    81,
      78,   252,    55,    56,    78,    78,    78,   167,    82,     3,
     217,   237,     3,    18,    79,    17,    81,   198,   242,    33,
      34,    16,   191,   242,    19,    90,    17,    10,    11,    16,
     198,   238,    19,   275,    18,    19,   287,   289,    91,   246,
     246,    90,    77,   250,    79,    78,   270,   226,   227,   228,
     229,   270,   259,    14,    15,   262,    35,    36,    37,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   252,    77,    90,
      79,   249,   242,    89,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    18,    19,     3,     4,     5,     6,
      89,     8,     9,   345,   346,   347,    18,    19,   269,   249,
     270,   222,   223,   320,   320,    77,   256,    79,   286,   224,
     225,   331,   348,   349,   350,   332,    33,    34,    35,   289,
      43,    52,    39,   180,   376,   182,   378,   356,    77,    52,
     230,   231,    77,    77,   351,   387,   286,   354,   390,    77,
     392,    64,    90,   360,   360,    76,    77,    78,     3,    16,
      81,    74,    16,    76,    77,    78,    39,    87,    81,    38,
      77,    20,     3,    78,    80,    19,    83,    84,    80,    89,
      89,    70,    16,    78,     3,    92,     3,   394,   394,     3,
       3,   331,   113,    80,    80,    78,   356,    78,    77,    17,
     113,    32,    80,    78,    78,    68,    16,    78,    80,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    80,    80,   232,   234,    80,    80,    80,
     233,    66,   163,   235,    76,   158,    77,    78,    79,   162,
     163,     3,     4,     5,     6,   236,     8,     9,    57,   180,
      91,   182,   269,   139,    35,    17,    18,   180,   256,   182,
     351,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    84,     3,     4,     5,     6,    -1,     8,     9,
      92,    -1,    -1,    -1,    -1,    -1,   259,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    18,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    32,    83,    84,     3,     4,     5,     6,    -1,
       8,     9,    92,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    32,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      17,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    33,    34,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    33,    34,    35,    83,    84,    -1,    39,
      -1,    -1,    42,    -1,    -1,    92,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    77,    -1,    -1,
      80,    -1,    -1,    83,    84,    -1,    -1,    33,    34,    35,
      -1,    91,    -1,    39,    -1,    -1,    42,    33,    34,    35,
      46,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    -1,    -1,    83,    84,    -1,
      -1,    77,    -1,    -1,    80,    91,    -1,    83,    84,    -1,
      33,    34,    35,    -1,    -1,    91,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,
      83,    84,    32,    33,    34,    35,    -1,    -1,    91,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    77,    17,    18,
      -1,    -1,    -1,    83,    84,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    33,    34,    35,    -1,    -1,    -1,
      39,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    84,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    77,    -1,    79,    -1,    81,    -1,    83,    84,     3,
       4,     5,     6,    -1,     8,     9,    33,    34,    35,    -1,
      -1,    -1,    39,    17,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      77,    39,    79,    -1,    81,    -1,    83,    84,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,     3,
       4,     5,     6,    77,     8,     9,    -1,    -1,    -1,    83,
      84,    -1,    16,    -1,    -1,     3,     4,     5,     6,    77,
       8,     9,    -1,    -1,    -1,    83,    84,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    33,    34,    35,    -1,    -1,
      17,    39,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    39,    77,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    33,    34,    35,    -1,    -1,    -1,    39,    77,
      78,    -1,    -1,    -1,    -1,    83,    84,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,     3,     4,     5,     6,
      77,     8,     9,    -1,    -1,    -1,    83,    84,     3,     4,
       5,     6,    -1,     8,     9,    -1,    77,    78,    33,    34,
      35,    -1,    83,    84,    39,    -1,    33,    34,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    83,    84,
      77,    -1,    -1,    -1,    -1,    -1,    83,    84,    33,    34,
      35,    -1,    77,    -1,    39,    32,    -1,    -1,    83,    84,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    17,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    78,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    91,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   115,   116,   119,   120,
     121,   122,   128,   131,   132,   158,   159,   160,     3,    17,
       3,    16,    77,    91,   117,   118,   133,   134,   135,   116,
     116,     3,    17,   116,   116,     0,   159,    17,     3,   129,
     130,   133,   131,   135,   136,    16,    19,    17,    90,   115,
     116,   151,   161,    77,    79,   134,    17,   120,   123,   124,
     125,   131,   129,    90,    18,    19,    78,   131,   135,   118,
     133,     3,     4,     5,     6,     8,     9,    18,    33,    34,
      35,    39,    65,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    83,    84,    92,    94,    95,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   113,   115,   149,   150,   151,   152,
     153,   154,   155,   156,   157,     3,    17,   111,   144,   115,
     151,     3,    78,   116,   137,   138,   139,   140,    42,    80,
      91,   111,   136,   123,   125,    18,   124,    89,   126,   127,
     133,   125,    18,    19,    97,   110,   114,    18,   130,    89,
      77,    97,    77,    97,    97,   114,    89,    77,    77,    77,
     149,    77,     3,    16,    16,    16,   113,   113,   125,   141,
       7,     8,     9,    77,    79,    81,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    90,   112,    99,    35,
      36,    37,    33,    34,    10,    11,    12,    13,    85,    86,
      14,    15,    39,    87,    38,    20,    21,    88,    19,    92,
      18,   153,    79,    81,   144,   145,   146,   147,   148,    77,
      79,   133,   135,   142,   143,    78,    19,    19,    78,   136,
      80,    80,    42,    80,    91,   111,    18,   114,    16,    19,
      89,    18,   149,   141,   141,    89,   149,   113,   113,   113,
      70,   115,   154,    16,    16,    78,    77,   135,   142,    78,
       3,    78,    96,   111,   113,     3,   111,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   103,   103,
     104,   105,   106,   107,   108,   113,   111,   114,     3,    18,
      19,   144,    90,   148,    78,   137,   142,    80,    91,   111,
     143,    77,    79,    64,   139,     3,   111,   111,    80,    80,
     127,   114,    78,    78,   149,    78,    78,    78,    77,   154,
     154,    17,    99,    78,    82,    80,    89,    80,    18,   144,
     146,    78,    78,    80,    80,    78,   137,    80,    91,   111,
      80,    80,   149,   149,   149,   113,    78,   113,    78,   113,
     145,   111,   110,   144,    78,    80,    80,    68,    78,   149,
      78,   149,    78,    18,    19,   149,    16,   149,   149,    18
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
#line 2133 "c.tab.c"
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
#line 525 "c.y"


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