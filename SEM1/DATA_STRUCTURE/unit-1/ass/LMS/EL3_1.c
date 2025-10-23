#include <stdio.h>
#include <stdlib.h>

// typedef struct Node {
//     int data;
//     struct Node *link;
// } *NODE;

// NODE create_node(int data) {
//     NODE temp = (NODE)malloc(sizeof(struct Node));  // fixed sizeof(NODE)
//     if (temp == NULL) {
//         printf("\nMemory not allocated!\n");
//         return NULL;
//     }
//     temp->data = data;
//     temp->link = NULL;
//     return temp;
// }

// void display(NODE head) {
//     if (head == NULL) {
//         printf("\nList is empty!\n");
//         return;
//     }
//     printf("\nhead -> ");
//     for (NODE temp = head; temp != NULL; temp = temp->link)
//         printf("%d -> ", temp->data);
//     printf("NULL\n");
// }

// NODE ins_last(NODE head, int data) {
//     NODE new_node = create_node(data);
//     if (new_node == NULL)
//         return head;

//     if (head == NULL)
//         return new_node;

//     NODE temp = head;
//     while (temp->link != NULL)
//         temp = temp->link;

//     temp->link = new_node;
//     return head;
// }

// NODE insert_sorted(NODE head, int data) {
//     NODE new_node = create_node(data);
//     if (new_node == NULL)
//         return head;

//     if (head == NULL || head->data >= data) {
//         new_node->link = head;
//         return new_node;
//     }

//     NODE curr = head;
//     while (curr->link != NULL && curr->link->data < data)
//         curr = curr->link;

//     new_node->link = curr->link;
//     curr->link = new_node;
//     return head;
// }

// NODE del_front(NODE head) {
//     if (head == NULL) {
//         printf("\nList is empty!\n");
//         return NULL;
//     }
//     NODE temp = head;
//     head = head->link;
//     printf("\nDeleted node: %d\n", temp->data);
//     free(temp);
//     return head;
// }

// NODE sort_list(NODE head){
//     NODE sorted_head = NULL;
//     // int data;

//     while (head != NULL)
//     {
//         int data = head->data;
//         head = del_front(head);
//         sorted_head = insert_sorted(sorted_head,data);
//     }
//     return sorted_head;
    
// }

// int main() {
//     NODE head = NULL;
//     int choice, data, pos;

//     while (1) {
//         printf("\n===== Linked List Menu =====");
//         printf("\n1. Insert Last");
//         printf("\n2. Insert in Sorted List");
//         printf("\n3. sort a linklist.");
//         printf("\n4. Display");
//         printf("\n0. Exit");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//         case 1:
//             printf("Enter data: ");
//             scanf("%d", &data);
//             head = ins_last(head, data);
//             break;
//         case 2:
//             printf("Enter data: ");
//             scanf("%d", &data);
//             head = insert_sorted(head, data);
//             break;
//         case 3:
//             head = sort_list(head);
//         case 4:
//             display(head);
//             break;
//         case 0:
//             printf("\nExiting...\n");
//             exit(0);
//         default:
//             printf("\nInvalid choice!\n");
//         }
//     }

//     return 0;
// }

// #include<stdio.h>

typedef struct Node {
    int data;
    struct Node *link;
} *NODE;

NODE create_node(int data){
    NODE temp = (NODE)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("\nMemory not allocated!\n");
        return NULL;
    }
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void display(NODE head){
    if(head == NULL){
        printf("\nList is empty!\n");
        return;
    }
    printf("\nhead -> ");
    for(NODE temp = head;temp != NULL;temp = temp->link){
        printf("%d -> ",temp->data);
    }
    printf("NULL\n");
}

NODE ins_last(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node == NULL)
        return head;
    if(head == NULL)
        return new_node;
    NODE temp = head;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = new_node;
    return head;
}

NODE insert_sorted(NODE head,int data){
    NODE new_node = create_node(data);
    if(new_node == NULL)
        return head;
    if(head == NULL || head->data >= data){
        new_node->link = head;
        return new_node;
    }
    NODE curr = head;
    while(curr->link != NULL && curr->link->data < data){
        curr = curr->link;
    }
    new_node->link = curr->link;
    curr->link = new_node;
    return head;
}

NODE del_front(NODE head){
    if(head == NULL){
        printf("\nList is empty!\n");
        return NULL;
    }
    NODE temp = head;
    head = head->link;
    printf("\nDeleted node: %d\n",temp->data);
    free(temp);
    return head;
}

NODE sort_list(NODE head){
    NODE sorted_head = NULL;
    while(head != NULL){
        int data = head->data;
        head = del_front(head);
        sorted_head = insert_sorted(sorted_head,data);
    }
    return sorted_head;
}

int main(){
    NODE head = NULL;
    int choice,data,pos;
    
    while(1){
        printf("\n===== Linked List Menu =====");
        printf("\n1. Insert Last");
        printf("\n2. Insert in sorted list");
        printf("\n3. sort a linklist ");
        printf("\n4. Display");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                head = ins_last(head,data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d",&data);
                head = insert_sorted(head,data);
                break;
            case 3:
                head = sort_list(head);
            case 4:
                display(head);
                break;
            case 0:
                printf("\nExiting...\n");
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
        
    }
    return 0;
    
}