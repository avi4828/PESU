#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
}*NODE;

NODE create_node(int data){
    NODE temp = (NODE)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("\nMemory not allocated\n");
        return NULL;
    }
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void display(NODE head){
    if(head == NULL){
        printf("\nList if empty!\n");
        return;
    }
    printf("\nhead -> ");
    for(NODE temp = head;temp != NULL; temp = temp->link){
        printf("%d -> ",temp->data);
    }
    printf("NULL\n");
}

NODE del_front(NODE head){
    if(head == NULL){
        printf("\nList if Empty!\n");
        return NULL;
    }
    NODE temp = head;
    head = head->link;
    free(temp);
    return head;
}

NODE insert_sorted(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node == NULL){
        return head;
    }
    if(head == NULL || head->data >= data){
        new_node->link = head;
        return new_node;
    }
    NODE curr = head;
    while(curr->link != NULL && curr->link->data <data)
        curr = curr->link;
    new_node->link = curr->link;
    curr->link = new_node;
    return head;
}

NODE merge_sorted_lists(NODE head1,NODE head2){
    while(head2 != NULL){
        int data = head2->data;
        head2 = del_front(head2);
        head1 = insert_sorted(head1,data);
    }
}

int main(){
    NODE merge_head = NULL,head1 = NULL, head2 = NULL;
    
    head1 = insert_sorted(head1,10);
    head1 = insert_sorted(head1,20);
    head1 = insert_sorted(head1,30);
    head1 = insert_sorted(head1,40);
    display(head1);
    
    head2 = insert_sorted(head2,5);
    head2 = insert_sorted(head2,15);
    head2 = insert_sorted(head2,25);
    head2 = insert_sorted(head2,35);
    display(head1);
    
    merge_head = merge_sorted_lists(head1,head2);
    display(merge_head);
    
    return 0;
}



















