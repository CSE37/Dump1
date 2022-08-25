#include <stdio.h>
int main()
{
	printf("enter array \n");
	printf("the size is 10\n");
	int c[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&c[i]);
		
	}
	int x;
	int j=0;
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
	printf("The largest element is %d \n",c[9]);
	printf("The second largest element is %d \n",c[8]);
	
	printf("Which largest element would you like \n");
	int k;
	scanf("%d",&k);
	printf("the %d_th largest element is %d \n",k,c[k-1]);
	return 0;
}

	
	
	
	
