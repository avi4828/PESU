#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/* -------- NODE DEFINITION -------- */
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

typedef Node* TreeNode;

/* -------- QUEUE FOR LEVEL ORDER INSERT -------- */
TreeNode queue[MAX];
int front = 0, rear = 0;


/* -------- CREATE NODE -------- */
TreeNode createNode(int value) {
    TreeNode newNode = (TreeNode)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/* -------- INSERT USING LEVEL ORDER -------- */
TreeNode insert(TreeNode root, int value) {
    TreeNode newNode = createNode(value);

    if (root == NULL) {
        queue[rear++] = newNode;
        return newNode;
    }

    while (front < rear) {
        TreeNode temp = queue[front];

        if (temp->left == NULL) {
            temp->left = newNode;
            queue[rear++] = newNode;
            return root;
        } 
        else if (temp->right == NULL) {
            temp->right = newNode;
            queue[rear++] = newNode;
            front++;
            return root;
        } 
        else {
            front++;
        }
    }

    return root;
}

/* -------- PREORDER -------- */
void preorder(TreeNode root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/* -------- INORDER -------- */
void inorder(TreeNode root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/* -------- POSTORDER -------- */
void postorder(TreeNode root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

/* -------- FREE TREE -------- */
void freeTree(TreeNode root) {
    if (root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

/* -------- MAIN FUNCTION -------- */
int main() {
    TreeNode root = NULL;

    int values[] = {11, 8, 5, 9, 12, 45, 67, 90};
    int n = sizeof(values) / sizeof(values[0]);

    /* Insert nodes */
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    /* Traversals */
    printf("Preorder Traversal  : ");
    preorder(root);

    printf("\nInorder Traversal   : ");
    inorder(root);

    printf("\nPostorder Traversal : ");
    postorder(root);

    /* Free memory */
    freeTree(root);

    return 0;
}
