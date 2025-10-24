#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} *NODE;

NODE create_node(int data) {
    NODE temp = (NODE)malloc(sizeof(struct Node));  // fixed sizeof(NODE)
    if (temp == NULL) {
        printf("\nMemory not allocated!\n");
        return NULL;
    }
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void display(NODE head) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return;
    }
    printf("\nhead -> ");
    for (NODE temp = head; temp != NULL; temp = temp->link)
        printf("%d -> ", temp->data);
    printf("NULL\n");
}

NODE ins_last(NODE head, int data) {
    NODE new_node = create_node(data);
    if (new_node == NULL)
        return head;

    if (head == NULL)
        return new_node;

    NODE temp = head;
    while (temp->link != NULL)
        temp = temp->link;

    temp->link = new_node;
    return head;
}

NODE ins_front(NODE head, int data) {
    NODE new_node = create_node(data);
    if (new_node != NULL) {
        new_node->link = head;
        head = new_node;
    }
    return head;
}

NODE del_front(NODE head) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return NULL;
    }
    NODE temp = head;
    head = head->link;
    printf("\nDeleted node: %d\n", temp->data);
    free(temp);
    return head;
}


NODE reverse_list(NODE head){
    NODE new_head = NULL;
    int data;
    while(head != NULL){
        data = head->data;
        head = del_front(head);
        new_head = ins_front(new_head,data);
    }
    return new_head;
}


int main() {
    NODE head = NULL;
    int choice, data;

    while (1) {
        printf("\n===== Linked List Menu =====");
        printf("\n1. Insert Front");
        printf("\n2. Insert Last");
        printf("\n3. Reverse Linkedlist");
        printf("\n4. Display");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            head = ins_front(head, data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            head = ins_last(head, data);
            break;
        case 3:
            head = reverse_list(head);
            break;
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