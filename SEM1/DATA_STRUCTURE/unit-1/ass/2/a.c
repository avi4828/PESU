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
}

// Insert at front
NODE ins_front(NODE head, int data) {
    NODE new_node = create_node(data);
    if (new_node != NULL) {
        new_node->link = head;
        head = new_node;
    }
    return head;
}

// Delete at front
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

// Insert at last
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

// Delete last
NODE del_last(NODE head) {
    if (head == NULL) {
        printf("\nList is empty!\n");
        return NULL;
    }
    if (head->link == NULL) {
        printf("\nDeleted node: %d\n", head->data);
        free(head);
        return NULL;
    }
    NODE curr = head;
    while (curr->link->link != NULL)
        curr = curr->link;

    printf("\nDeleted node: %d\n", curr->link->data);
    free(curr->link);
    curr->link = NULL;
    return head;
}

// Insert at specific position
NODE insert_position(NODE head, int data, int pos) {
    NODE new_node = create_node(data);
    if (new_node == NULL)
        return head;

    if (pos == 0 || head == NULL) {
        new_node->link = head;
        return new_node;
    }

    NODE curr = head;
    for (int i = 0; curr != NULL && i < pos - 1; i++)
        curr = curr->link;

    if (curr == NULL) {
        printf("\nPosition out of range!\n");
        free(new_node);
        return head;
    }

    new_node->link = curr->link;
    curr->link = new_node;
    return head;
}

// Insert in sorted order
NODE insert_sorted(NODE head, int data) {
    NODE new_node = create_node(data);
    if (new_node == NULL)
        return head;

    if (head == NULL || head->data >= data) {
        new_node->link = head;
        return new_node;
    }

    NODE curr = head;
    while (curr->link != NULL && curr->link->data < data)
        curr = curr->link;

    new_node->link = curr->link;
    curr->link = new_node;
    return head;
}

// Delete by position
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

// Delete by content
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

// ================= MAIN FUNCTION ===================
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
        printf("\n8. Delete by Content");
        printf("\n9. Display");
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
            head = del_front(head);
            break;
        case 4:
            head = del_last(head);
            break;
        case 5:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter data: ");
            scanf("%d", &data);
            head = insert_position(head, data, pos);
            break;
        case 6:
            printf("Enter position: ");
            scanf("%d", &pos);
            head = delete_position(head, pos);
            break;
        case 7:
            printf("Enter data: ");
            scanf("%d", &data);
            head = insert_sorted(head, data);
            break;
        case 8:
            printf("Enter key to delete: ");
            scanf("%d", &data);
            head = delete_by_content(head, data);
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