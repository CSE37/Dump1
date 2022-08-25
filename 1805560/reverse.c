#include<stdio.h>
int main()
{
int a[5],i,j,t;
a[0]=2;
a[1]=3;
a[2]=4;
a[3]=5;
a[4]=6;
i=0;
j=4;
while(i<=j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
i++;
j--;
}

for(int p=0;p<5;p++)
printf("%d",a[p]);
return 0;
}



