%{
#include"y.tab.h"
extern int yylval;
%}

%%

[a-zA-Z]+ {return T_alpha;}
[0-9]+ {yylval=atoi(yytext); 
		return T_digit;}
[_] {return T_US;}
[\n] {return T_NL;}
[=] {return T_asop;}
[\t] {;}
[:] {return T_col}
"if" {return IF}
"elif" {return ELIF}
"else" {return ELSE}
"while" {return WHILE}
. {return yytext[0];}

%%

int yywrap()
{
	return 1;
}
