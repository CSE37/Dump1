#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head;
int main()
{
int n;
printf("Operations are\n");
printf("1.Insert at begining.\n");
printf("2.Insert at end.\n");
printf("3.Display all elements.\n");


printf("Enter the operation to be executed\n");
scanf("%d",&n);
switch(n)
{
  case 1:insert_beg(void);
         break;
  case 2:insert_end(void);
         break;
  case 3:display(void);
         break;
}
}
void insert_beg(void)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter the value of node\n");
scanf("%d",&temp->data);
temp->prev=NULL;
temp->next=head;
head=temp;
}
void insert_end(void)
{
struct node *temp,*q;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter the value of node\n");
scanf("%d",&temp->data);
if(head == NULL)
{
head = temp;
temp->prev=NULL;
}
else
{
for(q=head;q->next!=NULL;q=q->next)
{
q->next=temp;
temp->prev=q;
}
}
}
