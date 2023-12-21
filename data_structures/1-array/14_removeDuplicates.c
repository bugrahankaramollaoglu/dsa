#include <stdio.h>

// remove duplicates

void print_arr(int ar[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("[%d]", ar[i]);
	}
}

void removeDuplicates(int ar[], int size)
{
	int ar2[size];

}

int main()
{
	int a[] = {1, 2, 3, 2, 4, 5, 1, 3, 6, 7};
	removeDuplicates(a, 6);
	print_arr(a, 6);
}
