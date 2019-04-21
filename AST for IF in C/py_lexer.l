%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
#include<string.h>
int countn=0;
%}
%option yylineno
alpha [a-zA-Z]
digit [0-9]
%%
if	return IF;

else	return ELSE;
{digit}+   { strcpy(yylval.nam.name,(yytext));   return NUM;}
{alpha}({alpha}|{digit})* {strcpy(yylval.nam.name,yytext); return ID;}
"<="   {strcpy(yylval.nam.name,yytext);  return LE;}
">="   {strcpy(yylval.nam.name,yytext);  return GE;}
"=="   {strcpy(yylval.nam.name,yytext); return EQ;}
"!="   {strcpy(yylval.nam.name,yytext); return NE;}
">"	{strcpy(yylval.nam.name,yytext);return GT;}
"<"	{strcpy(yylval.nam.name,yytext);return LT;}
"&&"	{strcpy(yylval.nam.name,yytext); return AND;}
"||"	{strcpy(yylval.nam.name,yytext);return OR;}

[ \t]* ;
[\n]   countn++;
. return yytext[0];
["].*["] {strcpy(yylval.nam.name,yytext);return STRLT;}
%%
int yywrap (){return 1;}

 