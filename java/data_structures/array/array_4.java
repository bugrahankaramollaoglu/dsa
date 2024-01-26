import java.util.Arrays;

class array_4 {
	public static void printArr(int[] arr) {
		for (int elem : arr) {
			System.out.print(elem + " ");
		}
	}

	public static void main(String[] args) {
		int[] arr_1 = { 10, 20, 30, 4 };
		int[] arr_2 = Arrays.copyOf(arr_1, arr_1.length);
		printArr(arr_2);
	}
}
