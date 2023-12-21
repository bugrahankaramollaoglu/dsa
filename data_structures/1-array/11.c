#include <stdio.h>

/* printf(”%d”, arr[3]) ifadesindeki arr[n] esasında bir pointer operatörüdür.
bir arrayin tutuldugu hafıza blogunda baştan itibaren n * sizeof(arrayin_tipi) adet
hücreyi atlar ve o hafıza bloğundaki değeri yazdirir. mesela  */

int arr[] = {10, 20, 30, 40};

/* burada arr’in yani arr[0]’ın tutulduğu hafıza adresi 0x120500 olsun. bu durumda

arr[1] yani 20 - 0x120504,

arr[2] yani 30 - 0x120508,

arr[3] yani 40 - 0x120512 adresli hafızaları tutacaktır çünkü bir int 4 byte kaplar. */

int main()
{
	int arr[] = {10, 20, 30, 40};
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]); // 0x7ffcee250580 + 4
	printf("%p\n", &arr[2]); // 0x7ffcee250584 + 4
	printf("%p\n", &arr[3]); // 0x7ffcee250588 + 4
}
