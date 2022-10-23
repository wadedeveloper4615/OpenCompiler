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
/* Line 2058 of yacc.c  */
#line 13 "c.y"
 	   
    struct CompilerInfo {   
       char *identifier;     
       VariableType variableType;
	   Boolean constant;
       void *noDefinition;	
    } CompilerInfo;


/* Line 2058 of yacc.c  */
#line 156 "c.tab.h"
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
