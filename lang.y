%{
#include <stdio.h>
#include <stdlib.h>

#include "y.tab.h"
void yyerror(char *);
int flag =0;

%}
%token T_digit T_alpha T_US T_asop T_NL T_if T_col T_elif T_else T_tab T_GT T_LT T_GTE T_LTE T_EQ T_NEQ T_while T_lb T_rb
%left '+' '-'
%left '*' '/' '%'


%%

/* FOR VALID IDENTIFIER NAMES */
/*S: id
id : T_alpha P
P: T_alpha | T_US | T_digit |T_alpha P|T_US P|T_digit P
*/

/*FOR VALID EXPRESSIONS */
S: A | B | C | E
A: expr {printf("Result = %d\n",$$); return 0;}
B: id {printf("Valid identifier name\n");return 0;}
C: if_stmt {printf("Valid if-else block\n"); return 0;}
/*D: while_stmt {printf("Valid while construct\n"); return 0;}*/
E: expr_asmt {printf("Valid expression assignment\n");}
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
id : T_alpha P| T_alpha
X: cond| T_lb cond T_rb 
P: T_US | T_digit |T_alpha P|T_US P|T_digit P
expr_asmt: id T_asop expr T_NL
if_stmt: T_if X T_col T_NL body elif
elif: T_elif X T_col T_NL body elif | else | T_NL
else: T_else T_col T_NL body
body: T_tab asmt
asmt: id T_asop T_digit
cond: T_digit T_GT T_digit
    | T_digit T_LT T_digit
    | T_digit T_GTE T_digit
    | T_digit T_LTE T_digit
    | T_digit T_EQ T_digit
    | T_digit T_NEQ T_digit
/*while_stmt: T_while X T_col T_NL body*/


%%
void main()
{
    yyparse();

}

void yyerror(char* s)
{
	printf("\nInvalid\n");
}

/* a=b+2 is an error */
