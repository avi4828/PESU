#include <stdio.h>
#include <stdlib.h>

typedef struct MyNode {
    int data;
    struct MyNode *left, *right;
} *NODE;

/* Create a new node */
NODE createNode(int value) {
    NODE newNode = (NODE)malloc(sizeof(struct MyNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

/* Insert into BST */
NODE insert(NODE root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

/* Find largest node (used for delete) */
NODE findLargestNode(NODE root) {
    while (root->right != NULL)
        root = root->right;
    return root;
}

/* Delete a node from BST */
NODE deleteNode(NODE root, int key) {
    if (root == NULL) {
        printf("Item not found in tree\n");
        return root;
    }

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        /* Case 1: Leaf node */
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        /* Case 2: One child (right) */
        else if (root->left == NULL) {
            NODE temp = root;
            root = root->right;
            free(temp);
        }
        /* Case 3: One child (left) */
        else if (root->right == NULL) {
            NODE temp = root;
            root = root->left;
            free(temp);
        }
        /* Case 4: Two children */
        else {
            NODE temp = findLargestNode(root->left);
            root->data = temp->data;
            root->left = deleteNode(root->left, temp->data);
        }
    }
    return root;
}

/* Inorder traversal */
void inorder(NODE root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

/* Main function */
int main() {
    NODE root = NULL;

    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 25);
    root = insert(root, 40);

    printf("Before delete:\n");
    inorder(root);

    root = deleteNode(root, 30);

    printf("\nAfter delete:\n");
    inorder(root);

    return 0;
}
