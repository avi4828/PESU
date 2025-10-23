#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} *NODE;

// Function to create a new node
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

// Display all nodes
void display(NODE head) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return;
    }
    printf("\nhead -> ");
    for (NODE temp = head; temp != NULL; temp = temp->link)
        printf("%d -> ", temp->data);
    printf("NULL\n");
}NODE ins_last(NODE head, int data) {
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


int main() {
    NODE head = NULL;
    int choice, data, pos;

    while (1) {
        printf("\n===== Linked List Menu =====");
        printf("\n1. Insert Front");
        printf("\n2. Insert Last");
        printf("\n3. Delete Front");
        printf("\n4. Delete Last");
        printf("\n5. Insert at Position");
        printf("\n6. Delete at Position");
        printf("\n7. Insert in Sorted List");
        printf("\n8. sort a linklist.");
        // printf("\n8. Delete by Content");
        printf("\n9. Display");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            head = ins_last(head, data);
            break;
        case 2:
            break;
        case 9:
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