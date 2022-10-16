
extern FILE * yyin;
void yyerror(char * explanation);
int yywrap(void);
void comment(void);
int handleIndentifier(void);
int initializeLexicalAnalysis(char * fileInput);
int endLexicalAnalysis();
void printErrorLex(char * str, char * lexema, int lineNumber, int numColumna);
void printErrorLexFull(char * str, char * lexema, char * str2, int lineNumber, int numColumna);
void writeLexLog(char * token, int id_token);
void gestioParaulesReservades();
int handleOperator(int op);