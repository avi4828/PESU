#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} *NODE;

NODE Initialization_Function(NODE head){
    if(head == NULL){
        printf("\t Linkelist Was Empty.");
        return NULL;
    }

}

int main() {
    NODE head = NULL;
    Initialization_Function(head);
    return 0;
}