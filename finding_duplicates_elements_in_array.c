#include<stdlib.h>
#include<stdio.h>

typedef struct node{
	int val;
	int count;
	struct node *next;
}NODE;


void createList(NODE **head,int element)
{
	if(NULL==(*head))
	{
		NODE *new_node=(NODE*)malloc(sizeof(NODE));
		new_node->val=element;
		new_node->next=0;
		new_node->count=1;
		(*head)=new_node;
	}
	else
	{
		NODE *temp=(*head);
		while(temp)
		{
			if(element==temp->val)
			{
				temp->count+=1;
				return;
			}
			temp=temp->next;
		}

		NODE *p;
		temp=*head;	
		NODE *new_node=(NODE*)malloc(sizeof(NODE));
		new_node->val=element;
		new_node->next=0;
		new_node->count=1;
		while(temp->next)
		{
			if((temp->next->val)>element)
			{
				p=temp->next;
				temp->next=new_node;
				new_node->next=p;
				break;
			}

			temp=temp->next;
		}
		if(!temp->next)
		{
			temp->next=new_node;
		}



	}

}

int main(void)
{
	NODE *head=0;
	printf("enter array size for two arrays :" );
	int n,m,i;
	scanf("%d%d",&n,&m);

	int arr1[n],arr2[n];
	for(i=0;i<m+n;i++)
	{
		if(i<n)
		{
			scanf("%d",&arr1[i]);
			createList(&head,arr1[i]);
		}
		else
		{
			scanf("%d",&arr2[i-n]);
			createList(&head,arr2[i-n]);
		}
	}

	while(head)
	{
		printf("%d ",head->val);
		printf("count %d\n ",head->count);
		head=head->next;
	}


	return 0;
}
