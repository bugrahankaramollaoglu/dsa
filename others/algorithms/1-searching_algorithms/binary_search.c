#include <stdio.h>

/* Binary Search is defined as a searching algorithm
used in a sorted array by repeatedly dividing the
search interval in half. The idea of binary search
is to use the information that the array is sorted
and reduce the time complexity to O(log N).  */

/* to apply binary search,
	> the array must be sorted
	> Access to any element of the data
	structure takes constant time. */

/* linear searchten katbekat daha hızlı */

int binarySearchIteratif(int arr[], int left, int right, int key)
{
	while (left <= right)
	{
		int median = left + (right - left) / 2;

		// Check if x is present at mid
		if (arr[median] == key)
			return median;

		// If x greater, ignore left half
		if (arr[median] < key)
			left = median + 1;

		// If x is smaller, ignore right half
		else
			right = median - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int binarySearchRecursif(int ar[], int left, int right, int key)
{
	if (right >= left)
	{
		int median = left + (right - left) / 2;
		if (ar[median] == key)
			return median;
		if (ar[median] > key)
			return binarySearchRecursif(ar, left, median - 1, key);
		return binarySearchRecursif(ar, median + 1, right, key);
	}
	return -1;
}

int main(void)
{
	int arr[] = {50, 2, 3, 4, 10, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearchRecursif(arr, 0, n - 1, x);
	if (result == -1)
		printf("Element is not present in array.\n");
	else
		printf("Element is present at index %d.\n", result);
}

/* medyan hesaplarken neden
int median = left + (right - left) / 2;
diyoruz da direkt (left+right)/2 demiyoruz?
bunun sebebi right+left'in toplamının INT_MAX'ı aşma
ihtimali. o yüzden böyle hesapliyoruz. */
