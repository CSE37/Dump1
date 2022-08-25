#include<stdio.h>
#include<stdlib.h>
struct node 
{
   int info;
   struct node *next;
   struct node *prev;
};
int main()
{
  struct node *ptr;
  ptr=(struct node *)malloc(sizeof(struct node));
  if(ptr==NULL)
  {
   printf("\nOUT OF MEMORY");
   exit(0);
  }
  createlist(ptr);
}
void createlist(struct node*ptr)
{
  struct node *curr,*start;
  char ch;
  int i=1;
  printf("ENTER THE VALUE OF %d NODE :");
  scanf("%d",&ptr->info);
  start=ptr;
  ptr->next=start;
  ptr->prev=start;
  i++;
  printf("Type (Y/N) to Quit:\n");
  ch=getchar();
  while(ch!='n')
  {
    curr=(struct node *)malloc(sizeof(struct node));
    if(curr==NULL)
    {
      printf("Out Of Memory");
      exit(0);
    }
    curr->prev=ptr;
    ptr->next=curr;
    ptr=ptr->next;
    printf("Enter The Value Of %d node:",i);
    scanf("%d",&ptr->info);
    ptr->next=start;
    start->prev=ptr;
    printf("Type (Y/N) to Quit:\n");
    ch=getchar();
    return 0;
 }
}

 
      


 
    
    
    
