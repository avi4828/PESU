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
    if((pos <= 1 || head == NULL)){
        new->next = head;
        head->perv = new;
        head = new;
        return head;
    }
    curr = head;
    curr_pos = 1;
    while(curr->next != NULL && curr_pos < (pos-1)){
        curr = curr->next;
        curr_pos++;
    }
    new->next = curr->next;
    new->perv = curr;
    curr->next = new;
    curr=new->next;
    curr->perv = new;
    return head;
}

NODE delete_first(NODE head){
    NODE temp;
    if(head == NULL){
        printf("\n Empty List!!");
        return head;
    }
    if(head->next == NULL)
    {
        printf("deleted node is : %d",head->data);
        free(head);
        return NULL;
    }
    temp = head;
    head = head->next;
    head->perv = NULL;
    printf("deleted node is : %d",temp->data);
    free(temp);
    return head;
}

NODE delete_last(NODE head){
    NODE temp;
    if(head == NULL){
        printf("\n Empty list!!");
        return head;
    }
    if(head->next == NULL){
        printf("deleted node is : %d",head->data);
        free(head);
        return NULL;
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    printf("deleted node is : %d",temp->data);
    temp->perv->next = NULL;
    free(temp);
    return head;
}

NODE insert_last(NODE head,int data){

}

NODE reverse_list(NODE head){

}

int main(){
    
    return 0;
}