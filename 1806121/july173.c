#include<stdio.h>
int sort(int a[50]);
int main()
{
	int a[50];
	int i;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nSorted Array\n");
	sort(a);
	for(i=0;i<5;i++)
	{
	printf("%d\t",a[i]);
	}
	return(0);
}
int sort(int a[50])
{
	int i,j,t;
	for(i=1;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(a[j]>a[j+1])
		{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
		}
	}
} 
