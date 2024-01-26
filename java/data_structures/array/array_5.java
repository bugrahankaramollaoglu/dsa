/* some built-in methods used with arrays */

import java.lang.reflect.Array;
import java.util.Arrays;

class array_5 {
	public static void main(String[] args) {
		int[] arr = { 10, 3, 56 };
		int[] arr2 = { 10, 3, 56 };

		Arrays.equals(arr, arr2);

		Arrays.binarySearch(arr, 20);

		Arrays.toString(arr);

	}
}
