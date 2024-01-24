/* reverse an array */

class array_3 {
	public static int[] rev(int[] ar) {
		int len = ar.length;
		int temp;
		for (int i = 0; i < ar.length / 2; i++) {
			temp = ar[i];
			ar[i] = ar[len - 1];
			ar[len - 1] = temp;
			len--;
		}
		return ar;
	}

	public static void main(String[] args) {
		int[] nums = { 1, 3, 5, 7, 9 };
		nums = rev(nums);
		for (int elem : nums) {
			System.err.print(elem + ", ");
		}
	}
}
