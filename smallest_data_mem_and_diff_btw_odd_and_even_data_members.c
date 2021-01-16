#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
int diffofoddAndEvenDataInlist(struct Node* head)
{
	int odd=0,even=0,diff;
	while(head)
	{
		if(((head->data)%2)==0)
		{
//			printf("even %d %d",even,head->data);
			even+=head->data;
		}
		else
		{
			printf("odd %d ",odd);
			odd+=head->data;
		}
		head=head->next;
	}
	
	if(odd>even)
	return odd-even;
	else
	return even-odd;
		
}
int smallestdatainlist(struct Node* head)
{
	int small=head->data;
		
	 	while(NULL!=head->next)
	 	{
		if(small>head->data)
		{
			small=head->data;
			 }	 
	 	  head=head->next;
		}
	
	
	return small;
	
}
//void createandappend(struct Node** head,int element)
//{
//	struct Node *p,*q;
//	q=(*head);
//	p=(struct Node*)malloc(sizeof(struct Node));
//	p->next=0;
//	while(q)
//	{
//		q=q->next;
//	}
//	q=p;
//}
void createandappend(struct Node** head,int element)
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
	 	  temp=temp->next;
	 	  
	 	  temp->next=new_node;
    }
	 
}
int main()
{
	int numtestcases;
	int numnodes=0;
	int i,j,val,difference,minvalue;
	 struct Node* head=NULL;
//	 printf("enter test cases\n");
	 scanf("%d",&numtestcases);
	  for(i=1;i<=numtestcases;i++)
	  {
	  	head=NULL;
	  	printf("enter numnodes\n");
	  	scanf("%d",&numnodes);
	  	for(j=numnodes;j>0;j--)
	  	{
	  		scanf("%d",&val);
	  		createandappend(&head,val);
			  
	    }
	    
//	    while(head)
//	    {
//	    	printf("%d",head->data);
//	    	head=head->next;
//		}
	    
	    difference=diffofoddAndEvenDataInlist(head);
		minvalue=smallestdatainlist(head);
		
		printf("smallest data element in the list:%d\n",minvalue);
		printf("difference between odd  and even data elements:%d\n",difference);
		
	  }
	  return 0;
}

