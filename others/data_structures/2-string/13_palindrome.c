#include <stdio.h>

/* palindrome checker */

int main()
{
	char str[200];
	int a, len, flag = 0;

	printf("please enter a string: ");
	scanf("%s", str);
	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		printf(" %s is not a palindrome", str);
	else
		printf(" %s is a palindrome", str);
	return 0;
}
