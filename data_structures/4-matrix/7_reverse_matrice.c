#include <stdio.h>

void reverseRows(int matrix[][3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns / 2; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i][columns - j - 1];
			matrix[i][columns - j - 1] = temp;
		}
	}
}

void printMatrix(int matrix[][3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
}

int main()
{
	int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	printf("Original Matrix:\n");
	printMatrix(matrix, 3, 3);

	reverseRows(matrix, 3, 3);

	printf("Reversed Matrix:\n");
	printMatrix(matrix, 3, 3);

	return 0;
}
