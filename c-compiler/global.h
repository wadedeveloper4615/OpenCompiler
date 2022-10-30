#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#define NOM_LEXIC_TAM                          100

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
	TYPE_FLOAT = 5,
	TYPE_DOUBLE = 6,
	TYPE_STRING = 7,
	TYPE_STRUCT = 8,
	TYPE_BOOLEAN = 9,
	TYPE_COMPLEX = 10,
	TYPE_IMAGINARY = 11
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

#endif