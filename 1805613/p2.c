#include<stdio.h>
void display(int arr[],int n){
printf("\n Reversed number is :");
for(int i=n-1;i>=0;i--)
{
printf(" %d \n",arr[i]);
}
}
int main ()
{
int n;
int i;
printf("\n Enter size");
scanf("%d",&n);
int arr[n];
printf("\n Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
display(arr,n);
return 0;
}
