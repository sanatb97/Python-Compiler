%{
#include <stdio.h>
#include <stdlib.h>

#include "y.tab.h"
void yyerror(char *);
int flag =0;

%}
%token T_digit T_alpha T_US T_asop T_NL
%left '+' '-'
%left '*' '/' '%'


%%

/* FOR VALID IDENTIFIER NAMES */
/*S: valid
valid : T_alpha P
P: T_alpha | T_US | T_digit |T_alpha P|T_US P|T_digit P
*/

/*FOR VALID EXPRESSIONS */
S: A | B
A: expr {printf("Result = %d\n",$$); return 0;}
B: valid{printf("Valid identifier name\n");return 0;}
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


/* if-elif-else */
/* 'iter' is body of the if/elif/else block */
S: IF A T_col T_NL iter B
A: (expr) | expr
B: ELIF iter A T_col T_NL iter B | ELSE T_col iter | <epsilon>

;

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

