#include <stdio.h>

// transposing a matrice means swappings its rows and columns as in

void printMatrice(int (*ar)[2], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int i2 = 0; i2 < column; i2++)
			printf("[%d]", ar[i][i2]);
		printf("\n");
	}
}

int main()
{
	int a[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int b[3][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			b[j][i] = a[i][j];
	}

	printMatrice(b, 3, 2); // {{10, 40}, {20, 50}, {30, 60}}
}
