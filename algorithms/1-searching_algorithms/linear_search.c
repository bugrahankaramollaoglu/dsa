#include <stdio.h>

// SIMPLEST searching algorithm by logic

/* Linear Search is defined as a sequential search algorithm
that starts at one end and goes through each element of a list
until the desired element is found, otherwise the search
continues till the end of the data set. */

void linearSearchIteratif(int arr[], int size, int key)
{
	if (!size)
		return;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			printf("%d. indiste %d bulundu.\n", i, key);
			return;
		}
	}
	printf("[%d] arrayde bulunamadı.\n", key);
}

int linearSearchRecursif(int arr[], int size, int key)
{
	{
		// If the size of the array is zero, return -1
		if (!size)
			return -1;

		// Check if the element at the current index
		// is equal to the key
		if (arr[size - 1] == key)
		{
			// If equal, return the index
			return size - 1;
		}
		else
		{
			// If not equal, call the function again
			// with the size reduced by 1
			return linearSearchRecursif(arr, size - 1, key);
		}
	}
}

int main()
{
	int ar[] = {32, 30, 20, 25, 50, 590, 40};
	linearSearchIteratif(ar, 7, 200);
	printf("%d. arrayde bulundu\n", linearSearchRecursif(ar, 7, 200));
}
