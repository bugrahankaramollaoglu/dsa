#include <stdio.h>

/* It is similar to binary search where we divide
the array into two parts but in this algorithm,
we divide the given array into three parts and
determine which has the key (searched element).
We can divide the array into three parts by taking
mid1 and mid2 */

int ternarySearchIteratif(int l, int r, int key, int ar[])

{
	while (r >= l)
	{

		// Find the mid1 and mid2
		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;

		// Check if key is present at any mid
		if (ar[mid1] == key)
		{
			return mid1;
		}
		if (ar[mid2] == key)
		{
			return mid2;
		}

		// Since key is not present at mid,
		// check in which region it is present
		// then repeat the Search operation
		// in that region

		if (key < ar[mid1])
		{

			// The key lies in between l and mid1
			r = mid1 - 1;
		}
		else if (key > ar[mid2])
		{

			// The key lies in between mid2 and r
			l = mid2 + 1;
		}
		else
		{

			// The key lies in between mid1 and mid2
			l = mid1 + 1;
			r = mid2 - 1;
		}
	}

	// Key not found
	return -1;
}
