#include <stdio.h>

/* how to swap two strings? (for real)

iki stringi swap etmek istiyosan ya temp ile ya da adreslerle oynamalısın. mesela */

void swap(char *str1, char *str2)
{
	char *temp = str1;
	str1 = str2;
	str2 = temp;
}

int main()
{
	char s1[] = "bugra";
	char s2[] = "kara";
	swap(s1, s2);
	puts(s1); // bugra
	puts(s2); // kara
}

/* gördügünüz gibi, basaramadi. sebebi ise swap(s1,s2) deki s1 ve s2 asıl
stringlerin kendisi değil, kopyaları. yani swap islemi oluyor, fakat
s1 ve s2yi yazdirmaya kalkınca değişmemiş olan orijinalleri yazdırılıyor.
bir stringi gerçekten swap etmek istiyosan 2 şey yapabilirsin
	1) char *str + & kullanarak

	void swap(char **str1_pointer, char **str2_pointer)
	{
		char *temp = *str1_pointer;
		*str1_pointer = *str2_pointer;
		*str2_pointer = temp;
	}

	int main()
	{
		char *s1 = "bugra"; // wouldn't work with char s1[]
		char *s2 = "kara";  // wouldn't work with char s2[]
		swap(&s1, &s2);
		puts(s1); >>> kara
		puts(s2); >>> bugra
	}

	2) strcpy() kullanarak

	void swap(char *str1, char *str2)
	{
		char *temp = malloc(strlen(str1) + 1);
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
		free(temp);
	}

	int main()
	{
		char s1[10] = "bugra";
		char s2[10] = "kara";
		swap(s1, s2);
		puts(s1); >>> kara
		puts(s2); >>> bugra
	}
*/
