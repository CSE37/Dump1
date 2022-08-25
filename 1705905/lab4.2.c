#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
FILE *fp;
FILE *fr;
char *filename1 = "myfile2.txt";
char *filename2 = "myfile3.txt";
char ch;
int flag=0;
int ccount=0;

fp=fopen(filename1,"r+");
fr=fopen(filename2,"w");
if(fr==NULL)
{
 printf("the file cant be opened ");
 exit(0);
}
if(fp==NULL)
{
 printf("the file cant be opened ");
 exit(0);
}
while(1)
{
ch=fgetc(fp);
if(ch=='/')
{
ch=fgetc(fp);
if(ch=='/')
{
while((ch=fgetc(fp))!='\n')
	continue;

}
}
if(ch==EOF)
break;
else
fputc(ch,fr);
}
fclose(fp);
fclose(fr);
}
