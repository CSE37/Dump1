#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
FILE *fp;
char *filename = "myfile2.txt";
char ch;

fp=fopen(filename,"r");
if(fp == NULL)
{
	printf("%s does not exists \n",filename);
	return 0;
}

while((ch=fgetc(fp))!=EOF)
{
	printf("%c",ch);
}
fclose(fp);
}
