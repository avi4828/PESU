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

int deleteRoot(int a[], int n) {
    if (n <= 0) return n;
    a[0] = a[n - 1];
    n--;
    heapify(a, n, 0);
    return n;
}

int main() {
    int n, i, a[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter heap elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    n = deleteRoot(a, n);

    printf("Heap after deleting root: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}