#include <stdio.h>

void displayHeap(int a[], int n) {
    int i;
    printf("Heap Tree (Level Order): ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void heapifyUp(int a[], int i) {
    int p, t;
    while (i > 0) {
        p = (i - 1) / 2;
        if (a[p] >= a[i]) break;
        t = a[p]; a[p] = a[i]; a[i] = t;
        i = p;
    }
}

void heapifyDown(int a[], int n, int i) {
    int l, r, largest, t;
    while (1) {
        l = 2*i + 1;
        r = 2*i + 2;
        largest = i;
        if (l < n && a[l] > a[largest]) largest = l;
        if (r < n && a[r] > a[largest]) largest = r;
        if (largest == i) break;
        t = a[i]; a[i] = a[largest]; a[largest] = t;
        i = largest;
    }
}

int main() {
    int a[50] = {20, 10, 8, 6, 1, 5};
    int n = 6, x;

    printf("Initial Heap:\n");
    displayHeap(a, n);

    printf("Insert element: ");
    scanf("%d", &x);
    a[n++] = x;
    heapifyUp(a, n - 1);
    displayHeap(a, n);

    printf("Delete root\n");
    a[0] = a[n - 1];
    n--;
    heapifyDown(a, n, 0);
    displayHeap(a, n);

    return 0;
}