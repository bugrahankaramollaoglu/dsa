#include <stdio.h>

/* "234" halindeki bir stringi int olan 234'e çevirmek için 3 fonksiyon var
	1) atoi()
	2) stoi() [atoinin c++ hali]
	3) sscanf() */

int ft_atoi(char *str)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int main()
{
	const char *str = "12345a6789";
	int x;
	sscanf(str, "%d", &x);
	printf("x is now integer: %d", x);
}
