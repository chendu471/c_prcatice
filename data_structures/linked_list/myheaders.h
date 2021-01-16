#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct node{
int data;
struct node *next;
};

struct node* add_node_at_end(struct node *head,int data);
void print_list(struct node *head);
struct node* add_at_pos(struct node *head,int data,int pos);
struct node *del_at_pos(struct node *head,int pos);
int count_list(struct node *head);

int count_list(struct node *head);
