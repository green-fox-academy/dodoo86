#ifndef LINKEDLIST_LINKED_LIST_H
#define LINKEDLIST_LINKED_LIST_H
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node_t;

void push_back(node_t** head_p, int data);
void modify_int(int* x);
node_t* constructNode(int data);
void popBack (node_t** head_p);
void Print(node_t** head_p);

#endif //LINKEDLIST_LINKED_LIST_H
