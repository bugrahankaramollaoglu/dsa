#include <stdio.h>

/* if you did not use pointer arithmetic and changed theoffset,
the name of any array normally points to the address of
its first element. mesela  */

char *str = "bugra";

/* diye bir string yarattın. artık bundan sonra derleyici nerede str
görürse onu b’nin pointer adresi olarak anlayacaktır, yazdırmaya
kalktığında da (printf("%s", str) null görene kadar yazdıracaktır (bugra).
mesela pointerlar yardımıyla karakter karakter yazdıralım */

int main()
{
	char str[] = "bugra";
	char *ptrStr = str;
	while (*ptrStr)
	{
		printf("%c", *ptrStr);
		ptrStr++; // pointer arithmetic
	}
	printf("\n");
}
