#include<stdio.h>
#include<string.h>
#include<math.h>
char stack[50];
top=-1;
int main()
{
	char post[50],c;
	int i,a,b;
	printf("Enter postfix expression to evaluate:\n");
	scanf("%s",post);
	int t1=0;
	for(i=0;i<strlen(post);i++)
		{	
			label:
			c=post[i];
				switch(c)
					{
					case '+':
						a=(int)stack[top--];
						b=(int)stack[top--];
						stack[++top]=b+a;
						break;
					case '-':
						a=(int)stack[top--];
						b=(int)stack[top--];
						stack[top++]=b-a;
						break;
					case '*':
						a=(int)stack[top--];
						b=(int)stack[top--];
						stack[top++]=b*a;
						break;
					case '/':
						a=(int)stack[top--];
						b=(int)stack[top--];
						stack[top++]=b/a;
						break;
					case '%':
						a=(int)stack[top--];
						b=(int)stack[top--];
						stack[top++]=b%a;
						break;
					case '^':
						a=(int)stack[top--];
						b=(int)stack[top--];
						stack[top++]=pow(b,a);
						break;
					default:
						if(c!=' ')
							{
								int t=0;
								t=t*10+(int)c;
								i++;
								goto label
							}
							stack[++top]=c;
					}
		}
			
					
