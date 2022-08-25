#include<stdio.h>
#include<string.h>
int main()
{
	int state=0,istate;
	int fstate[100];
	int inputarr[100];
	int flag1=0;
	int n=0;
	int symbol;
	printf("enter the input ");
	for(int i=0;i<100;i++)
	{
	scanf("%d",&inputarr[i]);
	printf("do you want to enter another input[1/0]");
	scanf("%d",&flag1);
	n++;
	if(flag1==0)
	break;
	}
	for(int i=0;i<n;i++)
	printf("%d",inputarr[i]);
	for(int i=0;i<n;i++)
	{
	symbol=inputarr[i];
	if(state==-1)
	break;
		switch(state)
		{
			case 0:if(symbol==1)
				state=0;
				else
				if(symbol==0)
				state=1;
				else
				state=-1;
				break;
			case 1:if(symbol==1)
				state=1;
				else
				if(symbol==0)
				state=0;
				else
				state=-1;
				break;	
		};
	}
	if(state==1)
	printf("the string will be accepted ");
	else
	printf("the string will not be accepted");
}
