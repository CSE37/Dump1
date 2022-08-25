#include <stdio.h>
int main()
{
	printf("enter array \n");
	printf("the size is 10\n");
	int c[10];
	int x;
	int i=0,j=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&c[i]);
		
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<9;j++)
		{
			if (c[j] %2 == 0)
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
