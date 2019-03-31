%{
#include"y.tab.h"
extern int yylval;
%}

%%
["]["]["]([^"]|[\n])*["]["]["][\n]* {printf("This is a multi line comment\n");}
[']['][']([^']|[\n])*['][']['][\n]* {printf("This is a multi line comment\n");}
[#].*[\n]* {printf("This is a single line comment\n");}
[a-zA-Z]+ {fprintf(yyout,"%s",yytext);return T_alpha;}
[0-9]+ {yylval=atoi(yytext); fprintf(yyout,"%d",yylval);return T_digit;}
[_] {fprintf(yyout,"%s",yytext);return T_US;}
[\n] {fprintf(yyout,"%s",yytext);return T_NL;}
[\t] {fprintf(yyout,"%s",yytext);return T_tab;}
[=] {fprintf(yyout,"%s",yytext);return T_asop;}
[:] {fprintf(yyout,"%s",yytext);return T_col;}
'if' {fprintf(yyout,"%s",yytext);return T_if;}
'elif' {fprintf(yyout,"%s",yytext);return T_elif;}
'else' {fprintf(yyout,"%s",yytext);return T_else;}
'while' {fprintf(yyout,"%s",yytext);return T_while;}
">" {fprintf(yyout,"%s",yytext);return T_GT;}
"<" {fprintf(yyout,"%s",yytext);return T_LT;}
">=" {fprintf(yyout,"%s",yytext);return T_GTE;}
"<=" {fprintf(yyout,"%s",yytext);return T_LTE;}
"==" {fprintf(yyout,"%s",yytext);return T_EQ;}
"!=" {fprintf(yyout,"%s",yytext);return T_NEQ;}
. {fprintf(yyout,"%s",yytext);return yytext[0];}

%%

int yywrap()
{
	return 1;
}
