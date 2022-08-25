#include<stdio.h>
int left(int i)
{
return (2*i+1);
}
int right(int i)
{
return (2*i+2);
}
void heapify(int a[],int i,int n)
{
int l,r,large,temp;
l=left(i);
r=right(i);
if((l<=n-1) && (a[l]>a[i])){
large=l;
}
else
{
large=i;
}
if((r<=n-1)&&(a[r]>a[large]))
{
large=r;
}
if(large!=i)
{
temp=a[i];
a[i]=a[large];
a[large]=temp;
heapify(a,large,n);
}
}
void buildheap(int a[],int n)
{
for(int i=(n-1)/2;i>=0;i--)

heapify(a,i,n);
}
void heapsort(int a[],int n)
{
int i,m,temp;
buildheap(a,n);
m=n;
for(i=n-1;i>=1;i--)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
m=m-1;
heapify(a,0,m);
}
}
void main ()
{
int n,i,max=0;
printf("Enter the size \n");
scanf("%d",&n);
int a[n];
printf("\n Enter elements :");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array before sorting :\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
heapsort(a,n);
printf("After sorting :\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
