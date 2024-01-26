#include <stdio.h>

// print an array

void print_arr(int ar[], int size) {
	for (int i = 0; i < size; i++) {
		printf("[%d]", ar[i]);
	}
}
