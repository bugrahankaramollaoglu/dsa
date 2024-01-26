#include <stdio.h>

// en çok tekrar eden sayıyı bul

int fun(int arr[], int size)
{
	int maxCount = 0;
	int mostFrequent = arr[0];
	int i, j;
	for (i = 0; i < size; i++)
	{
		int count = 1;
		for (j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count > maxCount)
		{
			maxCount = count;
			mostFrequent = arr[i];
		}
	}
	return mostFrequent;
}

int main()
{
	int arr[] = {1, 2, 2, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	int mostFreq = fun(arr, size);
	printf("The most frequent number in the array is: %d\n", mostFreq);
	return 0;
}
