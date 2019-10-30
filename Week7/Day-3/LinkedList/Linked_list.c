#include "Linked_list.h"
#include <stdio.h>
void modify_int(int* x){
    (*x)++;
}

void push_back(node_t** head_p, int data){
    node_t* head = *head_p;

    node_t* tail = head;

    if (head == NULL){
        node_t* new_head = (node_t*)calloc(1, sizeof(node_t));
        new_head->data = data;
        new_head->next = NULL;
        *head_p = new_head;
    }else{
        node_t* tail = *head_p;
        while(tail->next != NULL){
            tail = tail->next;
        }
        node_t* new_tail = (node_t*)calloc(1, sizeof(node_t));
        new_tail->data = data;
        new_tail->next = NULL;

        tail->next = new_tail;
    }

}

node_t* get_tail(node_t* head){
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}

node_t* constructNode(int data){
    node_t* new_node = (node_t*)calloc(1, sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void popBack (node_t** head_p) {
    if (*head_p == NULL){
        return;
    }
    else if ((*head_p)->next == NULL) {
        free(*head_p);
        *head_p = NULL;
    } else {

        node_t *beforeLast = *head_p;
        while (beforeLast->next->next != NULL) {
            beforeLast = beforeLast->next;
        }
        free(beforeLast->next);
        beforeLast->next = NULL;
    }
}

void Print(node_t** head_p) {
    if(head_p == NULL){
        printf("EMPTY!\n");
        return;
    }
    for (node_t *node = *head_p; node != NULL; node = node->next){
        printf("%d", node->data);
    }

}