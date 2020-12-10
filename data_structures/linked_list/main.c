#include"myheaders.h"


int main(void)
{
int count=0,data=0;
struct node *head=NULL;
printf("Enter no of nodes to create : ");
scanf("%d",&count);
while(count)
{
printf("Enter data : ");
scanf("%d",&data);
head=add_node_at_end(head,data);
count--;
}

print_list(head);
return 0;
}
