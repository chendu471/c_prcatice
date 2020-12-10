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
while(head)
{
printf("%d\n",head->data);
head=head->next;
}
}


