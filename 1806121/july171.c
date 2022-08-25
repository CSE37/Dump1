#include<stdio.h>
int insert(int a[50]);
int main()
{
	int a[50];
	int i;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	insert(a);
	for(i=0;i<6;i++)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}
int insert(int a[50])
{	
	int i,n,pos,t;
	printf("Enter the element and position");
	scanf("%d%d",&n,&pos);
	for(int i=4;i>=pos;i--)
	{
	a[i+1]=a[i];
	}
	a[pos]=n;
}
