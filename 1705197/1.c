#include<stdio.h>
#include<stdlib.h>

int size = 10;
int queqe[10];
int front = 0, rear = -1;

void insert();
int delete();
void display();

void main(){
    int n,i=1,m;
    while(i>0){
        printf("Choose a option\n");
        printf("1. Insert\n");
        printf("2. delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&n);

        switch(n){
            case 1:
                printf("Enter data:");
                scanf("%d",&m);
                insert(m);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}

void insert(int m){
    if(rear==size-1)
        printf("Overflow\n");
    else{
        rear++;
        queqe[rear]=m;
    }
}

int delete(){
        int x;
    if(front==rear+1){
        printf("Underflow\n");
        front=0;
        rear=-1;
    }
    else{
        x=queqe[front];
        front++;
    }
    return x;
}

void display(){
    int i,m,queqe2[10],front1=0,rear1=-1;
    while(front!=rear+1){
        m = delete();
        printf("%d\t",m);
        rear1++;
        queqe2[rear1]=m;
    }
    printf("\n");
    front=0;
    rear=-1;
    while(front1!=rear1+1){
        m=queqe2[front1];
        front1++;
        insert(m);
    }
}
