#include <stdio.h>
#include <stdlib.h>

/* matriste arama yapma */

int is_in_matrix(int arr[2][3], int satir, int sütun, int key)
{
	for (int i = 0; i < satir; i++)
	{
		for (int j = 0; j < sütun; j++)
		{
			if (arr[i][j] == key)
				return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int result = is_in_matrix(arr, 2, 3, 20);
	printf("%d\n", result);
}
