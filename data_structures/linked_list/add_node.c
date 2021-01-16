#include"myheaders.h"

struct node* add_node_at_end(struct node *head,int data)
{
	if(!head)
	{
		struct node *new_node;
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=data;
		return new_node; 
	}
	else
	{
		struct node *new_node,*temp=head;
		while(head->next)
		{
			head=head->next;
		}
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=data;
		head->next=new_node;
		return temp;
	}
}

void print_list(struct node *head)
{
	int count=0;
	while(head)
	{
		printf("%d\n",head->data);
		head=head->next;
		count++;
	}
	printf("count %d\n",count);
}

struct node *add_at_pos(struct node* head,int data,int pos)
{
	int count=1;
	struct node *temp=head,*new=(struct node *)malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;

	if(head==NULL)
	{
		return new;

	}
	else if(pos==1)
	{
		new->next=temp;
		return new;
		
	}
	while(count<pos-1)
	{
		temp=temp->next;
		count++;
	}
	new->next=temp->next;
	temp->next=new;	
	return head;
}


