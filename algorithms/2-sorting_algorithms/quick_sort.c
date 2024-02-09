#include <stdio.h>
#include <stdlib.h>

/* The quickSort function sorts the array using the Quick Sort algorithm.
It starts by partitioning the array into two sub-arrays using a pivot
element. The elements smaller than the pivot are placed to the left of
the pivot, and the elements greater than the pivot are placed to the
right of the pivot. This partitioning process is repeated recursively
on each of the sub-arrays until the entire array is sorted. The partition
function is used to partition the array. The swap function is used to
swap two integers. The main function is used to test the implementation
by sorting an example array of integers and printing the result to
the console. */

// Function to swap two integers
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return i + 1;
}

// Function to perform quick sort on an array
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivotIndex = partition(arr, low, high);

		quickSort(arr, low, pivotIndex - 1);
		quickSort(arr, pivotIndex + 1, high);
	}
}

// Driver program to test the implementation
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("[%d] ", arr[i]);
	}
	printf("\n");

	return 0;
}
