#include <stdlib.h>
#include <stdio.h>

/* radixin genel çalışma mantığı rakam rakam kontrol etmesidir
mesela {35, 125, 100, 3987, 19} şeklinde bir array olsun.
radix sort her zaman en büyük sayının basamak sayisi kadar çalışır
yani burada dört kere çalışacak. sırasıyla (1-10**n) tabanlı basamaklara
bakacağız yani sadece birler onlar yüzler binlere göre sıralayacağız.
eğer basamak yoksa 0 kabul ediyoruz
eğer basamaklar aynıysa bir önceki listedeki önceliklerine göre

	1) birlere göre
		{100, 35, 125, 3987, 19}
		artık listemizin son hali bu, buna göre sıralayacağız sonrakileri
	2) onlara göre
		{100, 19, 125, 35, 3987}
	3) yüzlere göre
		{(0)19, (0)35, 100, 125, 3987}
	4) binlere göre
		{(00)19, (00)35, (0)100, (0)125, 3987}
	5) ve 19, 35, 100, 125, 3987 şeklinde sıralanmış oluyor  */

// Get the maximum value in an array
int getMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

// Sort an array of integers using radix sort
void radixSort(int arr[], int n)
{
	int max = getMax(arr, n);
	for (int exp = 1; max / exp > 0; exp *= 10)
	{
		int output[n], count[10] = {0};
		// Count the number of times each digit appears
		for (int i = 0; i < n; i++)
		{
			count[(arr[i] / exp) % 10]++;
		}
		// Calculate the starting index for each digit
		for (int i = 1; i < 10; i++)
		{
			count[i] += count[i - 1];
		}
		// Build the output array
		for (int i = n - 1; i >= 0; i--)
		{
			output[count[(arr[i] / exp) % 10] - 1] = arr[i];
			count[(arr[i] / exp) % 10]--;
		}
		// Copy the output array back to the original array
		for (int i = 0; i < n; i++)
		{
			arr[i] = output[i];
		}
	}
}

// Driver program to test the implementation
int main()
{
	int arr[] = {121, 432, 35, 23, 1, 45, 15};
	int n = sizeof(arr) / sizeof(arr[0]);
	radixSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("[%d] ", arr[i]);
	}
	printf("\n");
	return 0;
}
