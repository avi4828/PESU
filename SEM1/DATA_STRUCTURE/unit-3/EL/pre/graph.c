#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int nv;
    int **adj;
} *Graph;

Graph createGraph(int v){
    Graph graph = malloc(sizeof(*graph));
    graph->nv;

    graph->adj = malloc(v * sizeof(int *));
    for(int i=0;i<v;i++){
        graph->adj[i] = malloc(v * sizeof(int *));
        for(int j=0;j<v;j++){
            graph->adj[i][j] = 0;
        }
    }
    return graph;
}

void addEdge(Graph graph,int src,int dest){
    graph->adj[src][dest] = 1;
    graph->adj[dest][src] = 1;
}

void printGraph(Graph graph){
    printf("adj matrix is :\n");
    for(int i=0;i<graph->nv;i++){
        for(int j=0;j<graph->nv;j++){
            printf("%d ",graph->adj[i][j]);
        }
        printf("\n");
    }
}

void freeGraph(Graph graph){
    for(int i=0;i<graph->nv;i++){
        free(graph->adj[i]);
    }
    free(graph->adj);
    free(graph);
}

