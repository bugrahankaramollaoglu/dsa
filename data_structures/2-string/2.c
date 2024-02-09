/* C dilinde stringler char dizileri olarak karşımıza çıkar.
fakat normal char dizilerinden farklı olarak sonlarında gizli bir \0
bulundururlar. iki şekilde deklare edilebilirler */

char *way_one = "1234";
char way_two[] = "1234";

/* yukarıdaki iki yol aynı şeyi yapar gibi görünse de aslında aralarında nüans vardır.  */

// read only string in data segment
char *str = "abc";
/* dediğin zaman bu “bugra” dizisi paylaşımlı read-only bir hafıza
blogunda tutuluyor (genelde data segmentinde). pointer str (char *str)
ise read-write bir hafıza blogunda tutuluyor. str’yi daha sonra başka
bir şeyi gösterecek şekilde modifiye edebilirsin ama str’nin değerini
değiştiremezsin. dolayısıyla `**char *str = “asdasdasd”**` şeklinde bir
ifadeyi yalnızca stringi daha sonrasında değiştirmeyeceğimizden eminsek kullanmalıyız. */

int main()
{
	// dynamically allocated string in heap segment
	char *str;
	str = malloc(sizeof(char) * 3 + 1);

	*(str + 0) = 'a';
	*(str + 1) = 'b';
	*(str + 2) = 'c';
	*(str + 3) = '\0';

	printf("%s\n", str); // abc
}

/* char *str = “abc” demek ile char *str yaratıp, yer
ayırıp daha sonra indis indis atama arasında fark vardır.
bu farklardan biri stringi değiştirmeye çalıştığımızda karşımıza çıkar:  */

/* mesela

int main()
{
	char *str = "bugra";
	*(str + 3) = 'R';
	printf("%s\n", str); >>> SEGMENTATION
}

bunun sebebi *(str + 3)’ün read-only olması, değiştirilememesi.
ama eğer şöyle deseydik:

int main()
{
	char str[] = "bugra";
	*(str + 3) = 'R';
	printf("%s\n", str); >>> bugRa
}

bu çalışırdı çünkü str’yi böyle deklare ettiğin zaman writable heap
segmentinde yer ayrılıyor ve modifiye edilebiliyor. ama eğer tek tek
atayacaksan şu da çalışırdı:

int main()
{
	char *str;
	str = malloc(sizeof(char) * 4);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0'; // şuan str = abc

	str[2] = 'z';  // bc str is modifiable

	printf("%s\n", str); >>> abz
} */

/* iki türlü de dogrudur
char a[] = "bugra";
char a[] = {'b', 'u', 'g', 'r', 'a', '\0'}; */
