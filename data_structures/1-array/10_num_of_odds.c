#include <stdio.h>

// find number of odds in an array

int fun(int ar[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (ar[i] % 2 == 1)
			sum++;
	}
	return sum;
}
