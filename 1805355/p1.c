#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *rchild;
int info;
struct node *lchild;
}*root;

void search(int tree,struct node **lac,struct node **par)
{
struct node *ptr,*prev;
if(tree==root->info)
{
*lac=root;
*par=NULL;
return 0;
}
prev=root;
if(tree<root->info)
ptr=root->lchild;
else
ptr=root->rchild;
while(ptr!=NULL)
{
if(item=ptr->info)
{
*lac=ptr;
*par=prev;
return 0;
}
else if(item<ptr->info)
{
prev=root;
ptr=ptr->lchild;
}
}
*lac=NULL;
*par=prev;
}
void insert(int tree)
{
struct node *lac,*par,*temp;
printf("ok");
search(item,&loc,&par);
if(loc==NULL)
{


int main()
{
{
int ch=1,a;
root=NULL;
while(ch==1)
{
printf("enter element");
scanf("%d",&a);
insert(a);
printf("enter 1 to continue:");
scanf("%d",&ch);
}
printf("
