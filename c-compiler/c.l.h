
extern FILE * yyin;
void yyerror(char * explanation);
int yywrap(void);
void comment(void);
int handleIndentifier(void);
int init_analisi_lexic_I(char * fileInput);
int end_analisi_lexic_I();
void printErrorLex(char * str, char * lexema, int numFila, int numColumna);
void printErrorLexFull(char * str, char * lexema, char * str2, int numFila, int numColumna);
void writeLexLog(char * token, int id_token);
void gestioParaulesReservades();
