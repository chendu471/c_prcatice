#include"myheaders.h"

struct node* del_at_pos(struct node * head,int pos)
{
int count=1;
struct node *temp,*prev,*current;
temp=head;
if(pos==1)
{
temp=head->next;
prev=head;
free(prev);
return temp;

}
else
{
while(count<pos-1)
{
temp=temp->next;

count++;
}

prev=temp->next;
temp->next=temp->next->next;
free(prev);
return head;

}

}
