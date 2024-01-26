#include <stdio.h>

/* segmentation ulaşmaman gereken bir adrese
ulaşmaya çalıştığında ortaya çıkar. mesela
aşağıdaki program sorunsuz çalışacaktır:  */

char *myFun()
{
	char *str = "bugra"; // stored in memory as read-only
	return str;
}

int main()
{
	printf("%s\n", myFun()); // bugra
							 /* problemsiz çalışır çünkü myFun( ) str’yi returnledikten sonra str’nin değeri kaybolmaz. */
}

/* aynı şekilde şu da sorunsuz çalışır:  */
char *myFun()
{
	char *str;
	str = malloc(4);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	return str;
}

int main()
{
	printf("%s\n", myFun()); // abc
}

/* fakat aşağıdaki program segmentation fault verir.
bunun sebebi str’nin fonksiyonun stack frame’inde saklanmış olmasıdır.
dolayısıyla fonksiyon returnledikten sonra bu veri de kaybolur.
pointer kullanırsan kaybolmaz. ama static char str[] kullanırsan
bu kod da çalışacaktır çünkü static değişkenler hafızada özel olarak
saklanır ve değerlerinin kaybolmalarına müsaade edilmezler.*/
char *myFun()
{
	char str[] = "kara";
	// static char str[] = "kara" --> would work
	return str;
}

int main()
{
	printf("%s\n", myFun()); // SEGMENTATION
}
