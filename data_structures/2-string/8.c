#include <stdio.h>

/* scanf + string kullanımı: */

int main()
{
	char str[20];
	printf("enter a string:");
	scanf("%s", str);
	printf("your string: %s\n", str);
}

/* scanf()’ten str alırken & operatörüyle kullanırsan
hata verir çünkü scanf() iki şey alır, birincisi type
conversion (%d, %s vs.) ikincisi değişkenin adresi.
bir arrayin ismi zaten o arrayin ilk elemanının adresi
olduğu için bir daha & operatörü ile adresini almamıza gerek yoktur.
fakat aynı şeyi char string değil char ile yapsaydın & kullanman gerekirdi */

int main()
{
	char c;
	printf("enter:");
	scanf("%c", &c); // cannot say just c
	printf("c: %c\n", c);
}

/* yani eğer bu bir string olsaydı stringin ismi zaten
ilk elementinin adresini göstereceği için bir daha adres
alma operatörü olan &’a ihtiyaç duymayacaktık. */

/* scanf() ile boşluklu string alamazsın, ilk boşluğa kadar olan
kısmı alır sadece. bunun için   gets() ya da fgets() kullanabilirsin. */

