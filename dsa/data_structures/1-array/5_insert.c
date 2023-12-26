#include <stdio.h>

/* belirli bir indiste belirli bir eleman ekleme */

void print_array(int ar[], int size)
{
	for (int i = 0; i < size; i++)
		printf("[%d]", ar[i]);
}

void insertElement(int arr[], int size, int key, int pos)
{
	int i = 0;
	int arr2[size + 1];
	for (i = 0; i < pos; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[i] = key;
	int i2 = i;
	for (++i; i <= size; i++)
	{
		arr2[i] = arr[i2];
		i2++;
	}
	print_array(arr2, size + 1);
}

int main()
{
	int arr[] = {2, 6, 5, 20, 40, 60, 70, 80};
	int size = sizeof(arr) / sizeof(arr[0]);
	insertElement(arr, size, 100, 3);
}
