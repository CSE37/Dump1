#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;	
}*start,*q;
void createlist()
{
	struct node *temp;int d,n;
	printf("Enter number of elements you want to insert\n");
	scanf("%d",&n);
	start=NULL;
	for(int i=0;i<n;i++)
	{
		printf("Enter the element\n");
		scanf("%d",&d);
		temp = (struct node *) malloc (sizeof(struct node));
		temp->info=d;
		temp->next=NULL;
		if(start == NULL)
		{
			start = temp;
		}
		else
		{	
			q=start;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next = temp;
		}
	}

}
void insert_beg()
{
	struct node *temp;int d;
	temp = (struct node *) malloc (sizeof(struct node));
	printf("Enter the element to be inserted at the beginning\n");
	scanf("%d",&d);
	temp->info=d;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next = start;
		start = temp;
	}
	
}
void displaylist()
{
	q=start;
	while(q!=NULL)
	{
		printf("%d ",q->info);
		q=q->next;
	}
	printf("\n");
}
void delete_beg()
{
	printf("<<<<<<<<<<<Deleteing the beginning element>>>>>>>>>>>\n");
	q=start;
	if(start == NULL)
	{
		return;
	}
	else
	{
		start=q->next;
		free(q);	
	}
}
void delete_end()
{
	struct node *prev;
	printf("<<<<<<<<<<<Deleteing the last element>>>>>>>>>>>\n");
	q=start;
	if(start == NULL)
	{
		return;
	}
	else
	{
		while(q->next!=NULL)
		{
			prev = q;
			q=q->next;
		}
		prev->next=NULL;
		free(q);
		
	}
}
void delete_pos(int pos)
{
	printf("<<<<<<<<<<<Deleteing the element at pos-%d>>>>>>>>>>>\n",pos);
	q=start;
	struct node *prev;
	if(start == NULL)
	{
		return;
	}
	else
	{	
		for(int i =0 ; i < pos-1; i++)
		{
			prev=q;
			q=q->next;
			if(q==NULL)
			{
				printf("Wrong position\n");
				return;
			}
		}
		prev->next=q->next;
		free(q);
	}
}
int main()
{
	createlist();
	displaylist();
	insert_beg();
	displaylist();
	delete_beg();
	displaylist();
	delete_end();
	displaylist();
	delete_pos(3);
	displaylist();
}
