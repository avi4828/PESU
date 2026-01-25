#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int dest;
    struct NODE *next;
}*Node;

typedef struct LIST{
    Node head;
}*List;

typedef struct myGraph{
    int nv;
    List arr
}*Graph;

Node createNode(int dest){
    Node newnode = (Node) malloc(sizeof(struct NODE));
    newnode->dest = dest;
    newnode->next = NULL;
    return newnode;
}

Graph createGraph(int v){
    Graph graph = (Graph)malloc(sizeof(struct myGraph));
    graph->nv=v;
    graph->arr=(List)malloc(v*sizeof(struct LIST));
    for(int i=0;i<v;i++){
        graph->arr[i].head = NULL;
    }
    return graph;
}

void addEdge(Graph graph,int src,int dest){
    Node newnode = createNode(src);
    newnode->next = graph->arr[dest].head;
    graph->arr[dest].head = newnode;

    Node newnode = createNode(dest);
    newnode->next = graph->arr[src].head;
    graph->arr[src].head = newnode;
}

void printGraph(Graph graph){
    for(int i=0;i<graph->nv;++i){
        Node curr = graph->arr[i].head;
        printf("\nlist of vertax %d\n head:",i);
        while(curr){
            printf("%d ",curr->next);
            curr = curr->next;
        }
        printf("\n");
    }
}

void freeGraph(Graph graph){
    if(graph){
        if(graph->arr){
            for(int i=0;i<graph->nv;++i){
                Node head = graph->arr[i].head;
                Node temp = NULL;
                while(head){
                    temp=head;
                    head=head->next;
                    free(temp);
                }
            }
            free(graph->arr);
        }
        free(graph);
    }
}