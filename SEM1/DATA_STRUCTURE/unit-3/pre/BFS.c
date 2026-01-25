#include <stdio.h>

#define MAX 10

int visited[MAX];

/* BFS function */
void bfs(int graph[MAX][MAX], int n, int start) {
    int queue[MAX];
    int front = 0, rear = 0;

    // Mark start as visited and enqueue
    visited[start] = 1;
    queue[rear++] = start;

    printf("BFS Traversal: ");

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        // Visit all adjacent vertices
        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

/* Main function */
int main() {
    int graph[MAX][MAX];
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // Initialize visited array
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    bfs(graph, n, start);

    return 0;
}
