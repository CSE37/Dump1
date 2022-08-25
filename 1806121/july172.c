#include<stdio.h>
int delete(int a[50]);
int main()
{
	int a[50];
	int i;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	delete(a);
	for(i=0;i<4;i++)
	{
	printf("%d\n",a[i]);
	}
	return(0);
}
int delete(int a[50])
{
	int i,n,pos;
	printf("Enter the elements you want to delete");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
	if(a[i]==n)
	{
	pos=i;
	}
	}
	for(i=pos;i<5;i++)
	{
	a[pos]=a[pos+1];
	pos++;
	}
}
	
