#include "global.h"

#define SYMTAB_NO_MEMORY (-1)    /* Unable to allocate memory for binding.  */
#define SYMTAB_OK 0              /* Normal return.                          */
#define SYMTAB_DUPLICATE 1       /* Name is already in symbol table.        */
#define SYMTAB_NOT_FOUND 2       /* Name was not found.                     */
#define SYMTAB_STACK_OVERFLOW 3  /* Attempt to exceed capacity of stack.    */
#define SYMTAB_STACK_UNDERFLOW 4 /* Attempt to pop back to a more global    */
                                 /* scope than the global scope.            */
#define SYMTAB_NOT_TOP 5         /* Attempt to pop scope that is not top of */
                                 /* stack.                                  */

typedef const char *SymbolTableName;

typedef struct _SymbolTableEntry {
   SymbolTableName name;
   VariableType variableType;
   struct _SymbolTableEntry *next;
} SymbolTableEntry, *SymbolTableEntryPtr, **SymbolTableEntryPtrPtr;
	
int symbolTableLookup(SymbolTableName name, SymbolTableEntryPtrPtr value);
