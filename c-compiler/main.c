#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "global.h"

int initializeLexicalAnalysis(char * fileInput) {
 int error; 
 yyin = fopen(fileInput, "r");

 if(yyin == NULL)
  error = EXIT_FAILURE;
 else { 
  error = EXIT_SUCCESS;
 }
 return error;
}

int endLexicalAnalysis() {
 int error; 
   
 error = fclose(yyin);
 if (error == 0) { 
  error = fclose(fileLexLog);
  if (error == 0)
   error = EXIT_SUCCESS;
  else
   error = EXIT_FAILURE;
 }
 else
  error = EXIT_FAILURE;
 return error; 
}

int initializeSyntacticAnalysis(char * fileOutput) {
 int error; 
   
 yyout = fopen(fileOutput, "w");

 num_errors = 0; 
 if (yyout == NULL) { 
  error = EXIT_FAILURE; 
 } else { 
  error = EXIT_SUCCESS; 
 }
 return error;
}

int symanticAnalysis() {
 int error;
   
 if (yyparse() == 0){
  error =  EXIT_SUCCESS;
 } else {
  error =  EXIT_FAILURE;
 }
 return error;
}


int endSyntacticAnalysis() {
 int error;
   
 error = fclose(yyout);
   
 if (num_errors > 0) {
  fprintf(stdout, "\n\n\t-----------------------------------------------------");
  fprintf(stdout, "\n\t\t[ ERR ] Compiled with %d error/s\n", num_errors);
  fprintf(stdout, "\t-----------------------------------------------------\n\n");
 }
 else {
  fprintf(stdout, "\n\n\t-----------------------------------------------------");
  fprintf(stdout, "\n\t\t[ OK ] Compilation generated successfully\n"); 
  fprintf(stdout, "\t-----------------------------------------------------\n\n");
 }
 if (error == 0){
  error = EXIT_SUCCESS; 
 } else { 
  error = EXIT_FAILURE;
 }
 return error; 
}

int main(int argc, char *argv[]) {
 if (argc == 3) {
  if (initializeLexicalAnalysis(argv[1]) == EXIT_SUCCESS) {
   if (initializeSyntacticAnalysis(argv[2]) == EXIT_SUCCESS) {
    symanticAnalysis();
    endLexicalAnalysis(); 
    endSyntacticAnalysis();
   }
  }
 } else {
  printf("[ Usage  ] %s [ F_IN ] [ F_OUT ]      \t\t\t###\n", argv[0]);
  printf("[ Example] %s input.txt output.txt\t\t\t###\n", argv[0]);
 }
}
