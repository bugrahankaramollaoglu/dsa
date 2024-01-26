/* declaration of an array in java
 * data_type[] array_name;
 * array_name = new data_type[size];
 *
 * mesela: int[] nums = new int[5];
 * int len = nums.length;
 *
 *
 */

class array_1 {
	public static void main(String[] args) {
		// data_type[] array_name = new data_type[size];
		int[] nums = new int[5];
		// nums = {10,20,30,40,50}; -> bu şekilde direkt atayamıyoruz
		// declarationda olsaydı atayabilirdik:
		// int[] nums = {10, 20, 30};

		// ya şöyle teker teker:
		nums[0] = 10;
		nums[1] = 20; // ...

		// ya da loop ile atayabiliyoruz
		for (int i = 0; i < nums.length; i++) {
			nums[i] = i * 10 + 10;
		}

		// traverse
		for (int elem : nums) {
			System.err.print(elem + " ");
		}
	}
}
