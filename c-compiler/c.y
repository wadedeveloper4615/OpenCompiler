%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "global.h"
#include "cua.h"
#include "c.y.h"
#include "c.l.h"

char *idSymbol;
char *nom_fitxerRA, * nom_fitxerC3A;
struct t_simbol simbol, simbol_tmp;
int currentScope;
long long tmpValor;
Boolean arrayDeclaracio = FALSE;
struct t_infoBison * pparam;
struct t_infoBison * pcamp;
struct t_infoBison * recordsetParam;
struct t_infoBison * recordsetCamp;
struct t_infoBison * tmpCondicio;
int num_errors;
int tipus_var_funcio_retorn;
char * valor_retorn;
struct Cua * llista_seguents_funcio_retorn;
int count;
int funcioDeclaradaCorrecte = FALSE;
Boolean errFuncDeclaration = FALSE;
t_registreActivacio * registreActivacioGlobal, * registreActivacioFuncions;
t_registreC3A * C3AGlobal, * C3AFuncions;
char strCastingC3A[4], strOperacioC3A[5];
t_quadrupleC3A * quadrupleC3A;
int conditional_if_while_for;
int tipus_var_tmp;
%}

%union { 	   
    struct t_infoBison {   
       char * valor;
       char * valorC3A;
       int constant;      
       int tipus_var;
       int array;
       long tam_array;
       int array_indexat;
       char * array_indexat_offset;
       int camp_struct_indexat;
       int offset_camp_struct_indexat;
       int funcio;
       int num_funcio_parametres;
       int num_struct_camps;
       struct t_infoBison * seguent_param_funcio;
       struct t_infoBison * seguent_camp_struct;
	   struct Cua * llista_certs;       
  	   struct Cua * llista_falsos;
	   struct Cua * llista_seguents;
	   int punter_quadruple;
       void * no_definit;	
    } infoBison;
}

%token<infoBison> IDENTIFIER 
%token<infoBison> CONSTANT STRING_LITERAL
%token<no_definit> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token<no_definit> SEMI_OP OCURLY_OP CCURLY_OP COMMA_OP COLON_OP EQUAL_OP
%token<no_definit> OPENPAREN_OP CLOSEPAREN_OP OPENBRACE_OP CLOSEBRACE_OP
%token<no_definit> PERIOD_OP NOT_OP LESS_OP GREATER_OP TILDE_OP XOR_OP QUESTION_OP
%token<no_definit> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token<no_definit> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token<no_definit> XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token<no_definit> PLUS_OP MINUS_OP TIMES_OP DIV_OP MOD_OP BIT_OR BIT_AND

%token<no_definit> TYPEDEF EXTERN STATIC AUTO REGISTER INLINE RESTRICT
%token<no_definit> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token<no_definit> SIZEOF BOOL COMPLEX IMAGINARY
%token<no_definit> STRUCT UNION ENUM ELLIPSIS
%token<no_definit> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <no_definit> type_name struct_or_union specifier_qualifier_list jump_statement declaration_list
%type <no_definit> expression_statement iteration_statement labeled_statement    
%type <no_definit> unary_operator external_declaration translation_unit

%type<infoBison> primary_expression postfix_expression argument_expression_list unary_expression
%type<infoBison> cast_expression multiplicative_expression additive_expression shift_expression relational_expression
%type<infoBison> equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression
%type<infoBison> logical_or_expression conditional_expression assignment_expression assignment_operator expression
%type<infoBison> constant_expression declaration declaration_specifiers init_declarator_list init_declarator
%type<infoBison> storage_class_specifier type_specifier struct_or_union_specifier struct_declaration_list
%type<infoBison> struct_declaration struct_declarator_list struct_declarator enum_specifier
%type<infoBison> enumerator_list enumerator type_qualifier function_specifier declarator direct_declarator pointer
%type<infoBison> type_qualifier_list parameter_type_list parameter_list parameter_declaration identifier_list
%type<infoBison> abstract_declarator direct_abstract_declarator initializer initializer_list designation designator_list
%type<infoBison> designator statement compound_statement block_item_list block_item 
%type<infoBison> selection_statement
%type<infoBison> function_definition

%start translation_unit
%%

primary_expression
	: IDENTIFIER {fprintf(yyout,"unary_expression REDUCE to primary_expression\n");}
	| CONSTANT {fprintf(yyout,"unary_expression REDUCE to primary_expression\n");}
	| STRING_LITERAL {fprintf(yyout,"unary_expression REDUCE to primary_expression\n");}
	| OPENPAREN_OP expression CLOSEPAREN_OP {fprintf(yyout,"unary_expression REDUCE to primary_expression\n");}
	;

postfix_expression
	: primary_expression {fprintf(yyout,"primary_expression REDUCE to postfix_expression\n");}
	| postfix_expression OPENBRACE_OP expression CLOSEBRACE_OP {fprintf(yyout,"postfix_expression OPENBRACE_OP expression CLOSEBRACE_OP REDUCE to postfix_expression\n");}
	| postfix_expression OPENPAREN_OP CLOSEPAREN_OP {fprintf(yyout,"postfix_expression OPENPAREN_OP CLOSEPAREN_OP REDUCE to postfix_expression\n");}
	| postfix_expression OPENPAREN_OP argument_expression_list CLOSEPAREN_OP {fprintf(yyout,"postfix_expression OPENPAREN_OP argument_expression_list CLOSEPAREN_OP REDUCE to postfix_expression\n");}
	| postfix_expression PERIOD_OP IDENTIFIER {fprintf(yyout,"postfix_expression PERIOD_OP IDENTIFIER REDUCE to postfix_expression\n");}
	| postfix_expression PTR_OP IDENTIFIER {fprintf(yyout,"postfix_expression PTR_OP IDENTIFIER REDUCE to postfix_expression\n");}
	| postfix_expression INC_OP {fprintf(yyout,"postfix_expression INC_OP REDUCE to postfix_expression\n");}
	| postfix_expression DEC_OP {fprintf(yyout,"postfix_expression DEC_OP REDUCE to postfix_expression\n");}
	| OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list CCURLY_OP {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list CCURLY_OP REDUCE to postfix_expression\n");}
	| OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list COMMA_OP CCURLY_OP {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP OCURLY_OP initializer_list COMMA_OP CCURLY_OP REDUCE to postfix_expression\n");}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list COMMA_OP assignment_expression
	;

unary_expression
	: postfix_expression  {fprintf(yyout,"postfix_expression REDUCE to unary_expression\n");}
	| INC_OP unary_expression  {fprintf(yyout,"INC_OP unary_expression REDUCE to unary_expression\n");}
	| DEC_OP unary_expression  {fprintf(yyout,"DEC_OP unary_expression REDUCE to unary_expression\n");}
	| unary_operator cast_expression  {fprintf(yyout,"unary_operator cast_expression REDUCE to unary_expression\n");}
	| SIZEOF unary_expression  {fprintf(yyout,"SIZEOF unary_expression REDUCE to unary_expression\n");}
	| SIZEOF OPENPAREN_OP type_name CLOSEPAREN_OP    {fprintf(yyout,"SIZEOF OPENPAREN_OP type_name CLOSEPAREN_OP REDUCE to unary_expression\n");}
	;

unary_operator
	: BIT_AND
	| TIMES_OP
	| PLUS_OP
	| MINUS_OP
	| TILDE_OP
	| NOT_OP
	;

cast_expression
	: unary_expression  {fprintf(yyout,"unary_expression REDUCE to cast_expression\n");}
	| OPENPAREN_OP type_name CLOSEPAREN_OP cast_expression  {fprintf(yyout,"OPENPAREN_OP type_name CLOSEPAREN_OP cast_expression REDUCE to cast_expression\n");}
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression TIMES_OP cast_expression
	| multiplicative_expression DIV_OP cast_expression
	| multiplicative_expression MOD_OP cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS_OP multiplicative_expression
	| additive_expression MINUS_OP multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression LESS_OP shift_expression
	| relational_expression GREATER_OP shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression BIT_AND equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression XOR_OP and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression BIT_OR exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression QUESTION_OP expression COLON_OP conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: EQUAL_OP {fprintf(yyout,"EQUAL_OP REDUCE to assignment_operator\n");}
	| MUL_ASSIGN {fprintf(yyout,"MUL_ASSIGN REDUCE to assignment_operator\n");}
	| DIV_ASSIGN {fprintf(yyout,"DIV_ASSIGN REDUCE to assignment_operator\n");}
	| MOD_ASSIGN {fprintf(yyout,"MOD_ASSIGN REDUCE to assignment_operator\n");}
	| ADD_ASSIGN {fprintf(yyout,"ADD_ASSIGN REDUCE to assignment_operator\n");}
	| SUB_ASSIGN {fprintf(yyout,"SUB_ASSIGN REDUCE to assignment_operator\n");}
	| LEFT_ASSIGN {fprintf(yyout,"LEFT_ASSIGN REDUCE to assignment_operator\n");}
	| RIGHT_ASSIGN {fprintf(yyout,"RIGHT_ASSIGN REDUCE to assignment_operator\n");}
	| AND_ASSIGN {fprintf(yyout,"AND_ASSIGN REDUCE to assignment_operator\n");}
	| XOR_ASSIGN {fprintf(yyout,"XOR_ASSIGN REDUCE to assignment_operator\n");}
	| OR_ASSIGN {fprintf(yyout,"OR_ASSIGN REDUCE to assignment_operator\n");}
	;

expression
	: assignment_expression
	| expression COMMA_OP assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers SEMI_OP
	| declaration_specifiers init_declarator_list SEMI_OP
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	| function_specifier
	| function_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list COMMA_OP init_declarator
	;

init_declarator
	: declarator
	| declarator EQUAL_OP initializer
	;

storage_class_specifier
	: TYPEDEF  {fprintf(yyout,"TYPEDEF REDUCE to storage_class_specifier\n");}
	| EXTERN  {fprintf(yyout,"EXTERN REDUCE to storage_class_specifier\n");}
	| STATIC  {fprintf(yyout,"STATIC REDUCE to storage_class_specifier\n");}
	| AUTO  {fprintf(yyout,"AUTO REDUCE to storage_class_specifier\n");}
	| REGISTER  {fprintf(yyout,"REGISTER REDUCE to storage_class_specifier\n");}
	;

type_specifier
	: VOID  {fprintf(yyout,"VOID REDUCE to type_specifier\n");}
	| CHAR {fprintf(yyout,"CHAR REDUCE to type_specifier\n");}
	| SHORT {fprintf(yyout,"SHORT REDUCE to type_specifier\n");}
	| INT {fprintf(yyout,"INT REDUCE to type_specifier\n");}
	| LONG {fprintf(yyout,"LONG REDUCE to type_specifier\n");}
	| FLOAT {fprintf(yyout,"FLOAT REDUCE to type_specifier\n");}
	| DOUBLE {fprintf(yyout,"DOUBLE REDUCE to type_specifier\n");}
	| SIGNED {fprintf(yyout,"SIGNED REDUCE to type_specifier\n");}
	| UNSIGNED {fprintf(yyout,"UNSIGNED REDUCE to type_specifier\n");}
	| BOOL {fprintf(yyout,"BOOL REDUCE to type_specifier\n");}
	| COMPLEX {fprintf(yyout,"COMPLEX REDUCE to type_specifier\n");}
	| IMAGINARY {fprintf(yyout,"IMAGINARY REDUCE to type_specifier\n");}
	| struct_or_union_specifier {fprintf(yyout,"struct_or_union_specifier REDUCE to type_specifier\n");}
	| enum_specifier {fprintf(yyout,"enum_specifier REDUCE to type_specifier\n");}
	| TYPE_NAME {fprintf(yyout,"type_specifier TYPE_NAME REDUCE to type_specifier\n");}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER OCURLY_OP struct_declaration_list CCURLY_OP  {fprintf(yyout,"struct_or_union IDENTIFIER OCURLY_OP struct_declaration_list CCURLY_OP REDUCE to struct_or_union_specifier\n");}
	| struct_or_union OCURLY_OP struct_declaration_list CCURLY_OP  {fprintf(yyout,"struct_or_union OCURLY_OP struct_declaration_list CCURLY_OP REDUCE to struct_or_union_specifier\n");}
	| struct_or_union IDENTIFIER  {fprintf(yyout,"struct_or_union IDENTIFIER REDUCE to struct_or_union_specifier\n");}
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMI_OP  {fprintf(yyout,"specifier_qualifier_list struct_declarator_list SEMI_OP REDUCE to struct_declaration\n");}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {fprintf(yyout,"type_specifier specifier_qualifier_list REDUCE to specifier_qualifier_list\n");}
	| type_specifier {fprintf(yyout,"type_specifier REDUCE to specifier_qualifier_list\n");}
	| type_qualifier specifier_qualifier_list {fprintf(yyout,"type_qualifier specifier_qualifier_list REDUCE to specifier_qualifier_list\n");}
	| type_qualifier  {fprintf(yyout,"type_qualifier REDUCE to specifier_qualifier_list\n");}
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list COMMA_OP struct_declarator
	;

struct_declarator
	: declarator    {fprintf(yyout,"declarator REDUCE to struct_declarator\n");}
	| COLON_OP constant_expression    {fprintf(yyout,"COLON_OP constant_expression REDUCE to struct_declarator\n");}
	| declarator COLON_OP constant_expression    {fprintf(yyout,"declarator COLON_OP constant_expression REDUCE to struct_declarator\n");}
	;

enum_specifier
	: ENUM OCURLY_OP enumerator_list CCURLY_OP {fprintf(yyout,"ENUM OCURLY_OP enumerator_list CCURLY_OP REDUCE to enum_specifier\n");}
	| ENUM IDENTIFIER OCURLY_OP enumerator_list CCURLY_OP {fprintf(yyout,"ENUM IDENTIFIER OCURLY_OP enumerator_list CCURLY_OP REDUCE to enum_specifier\n");}
	| ENUM OCURLY_OP enumerator_list COMMA_OP CCURLY_OP {fprintf(yyout," ENUM OCURLY_OP enumerator_list COMMA_OP CCURLY_OP REDUCE to enum_specifier\n");}
	| ENUM IDENTIFIER OCURLY_OP enumerator_list COMMA_OP CCURLY_OP {fprintf(yyout,"ENUM IDENTIFIER OCURLY_OP enumerator_list COMMA_OP CCURLY_OP REDUCE to enum_specifier\n");}
	| ENUM IDENTIFIER {fprintf(yyout,"ENUM IDENTIFIER REDUCE to enum_specifier\n");}
	;

enumerator_list
	: enumerator
	| enumerator_list COMMA_OP enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER EQUAL_OP constant_expression
	;

type_qualifier
	: CONST {fprintf(yyout,"TIMES_OP REDUCE to type_qualifier\n");}
	| RESTRICT {fprintf(yyout,"TIMES_OP REDUCE to type_qualifier\n");}
	| VOLATILE {fprintf(yyout,"TIMES_OP REDUCE to type_qualifier\n");}
	;

function_specifier
	: INLINE  {fprintf(yyout,"INLINE REDUCE to function_specifier\n");}
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;


direct_declarator
	: IDENTIFIER   {fprintf(yyout,"IDENTIFIER REDUCE to direct_declarator\n");}
	| OPENPAREN_OP declarator CLOSEPAREN_OP   {fprintf(yyout,"OPENPAREN_OP declarator CLOSEPAREN_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP type_qualifier_list assignment_expression CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP type_qualifier_list CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP STATIC type_qualifier_list assignment_expression CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP STATIC type_qualifier_list assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP type_qualifier_list STATIC assignment_expression CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list STATIC assignment_expression CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP type_qualifier_list TIMES_OP CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP type_qualifier_list TIMES_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENBRACE_OP CLOSEBRACE_OP   {fprintf(yyout,"direct_declarator OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP   {fprintf(yyout,"direct_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENPAREN_OP identifier_list CLOSEPAREN_OP   {fprintf(yyout,"direct_declarator OPENPAREN_OP identifier_list CLOSEPAREN_OP REDUCE to direct_declarator\n");}
	| direct_declarator OPENPAREN_OP CLOSEPAREN_OP   {fprintf(yyout,"direct_declarator OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_declarator\n");}
	;

pointer
	: TIMES_OP  {fprintf(yyout,"TIMES_OP REDUCE to pointer\n");}
	| TIMES_OP type_qualifier_list  {fprintf(yyout,"TIMES_OP REDUCE to pointer\n");}
	| TIMES_OP pointer  {fprintf(yyout,"TIMES_OP REDUCE to pointer\n");}
	| TIMES_OP type_qualifier_list pointer   {fprintf(yyout,"TIMES_OP REDUCE to pointer\n");}
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list COMMA_OP ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list COMMA_OP parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list COMMA_OP IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: OPENPAREN_OP abstract_declarator CLOSEPAREN_OP    {fprintf(yyout," OPENPAREN_OP abstract_declarator CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
	| OPENBRACE_OP CLOSEBRACE_OP    {fprintf(yyout,"OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
	| OPENBRACE_OP assignment_expression CLOSEBRACE_OP    {fprintf(yyout,"OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
	| direct_abstract_declarator OPENBRACE_OP CLOSEBRACE_OP    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
	| direct_abstract_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP assignment_expression CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
	| OPENBRACE_OP TIMES_OP CLOSEBRACE_OP    {fprintf(yyout,"OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
	| direct_abstract_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP    {fprintf(yyout,"direct_abstract_declarator OPENBRACE_OP TIMES_OP CLOSEBRACE_OP REDUCE to direct_abstract_declarator\n");}
	| OPENPAREN_OP CLOSEPAREN_OP    {fprintf(yyout,"OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
	| OPENPAREN_OP parameter_type_list CLOSEPAREN_OP    {fprintf(yyout,"OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
	| direct_abstract_declarator OPENPAREN_OP CLOSEPAREN_OP    {fprintf(yyout,"direct_abstract_declarator OPENPAREN_OP CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
	| direct_abstract_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP    {fprintf(yyout,"direct_abstract_declarator OPENPAREN_OP parameter_type_list CLOSEPAREN_OP REDUCE to direct_abstract_declarator\n");}
	;

initializer
	: assignment_expression    {fprintf(yyout,"assignment_expression REDUCE to initializer\n");}
	| OCURLY_OP initializer_list CCURLY_OP    {fprintf(yyout,"OCURLY_OP initializer_list CCURLY_OP REDUCE to initializer\n");}
	| OCURLY_OP initializer_list COMMA_OP CCURLY_OP    {fprintf(yyout,"OCURLY_OP initializer_list COMMA_OP CCURLY_OP REDUCE to initializer\n");}
	;

initializer_list
	: initializer
	| designation initializer
	| initializer_list COMMA_OP initializer
	| initializer_list COMMA_OP designation initializer
	;

designation
	: designator_list EQUAL_OP
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: OPENBRACE_OP constant_expression CLOSEBRACE_OP    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
	| PERIOD_OP IDENTIFIER    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
	;

statement
	: labeled_statement    {fprintf(yyout,"labeled_statement REDUCE to statement\n");}
	| compound_statement    {fprintf(yyout,"compound_statement REDUCE to statement\n");}
	| expression_statement    {fprintf(yyout,"expression_statement REDUCE to statement\n");}
	| selection_statement    {fprintf(yyout,"selection_statement REDUCE to statement\n");}
	| iteration_statement    {fprintf(yyout,"iteration_statement REDUCE to statement\n");}
	| jump_statement    {fprintf(yyout,"jump_statement REDUCE to statement\n");}
	;

labeled_statement
	: IDENTIFIER COLON_OP statement    {fprintf(yyout,"IDENTIFIER COLON_OP statement REDUCE to labeled_statement\n");}
	| CASE constant_expression COLON_OP statement    {fprintf(yyout,"CASE constant_expression COLON_OP statement REDUCE to labeled_statement\n");}
	| DEFAULT COLON_OP statement    {fprintf(yyout,"DEFAULT COLON_OP statement REDUCE to labeled_statement\n");}
	;

compound_statement
	: OCURLY_OP CCURLY_OP    {fprintf(yyout,"OCURLY_OP CCURLY_OP REDUCE to compound_statement\n");}
	| OCURLY_OP block_item_list CCURLY_OP    {fprintf(yyout,"OCURLY_OP block_item_list CCURLY_OP REDUCE to compound_statement\n");}
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration 
	| statement
	;

expression_statement
	: SEMI_OP   {fprintf(yyout,"SEMI_OP REDUCE to expression_statement\n");}
	| expression SEMI_OP   {fprintf(yyout,"expression SEMI_OP REDUCE to expression_statement\n");}
	;

selection_statement
	: IF OPENPAREN_OP expression CLOSEPAREN_OP statement   {fprintf(yyout,"IF OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to selection_statement\n");}
	| IF OPENPAREN_OP expression CLOSEPAREN_OP statement ELSE statement  {fprintf(yyout,"IF OPENPAREN_OP expression CLOSEPAREN_OP statement ELSE statement REDUCE to selection_statement\n");}
	| SWITCH OPENPAREN_OP expression CLOSEPAREN_OP statement  {fprintf(yyout,"SWITCH OPENPAREN_OP expression CLOSEPAREN_OP statement REDUCE to selection_statement\n");}
	;

iteration_statement
	: WHILE OPENPAREN_OP expression CLOSEPAREN_OP statement
	| DO statement WHILE OPENPAREN_OP expression CLOSEPAREN_OP SEMI_OP
	| FOR OPENPAREN_OP expression_statement expression_statement CLOSEPAREN_OP statement
	| FOR OPENPAREN_OP expression_statement expression_statement expression CLOSEPAREN_OP statement
	| FOR OPENPAREN_OP declaration expression_statement CLOSEPAREN_OP statement
	| FOR OPENPAREN_OP declaration expression_statement expression CLOSEPAREN_OP statement
	;

jump_statement
	: GOTO IDENTIFIER SEMI_OP
	| CONTINUE SEMI_OP
	| BREAK SEMI_OP
	| RETURN SEMI_OP
	| RETURN expression SEMI_OP
	;

translation_unit
	: external_declaration  {fprintf(yyout,"external_declaration REDUCE to translation_unit\n");}
	| translation_unit external_declaration  {fprintf(yyout,"translation_unit external_declaration REDUCE to translation_unit\n");}
	;

external_declaration
	: function_definition  {fprintf(yyout,"function_definition REDUCE to external_declaration\n");}
	| declaration  {fprintf(yyout,"declaration REDUCE to external_declaration\n");}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement   {fprintf(yyout,"declaration_specifiers declarator declaration_list compound_statement REDUCE to function_definition\n");}
	| declaration_specifiers declarator compound_statement                    {fprintf(yyout,"declaration_specifiers declarator compound_statement REDUCE to function_definition\n");}
	;

declaration_list
	: declaration                   {fprintf(yyout,"declaration REDUCE to declaration_list\n");}
	| declaration_list declaration  {fprintf(yyout,"declaration_list declaration REDUCE to declaration_list\n");}
	;


%%

extern char yytext[];
extern int column;

void printC3AFuncions(t_registreC3A * pC3A, char * nom_funcio) {
   t_quadrupleC3A * pQuadruple;
   Cua * llista_quadruples;

   fprintf(fCodi3A, "SUBRUTINA %s:\n\n", nom_funcio);
   
   llista_quadruples = pC3A -> quadrupleC3A;
    
   for (;primer(llista_quadruples);) {
      pQuadruple = (struct t_quadrupleC3A *) primer(llista_quadruples);
      fprintf(fCodi3A, "\tLINIA %d: %s\n", pQuadruple -> num_sentencia, pQuadruple -> sentenciaC3A);
      
      desencuar(llista_quadruples);
   }
   fprintf(fCodi3A, "\n");
   
   fprintf(fCodi3A, "HALT\n\n");
}

void printC3AGlobal(t_registreC3A * pC3A) {
   t_quadrupleC3A * pQuadruple;
   Cua * llista_quadruples;

   fprintf(fCodi3A, "GLOBAL:\n\n");
   
   llista_quadruples = pC3A -> quadrupleC3A;
    
   for (;primer(llista_quadruples);) {
      pQuadruple = (struct t_quadrupleC3A *) primer(llista_quadruples);
      fprintf(fCodi3A, "\tLINIA %d: %s\n", pQuadruple -> num_sentencia, pQuadruple -> sentenciaC3A);
      
      desencuar(llista_quadruples);
   }
}

void printGlobalActivationRegister(t_registreActivacio * pRegistreActivacio) {
 t_cadenaRegistreActivacio * pvalors;
 fprintf(fRegActivacio, "GLOBAL\n");

 pvalors = pRegistreActivacio -> primer_llista_locals;
 fprintf(fRegActivacio, "\n[ + ] Variables Globals (nom_param tipus_param tipus_param_tamany offset)\n\n");
  
 for (;pvalors;) {
  if (pvalors -> es_array == FALSE) { 
   fprintf(fRegActivacio, "\t\t[ - ] %s %s %d %d\n", pvalors -> nom, getTypeString(pvalors -> tipus, 0), pvalors -> tam_tipus, pvalors -> offset);
  } else {
   fprintf(fRegActivacio, "\t\t[ - ] %s %s[%lu] %d %d\n", pvalors -> nom, getTypeString(pvalors -> tipus, 0), pvalors -> tam_array, pvalors -> tam_tipus, pvalors -> offset);
  }
  pvalors = pvalors -> seguent;
 }
   
 pvalors = pRegistreActivacio -> primer_llista_temporals;
 fprintf(fRegActivacio, "\n[ + ] Variables Temporals (nom_param tipus_param tipus_param_tamany offset)\n\n");
   
 for (;pvalors;) {
  fprintf(fRegActivacio, "\t\t[ - ] %s %s %d %d\n", pvalors -> nom, getTypeString(pvalors -> tipus, 0), pvalors -> tam_tipus, pvalors -> offset);
  pvalors = pvalors -> seguent;
 }     
 fprintf(fRegActivacio, "\n\n"); 
}

char *getTypeString(int typeId, int includeSpaces) {
 char *typeString = (char *) malloc(10);
   
 strcpy(typeString, "");
 if (includeSpaces) {
  switch (typeId) {
   case -1: strcpy(typeString, "NULL     "); break;
   case  0: strcpy(typeString, "VOID     "); break;
   case  1: strcpy(typeString, "CHAR     "); break;
   case  2: strcpy(typeString, "SHORT    "); break;
   case  3: strcpy(typeString, "INT      "); break;
   case  4: strcpy(typeString, "LONG     "); break;
   case  5: strcpy(typeString, "FLOAT    "); break;
   case  6: strcpy(typeString, "DOUBLE   "); break;
   case  7: strcpy(typeString, "STRING   "); break;
   case  8: strcpy(typeString, "STRUCT   "); break;
  }
 } else {
  switch (typeId) {
   case -1: strcpy(typeString, "NULL"); break;
   case  0: strcpy(typeString, "VOID"); break;
   case  1: strcpy(typeString, "CHAR"); break;
   case  2: strcpy(typeString, "SHORT"); break;
   case  3: strcpy(typeString, "INT"); break;
   case  4: strcpy(typeString, "LONG"); break;
   case  5: strcpy(typeString, "FLOAT"); break;
   case  6: strcpy(typeString, "DOUBLE"); break;
   case  7: strcpy(typeString, "STRING"); break;
   case  8: strcpy(typeString, "STRUCT"); break;
  }   
 }
 return typeString;
}

int initializeSyntacticAnalysis(char * fileOutput, char * nomFitxerRA, char * nomFitxerC3A) {
 int error; 
   
 nom_fitxerRA = nomFitxerRA;
 nom_fitxerC3A = nomFitxerC3A;
 yyout = fopen(fileOutput, "w");

 fRegActivacio = fopen(nomFitxerRA, "w");
 fCodi3A = fopen(nomFitxerC3A, "w");
   
 num_errors = 0; 
 valor_retorn = NULL;
 if ((yyout == NULL) || (fRegActivacio == NULL) || (fCodi3A == NULL)) { 
  error = EXIT_FAILURE; 
 } else { 
   error = EXIT_SUCCESS; 
 }
 return error;
}

int endSyntacticAnalysis() {
 int error;
   
 printGlobalActivationRegister(registreActivacioGlobal);
 printC3AGlobal(C3AGlobal);
 error = fclose(yyout);
 error |= fclose(fRegActivacio);
 error |= fclose(fCodi3A);
   
 if (num_errors > 0) {
  remove(nom_fitxerRA);
  remove(nom_fitxerC3A);         
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

int initializeC3A(t_registreC3A * pC3A) {
 if (pC3A != NULL) {
  pC3A -> num_quadruples = 0;
  pC3A -> quadrupleC3A = crear_cua();
  return 0;         
 }
 return -1;
}

int initializeActivationRegister(t_registreActivacio *activationRegisterPtr, char *registerName) {
 if (activationRegisterPtr != NULL) {
  activationRegisterPtr -> nom_registre = malloc(strlen(registerName) + 1);
  strcpy(activationRegisterPtr -> nom_registre, registerName);                    
  activationRegisterPtr -> num_llista_parametres = 0;
  activationRegisterPtr -> num_llista_locals = 0;
  activationRegisterPtr -> num_llista_temporals = 0;
  activationRegisterPtr -> currentOffset = 0; 
  activationRegisterPtr -> primer_llista_parametres = NULL;
  activationRegisterPtr -> primer_llista_locals = NULL;
  activationRegisterPtr -> primer_llista_temporals = NULL;
  activationRegisterPtr -> ultim_llista_parametres = NULL;
  activationRegisterPtr -> ultim_llista_locals = NULL;
  activationRegisterPtr -> ultim_llista_temporals = NULL;
  return 0;         
 }
 return -1;
}

int symanticAnalysis() {
 int error;
   
 registreActivacioGlobal = (t_registreActivacio *) malloc(sizeof(t_registreActivacio));
 initializeActivationRegister(registreActivacioGlobal, "GLOBAL");
   
 C3AGlobal = (t_registreC3A *) malloc(sizeof(t_registreC3A));
 initializeC3A(C3AGlobal);
   
 if (yyparse() == 0){
  error =  EXIT_SUCCESS;
 } else {
  error =  EXIT_FAILURE;
 }
 return error;
}

int main(int argc, char *argv[]) {
 if (argc == 3) {
  char *raFile, *c3aFile;
  if (initializeLexicalAnalysis(argv[1]) == EXIT_SUCCESS) {
   raFile = (char *) malloc(strlen(argv[2]) + 4);
   c3aFile = (char *) malloc(strlen(argv[2]) + 5); 
   sprintf(raFile, "%s.ra", argv[2]);
   sprintf(c3aFile, "%s.c3a", argv[2]);                               
   if (initializeSyntacticAnalysis(argv[2], raFile, c3aFile) == EXIT_SUCCESS) {
    symanticAnalysis();
    endLexicalAnalysis(); 
    endSyntacticAnalysis();
   } else {
    printf("\n\n###########################################################\n");
    printf("###\t\t\t\t\t\t\t###\n");
    printf("###\t[ ERR ] El fitxers de sortida %s %s %s no s'han creat\t###\n", argv[2], raFile, c3aFile);
    printf("###\t\t\t\t\t\t\t###\n");      
    printf("###########################################################\n\n");       
   }
  } else {
   printf("\n\n###########################################################\n");
   printf("###\t\t\t\t\t\t\t###\n");
   printf("###\t[ ERR ] El fitxer d'entrada %s no existeix\t###\n", argv[1]);
   printf("###\t\t\t\t\t\t\t###\n");      
   printf("###########################################################\n\n");       
  }
 } else {
  printf("\n\n###########################################################################\n");
  printf("###\t\t\t\t\t\t\t\t\t###\n");
  printf("###\t[ USE ] %s [ F_IN ] [ F_OUT ]      \t\t\t###\n", argv[0]);
  printf("###\t[ EX  ] %s input.txt output.txt\t\t\t###\n", argv[0]);
  printf("###\t\t\t\t\t\t\t\t\t###\n");      
  printf("###########################################################################\n\n");
 }
}

void yyerror(char * explanation){
 fprintf(stderr, "Parse error: %s\n", explanation);
 exit(1);
}