%{
	#include <stdio.h>
	#include<stdlib.h>
	#include "y.tab.h"
	int yylex(void);
	int yyerror(char *);

%}
%token T_single_line T_multi_line T_alpha T_digit T_new_line T_if T_else T_elif T_while T_import T_as T_from T_asop T_colon T_indent T_plus
%left '+' '-'
%left '*' '/'
%%
stmt: expr {res=$$;};
expr: expr T_plus expr {$$ = $1+$3;}
	| expr T_minus expr {$$ = $1-$3;}
	| expr T_mult expr {$$ = $1*$3;}
	| expr T_div expr {if($3==0)
						exit(0);
						else
						$$=$1/$3;}
	|T_digit;
%%
int yyerror(char *s)
{
	printf("Invalid expression\n");
}

void main()
{
	printf("Enter an expression\n");
	yyparse();
	printf("It is a valid expression\n");
	printf("Result of expression = %d",res);
	exit(0);
}


