#include <stdio.h>

/* sonuç ne olur */

int main()
{
	char s1[] = "bugra";
	char s2[] = {'b', 'u', 'g', 'r', 'a'};
	int s1_len = sizeof(s1) / sizeof(s1[0]);
	int s2_len = sizeof(s2) / sizeof(s2[0]);
	printf("s1:%d\ns2:%d\n", s1_len, s2_len);
}

/* 6 ve 5. çünkü C "böyle" tanımladığın stringlerin sonuna otomatik olarak null koyar */
