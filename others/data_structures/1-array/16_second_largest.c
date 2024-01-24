#include <limits.h>
#include <stdio.h>

// return the 2nd largest element in an array

int fun(int arr[], int n)
{
	int largest = INT_MIN, second = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > largest)
		{
			second = largest;
			largest = arr[i];
		}
		else if (arr[i] > second && arr[i] != largest)
			second = arr[i];
	}
	return second;
}

int main()
{
	int ar[] = {26, 20, 18, 2, 4, 3};
	printf("%d\n", fun(ar, 6));
}
