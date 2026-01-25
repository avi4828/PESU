// Heap (Min-Heap & Max-Heap)
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct myHeap {
    int data[MAX_SIZE];
    int size;
} *Heap;

// Initialize heap
void initHeap(Heap h) {
    h->size = 0;
}

// Swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Parent index
int parent(int i) {
    return (i - 1) / 2;
}

// Left child index
int leftChild(int i) {
    return 2 * i + 1;
}

// Right child index
int rightChild(int i) {
    return 2 * i + 2;
}

// Heapify up (Max-Heap)
void heapifyUpMax(Heap h, int i) {
    while (i > 0 && h->data[parent(i)] < h->data[i]) {
        swap(&h->data[parent(i)], &h->data[i]);
        i = parent(i);
    }
}

// Heapify down (Max-Heap)
void heapifyDownMax(Heap h, int i) {
    int maxIdx = i;
    int l = leftChild(i);
    int r = rightChild(i);

    if (l < h->size && h->data[l] > h->data[maxIdx])
        maxIdx = l;
    if (r < h->size && h->data[r] > h->data[maxIdx])
        maxIdx = r;

    if (i != maxIdx) {
        swap(&h->data[i], &h->data[maxIdx]);
        heapifyDownMax(h, maxIdx);
    }
}

// Heapify up (Min-Heap)
void heapifyUpMin(Heap h, int i) {
    while (i > 0 && h->data[parent(i)] > h->data[i]) {
        swap(&h->data[parent(i)], &h->data[i]);
        i = parent(i);
    }
}

// Heapify down (Min-Heap)
void heapifyDownMin(Heap h, int i) {
    int minIdx = i;
    int l = leftChild(i);
    int r = rightChild(i);

    if (l < h->size && h->data[l] < h->data[minIdx])
        minIdx = l;
    if (r < h->size && h->data[r] < h->data[minIdx])
        minIdx = r;

    if (i != minIdx) {
        swap(&h->data[i], &h->data[minIdx]);
        heapifyDownMin(h, minIdx);
    }
}

// Insert into Max-Heap
void insertMax(Heap h, int key) {
    if (h->size >= MAX_SIZE) {
        printf("Heap overflow!\n");
        return;
    }
    h->data[h->size] = key;
    heapifyUpMax(h, h->size);
    h->size++;
}

// Insert into Min-Heap
void insertMin(Heap h, int key) {
    if (h->size >= MAX_SIZE) {
        printf("Heap overflow!\n");
        return;
    }
    h->data[h->size] = key;
    heapifyUpMin(h, h->size);
    h->size++;
}

// Extract Max
int extractMax(Heap h) {
    if (h->size <= 0) {
        printf("Heap underflow!\n");
        return -1;
    }
    int max = h->data[0];
    h->data[0] = h->data[h->size - 1];
    h->size--;
    heapifyDownMax(h, 0);
    return max;
}

// Extract Min
int extractMin(Heap h) {
    if (h->size <= 0) {
        printf("Heap underflow!\n");
        return -1;
    }
    int min = h->data[0];
    h->data[0] = h->data[h->size - 1];
    h->size--;
    heapifyDownMin(h, 0);
    return min;
}

// Get Max
int getMax(Heap h) {
    if (h->size <= 0) {
        printf("Heap is empty!\n");
        return -1;
    }
    return h->data[0];
}

// Get Min
int getMin(Heap h) {
    if (h->size <= 0) {
        printf("Heap is empty!\n");
        return -1;
    }
    return h->data[0];
}

// Display heap
void displayHeap(Heap h) {
    printf("Heap: ");
    for (int i = 0; i < h->size; i++) {
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

// Main function
int main() {
    Heap maxHeap = (Heap)malloc(sizeof(struct myHeap));
    Heap minHeap = (Heap)malloc(sizeof(struct myHeap));

    initHeap(maxHeap);
    initHeap(minHeap);

    // Max-Heap
    printf("=== Max-Heap Operations ===\n");
    insertMax(maxHeap, 10);
    insertMax(maxHeap, 20);
    insertMax(maxHeap, 15);
    insertMax(maxHeap, 30);
    insertMax(maxHeap, 40);

    displayHeap(maxHeap);
    printf("Maximum element: %d\n", getMax(maxHeap));
    printf("Extract max: %d\n", extractMax(maxHeap));
    displayHeap(maxHeap);

    // Min-Heap
    printf("\n=== Min-Heap Operations ===\n");
    insertMin(minHeap, 10);
    insertMin(minHeap, 20);
    insertMin(minHeap, 15);
    insertMin(minHeap, 30);
    insertMin(minHeap, 40);

    displayHeap(minHeap);
    printf("Minimum element: %d\n", getMin(minHeap));
    printf("Extract min: %d\n", extractMin(minHeap));
    displayHeap(minHeap);

    free(maxHeap);
    free(minHeap);

    return 0;
}