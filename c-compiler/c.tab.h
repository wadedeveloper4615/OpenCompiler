/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
     COLON_OP = 275,
     EQUAL_OP = 276,
     OPENPAREN_OP = 277,
     CLOSEPAREN_OP = 278,
     OPENBRACE_OP = 279,
     CLOSEBRACE_OP = 280,
     PERIOD_OP = 281,
     NOT_OP = 282,
     LESS_OP = 283,
     GREATER_OP = 284,
     TILDE_OP = 285,
     XOR_OP = 286,
     QUESTION_OP = 287,
     AND_OP = 288,
     OR_OP = 289,
     MUL_ASSIGN = 290,
     DIV_ASSIGN = 291,
     MOD_ASSIGN = 292,
     ADD_ASSIGN = 293,
     SUB_ASSIGN = 294,
     LEFT_ASSIGN = 295,
     RIGHT_ASSIGN = 296,
     AND_ASSIGN = 297,
     XOR_ASSIGN = 298,
     OR_ASSIGN = 299,
     TYPE_NAME = 300,
     PLUS_OP = 301,
     MINUS_OP = 302,
     TIMES_OP = 303,
     DIV_OP = 304,
     MOD_OP = 305,
     BIT_OR = 306,
     BIT_AND = 307,
     TYPEDEF = 308,
     EXTERN = 309,
     STATIC = 310,
     AUTO = 311,
     REGISTER = 312,
     INLINE = 313,
     RESTRICT = 314,
     CHAR = 315,
     SHORT = 316,
     INT = 317,
     LONG = 318,
     SIGNED = 319,
     UNSIGNED = 320,
     FLOAT = 321,
     DOUBLE = 322,
     CONST = 323,
     VOLATILE = 324,
     VOID = 325,
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
/* Line 2058 of yacc.c  */
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


/* Line 2058 of yacc.c  */
#line 172 "c.tab.h"
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
