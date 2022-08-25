%{ 
#include<stdio.h>
#include<string.h>
int counter = 0;
int pos=0;
int i=0;
int val;
%} 
alpha [a-zA-Z]
  
%%
{alpha}+ {
	if(yyleng>counter) 
	{ 
    	pos=i;
    	counter = yyleng; 
  	i++;
  	return counter;
  	} 
}
%% 
  
void main() { 
  val=yylex();
  printf("The position is %d",pos); 
  printf("largest: %d", val); 
  printf("\n"); 
} 
