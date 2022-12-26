#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#define TRUE 1
#define FALSE 0
#define Boolean unsigned char

typedef enum _VariableSignType{
    TYPE_SIGNED = 0,
    TYPE_UNSIGNED = 1
} VariableSignType;

typedef enum _VariableType{
    TYPE_NULL = -1,
    TYPE_VOID = 0,
    TYPE_CHARACTER = 1,
    TYPE_SHORT = 2,
	TYPE_INTEGER = 3,
	TYPE_LONG = 4,
	TYPE_LONG64 = 5,
	TYPE_FLOAT = 6,
	TYPE_DOUBLE = 7,
	TYPE_STRING = 8,
	TYPE_STRUCT = 9,
	TYPE_BOOLEAN = 10,
	TYPE_COMPLEX = 11,
	TYPE_IMAGINARY = 12
} VariableType;

typedef enum _StorageType {
	STORAGE_NONE = 0,
	STORAGE_TYPEDEF = 1,
	STORAGE_EXTERN = 2,
	STORAGE_STATIC = 3,
	STORAGE_AUTO = 4,
	STORAGE_REGISTER = 5
} StorageType; 

typedef enum _DeclarationType {
    DECLARATION_NONE = 0,
	DECLARATION_VARIABLE = 1,
	DECLARATION_FUNCTION = 2
} DeclarationType; 

typedef enum _FunctionalType {
	RESERVED = 1,
	OPERATOR = 2,
	VARIABLE = 3,
    FUNCTION = 4, 
} FunctionalType; 

typedef struct _ExpressionNode {
  char *string;
  VariableType type;
  Boolean constant;
} ExpressionNode; 

typedef struct _Expression {
   ExpressionNode node;
   struct _Expression *left;
   struct _Expression *right;
} Expression,*ExpressionPtr; 

typedef struct _ExpressionList {
   Expression expression;
   struct _ExpressionList *next;
} ExpressionList,*ExpressionListPtr; 

int yylex();
int yyparse();
int yywrap();
void comment();
void count();
int check_type();
void yyerror(const char* s);
int handleIndentifier();

extern FILE * fileLexLog;
extern int num_errors;
extern int yylineno;
extern int column;
extern int num_errors;
extern FILE* yyin;
extern FILE* yyout;

#endif