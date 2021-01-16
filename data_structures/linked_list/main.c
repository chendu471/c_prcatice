#include"myheaders.h"


int main(void)
{
	int count=0,data=0,option=0,pos=0;
	struct node *head=NULL;
	//	printf("Enter no of nodes to create : ");
	//	scanf("%d",&count);
	while(option !=5)
	{
		printf("Enter your choice \t 	1.add at end \n \
				2.add at begin \n \
				3.add at position \n\
				4.delete node\n \
				5.stop app\n");

		scanf("%d",&option);
		if(option<4)
		{

			printf("Enter data : ");
			scanf("%d",&data);
		}
		switch(option)
		{
			case 1:
				head=add_node_at_end(head,data);
				break;
			case 2:

				head=add_at_pos(head,data,1);	
				break;	
			case 3:
				printf("enter position: ");
				scanf("%d",&pos);
				count=count_list(head);
				if(pos>count+1)
				{
					printf("Invalid position\n");
				}
				else
				{
					head=add_at_pos(head,data,pos);
					break;
				}
			case 4:
				printf("enter position: ");
				scanf("%d",&pos);
				count=count_list(head); 
				if(pos>count)
				{
					printf("Invalid position\n");

				}
				else
				{
					head=del_at_pos(head,pos);		
				}
	
		}

		print_list(head);
		count--;
	}

	return 0;
}


int count_list(struct node* head)
{
	int count=0;
	while(head)
	{
		head=head->next;
		count++;
	}
	return count;
}
