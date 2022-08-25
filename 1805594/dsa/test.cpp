#include<bits/stdc++.h>
//#include<stdio.h>
//#include<stdlib.h>
//#define INT_MAX
int partition(int *arr,int l,int h)
{
	int i=l,j=h+1,pivot=arr[l],temp;
do
{
	do
	{
		i++;
	}
	while(arr[i]<pivot&& i<=h);
	do
	{
		j--;
	}
	while(arr[j]>pivot);
	if(i<j)
	{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}
}
	while(i<j);
	arr[i]=arr[j];
	arr[j]=pivot;
	return j;
}
void quicksort(int arr[],int l,int h)
{
if(l<h)
{
	int p= partition(arr,l,h);
	quicksort(arr,l,p-1);
	quicksort(arr,p+1,h);
}
}
int main()
{
int n,i,size,k,j,count=0;
printf("Enter the no. of elements\n");
scanf("%d",&n);
if(n<3)
{printf("less than 3 elements not accepted\n");
return 0;
}
int *arr = (int*)malloc(sizeof (int)*n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",arr+i);
sort(arr,arr+n);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
printf("\n");
for(i=0;i<n-2;i++)
{
	for(j=i+1;j<n-1;j++)
	{
		for(k=j+1;k<n;)
		{
		if(arr[i]+arr[j]<arr[k])
		{
		break;
		}
		else if(arr[i]+arr[j]>arr[k]&&arr[k]+arr[j]>arr[i] &&arr[i]+arr[k]>arr[j])
		{printf("%d %d %d \n",arr[i],arr[j],arr[k]);
		k++;
		count++;
		}
		else k++;
	}
}
}
printf("No of triangles is %d",count);
return 0;
}

