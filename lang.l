%{
#include"y.tab.h"
extern int yylval;
%}

%%
["]["]["]([^"]|[\n])*["]["]["][\n]* {}
[']['][']([^']|[\n])*['][']['][\n]* {}
[#].*[\n]* {}
[a-zA-Z]+ {return T_alpha;}
[0-9]+ {yylval=atoi(yytext); return T_digit;}
[_] {return T_US;}
[\n] {return T_NL;}
[\t] {return T_tab;}
[=] {return T_asop;}
[:] {return T_col;}
'if' {return T_if;}
'elif' {return T_elif;}
'else' {return T_else;}
'while' {return T_while;}
">" {return T_GT;}
"<" {return T_LT;}
">=" {return T_GTE;}
"<=" {return T_LTE;}
"==" {return T_EQ;}
"!=" {return T_NEQ;}
. {return yytext[0];}

%%

int yywrap()
{
	return 1;
}
