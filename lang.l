
%{
#include<stdio.h>
%}

%%

#(.*) {return T_single_line}; /*single line comments*/
["]["]["][\n](.*)[\n]["]["]["] {return T_multi_line}; /*multiline comments */
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
yyin=fopen("/home/vogiral/Desktop/AC_Assignment1.py","r");
yyout=fopen("/home/vogiral/Desktop/out.py","w");
yylex();
return 0;
}
