#include <stdio.h>
#include <stdlib.h>

/* ---------- Node Definition ---------- */
typedef struct MyNode {
    int data;
    struct MyNode *left;
    struct MyNode *right;
} MyNode;

typedef MyNode* NODE;

/* ---------- Create New Node ---------- */
NODE createNode(int value) {
    NODE newNode = (NODE)malloc(sizeof(MyNode));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/* ---------- Insert in BST ---------- */
NODE insert(NODE root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

/* ---------- Inorder Traversal ---------- */
void inorder(NODE root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* ---------- Preorder Traversal ---------- */
void preorder(NODE root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/* ---------- Postorder Traversal ---------- */
void postorder(NODE root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

/* ---------- Free Tree ---------- */
void freeTree(NODE root) {
    if (root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}


/* ---------- Main Function ---------- */
int main() {
    NODE root = NULL;

    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    printf("Inorder Traversal   : ");
    inorder(root);

    printf("\nPreorder Traversal  : ");
    preorder(root);

    printf("\nPostorder Traversal : ");
    postorder(root);

    freeTree(root);
    return 0;
}
