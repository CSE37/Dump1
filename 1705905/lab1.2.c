#include<stdio.h>
#include<string.h>
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
//	printf("The string is :");
//	printf("%s",inputarr);
	int size = strlen(inputarr);
//	printf("%d",size);
	while(j<size)
	{
	symbol=inputarr[j];
//	printf("the symbol is %c",symbol);
	if(state==-1)
	break;
		switch(state)
		{
			case 0:	if(symbol=='b')
				state=0;
				else
				if(symbol=='a')
				{
//				printf("the right condition a has been reached");
				state=1;
//				printf("the state is %d",state);
				}
				else
				{state=-1;
//				 printf("the symbol is -1 case 0");
				}break;
			case 1:if(symbol=='a')
				state=1;
				else
				if(symbol=='b')
				{
//				printf("the right condition b has been reached ");
				state=2;
//				printf("the state is %d",state);
				}
				else
				{state=-1;
//				  printf("the symbol is -1 case 1");
				}
				break;	
			case 2: if(symbol=='a')
				state=1;
				else
				if(symbol=='b')
				state=0;
				else
				{
				state=-1;
//				  printf("the symbol is -1 case 1");
				}
				break;
		};
	j++;
	}
//	printf("%d",state);
	if(state==2)
	printf("the string will be accepted ");
	else
	printf("the string will not be accepted");
}

