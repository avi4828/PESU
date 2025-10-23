#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} *NODE;

NODE create_node(int data) {
    NODE temp = (NODE)malloc(sizeof(struct Node));
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

NODE delete_position(NODE head, int pos) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return NULL;
    }

    if (pos == 0) {
        NODE temp = head;
        head = head->link;
        printf("\nDeleted node: %d\n", temp->data);
        free(temp);
        return head;
    }

    NODE curr = head;
    for (int i = 0; curr->link != NULL && i < pos - 1; i++)
        curr = curr->link;

    if (curr->link == NULL) {
        printf("\nPosition out of range!\n");
        return head;
    }

    NODE temp = curr->link;
    curr->link = temp->link;
    printf("\nDeleted node: %d\n", temp->data);
    free(temp);
    return head;
}

NODE delete_by_content(NODE head, int key) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return NULL;
    }

    if (head->data == key) {
        NODE temp = head;
        head = head->link;
        printf("\nDeleted node: %d\n", temp->data);
        free(temp);
        return head;
    }

    NODE curr = head;
    while (curr->link != NULL && curr->link->data != key)
        curr = curr->link;

    if (curr->link == NULL) {
        printf("\nNode with value %d not found!\n", key);
        return head;
    }

    NODE temp = curr->link;
    curr->link = temp->link;
    printf("\nDeleted node: %d\n", temp->data);
    free(temp);
    return head;
}

int main() {
    NODE head = NULL;
    int choice, data, pos;
    head = ins_last(head, 10);
    head = ins_last(head, 20);

    while (1) {
        printf("\n===== Linked List Menu =====");
        printf("\n1. Insert element");
        printf("\n2. Delete at Position");
        printf("\n3. Delete by Content");
        printf("\n4. Display");
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
            printf("Enter position: ");
            scanf("%d", &pos);
            head = delete_position(head, pos);
            break;
        case 3:
            printf("Enter key to delete: ");
            scanf("%d", &data);
            head = delete_by_content(head, data);
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