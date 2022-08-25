#include<stdio.h>
#define max 10

void push(int data, int *stack, int *top){
    if(*(top)==max-1)
        printf("Overflow");
    else{
        (*top)++;
	*(stack+*(top))=data;                      
    }
}

int pop(int *stack, int *top){
    int x;
    if(*(top)==-1)
        printf("Underflow");
    else{
        x=*(stack+*(top));
        *(top)--;
    }
    return x;
}

int isEmpty(int top){
	if(top==-1)
		return 1;
	else
		return 0;
	
}

void inQueue(int m, int *stack1, int *top1){
	push(m, stack1, top1);
}

int deQueue(int *stack1, int *stack2, int *top1,int *top2){
	int m,n;
	if(*(top1)==-1){
		printf("Underflow");
	}
	else{
		while(!isEmpty(*top1)){
			n=pop(stack1, top1);
			push(n, stack2, top2);
		}	
		m=pop(stack2, top2);
 		while(!isEmpty(*top2)){
			n=pop(stack2, top2);
			push(n, stack1, top1);
		}
	}
}

void main(){
    int n,i=1, m, stack1[max],stack2[max],top1=-1,top2=-1;
    while(i>0){
        printf("Choose a option\n");
        printf("1. Inqueue\n");
        printf("2. Dequeue\n");
        scanf("%d",&n);

        switch(n){
            case 1:
            	printf("Enter data:");
            	scanf("%d",&m);
                inQueue(m,stack1,&top1);
            case 2:
                m=deQueue(stack1, stack2, &top1, &top2);
                printf("%d",m);
        }
    }
}

