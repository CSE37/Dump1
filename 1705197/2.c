#include<stdio.h>
#define max 10

void push(int *, int*);
void pop(int *, int *);

int top=-1;

void main(){
    int n,i=1, m, stack[max];
    while(i>0){
        printf("Choose a option\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        scanf("%d",&n);

        switch(n){
            case 1:
                push(stack);
            case 2:
                m=pop(stack);
        }
    }
}

void push(int stack1){
    printf("%d\n",top);
    if(top==max-1)
        printf("Overflow");
    else{
        top++;
        printf("%d\n",top);
        printf("Enter data:");
        scanf("%d",(stack1+top));                      
    }
}

void pop(int *stack1){
        int x;
    if(top==-1)
        printf("Underflow");
    else{
        x=*(stack1+top);
        printf("%d",x);
        top--;
    }
    return x;
}
