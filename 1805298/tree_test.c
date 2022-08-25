

#include<stdio.h>
#include<stdlib.h>
int count=0;

struct node
{
	struct node *left;
	int data;
	struct node *right;
};


struct node* create_node(int v)
{
	struct node *cur=(struct node*)malloc(sizeof(struct node));
	cur->data= v;
	cur->left=cur->right=NULL;
	return cur;
}


  void swap(int *x,int *y)
   {
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
   }


void postorder(struct node* root)
{
		if(root==NULL)
	return;

		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
}


/*void evalute(struct node* root)
{
		if(root==NULL)
	return;

		evalute(root->left);
       while( 1 )
	{
	  if(((root->data)<(root->left->data)) && ((root->left->data)<(root->right->data)) )
	    {
	      break;
	    }
	   else
	   {
	     count++;
	     if((root->data)>(root->left->data))
	       swap(root->data,root->left->data);
	    else if((root->data)>(root->right->data))
	       swap(root->data,root->right->data);  
           }
	}
		 
		evalute(root->right);
		printf("%d ",root->data);
}*/


int main()
{
        
	struct node *root=NULL;
	root=create_node(19);
	root->left = create_node(42);
	root->right = create_node(22);
	root->left->right = create_node(33);
	root->left->right->left=create_node(4);
	root->left->left = create_node(5);
	root->right->left = create_node(6);
	root->right->left->left = create_node(20);
	root->right->left->right = create_node(3);
	
	printf("\npostorder of tree:\n");
	postorder(root);
	//evalute(root);
	
	
	
	return 0;
}

