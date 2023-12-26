/* en basit veri tipi arraylerdir.
aynı tipte verilerden oluşan contiguous hafıza bloklarıdır.
bu bloklar ardışık olduğu için herhangi bir elemana
ulaşmak constant zaman alır. 0’dan n-1’e kadar indis alır her eleman.
c’de bir arraye ayrılan yer sonradan değiştirilemez. büyültülemez çünkü
hafızada bir sonraki memory bloğunun boş olup olmadığını bilemeyiz.
küçültülemez çünkü array tanımlandığında statik olarak yer ayrılır ve
sadece derleyici derleme zamanında bu yeri yok edebilir.

// ###################################################################

// arrayler ilklendirilmezse içlerine random (garbage) değerler atanır:
int arr[5];			 // [943833465][32767][100][0][4096]
int arr[5] = {};	 // [0][0][0][0][0]
int arr[5] = {1, 2}; // [1][2][0][0][0]

// bir aralığa da değer verebilirsin
// böylece ilk 21 elemanı 10'a, kalan 79 elemanı 20'ye eşitlersin
int arr[101] = {[0 ... 20] = 10, [21 ... 100] = 20};

// eğer deklare ederken boyut belirtmezsen ilklendirmek zorundasın
int arr[];				  // hata verir
int arr[] = {10, 20, 30}; // 12byte ayırır

// ya da pointerla yaratip mallocla yer ayirabilirsin
int *arr = malloc(sizeof(int) * 5);
// ama pointerla tanımladığın bir arraye şöyle diyemezsin
int *ar = {10, 20, 30}; // hata verir

// çünkü bir pointera yalnızca bir adres atayabilirsin. ama şu hata vermez
int *ar = malloc(sizeof(int) * 3);
ar[0] = 10;
ar[1] = 20;
ar[2] = 30;

// ###################################################################

 c++ aksine c'de string veri tipi yoktur. onun yerine char dizileri kullanılır.
bir char dizisi yaratmanın 4 yolu:

char myStr[] = "bugra";

char myStr[5] = "bugra";

char *myStr = "bugra";

char *myStr = malloc(5);
myStr[0] = 'b';
myStr[1] = 'u';
myStr[2] = 'g';
myStr[3] = 'r';
myStr[4] = 'a';
myStr[5] = '\0';

// ###################################################################

 array türleri
	1) indexed array (klasik bildigimiz, 0'dan başlar)
		int arr[] = {10,20,30};
	2) multidimensional array (matrisler, 3D'ler vs.)
		int arr2[][] = {
			{10, 20},
			{30, 40},
			{50, 60}
		}

		ya da

		int arr3[2][3] = {1,2,3,4,5,6};

		int array2D[2][4] = {1,2,3,4,5,6,7,8};  // doğru
		int array2D[][4] = {1,2,3,4,5,6,7,8};  // doğru
		int array2D[2][] = {1,2,3,4,5,6,7,8}; // hatalı
		int array2D[][] = {1,2,3,4,5,6,7,8}; // hatalı

		bir 2D arrayin elemanlarını yazdırmak için:
		int arr[2][3] = {6, 5, 4, 3, 2, 1};
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
				printf("[%d]", arr[i][j]);
		}

	3) associative array (meela pythondaki dictionary'ler (key-value mantıgı))

// ###################################################################

 bir char arrayi yani stringin uzunlugu hesaplanırken null dahil edilmez
a = "bugra";
strlen(a) >> 5

// ###################################################################

 iki arrayin c için aynı kabul edilebilmesi için
sayıların aynı olması yeterlidir

int arr1[] = {1, 4, 6};
int arr2[] = {6, 1, 4};

 bunun sebebi c'deki memory efficiency denen olaydır.
c hafızadan kazanmak için birebir aynı olan arrayler için
2 ayrı kopya oluşturmaz

// ###################################################################

 array ve LinkedList farkı
	1) arrayler sıralı hafıza blogunda tutulurken
	listeler random yerlerde tutulur
	2) arraylerin boyutları fixtir, listelerin değişebilir
	3) arrayde hafıza derleme zamanında ayrılır, listede çalışmada
	4) arrayler daha az hafıza kaplar (next için pointer kullanmaz)
	5) array elemanlarına daha kolay erişilir (traverse gerekmez)
	6) ekleme çıkarma arrayde daha uzun sürer

 bir arrayin tipi
	1) void
	2) fonksiyon olamaz
	ama void pointer olabilir

void arr2[20];				   // yanlış
void *arr[20];				   // dogru
int arr3[] = {fun1(), fun2()}; // yanlış

// ###################################################################

 yeni version c ve c++'ta user-define değişkenler
array boyutu olarak atanabilir

int x = 5;
int arr2[x]; // as of 2000s, valid

// ###################################################################
 */
