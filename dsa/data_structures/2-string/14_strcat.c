#include <stdio.h>

/* why the segfault? */

void ft_strcat(char *a, char *b)
{
	int m = strlen(a);
	int n = strlen(b);
	int i;
	for (i = 0; i <= n; i++)
		a[m + i] = b[i];
}

int main()
{
	char *str1 = "Geeks ";
	char *str2 = "Quiz";
	ft_strcat(str1, str2);
	printf("%s ", str1);
	return 0;
}

/* çünkü *str1 dedin. str1[] dersen düzeliyor. */
