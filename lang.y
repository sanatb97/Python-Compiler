%{
#include <stdio.h>
#include <stdlib.h>

#include "y.tab.h"
void yyerror(char *);
int flag =0;

%}
%token T_digit T_alpha T_US T_asop 
%left '+' '-'
%left '*' '/' '%'


%%

/* FOR VALID IDENTIFIER NAMES */
/*S: valid
valid : T_alpha P
P: T_alpha | T_US | T_digit |T_alpha P|T_US P|T_digit P
*/

/*FOR VALID EXPRESSIONS */
stmt: expr {printf("Result = %d",$$); return 0;}
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
    |T_digit;

%%
void main()
{
   printf("Enter any expression\n");

   yyparse();

   printf("\nValid Expression\n");


}

void yyerror(char* s)
{
	printf("\nEntered arithmetic expression is Invalid\n\n");
	
}

