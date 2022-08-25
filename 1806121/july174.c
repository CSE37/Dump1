#include<stdio.h>
int minmax(int a[50]);
int main()
{
	int a[50];
	int i;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	
	minmax(a);
	
	return(0);
}

int minmax(int a[50])
{
	
	int min=a[0],max=a[0];
	for(int i=0;i<5;i++)
	{
	if(min>a[i])
	{
	min=a[i];
	}
	if(max<a[i])
	{
	max=a[i];
	}
	}
		

	printf("Max=%d\n",max);
	printf("Min=%d",min);
}
