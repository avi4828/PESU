#include <stdio.h>

void heapify(int a[], int n, int i) {
    int largest = i, l = 2*i + 1, r = 2*i + 2, t;
    if (l < n && a[l] > a[largest]) largest = l;
    if (r < n && a[r] > a[largest]) largest = r;
    if (largest != i) {
        t = a[i]; a[i] = a[largest]; a[largest] = t;
        heapify(a, n, largest);
    }
}

int main() {
    int n, i, a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    printf("Max Heap (Array Form): ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
