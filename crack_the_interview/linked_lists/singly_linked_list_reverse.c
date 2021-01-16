#include<stdlib.h>
#include<stdio.h>

typedef struct node {

	int data;
	struct node *next;

}NODE;

void node_at_end(NODE **head,int data)
{
	NODE *new_node,*temp;
	
	new_node=(NODE *)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=0;
	
	if(!(*head))
	{
		*head=new_node;
			
	}
	else
	{
		temp=*head;
		while(temp->next)
		temp=temp->next;
		
		temp->next=new_node;	
	
	}
		

}

void print_list(NODE *node)
{
	while(node)
	{
	printf("%d ",node->data);
	node=node->next;
	}

}


	int main(void)
	{

		int n,data;
		NODE *head=NULL;
		printf("Enter number of nodes you want in list: ");
		scanf("%d",&n);
		
		while(n>0)
		{
		scanf("%d",&data);
		
		node_at_end(&head,data);	
			
		n--;
		}
		print_list(head);
		return 0;
	}	
