%{
#include<stdio.h>
int lno=0;
%}
%%
{.*\n} {fprintf(yyout,"%d",lno);lno++;fprintf}
%%
