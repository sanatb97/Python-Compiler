%{
#include <stdio.h>
#include <stdlib.h>

#include "y.tab.h"
void yyerror(char *);
int flag =0;

%}
%token T_digit T_alpha T_US T_asop T_NL T_if T_col T_elif T_else T_tab T_GT T_LT T_GTE T_LTE T_EQ T_NEQ
%left '+' '-'
%left '*' '/' '%'


%%

/* FOR VALID IDENTIFIER NAMES */
/*S: valid
valid : T_alpha P
P: T_alpha | T_US | T_digit |T_alpha P|T_US P|T_digit P
*/

/*FOR VALID EXPRESSIONS */
S: A | B | C
A: expr {printf("Result = %d\n",$$); return 0;}
B: valid{printf("Valid identifier name\n");return 0;}
C: if_stmt {printf("Valid if-else block\n"); return 0;}
;
expr:expr '+' expr 	{$$=$1+$3;}
    |expr '-' expr 	{$$=$1-$3;}
    |expr '*' expr 	{$$=$1*$3;}
    |expr '/' expr 	{if($3==0)
             exit(0);
             else $$=$1/$3;}
    |expr '%' expr 	{if($3==0)
             exit(0);
             else $$=$1%$3;}
    |T_digit  {$$=$1;}
valid : T_alpha P
P: T_alpha | T_US | T_digit |T_alpha P|T_US P|T_digit P
if_stmt: T_if cond T_col body elif 
elif: T_elif T_col body | else
else: T_else T_col body
body: T_NL T_tab asmt
asmt: valid T_asop T_digit
cond: T_digit T_GT T_digit
    | T_digit T_LT T_digit
    | T_digit T_GTE T_digit
    | T_digit T_LTE T_digit
    | T_digit T_EQ T_digit
    | T_digit T_NEQ T_digit
    | T_digit T_asop T_digit

%%
void main()
{
   printf("Enter any expression | Enter any identifier name\n");
   yyparse();
}

void yyerror(char* s)
{
	printf("\nInvalid\n");
}

