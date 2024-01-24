#include <stdio.h>

/* arrayde belirli bir eleman arama */

void searchArray(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			printf("%d. indiste bulundu\n", i);
			return;
		}
	}
	printf("basaramadık abi\n");
}

int main()
{
	int ar[] = {10, 20, 30, 40, 50};
	int size = 5, key = 300;
	searchArray(ar, size, key);
}
