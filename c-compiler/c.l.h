
extern FILE * yyin;
int yywrap();
int yylex();
void comment();
int handleIndentifier();
int initializeLexicalAnalysis(char * fileInput);
int endLexicalAnalysis();
void yyerror(char * explanation);