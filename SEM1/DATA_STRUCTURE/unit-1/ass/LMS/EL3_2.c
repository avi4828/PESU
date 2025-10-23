#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int cf;
    int dg;
    struct Node *link;
} *NODE;

// Create a new node
NODE create_node(int cf, int dg) {
    NODE temp = (NODE)malloc(sizeof(struct Node));
    if (temp == NULL) {
        printf("Memory not allocated!\n");
        exit(1);
    }
    temp->cf = cf;
    temp->dg = dg;
    temp->link = NULL;
    return temp;
}

NODE insert_term(NODE head, int cf, int dg) {
    NODE new_node = create_node(cf, dg);

    if (head == NULL)
        return new_node;

    NODE temp = head;
    while (temp->link != NULL)
        temp = temp->link;

    temp->link = new_node;
    return head;
}

void display(NODE head) {
    if (head == NULL) {
        printf("Polynomial is empty!\n");
        return;
    }

    NODE temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->cf, temp->dg);
        if (temp->link != NULL)
            printf(" + ");
        temp = temp->link;
    }
    printf("\n");
}

// Add two polynomials
NODE add_polynomials(NODE p1, NODE p2) {
    NODE result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->dg == p2->dg) {
            int sum = p1->cf + p2->cf;
            if (sum != 0)
                result = insert_term(result, sum, p1->dg);
            p1 = p1->link;
            p2 = p2->link;
        } 
        else if (p1->dg > p2->dg) {
            result = insert_term(result, p1->cf, p1->dg);
            p1 = p1->link;
        } 
        else {
            result = insert_term(result, p2->cf, p2->dg);
            p2 = p2->link;
        }
    }

    while (p1 != NULL) {
        result = insert_term(result, p1->cf, p1->dg);
        p1 = p1->link;
    }
    while (p2 != NULL) {
        result = insert_term(result, p2->cf, p2->dg);
        p2 = p2->link;
    }

    return result;
}

// MAIN FUNCTION
int main() {
    NODE p1 = NULL,p2 = NULL,sum = NULL;
    int n, cf, dg;

    printf("Enter number in first polynomial: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient: ");
        scanf("%d", &cf);
        printf("Enter degree: ");
        scanf("%d",&dg);
        p1 = insert_term(p1, cf, dg);
    }

    printf("\nEnter number in second polynomial: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient: ");
        scanf("%d", &cf);
        printf("Enter degree: ");
        scanf("%d",&dg);
        p2 = insert_term(p2, cf, dg);
    }

    printf("\nFirst Polynomial: ");
    display(p1);

    printf("Second Polynomial: ");
    display(p2);

    sum = add_polynomials(p1, p2);

    printf("\n Polynomial (Sum): ");
    display(sum);

    return 0;
}
