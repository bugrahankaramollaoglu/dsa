/* arraylerde bir elemana ulaşmak hızlıdır fakat
boyutlarının değiştirilememesi bir dezavantajdır.
o yüzden bir arraye yeni bir eleman eklemek istediğinde
yeni bir array yaratmalısın */

int main()
{
	int arr1[] = {10, 20, 30, 40};
	int eklenecek_sayi = 50;
	int size = sizeof(arr1) / sizeof(int);
	int arr2[size + 1];
	static int i = 0;
	for (i = 0; i < size; i++)
		arr2[i] = arr1[i];
	arr2[i] = eklenecek_sayi;
}
