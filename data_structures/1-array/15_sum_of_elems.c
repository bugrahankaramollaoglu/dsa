#include <stdio.h>

// sum of elements of an array

int fun(int ar[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += ar[i];
	}
	return sum;
}
