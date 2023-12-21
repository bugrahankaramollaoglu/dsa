#include <stdio.h>
#include <stdlib.h>

/* bubble sort bir düzensiz listede
iki adet döngü çalıştırır, n2 kadar tarar.
önce 1. ve 2. elemana bakar, eğer soldaki sağdakinden büyükse swap eder
sonra 2. ve 3. elemana, 3-4, 4-5 ... diye gider.
https://www.google.com/search?q=bubble+sort+gif&client=ubuntu-sn&hs=1no&channel=fs&tbm=isch&source=lnms&sa=X&ved=2ahUKEwjg7K-EmsuAAxVTQPEDHXzjB-8Q_AUoAXoECAMQAw&biw=1216&bih=593&dpr=1.58#imgrc=J6TFfhkn5U8fsM
sonra en başa döner vs. */

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {64, 34, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);

	printf("Sorted array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
