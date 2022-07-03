extern int yylex();
extern int yyparse();

extern FILE* yyin;
extern FILE * yyout;
FILE * fRegActivacio, * fCodi3A;
extern int numFila;
extern int yyleng;
extern void yyerror(char * explanation);

#define TRUE 1
#define FALSE 0
#define Boolean unsigned char

typedef struct t_cadenaRegistreActivacio {
   char * nom;    
   int tam_tipus;
   int tipus;
   int es_array;
   long tam_array;
   long tam_total;
   long offset;
   struct t_cadenaRegistreActivacio * seguent;
} t_cadenaRegistreActivacio;

typedef struct t_registreActivacio {
    char * nom_registre;  
    long currentOffset; 
	int num_llista_parametres, num_llista_locals, num_llista_temporals;
	
	t_cadenaRegistreActivacio * primer_llista_parametres, * primer_llista_locals, * primer_llista_temporals;
	t_cadenaRegistreActivacio * ultim_llista_parametres, * ultim_llista_locals, * ultim_llista_temporals;
} t_registreActivacio;

typedef struct t_registreC3A {
	int num_quadruples;
	Cua * quadrupleC3A;
} t_registreC3A;

typedef struct t_quadrupleC3A {
	int num_sentencia;
	char * sentenciaC3A;
} t_quadrupleC3A;

typedef struct t_param {
   char * valor;
   Tipus_Dades tipus_var;
   int array;
   long tam_array;
} t_param;

typedef struct t_simbol {
   Tipus_Simbol tipus;
   double idLexic;
   char nomLexic[NOM_LEXIC_TAM];
   Tipus_Dades tipus_var;
   int ambit;
   int array;
   long tam_array;
   int funcio;
   t_param * funcio_params;
   t_param * struct_camps;
   int num_funcio_parametres;
   int num_struct_camps;   
} sym_value_type;

void printC3AFuncions(t_registreC3A * pC3A, char * nom_funcio);
void printC3AGlobal(t_registreC3A * pC3A);
char * tipusDadesID(int idTipus, int espais);
int init_analisi_sintactic_O(char * fileOutput, char * nomFitxerRA, char * nomFitxerC3A);
void printRegistreActivacioGlobal(t_registreActivacio * pRegistreActivacio);
int end_analisi_sintactic_O();
int iniC3A(t_registreC3A * pC3A);
int iniRegistreActivacio(t_registreActivacio * pRegistreActivacio, char * nom_registre);
int analisi_semantic();
void gestioParaulesReservades();
void yyerror(char * explanation);
