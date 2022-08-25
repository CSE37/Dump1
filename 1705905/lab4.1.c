//program to count characters from the file 
#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
FILE *fp;
char *filename = "myfile2.txt";
char ch;
int lcount=0;
int scount=0;
int spcount=0;
char str[30];
int flag=0;
int ccount=0;
fp=fopen(filename,"r");
   if(fp == NULL)
   {
	printf("%s does not exists \n",filename);
	return 0;
   }
//printf("%d",fgets(str,40,fp));
   while((ch=fgetc(fp))!=EOF)
   {	
	if(ch=='/')
	{
 	 if(flag==1)
 	 {
 	   ccount++;
 	   flag=0;
 	 }
 	 else
 	   flag=1;
 	}
 	else
 	   flag=0;
	if(ch=='\n')
	   lcount++;
	if(ch==' ')
	   scount++;
	if(ch=='{'||ch=='}'||ch==';'||ch=='@'||ch=='#'||ch=='$'||ch=='~')
	   spcount++;	
   }
printf("the no. of lines are %d",lcount);
printf("the no. of spaces is %d",scount);
printf("the no. of comments are %d ",ccount);
printf("the no. of special characters are %d",spcount);
fclose(fp);
}
