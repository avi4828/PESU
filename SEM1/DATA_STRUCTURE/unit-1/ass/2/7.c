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

int main() {
    NODE head = NULL;
    int data,pos;
    printf("This is insert at positions\n");
    printf("Enter a first node data:");
    scanf("%d", &data);
    head = ins_last(head,data);
    printf("Enter a second node data:");
    scanf("%d", &data);
    head = ins_last(head,data);
    printf("Enter a third node data:");
    scanf("%d", &data);
    head = ins_last(head,data);
    display(head);
    printf("insert a element in any postion\n");
    printf("Enter a data:");
    scanf("%d",&data);
    printf("\nEnter a postions :");
    scanf("%d",&pos);
    head = insert_position(head,data,pos);
    printf("\nEnter a data:");
    scanf("%d",&data);
    printf("\nEnter a postions :");
    scanf("%d",&pos);
    head = insert_position(head,data,pos);
    display(head);
    return 0;
}