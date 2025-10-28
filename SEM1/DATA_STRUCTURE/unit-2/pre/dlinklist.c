#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next,*perv;
} *NODE;

NODE create_node(int data){
    NODE new_node = (NODE)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("\nmemory allocation faild\n");
        return NULL;
    }
    else{
        new_node->data = data;
        new_node->perv = NULL;
        new_node->next = NULL;
    }
    return new_node;
}


void display(NODE head){
    NODE curr;
    if(head == NULL){
        printf("\nempty list\n");
        return;
    }
    printf("\n\nhead -> ");
    for(curr=head;curr!=NULL;curr=curr->next){
        printf("[%d]->curr->data");
    }
    printf("NULL\n\n");
}

NODE insert_front(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node == NULL){
        return head;
    }
    if(head != NULL){
        new_node->next = head;
        head->perv = new_node;
    }
    return new_node;
}

NODE insert_pos(NODE head,int data,int pos){
    NODE new = create_node(data);
    NODE curr;
    int curr_pos;
    
}