%{
#include"y.tab.h"
extern int yylval;
%}

%%
<<<<<<< HEAD
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
=======
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
[(] {return T_lb;}
[)] {return T_rb;}
. {return yytext[0];}
>>>>>>> 8362267fce00301f0639402988f22debe3f58d43

%%

int yywrap()
{
	return 1;
}
