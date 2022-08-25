#include<stdio.h>
int main()
{
int a[8],i,j,p,t,u;
a[0]=1;
a[1]=2;
a[2]=3;
a[3]=4;
a[4]=5;
a[5]=6;
a[6]=7;
a[7]=8;

for(i=0,j=1;i<8;i=i+4,j=j+4)
{	
	t=a[i];
	a[i]=a[i+2];
	a[i+2]=t;
	
	u=a[j];
	a[j]=a[j+2];
	a[j+2]=u;

}

for(p=0;p<8;p++)
printf("%d",a[p]);
return 0;
}
