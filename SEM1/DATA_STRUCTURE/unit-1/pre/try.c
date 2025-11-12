#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
} *node;

node create_node(int data){
    node new_node = (node)malloc(sizeof(struct Node));
    if(new_node == NULL){
        printf("\nmemory alloction failed!!\n");
        return NULL;
    }
    else{
        new_node->data = data;
        new_node->link = NULL;
        return new_node;
    }
}

node insert_front(node head,int data){
    node new_node = create_node(data);
    if(new_node == NULL){
        return head;
    }
    if(head != NULL){
        new_node->link = head;
        head = new_node;
        return head;
    }
}

node insert_last(node head,int data){
    node temp=head, new_node = create_node(data);
    if(head==NULL){
        return new_node;
    }
    for(;temp->link != NULL;temp = temp->link);
    temp->link = new_node;
    return head;
}

node insert_at_position(node head,int data,int pos){
    node curr=head,new_node;
    new_node = create_node(data);
    if(head == NULL || pos == 0){
        new_node->link = head;
        return new_node;
    }
    int i = 0;
    for(;curr != NULL && i < pos -1;i++){
        curr = curr->link;
    }
    if(curr == NULL){
        printf("\nout of range");
        free(new_node);
        return head;
    }
    if(new_node != NULL){
        new_node->link = curr->link;
        curr->link = new_node;
    }
    return head;
}

node delete_front(node head){
    if(head==NULL)
    {
        printf("\nEmpty list!!");
        return head;
    }
    node temp = head;
    head = head->link;
    printf("\nDeleted node: %d\n\n",head->data);
    free(temp);
    return head;
}

node delte_last(node head){
    if(head == NULL){
        printf("\nEmpty list!!\n");
        return NULL;
    }
    if(head->link != NULL){
        printf("\ndelted node: %d",head->data);
        free(head);
        return NULL;
    }
    node temp = head;
    while(temp->link->link != NULL){
        temp = temp->link;
    }
    printf("\ndelted node: %d",temp->link->data);
    free(temp->link);
    temp->link = NULL;
    return head;
}

node delete_at_position(node head,int pos){
    node curr = head;
    if(head == NULL){
        printf("\nempty listed list");
        return NULL;
    }
    if(pos == 0){
        printf("\ndelted node: %d ",head->data);
        head = head->link;
        free(curr);
        return head;
    }
    for(int i = 0;curr->link != NULL && i < pos -1;i++){
        curr = curr->link;
    }
    if(curr->link == NULL){
        printf("\nout of range");
        return head;
    }
    printf("\ndeleted node: %d ",curr->link->data);
    node temp = curr->link;
    curr->link = temp->link;
    free(temp);
    return head;
}

void display(node head){
    if(head == NULL){
        printf("\nEmpty linkedlist !!\n");
        return;
    }
    printf("\nhead ->");
    for(node temp = head;temp != NULL;temp=temp->link){
        printf(" %d ->",temp->data);
    }
    printf("NULL\n\n");
    return;
}

int main(){
    int choice,data,pos;
    node head=NULL;
    while (1)
    {
        printf("\n==== likedlist ====");
        printf("\n1. insert front");
        printf("\n2. insert last");
        printf("\n3. insert at position");
        printf("\n4. Delete front");
        printf("\n5. Delete last");
        printf("\n6. Delete at position");
        printf("\n9. display");
        printf("\n0. Exit linkedlist");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {

        case 1:
            printf("\nenter your data:");
            scanf("%d",&data);
            head = insert_front(head,data);
            break;

        case 2:
            printf("\nenter your data:");
            scanf("%d",&data);
            head = insert_last(head,data);
            break;
        
        case 3:
            printf("\nenter position Number:");
            scanf("%d",&pos);
            printf("\nenter data:");
            scanf("%d",&data);
            head = insert_at_position(head,data,pos);
            break;

        case 4:
            head = delete_front(head);
            break;
        
        case 5:
            head = delete_front(head);
            break;
        
            
        case 6:
            printf("\nenter position:");
            scanf("%d",&pos);
            head = delete_at_position(head,pos);
            break;

        case 9:
            display(head);
            break;

        case 0:
            printf("\nExiting ...");
            exit(1);
            break;

        default:
            printf("invalid choice !");
            break;
        }
    }
    



    return 0;
}