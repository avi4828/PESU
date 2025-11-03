#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int ticket_no;
    struct node *next, *prev;
} *NODE;

// Function to create a new node
NODE create_node(int ticket_no) {
    NODE new_node = (NODE)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("\nMemory allocation failed!\n");
        return NULL;
    }
    new_node->ticket_no = ticket_no;
    new_node->next = new_node->prev = new_node; // Circular
    return new_node;
}

// Insert at front
NODE insert_front(NODE head, int ticket_no) {
    NODE new_node = create_node(ticket_no);
    if (head == NULL)
        return new_node;

    NODE tail = head->prev;

    new_node->next = head;
    new_node->prev = tail;
    tail->next = new_node;
    head->prev = new_node;

    return new_node; // new head
}

// Insert at rear
NODE insert_rear(NODE head, int ticket_no) {
    NODE new_node = create_node(ticket_no);
    if (head == NULL)
        return new_node;

    NODE tail = head->prev;

    new_node->next = head;
    new_node->prev = tail;
    tail->next = new_node;
    head->prev = new_node;

    return head;
}

// Delete from front
NODE delete_front(NODE head) {
    if (head == NULL) {
        printf("\nQueue is empty!\n");
        return NULL;
    }

    NODE tail = head->prev;

    if (head->next == head) { // Only one node
        printf("Removed ticket: %d\n", head->ticket_no);
        free(head);
        return NULL;
    }

    NODE temp = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;

    printf("Removed ticket: %d\n", temp->ticket_no);
    free(temp);
    return head;
}

// Delete from rear
NODE delete_rear(NODE head) {
    if (head == NULL) {
        printf("\nQueue is empty!\n");
        return NULL;
    }

    NODE tail = head->prev;

    if (head->next == head) { // Only one node
        printf("Removed ticket: %d\n", head->ticket_no);
        free(head);
        return NULL;
    }

    NODE new_tail = tail->prev;
    new_tail->next = head;
    head->prev = new_tail;

    printf("Removed ticket: %d\n", tail->ticket_no);
    free(tail);
    return head;
}

// Display in forward direction
void display_forward(NODE head) {
    if (head == NULL) {
        printf("\nQueue is empty!\n");
        return;
    }

    NODE temp = head;
    printf("\nQueue: ");
    do {
        printf("[%d] -> ", temp->ticket_no);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

// Display in reverse direction
void display_reverse(NODE head) {
    if (head == NULL) {
        printf("\nQueue is empty!\n");
        return;
    }

    NODE tail = head->prev;
    NODE temp = tail;

    printf("\nQueue: ");
    do {
        printf("[%d] -> ", temp->ticket_no);
        temp = temp->prev;
    } while (temp != tail);
    printf("\n");
}

// Extra Feature: Search for a ticket number
void search_ticket(NODE head, int ticket_no) {
    if (head == NULL) {
        printf("\nQueue is empty!\n");
        return;
    }

    NODE temp = head;
    int pos = 1;
    do {
        if (temp->ticket_no == ticket_no) {
            printf("\nTicket %d found at position %d in queue.\n", ticket_no, pos);
            return;
        }
        temp = temp->next;
        pos++;
    } while (temp != head);

    printf("\nTicket %d not found in the queue.\n", ticket_no);
}

// Main function
int main() {
    NODE head = NULL;
    int choice, ticket_no;

    while (1) {
        printf("\n--- Ticket Counter Queue System (CDLL) ---");
        printf("\n1. Add Person at Front");
        printf("\n2. Add Person at Rear");
        printf("\n3. Remove Person from Front");
        printf("\n4. Remove Person from Rear");
        printf("\n5. Display Forward");
        printf("\n6. Display Reverse");
        printf("\n7. Search for Ticket");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ticket number: ");
                scanf("%d", &ticket_no);
                head = insert_front(head, ticket_no);
                break;

            case 2:
                printf("Enter ticket number: ");
                scanf("%d", &ticket_no);
                head = insert_rear(head, ticket_no);
                break;

            case 3:
                head = delete_front(head);
                break;

            case 4:
                head = delete_rear(head);
                break;

            case 5:
                display_forward(head);
                break;

            case 6:
                display_reverse(head);
                break;

            case 7:
                printf("Enter ticket number to search: ");
                scanf("%d", &ticket_no);
                search_ticket(head, ticket_no);
                break;

            case 0:
                printf("\nExiting system...\n");
                exit(0);

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}
