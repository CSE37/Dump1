%{
  #include<stdio.h>
  #include<stdlib.h>
%}
dgt[0-9]
%%
{dgt}+ return atoi(yytext);
%%
void main()
 {
  int val,sum=0,n=0;
  while((val=yylex())>0){
   sum=sum+val;
   n++;
  }
  if(n>0)
   printf("avg=%d\n",sum/n);
 }  
