#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int nv;
    int **adjm;
} *Graph;

Graph createGraph(int ver){
    Graph graph = malloc(sizeof(*graph));
    graph->nv = ver;

    graph->adjm = malloc(ver * sizeof(int *));
    for(int i = 0; i < ver; i++){
        graph->adjm[i] = malloc(ver * sizeof(int));
        for (int j = 0; j < ver; j++){
            graph->adjm[i][j] = 0;
        }
    }
    return graph;
}

void addEdge(Graph graph,int src, int dest){
    graph->adjm[src][dest] = 1;
    graph->adjm[dest][src] = 1;
}

void printGraph(Graph graph){
    for(int i = 0; i < graph->nv; i++){
        for(int j = 0; j < graph->nv; j++){
            printf("%d ",graph->adjm[i][j]);
        }
        printf("\n");
    }
}

void freegraph(Graph graph){
    for(int i = 0; i < graph->nv; i++){
        free(graph->adjm[i]);
    }
    free(graph->adjm);
    free(graph);
}

int main(){
    int nv = 4;
    Graph graph = createGraph(nv);
    addEdge(graph,0,1);
    addEdge(graph,2,1);
    addEdge(graph,3,3);
    printGraph(graph);
    freegraph(graph);
    return 0;
}
