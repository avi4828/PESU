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

NODE ins_front(NODE head, int data) {
    NODE new_node = create_node(data);
    if (new_node != NULL) {
        new_node->link = head;
        head = new_node;
    }
    // display(head);
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

int main() {
    NODE head = NULL;
    int data;
    printf("Inster a element in front of Linklist\n\n");
    printf("Enter a first node data :");
    scanf("%d",&data);
    head = ins_front(head,data);
    printf("Enter a second node data :");
    scanf("%d",&data);
    head = ins_front(head,data);
    printf("Enter a third node data :");
    scanf("%d",&data);
    head = ins_front(head,data);
    display(head);
    printf("\n\nnow Delete front element\n");
    head = del_front(head);
    display(head);
    head = del_front(head);
    display(head);
    
    return 0;
}