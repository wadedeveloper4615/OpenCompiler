D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			([Ee][+-]?{D}+)
P           ([Pp][+-]?{D}+)
FS			(f|F|l|L)
IS          ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))

%{

#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "c.tab.h"
#include "c.l.h"
#include "symtab.h"

#define FILE_LEX_LOG          "lexic.log"

FILE * fileLexLog;

int lineNumber = 1, numColumna = 1;
int estat_tipus = 0;
%}

%%
"/*"			{ comment(); }
"//"[^\n]*      { /* consume //-comment */ }


"auto"			{ return(AUTO); }
"_Bool"			{ return(BOOL); }
"break"			{ return(BREAK); }
"case"			{ return(CASE); }
"char"			{ return(CHAR); }
"_Complex"		{ return(COMPLEX); }
"const"			{ return(CONST); }
"continue"		{ return(CONTINUE); }
"default"		{ return(DEFAULT); }
"do"			{ return(DO); }
"double"		{ return(DOUBLE); }
"else"			{ return(ELSE); }
"enum"			{ return(ENUM); }
"extern"		{ return(EXTERN); }
"float"			{ return(FLOAT); }
"for"			{ return(FOR); }
"goto"			{ return(GOTO); }
"if"			{ return(IF); }
"_Imaginary"    { return(IMAGINARY); }
"inline"		{ return(INLINE); }
"int"			{ return(INT); }
"long"			{ return(LONG); }
"register"		{ return(REGISTER); }
"restrict"		{ return(RESTRICT); }
"return"		{ return(RETURN); }
"short"			{ return(SHORT); }
"signed"		{ return(SIGNED); }
"sizeof"		{ return(SIZEOF); }
"static"		{ return(STATIC); }
"struct"		{ return(STRUCT); }
"switch"		{ return(SWITCH); }
"typedef"		{ return(TYPEDEF); }
"union"			{ return(UNION); }
"unsigned"		{ return(UNSIGNED); }
"void"			{ return(VOID); }
"volatile"		{ return(VOLATILE); }
"while"			{ return(WHILE); }

{L}({L}|{D})*		       { return(handleIndentifier()); }

0[xX]{H}+{IS}?		       { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
0[0-7]*{IS}?		       { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
[1-9]{D}*{IS}?		       { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
L?'(\\.|[^\\'\n])+'	       { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
{D}+{E}{FS}?		       { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
{D}*"."{D}+{E}?{FS}?	   { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
{D}+"."{D}*{E}?{FS}?	   { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
                             numColumna += yyleng;
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             return(CONSTANT); 
                           }
0[xX]{H}+{P}{FS}?	       { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
0[xX]{H}*"."{H}+{P}?{FS}?  { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
0[xX]{H}+"."{H}*{P}?{FS}?  { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                           }
L?\"(\\.|[^\\"\n])*\"	   { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_STRING;
                             numColumna += yyleng;
                             return(STRING_LITERAL); 
                           }

"..."			{ return(ELLIPSIS); }
"?"			    { return(QUESTION_OP); }
";"			    { return(SEMI_OP); }
("{"|"<%")		{ return(OCURLY_OP); }
("}"|"%>")		{ return(CCURLY_OP); }
","			    { return(COMMA_OP); }
":"			    { return(COLON_OP); }
"("			    { return(OPENPAREN_OP); }
")"			    { return(CLOSEPAREN_OP); }
("["|"<:")		{ return(OPENBRACE_OP); }
("]"|":>")		{ return(CLOSEBRACE_OP); }
"."			    { return(PERIOD_OP); }
"~"			    { return(TILDE_OP); }

"="			    { return(EQUAL_OP); }
">>="			{ return(RIGHT_ASSIGN); }
"<<="			{ return(LEFT_ASSIGN); }
"+="			{ return(ADD_ASSIGN); }
"-="			{ return(SUB_ASSIGN); }
"*="			{ return(MUL_ASSIGN); }
"/="			{ return(DIV_ASSIGN); }
"%="			{ return(MOD_ASSIGN); }
"&="			{ return(AND_ASSIGN); }
"^="			{ return(XOR_ASSIGN); }
"|="			{ return(OR_ASSIGN); }
">>"			{ return(RIGHT_OP); }
"<<"			{ return(LEFT_OP); }
"++"			{ return(INC_OP); }
"--"			{ return(DEC_OP); }
"->"			{ return(PTR_OP); }

"&&"			{ return(AND_OP); }
"||"			{ return(OR_OP); }
"<"			    { return(LESS_OP); }
">"			    { return(GREATER_OP); }
"<="			{ return(LE_OP); }
">="			{ return(GE_OP); }
"=="			{ return(EQ_OP); }
"!="			{ return(NE_OP); }
"!"			    { return(NOT_OP); }
"^"			    { return(XOR_OP); }
"&"			    { return(BIT_AND); }
"|"			    { return(BIT_OR); }

"-"			    { return(MINUS_OP); }
"+"			    { return(PLUS_OP); }
"*"			    { return(TIMES_OP); }
"/"			    { return(DIV_OP); }
"%"			    { return(MOD_OP); }


[ \t\v\n\f]		{ }
.			    { /* Add code to complain about unmatched characters */ }

%%

int yywrap(){
 return 1;
}

void comment(){
 char c, prev = 0;
 while ((c = input()) != 0){
  if (c == '/' && prev == '*') return;
   prev = c;
 }
 yyerror("unterminated comment");
}

int handleIndentifier() {
 yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
 strcpy(yylval.CompilerInfo.identifier, yytext);
 yylval.CompilerInfo.constant = FALSE;
 yylval.CompilerInfo.type = TYPE_NULL;
 numColumna += yyleng;
 printf("got here to handleIndentifier ==> %s\n",yylval.CompilerInfo.identifier);
 return IDENTIFIER;
}

int initializeLexicalAnalysis(char * fileInput) {
 int error; 
 yyin = fopen(fileInput, "r");

 if(yyin == NULL)
  error = EXIT_FAILURE;
 else { 
  error = EXIT_SUCCESS;
 }
 return error;
}

int endLexicalAnalysis() {
 int error; 
   
 error = fclose(yyin);
 if (error == 0) { 
  error = fclose(fileLexLog);
  if (error == 0)
   error = EXIT_SUCCESS;
  else
   error = EXIT_FAILURE;
 }
 else
  error = EXIT_FAILURE;
 return error; 
}
