#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "global.h"

DeclarationListPtr symbolTable = NULL;

DeclarationPtr createDeclaration (char *identifier, VariableType type, VariableSignType sign, StorageType storage, DeclarationType declarationType){
 DeclarationPtr node = (DeclarationPtr) malloc(sizeof(Declaration));
 node->identifier = identifier;
 node->type = type;
 node->sign = sign;
 node->storage = storage;
 node->declarationType = declarationType;
 return node;
}

void add(DeclarationPtr declaration){ 
 if (symbolTable!=NULL) {
  DeclarationListPtr ptr = symbolTable;
  while(ptr->next != NULL) {
   ptr = ptr->next;
  }
  DeclarationListPtr node = (DeclarationListPtr) malloc(sizeof(DeclarationList));
  memset(node,sizeof(DeclarationList),0);
  node->var = declaration;
  node->next = NULL;
   
   ptr->next = node;
 } else {
   symbolTable = (DeclarationListPtr) malloc(sizeof(DeclarationList));
   memset(symbolTable,sizeof(DeclarationList),0);
   symbolTable->var = declaration;
   symbolTable->next = NULL;
 }
}

void addToSymbolTable(char *identifier, VariableType type, VariableSignType sign, StorageType storage, DeclarationType declarationType, Boolean constant){
 DeclarationPtr declaration = createDeclaration (identifier, type, sign, storage, declarationType);
 if (declarationType == DECLARATION_VARIABLE) add(declaration);
}
