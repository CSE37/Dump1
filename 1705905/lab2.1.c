#include<stdio.h>
#include<string.h>
int isalpha(int sym)
{
	if(sym>='a'&&sym<='z')
	return 1;
	else
	return 0;
}
int isuscore(int sym)
{
	if(sym=='_')
	return 1;
	else
	return 0;
}
int isnumber(int sym)
{
	if(sym>='0'&& sym<='9')
	return 1;
	else
	return 0;
}
int main()
{
	int state=0,istate;
	int fstate[100];
	char inputarr[100];
	char flag1=0;
	int n=0;
	int j=0;
	char symbol;
	printf("Enter the string to be accepted ");
	gets(inputarr);
	printf("%s",inputarr);
	int size = strlen(inputarr);
	while(j<size)
	{
	symbol=inputarr[j];
	if(state==-1)
	break;
		switch(state)
		{
		 case 0:if(isalpha(symbol)||isuscore(symbol))
			state=1;
			else 
			state=-1;
			break;
		case 1:if(isalpha(symbol)||isuscore(symbol)||isnumber(symbol))
			state=1;
			else
			state=-1;
			break;
		};
	j++;
	}
	if(state==1)
	printf("the string will be accepted ");
	else
	printf("the string will not be accepted");
	
	
}
	
	
	
	
	
