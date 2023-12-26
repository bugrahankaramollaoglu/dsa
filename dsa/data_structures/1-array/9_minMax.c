#include <stdio.h>

/* find min and max of an array */

int find_min(int arr[], int size)
{
	int min = arr[0];
	int i = 1;
	while (i < size)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return min;
}

int find_max(int arr[], int size)
{
	int max = arr[0];
	int i = 1;
	while (i < size)
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	return max;
}

int main()
{
	int ar[] = {20, 6, 85, 185, 80, 52};
	printf("%d\n", find_min(ar, 6));
	printf("%d\n", find_max(ar, 6));
}
