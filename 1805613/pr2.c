#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool BST(int a[],int n)
{
int i,low,high,m;
low=0;
high=n-1;
while(low<=high)
{
m=(low+high)/2;
if(a[m]==key)
return true;
else if(a[m]>key)
high=m-1;

else
low=m-1;
}
return false;
}
int main (){
int n,i,key;
printf("\n Enter size of array");
scanf("%d",&n);
int a[n];
for(i=0,i<n,i++)
{
scanf("%d",&a[i]);
printf("
