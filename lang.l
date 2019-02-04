%{
#include<stdio.h>
%}

%%

[#].*[\n]* {return T_single_line}; 
[\"][\"][\"]([^\"]|[\n])*[\"][\"][\"][\n]* {return T_multi_line};
[a-zA-Z] {return T_alpha};
[0-9] {return T_digit};
[\n] {return T_new_line};
"if" {return T_if};
"else" {return T_else};
"elif" {return T_elif};
"while" {return T_while};
"import" {return T_import};
"as" {return T_as};
"from" {return T_from};
[=] {return T_asop};
[:] {return T_colon};
[\t] {{return T_indent};


%%				


int yywrap()
{
return 1;
}
<<<<<<< HEAD



int main()
{
yyin=fopen("input.py","r");
yyout=fopen("output.py","w");
yylex();
return 0;
}
=======
>>>>>>> 8e58f5306ae8836f1a2f8967031bcb78dd959ca5
