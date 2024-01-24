/* linked list, türkçede bağlı listeler, birbirine pointerlarla
bağlı birden çok elemandan oluşan bir tür veri yapılarıdır.
hafızada random yerlerde tutulan birbirine bağlı node’lardan
(düğümlerden) oluşurlar. en klasik bağlı liste türü olan SLL örneğinde,
her bir node bünyesinde iki şey barındırır
	1) o nodeda tutulan veri
	2) bir sonraki nodeun adresini tutan pointer */

/* son node kendisinden sonra eleman olmadığından adres olarak NULL tutar.
(bunlar singly-linked list için geçerlidir). hafızada random olarak
saklandıklarından bir elemana direkt ulaşamıyosun. head’den başlayarak
(ilk node) aradığın elemandan önceki bütün elemanları tek tek traverse
etmen gerekiyor. */

/* bağlı listelerde her elemanı baştan başlayarak taramak zorunda
oldugundan dolayı binary search (constantly cutting in halves) yapılamaz. */

/* linked list türleri

	1) SLL (singly-linked-list) : iki şeyden oluşur
		* data: bu data(lar) birden fazla tipte ve sayıda olabilir
		* pointer to the next node: bundan bir tane olabilir sadece
	2) DLL (doubly-linked-list) : hem bir sonraki hem önceki nodea pointer tutar
	3) CLL (circular-linked-list) : son node NULL'u değil ilk nodeu gösterir */
