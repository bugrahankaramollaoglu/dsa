#include <stdio.h>
#include <stdlib.h>

// Define the maximum size of the heap
#define MAX_SIZE 100

// Structure to represent a Min-Heap
struct MinHeap
{
	int size;
	int array[MAX_SIZE];
};

// Function to swap two values
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to heapify the heap (rearrange to maintain the heap property)
void heapify(struct MinHeap *heap, int idx)
{
	int smallest = idx;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;

	if (left < heap->size && heap->array[left] < heap->array[smallest])
		smallest = left;

	if (right < heap->size && heap->array[right] < heap->array[smallest])
		smallest = right;

	if (smallest != idx)
	{
		swap(&heap->array[idx], &heap->array[smallest]);
		heapify(heap, smallest);
	}
}

// Function to create a new Min-Heap
struct MinHeap *createMinHeap()
{
	struct MinHeap *heap = (struct MinHeap *)malloc(sizeof(struct MinHeap));
	heap->size = 0;
	return heap;
}

// Function to insert an element into the Min-Heap
void insert(struct MinHeap *heap, int value)
{
	if (heap->size == MAX_SIZE)
	{
		printf("Heap is full!\n");
		return;
	}

	heap->size++;
	int idx = heap->size - 1;
	heap->array[idx] = value;

	while (idx != 0 && heap->array[(idx - 1) / 2] > heap->array[idx])
	{
		swap(&heap->array[(idx - 1) / 2], &heap->array[idx]);
		idx = (idx - 1) / 2;
	}
}

// Function to extract the minimum value from the Min-Heap
int extractMin(struct MinHeap *heap)
{
	if (heap->size <= 0)
		return -1;

	if (heap->size == 1)
	{
		heap->size--;
		return heap->array[0];
	}

	int root = heap->array[0];
	heap->array[0] = heap->array[heap->size - 1];
	heap->size--;
	heapify(heap, 0);

	return root;
}

void printHeap(struct MinHeap *heap)
{
	if (heap->size == 0)
	{
		printf("Heap is empty.\n");
		return;
	}

	printf("Heap elements: ");
	for (int i = 0; i < heap->size; i++)
	{
		printf("%d ", heap->array[i]);
	}
	printf("\n");
}

int main()
{
	struct MinHeap *heap = createMinHeap();

	insert(heap, 10);
	insert(heap, 5);
	insert(heap, 20);
	insert(heap, 3);
	insert(heap, 8);

	printHeap(heap);

	printf("Extracted min: %d\n", extractMin(heap)); // Output: 3

	printHeap(heap);

	free(heap);

	return 0;
}
