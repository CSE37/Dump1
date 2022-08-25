#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
 int state=0;
 char ch;
 FILE *fp;
 fp=fopen("myfile2.txt","r");
 if(fp==NULL)
 {
   printf("The File Could not be found");
   exit(0);
 }
while(1)
{
ch=fgetc(fp);
switch(state)
{
 case 0:if(ch=='<')
  	state =1;
  	break;
 case 1: fseek(fp,-1,SEEK_CUR);
 	 printf("(relop,LT)\n");
 	 state=0;
 	 break;

};
if(ch==EOF)
break;
}
}
