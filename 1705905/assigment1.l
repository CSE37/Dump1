%{ 
#include <stdio.h> 
%}
keyword [if|for|]
identifier [a-zA-Z_][a-zA-Z0-9_]* 
%%
{identifier} {printf("Valid Identifier");} 
{keyword} {printf("valid keyword");}

%% 
void main() 
{ yylex(); 
} 

