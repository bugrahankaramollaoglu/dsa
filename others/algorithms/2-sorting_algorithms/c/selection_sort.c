#include <stdio.h>

/* This implementation uses two nested loops to
find the smallest element in the array and swap
it with the first unsorted element. The outer loop
runs from 0 to n-1, and the inner loop runs from
i+1 to n, where i is the current iteration of the
outer loop. This is because in each iteration of
the outer loop, we assume that the first i elements
are already sorted, so we only need to look at the
remaining unsorted elements in the array. */

// Function to swap two integers
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to perform selection sort on an array
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}
		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

// Driver program to test the implementation
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		printf("[%d] ", arr[i]);
	}
	printf("\n");

	return 0;
}
