#include <stdio.h>

#define MAX 100

/* INSERT ELEMENT */
void insert(int tree[], int *size, int value) {
    tree[*size] = value;
    (*size)++;  
}

/* PARENT FUNCTION */
int parent(int index) {
    return (index - 1) / 2;
}

/* LEFT CHILD FUNCTION */
int leftChild(int index) {
    return 2 * index + 1;
}

/* RIGHT CHILD FUNCTION */
int rightChild(int index) {
    return 2 * index + 2;
}


/* DISPLAY TREE */
void display(int tree[], int size) {
    if (size == 0) {
        printf("Tree is empty!\n");
        return;
    }

    printf("Binary Tree (Level Order): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tree[i]);
    }
}

/* DISPLAY PARENT & CHILD RELATIONS */
void displayNodeRelations(int tree[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Invalid index!\n");
        return;
    }

    printf("Node at index %d: %d\n", index, tree[index]);

    if (index > 0)
        printf("Parent: %d\n", tree[parent(index)]);

    if (leftChild(index) < size)
        printf("Left Child: %d\n", tree[leftChild(index)]);

    if (rightChild(index) < size)
        printf("Right Child: %d\n", tree[rightChild(index)]);
}



/* MAIN FUNCTION */
int main() {
    int tree[MAX];
    int size = 0;

    insert(tree, &size, 10);
    insert(tree, &size, 20);
    insert(tree, &size, 30);
    insert(tree, &size, 40);
    insert(tree, &size, 50);

    display(tree, size);

    printf("\n\nNode Relations:\n");
    displayNodeRelations(tree, size, 1);

    return 0;
}