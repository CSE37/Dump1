#include<stdio.h>
#include<stdlib.h>
void main()
{
  int num,g;
  printf("\nEnter array size:");
  scanf("%d",&num);
  int *p=(int *) malloc(num*sizeof(int));
  for(int i=0;i<num;i++)
  {
  	p[i]=random()%30;
  	if(i==num/2)
  	g=p[i];
  }
  for(int j=0;j<num;j++)
  {
   printf("%d\n",p[j]);
   }
   printf("\n\t\t%d",g);
  return;
 }
