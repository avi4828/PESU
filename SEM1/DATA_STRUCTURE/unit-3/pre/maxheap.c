#include <stdio.h>

// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Upheapify (Bottom → Top)
void upheapify(int heap[], int index) {
    int parent = (index - 1) / 2;

    while (index > 0 && heap[parent] < heap[index]) {
        swap(&heap[parent], &heap[index]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

// Downheapify (Top → Bottom)
void downheapify(int heap[], int size, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && heap[left] > heap[largest])
        largest = left;

    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != index) {
        swap(&heap[index], &heap[largest]);
        downheapify(heap, size, largest);
    }
}

// Insert using upheapify
void insert(int heap[], int *size, int value) {
    heap[*size] = value;
    upheapify(heap, *size);
    (*size)++;
}

// Delete max using downheapify
int deleteMax(int heap[], int *size) {
    int max = heap[0];
    heap[0] = heap[*size - 1];
    (*size)--;
    downheapify(heap, *size, 0);
    return max;
}

// Print heap
void printHeap(int heap[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int main() {
    int heap[100];
    int size = 0;

    insert(heap, &size, 10);
    insert(heap, &size, 20);
    insert(heap, &size, 15);
    insert(heap, &size, 40);
    insert(heap, &size, 30);

    printf("Heap after insertions: ");
    printHeap(heap, size);

    printf("Deleted max: %d\n", deleteMax(heap, &size));

    printf("Heap after deletion: ");
    printHeap(heap, size);

    return 0;
}
