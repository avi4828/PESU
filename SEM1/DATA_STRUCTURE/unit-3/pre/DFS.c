#include <stdio.h>

#define MAX 10   // maximum number of vertices

int visited[MAX];  // visited array

// Recursive DFS function
void dfs(int graph[MAX][MAX], int n, int start) {
    visited[start] = 1;               // mark current vertex as visited
    printf("%d ", start + 1);         // print vertex in 1-based form

    // Explore neighbors
    for (int v = 0; v < n; v++) {
        if (graph[start][v] == 1 && !visited[v]) {
            dfs(graph, n, v);
        }
    }
}

int main() {
    int n;
    int graph[MAX][MAX];
    int start;

    // Input number of vertices
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Input adjacency matrix
    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Input starting vertex (1-based)
    printf("Enter starting vertex (1 to %d): ", n);
    scanf("%d", &start);

    // Convert to 0-based index
    start = start - 1;

    // Initialize visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("DFS Traversal:\n");
    dfs(graph, n, start);

    return 0;
}
