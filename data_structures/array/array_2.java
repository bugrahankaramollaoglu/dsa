/* find the maximum elem in array */

class array_2 {
	public static void main(String[] args) {
		int[] numbers = { 30, 511, 2, -24, 400, 240 };
		int max = numbers[0];
		for (int i = 1; i < numbers.length; i++) {
			if (numbers[i] > max) {
				max = numbers[i];
			}
		}
		System.out.println(max);
	}
}
