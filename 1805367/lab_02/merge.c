#include <stdio.h>
int main()
{
	printf("enter first array and please oh please keep it sorted!!!\n");
	printf("the size is 5\n");
	int c[10];
	int a[5];
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
	printf("enter second array and please oh please keep it sorted!!! \n");
	printf("the size is 5\n");
	
	int b[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<5;i++)
	{
		c[i+5] = b[i];
	}
	int j=0;
	int x = 0;
	for(i=0;i<10;i++)
	{
		for(j=i;j<9;j++)
		{
			if (c[j] >c[j+1])
			{
				x = c[j];
				c[j] = c[j+1];
				c[j+1] = x;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}

	
	
