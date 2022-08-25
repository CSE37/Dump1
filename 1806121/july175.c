#include<stdio.h>
int search(int a[50],int n,int lb,int ub);
int main()
{
	int a[50];
	int i,n,lb=0,ub=4;
	printf("Enter the elements");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search");
	scanf("%d",&n);
	search(a,n,lb,ub);
	
	return(0);
}

int search(int a[50],int n,int lb,int ub)
{	
	int mid;
	if(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==n)
		{
		return(mid+1);
		}
		else if(a[mid]>n)
		{
		search(a,n,lb,mid-1);
		}
		else if
		{
		search(a,n,mid+1,ub);
		}
		else
		{
		return(-1);
		}
	}
}
