#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};

void createAndAppend(struct Node **head,int element)
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=element;
	new_node->next=NULL;
	if(NULL==*head)
	{
		*head=new_node;
	}
	else
	{
		struct Node* temp=*head;
		while(NULL!=temp->next)
		{
			temp=temp->next;
		}
		temp->next=new_node;
	}
}

void rearrangeEvenOdd(struct Node** head)
{
	#if 1
	struct Node* odd=(*head);
	struct Node* even=(*head)->next;
	struct Node* odd1=odd;					//to remeber 1st node of odd to joint with even 
	struct Node* even1=(*head)->next;		//to remeber 1st node of even to assign to head
	while(1)
	{
		if(!odd|| !even || !(even->next))		//if number of nodes are even then this condition will true
		{
			odd->next=NULL;						//total list end
			even->next=odd1;					//joining odd to even
			*head=even1;						//assigning head with even for even to come first
			printf("\nhere\n");
			break;
		}
		odd->next=even->next;				//odd list creation	
		odd=odd->next;						//odd list transvers
		
		if(odd->next==NULL)					//if number of nodes are odd then this condition will true
		{
			even->next=odd1;				//joining odd to even	
			*head=even1;
			printf("\nhere1\n");			//assigning head with even for even to come first
			break;
		}
		even->next=odd->next;
		even=even->next;
		
		}
			
#endif	
					
}

void printlist(struct Node* head)
{
	struct Node *ptr=head;
	while(ptr)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
}

int main()
{
	int N=0,i=0,val=0;
	scanf("%d",&N);
	struct Node* head=NULL;
		for(i=N;i>0;i--)
		{
			scanf("%d",&val);
		createAndAppend(&head,val);
				}
		printlist(head);
		rearrangeEvenOdd(&head);
		printlist(head);
		return 0; 

}
