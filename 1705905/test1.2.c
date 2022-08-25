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
	{
	return 1;
	}
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
	int sum=0;
	char symbol;
	printf("Enter the string to be accepted ");
	gets(inputarr);
	//printf("%s",inputarr);
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
	int as=0;
	while(as<size)
	{
	//printf("entered this loop");
	//symbol=inputarr[as];
	printf("%c \n",symbol);
	if(isnumber(symbol))
	{
	printf("%d \n",(int)symbol);
	int x=(int)symbol;
	printf("%d",x);
	sum=sum+(int)symbol;
	printf("%dhi",sum);
	}
	as++;
	}
	if(state==1)
	printf("\nthe string will be accepted and sum of digits are %d and the identifier is %s",sum,inputarr);
	else
	printf("the string will not be accepted ");
	
	
}
	
