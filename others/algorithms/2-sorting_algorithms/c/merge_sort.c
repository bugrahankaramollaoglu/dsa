#include <stdio.h>
#include <stdlib.h>

/* The mergeSort function sorts the array using the Merge Sort
algorithm. It starts by dividing the array into two halves,
sorting each half recursively using merge sort, and then merging
the sorted halves. The merge function is used to merge two sorted
sub-arrays of the array. The main function is used to test the
implementation by sorting an example array of integers and printing
the result to the console. */

// Function to merge two sub-arrays of arr[]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays
	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	// Merge the temp arrays back into arr[l..r]
	i = 0; // Initial index of first sub-array
	j = 0; // Initial index of second sub-array
	k = l; // Initial index of merged sub-array

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of L[], if there are any
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of R[], if there are any
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

// Function to perform merge sort on an array
void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

// Driver program to test the implementation
int main()
{
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, n - 1);

	printf("Sorted array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
