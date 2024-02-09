#include <stdlib.h>
#include <stdio.h>

/* The insertionSort function sorts the array using the
Insertion Sort algorithm. It iterates over each element
in the array, starting from the second element, and inserts
it into its proper position in the sorted portion of the
array to its left. The main function is used to test the
implementation by sorting an example array of integers
and printing the result to the console. */

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

// Driver program to test the implementation
int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);

	printf("Sorted array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
