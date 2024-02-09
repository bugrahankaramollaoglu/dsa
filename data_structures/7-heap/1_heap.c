/* heapler bir çeşit binary-treedir.
her node bir değer taşır.
ağaçta en küçük değeri en yukarıdaki nodelar taşır
yani hiçbir parent node, çatallandığı nodelardan daha yüksek bir değer
taşıyamaz, daha yüksek değeri her zaman aşağıdaki nodelar taşır. bu klasik
heap'tir, bir de bunun tersi vardır */

/* iki çeşit heap vardır
	1) min-heap: en düşük değer en yukarıdadır
	2) max-heap: en büyük değer en yukarıdadır */

/* heapler structlarla ya da arraylerle kullanılabilir */

/* Parent-Child Relationship: i. indisteki bir parent node'unun
right-child'ının indisi 2i+2, left-child'ının indisi 2i+1'dir. */
