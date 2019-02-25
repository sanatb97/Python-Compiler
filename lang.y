%{
	#include <stdio.h>
	#include<stdlib.h>
	#include "y.tab.h"
	int yylex();
%}
%token T_single_line T_multi_line T_alpha T_digit T_new_line T_if T_else T_elif T_while T_import T_as T_from T_asop T_colon T_indent
%left '+' '-'
%left '*' 
%%


