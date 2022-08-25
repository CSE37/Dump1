#include<stdio.h>
int main()
{
int a[15],i,j,k,l;
a[0]=1;
a[0]=3;
a[0]=2;
a[0]=0;
a[0]=0;
a[0]=9;
a[0]=6;
a[0]=0;
a[0]=5;
a[0]=0;
a[0]=0;
a[0]=3;
a[0]=7;
a[0]=8;
a[0]=9;

for(i=0;i<15;i++)
	{
		if(a[i]!=0)
			
			{
				for(j=i+1;j<15&&a[j]!=0;j++);
					k=i;
					l=j-1;
					printf("%d%d",k,l);
					i=j+1;
			}	
	}
return 0;
}

		
