/* stackler veri yapılarından bir türdür. LIFO mantığıyla çalışır yani Last-In-First-Out.
bu şu demektir: bir stack’te sadece sondan eleman ekleyip çıkarabilirsin.
buraya top of the stack denir. genelde bulaşık yığını örneği verilir. yani
ortadan bir şey alıp ekleyemezsin. sadece son eklediğini çıkartıp yeni bir şey koyabilirsin. */

/* stackler 2 şekilde uygulanabilir

	1) arraylerle: normalde bir arrayde istediğin konumda
	ekleme ve çıkarma yapabilirsin ama stack olarak kullanmak
	istiyosak sadece sondan ekleyip çıkarmalıyız. aslında bir
	stacki stack yapan şey onu kullanma biçimimiz, yoksa kendi
	başına Stack veri tipi diye bir şey yok. bir stacki array
	olarak tanımlayacaksan arrayi ve top’u global tanımlaman
	en mantıklısı ki daha sonra her fonksiyonda tekrar
	tekrar yaratmak zorunda kalmayasın.

	int stack[SIZE];
	int top = -1;

	şeklinde ifade edilir

	2) linked listlerle: her node stackin bir elemanını temsil eder.

	struct Node {
		int data;
		struct Node* next;
	};

	şeklinde ifade edilir. */
