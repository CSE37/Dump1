%{
#include<stdio.h>
%}
%%
. ECHO;
%%
void main()
{
yyin=fopen("textidentifier.c","r");
yyout=fopen("textidentifier2.c","w");
yylex();
}
