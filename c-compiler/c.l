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
#include "c.tab.h"
#include "global.h"
#include "c.l.h"
#include "symtab.h"

#define FILE_LEX_LOG          "lexic.log"

FILE * fileLexLog;

int numFila = 1, numColumna = 1;
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

0[xX]{H}+{IS}?		       { return(CONSTANT); }
0[0-7]*{IS}?		       { return(CONSTANT); }
[1-9]{D}*{IS}?		       { return(CONSTANT); }
L?'(\\.|[^\\'\n])+'	       { return(CONSTANT); }

{D}+{E}{FS}?		       { return(CONSTANT); }
{D}*"."{D}+{E}?{FS}?	   { return(CONSTANT); }
{D}+"."{D}*{E}?{FS}?	   { return(CONSTANT); }
0[xX]{H}+{P}{FS}?	       { return(CONSTANT); }
0[xX]{H}*"."{H}+{P}?{FS}?  { return(CONSTANT); }
0[xX]{H}+"."{H}*{P}?{FS}?  { return(CONSTANT); }

L?\"(\\.|[^\\"\n])*\"	{ return(STRING_LITERAL); }

"..."			{ return(ELLIPSIS); }
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
"<="			{ return(LE_OP); }
">="			{ return(GE_OP); }
"=="			{ return(EQ_OP); }
"!="			{ return(NE_OP); }
";"			    { return(';'); }
("{"|"<%")		{ return('{'); }
("}"|"%>")		{ return('}'); }
","			    { return(','); }
":"			    { return(':'); }
"="			    { return('='); }
"("			    { return('('); }
")"			    { return(')'); }
("["|"<:")		{ return('['); }
("]"|":>")		{ return(']'); }
"."			    { return('.'); }
"&"			    { return('&'); }
"!"			    { return('!'); }
"~"			    { return('~'); }
"-"			    { return(MINUS); }
"+"			    { return(PLUS); }
"*"			    { return(MUL); }
"/"			    { return(DIV); }
"%"			    { return(MOD); }
"<"			    { return('<'); }
">"			    { return('>'); }
"^"			    { return('^'); }
"|"			    { return('|'); }
"?"			    { return('?'); }

[ \t\v\n\f]		{ }
.			    { /* Add code to complain about unmatched characters */ }

%%

int yywrap(void)
{
	return 1;
}

void comment(void)
{
	char c, prev = 0;
  
	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	yyerror("unterminated comment");
}

int handleIndentifier(void)
{
   struct t_simbol simbol;
   
   if ((yytext[0] >= 48) && (yytext[0] <= 57)) {
      printErrorLex("Identificador", yytext, numFila, numColumna);
   }
   else {
      if (sym_lookup(yytext, &simbol) == SYMTAB_OK) {
         writeLexLog(simbol.nomLexic, simbol.idLexic);
      
         yylval.infoBison.valor = (char *) malloc((sizeof(char) * (yyleng + 1)));
         strcpy(yylval.infoBison.valor, yytext);
         yylval.infoBison.tipus_var = simbol.tipus_var;  
         
         numColumna += yyleng;
         return simbol.idLexic;   
      } 
      else {
         writeLexLog("IDENTIFICADOR", IDENTIFIER);
      
         yylval.infoBison.valor = (char *) malloc((sizeof(char) * (yyleng + 1)));
         strcpy(yylval.infoBison.valor, yytext);
         yylval.infoBison.tipus_var = TIPUS_NULL;
      
         numColumna += yyleng;
      
         printf("got here to handleIndentifier ==> %s\n",yylval.infoBison.valor);
		 
         return IDENTIFIER;
      }	
   }	   
}

int init_analisi_lexic_I(char * fileInput) {
   int error; 
   yyin = fopen(fileInput, "r");

   if(yyin == NULL) error = EXIT_FAILURE;
   else { 
      fileLexLog = fopen(FILE_LEX_LOG, "w");
      
      if (fileLexLog == NULL) error = EXIT_FAILURE;
      else error = EXIT_SUCCESS;
   }

   return error;
}

int end_analisi_lexic_I() {
   int error; 
   
   error = fclose(yyin);
   if (error == 0) { 
      error = fclose(fileLexLog);
      if (error == 0) error = EXIT_SUCCESS;
      else error = EXIT_FAILURE;
   }
   else error = EXIT_FAILURE;
   
   return error; 
}

void printErrorLex(char * str, char * lexema, int numFila, int numColumna) {
   if (stdout != yyout) {
      fprintf(stdout, "\n[ LEXIC -> Error ] >>> linia %i columna %i: %s %s no reconegut\n", numFila, numColumna, str, lexema);
      fprintf(yyout, "[ LEXIC -> Error ] >>> linia %i columna %i: %s %s no reconegut\n", numFila, numColumna, str, lexema);
   }
   else fprintf(stderr, "\n[ LEXIC -> Error ] >>> linia %i columna %i: %s %s no reconegut\n", numFila, numColumna, str, lexema);    
}

void printErrorLexFull(char * str, char * lexema, char * str2, int numFila, int numColumna) {
   
   if (stdout != yyout) {
      fprintf(stdout, "\n[ LEXIC -> Error ] >>> linia %i columna %i: %s %s %s no reconegut\n", numFila, numColumna, str, lexema, str2);   
      fprintf(yyout, "[ LEXIC -> Error ] >>> linia %i columna %i: %s %s %s no reconegut\n", numFila, numColumna, str, lexema, str2);   
   }
   else fprintf(stderr, "[ LEXIC -> Error ] >>> linia %i columna %i: %s %s %s no reconegut\n", numFila, numColumna, str, lexema, str2);   
}

void writeLexLog(char * token, int id_token) {
   fprintf(fileLexLog, "%s %s %d %d %d\n", token, yytext, id_token, numFila, numColumna);   
}

void gestioParaulesReservades() {
}