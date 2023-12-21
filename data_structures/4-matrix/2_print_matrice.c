#include <stdio.h>
#include <stdlib.h>

/* bir matrisi yazdırma */

void printMatrice(int *ar[], int row, int column)
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
	int **myMat = malloc(2 * sizeof(int *));
	for (int i = 0; i < 2; i++)
	{
		myMat[i] = malloc(3 * sizeof(int));
	}
	myMat[0][0] = 10;
	myMat[0][1] = 20;
	myMat[0][2] = 30;
	myMat[1][0] = 60;
	myMat[1][1] = 50;
	myMat[1][2] = 40;
	printMatrice(myMat, 2, 3);
}
