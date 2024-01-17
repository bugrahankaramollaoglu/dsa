#include <stdio.h>

/* reverse string */

void reverse_str(char *str)
{
	int i = 0;
	int len = strlen(str);
	int len2 = strlen(str) - 1;
	while (len)
	{
		printf("%c", str[len2]);
		len--;
		len2--;
	}
}

// reverse_string in place
char *reverse_inPlace(char *str)
{
	int temp;
	int len = strlen(str) - 1;
	for (int i = 0; i < strlen(str) / 2; i++)
	{
		temp = str[len];
		str[len] = str[i];
		str[i] = temp;
		len--;
	}
	return str;
}
