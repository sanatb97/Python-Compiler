
%{
#include<stdio.h>
%}

%%

[#].*[\n]* {return T_single_line}; /*single line comments*/
[\"][\"][\"]([^\"]|[\n])*[\"][\"][\"][\n]* {return T_multi_line}; /*multiline comments */
[a-zA-Z] {return T_alpha}; /*alhabets*/
[0-9] {T_digit}; /*digits*/
[\n] {T_new_line}; /* new line*/

%%				


int yywrap()
{
return 1;
}



int main()
{
yyin=fopen("input.py","r");
yyout=fopen("output.py","w");
yylex();
return 0;
}
