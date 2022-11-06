%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

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
"/*"            { comment(); }
"//".*          { /* consume //-comment */ }
"auto"			 { return(AUTO); }
"break"			 { return(BREAK); }
"case"			 { return(CASE); }
"char"			 { return(CHAR); }
"const"			 { return(CONST); }
"continue"		 { return(CONTINUE); }
"default"		 { return(DEFAULT); }
"do"			 { return(DO); }
"double"		 { return(DOUBLE); }
"else"			 { return(ELSE); }
"enum"			 { return(ENUM); }
"extern"		 { return(EXTERN); }
"float"			 { return(FLOAT); }
"for"			 { return(FOR); }
"goto"			 { return(GOTO); }
"if"			 { return(IF); }
"inline"	     { return(INLINE); }
"int"			 { return(INT); }
"long"			 { return(LONG); }
"long long"	     { return(LONGLONG); }
"register"		 { return(REGISTER); }
"restrict"		 { return(RESTRICT); }
"return"		 { return(RETURN); }
"short"			 { return(SHORT); }
"signed"	     { return(SIGNED); }
"sizeof"		 { return(SIZEOF); }
"static"		 { return(STATIC); }
"struct"		 { return(STRUCT); }
"switch"		 { return(SWITCH); }
"typedef"		 { return(TYPEDEF); }
"union"			 { return(UNION); }
"unsigned"		 { return(UNSIGNED); }
"void"			 { return(VOID); }
"volatile"		 { return(VOLATILE); }
"while"			 { return(WHILE); }
"_Bool"          { return BOOL; }
"_Complex"       { return COMPLEX; }
"_Imaginary"     { return IMAGINARY; }

{L}{A}*		                { return(handleIndentifier()); }

{HP}{H}+{IS}?				{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{NZ}{D}*{IS}?				{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
"0"{O}*{IS}?				{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{CP}?"'"([^'\\\n]|{ES})+"'" { 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_INTEGER;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }

{D}+{E}{FS}?				{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{D}*"."{D}+{E}?{FS}?		{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{D}+"."{E}?{FS}?			{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{HP}{H}+{P}{FS}?			{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{HP}{H}*"."{H}+{P}{FS}?		{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }
{HP}{H}+"."{P}{FS}?			{ 
                             yylval.CompilerInfo.identifier = (char *) malloc((sizeof(char) * (yyleng + 1)));
							 memset(yylval.CompilerInfo.identifier,0,yyleng + 1);
                             strncpy(yylval.CompilerInfo.identifier, yytext, yyleng);
							 yylval.CompilerInfo.constant = TRUE;
							 yylval.CompilerInfo.type = TYPE_FLOAT;
                             numColumna += yyleng;
                             return(CONSTANT); 
                            }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ 
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
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
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
