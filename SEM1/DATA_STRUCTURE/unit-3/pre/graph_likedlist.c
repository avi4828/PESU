#include<stdio.h>
#include<stdlib.h>

typedef struct AdjNode{
    int dest;
    struct AdjNode* next;
} *NODE;

typedef struct Adj{
    NODE head;
} *LIST;

typedef struct myGraph{
    int nv;
    LIST arr;
} *Graph;

NODE newAdjNode(int dest){
    NODE newNode = (NODE) malloc(sizeof(struct AdjNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

Graph createGraph(int v){
    Graph graph = (Graph) malloc(sizeof(struct myGraph));
    graph->nv = v;

    graph->arr = (LIST)malloc(v * sizeof(struct Adj));

    for(int i = 0; i < v; ++i)
        graph->arr[i].head = NULL;
    return graph;
}

void addEdge(Graph graph, int src, int dest){
    NODE newNode = newAdjNode(dest);
    newNode->next = graph->arr[src].head;
    graph->arr[src].head = newNode;

    newNode = newAdjNode(src);
    newNode->next = graph->arr[dest].head;
    graph->arr[dest].head = newNode;
}

void printGraph(Graph graph){
    for(int v=0; v<graph->nv; ++v){
        NODE curr = graph->arr[v].head;
        printf("\nAdjacency list of vertex %d\n head ",v);
        while(curr){
            printf("-> %d",curr->dest);
            curr = curr->next;
        }
        printf("\n");
    }
}

void freeGraph(Graph graph){
    NODE head,temp;
    if(graph){
        if(graph->arr){
            for(int v=0; v<graph->nv; ++v){
                head = graph->arr[v].head;
                temp = NULL;
                while(head){
                    temp = head;
                    head = head->next;
                    free(temp);
                }
            }
            free(graph->arr);
        }
        free(graph);
    }
}

int main(){
    int v=3;
    Graph graph = createGraph(v);
    addEdge(graph,0,1);
    addEdge(graph,1,2);
    addEdge(graph,0,2);
    addEdge(graph,2,2);
    printGraph(graph);
    freeGraph(graph);
    return 0;
}