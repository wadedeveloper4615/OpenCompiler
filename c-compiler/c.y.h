extern int yyparse();
extern FILE* yyin;
extern FILE * yyout;
extern int lineNumber;
extern int yyleng;
extern char yytext[];
extern int column;

int initializeSyntacticAnalysis(char * fileOutput);
int symanticAnalysis();
int endSyntacticAnalysis();
void yyerror(char * explanation);
