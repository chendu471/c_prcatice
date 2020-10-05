#include<stdlib.h>
#include<stdio.h>

typedef struct node{
	struct node * next;
	struct node*prev;
	int val;

}NODE;

void add_node2end(NODE **list,int val,NODE **tail)
{
	NODE *p,*q;
	p=(NODE *)malloc(sizeof(NODE));
	p->next=0;
	p->val=val;
	q=*list;
	if(!q)
	{
		*list=p;
		p->prev=0;

	}
	else
	{
		while(q->next)
			q=q->next;
		p->prev=q;
		q->next=p;
		*tail=p;
	}

}

void add_node2front(NODE **list,int val)
{
		NODE *p,*q;
		q=*list;
		p=(NODE*)malloc(sizeof(NODE));
		p->val=val;		
		
		if(!q)
		{
		*list=p;
		p->prev=0;
		

		}		
		else
		{
		p->prev=0;
		p->next=*list;
		q->prev=p;
		*list=p;		

		}

}

void print_backward(NODE *list)
{
if(list)
{
while(list->next)
list=list->next;

while(list)
{
printf("%d",list->val);
list=list->prev;
}
}
}


void print_forward(NODE *list)
{
	while(list)
	{
		printf("%d",list->val);
		list=list->next;
	}
}

int main()
{
	NODE *head=0,*tail=0;

	int n,val;

	scanf("%d",&n);
	while(n)
	{
		n--;
		scanf("%d",&val);
		add_node2end(&head,val,&tail);
	//	print_backward(list);
	}
	//print_forward(head);
	print_backward(head);
	return 0;
}
