//lex program to check string
%{
#include<stdio.h>
int length=0;
%}
letter [a-zA-Z]
nletter [0-9a-zA-Z]
%%
{letter}+{if(yyleng>length)
         printf("\nValid.");
        else
         printf("\nInvalid.");
         
}


void main()
{
 printf("Enter the length: ");
 scanf("%d",&length);
 yylex();
 return 0;
}
