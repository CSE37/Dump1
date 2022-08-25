#include<stdio.h>
#include<stdlib.h>

struct node * new_node();
void insert();
void show();
void insert_after_data(int);
void insert_before_data(int);
void delete(int);

 struct node{
     int data;
     struct node *next;
 } *start = NULL;

void main(){
    int n,i=1,data;
    while(i>0)
    {
       printf("Enter your Choice\n");
       printf("1. Enter a element\n");
       printf("2. Display\n");
       printf("3. Enter a node after given data item\n");
       printf("4. Enter a node before given data item\n");
       printf("5. Delete a node\n");
       printf("6. Quit\n");
       scanf("%d",&n);
        switch(n){
            case 1:
                insert();
                break;

            case 2:
                show();
                break;
            case 3:
            	printf("Enter the element");
            	scanf("%d",&data);
                insert_after_data(data);
                break;
             case 4:
             	printf("Enter the element");
             	scanf("%d",&data);
            	insert_before_data(data);
             	break;
            case 5:
            	printf("Enter a element");
            	scanf("%d",&data);
            	delete(data);
            	break;
            case 6:
                exit(0);
    }   
    }
}

struct node * new_node(){
	struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&new->data);
    new->next=NULL;
    return new;
}

void insert(){
    struct node *temp=new_node();
    if(start==NULL)
        start=temp;
    else{
        struct node *t = start;
        while(t->next != NULL)
            t=t->next;
        t->next = temp;
    }
}

void show(){
    struct node *t = start;
    while(t != NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}

void insert_after_data(int data){
	struct node *new=new_node();
	struct node *t=start;
	while(t->data != data)
		t=t->next;
		new->next=t->next;
		t->next=new;
}

void insert_before_data(int data){
	struct node *new=new_node();
	struct node *t=start;
	while(t->next->data!=data)
		t=t->next;
		new->next=t->next;
		t->next=new;
}

void delete(int data){
	struct node *t=start;
	while(t->next->data != data)
		t=t->next;
		t=t->next->next;
}














