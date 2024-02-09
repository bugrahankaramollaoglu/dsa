#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

/* her sayiyi kendisi kadar ms bekletip yazdiriyor.
bunu threadlerle yapiyor. müthiş. */

// Function to sleep for a given number of mseconds and then print the number
void *sleepAndPrint(void *num)
{
	int n = *((int *)num);
	usleep(n);
	printf("%d ", n);
	pthread_exit(NULL);
}

// Function to perform Sleep Sort on an array
void sleepSort(int arr[], int n)
{
	pthread_t threads[n];
	int i;

	// Create a thread for each element of the array
	for (i = 0; i < n; i++)
	{
		pthread_create(&threads[i], NULL, sleepAndPrint, (void *)&arr[i]);
	}

	// Wait for all threads to finish
	for (i = 0; i < n; i++)
	{
		pthread_join(threads[i], NULL);
	}
}

// Driver program to test the implementation
int main()
{
	int arr[] = {6, 325, 359, 39, 699, 67, 100};
	int n = sizeof(arr) / sizeof(arr[0]);

	sleepSort(arr, n);

	printf("\n");

	return 0;
}
