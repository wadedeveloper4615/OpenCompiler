#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#define NOM_LEXIC_TAM                          100

#define TRUE 1
#define FALSE 0
#define Boolean unsigned char

typedef enum _GivenType{
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
} VariableType;

typedef enum {
	RESERVED = 1,
	OPERATOR = 2,
	VARIABLE = 3,
    FUNCTION = 4, 
} FunctionalType; 

#endif