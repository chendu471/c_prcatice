#include"myheaders.h"

struct node *link_reverse(struct node *head)
{
struct node *prev=NULL,*current,*next_node;
current=next_node=head;
while(next_node)
{
next_node=current->next;
current->next=prev;
prev=current;
current=next_node;

}
return prev;

}


