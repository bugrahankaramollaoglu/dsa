#include <stdio.h>

/* arr[i] ile i[arr] aynı şeydir. çünkü ikisi de aynı anlama gelir: *(arr+i)   */

int main()
{
	char arr[] = "bugrahan";
	printf("%c", arr[2]);	  // g
	printf("%c", *(arr + 2)); // g
}
