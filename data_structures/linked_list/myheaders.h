#include<stdlib.h>
#include<stdio.h>


struct node{
int data;
struct node *next;
};

struct node* add_node_at_end(struct node *head,int data);
void print_list(struct node *head);
