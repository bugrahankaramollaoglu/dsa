#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* tıpkı binary search gibi jump search de sıralı arraylerde kullanılır
belirli bir adım atlaya atlaya kontrol eder. aradığı sayıdan daha büyük sayilara
geçince bir adım geriye gider ve oradan itibaren lineer search yapar. mesela bir
arrayimiz var: a = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150]
aradığımız sayı da 120 olsun. eleman sayisi (n = 15), atlanacak adim sayisi
da (m = 3) olsun. önce ar[0] sonra ar[3] sonra ar[6] ... diye aramaya başlar
10, 40, 70, 100, 130. burada 130 > 120 oldugundan bir adım geriye yani 100'e gider.
ve teker teker indisleri traverse eder. performansı lineerden iyi binaryden kötüdür.
atlanacak adım sayısı sqrt(size)'dır. sayıyı bulursan indeksini, bulamazsan -1 döndür. */

/* ALGO

	1) step hesapla
	2) ar[0]'dan başlayarak ar[x*step] kadar tara
	3) ar[x*step] >= key ise
	4) ar[(x-1)*step]'ten başlayarak teker teker tara

 */

/* a = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150]
	key = 120
	step = 3
*/

int lineer(int *ar, int size, int key, int indice)
{
	for (int i = indice; i < size; i++)
	{
		if (ar[i] == key)
			return i;
	}
	return -1;
}

int jump_search(int *ar, int size, int key)
{
	int step = sqrt(size);
	int i = 0;
	int x = 0;
	while (i < size)
	{
		if (ar[i] >= key)
		{
			i = (x - 1) * step;
			int ret = lineer(ar, size, key, i);
			printf("[%d] %d. indiste bulundu\n", key, i);
			return ret;
		}
		else
			x++;
		i = x * step;
	}
	printf("[%d] bulunamadi\n", key);
	return -1;
}

int main()
{
	int ar[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
	int a = jump_search(ar, 15, 502);
}
