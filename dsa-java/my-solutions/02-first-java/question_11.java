// To find Armstrong Number between two given number.

import java.util.ArrayList;
import java.util.Scanner;

class question_11 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter two nums: ");
		int nb1, nb2;
		String inputs = scanner.nextLine();
		String[] arr = inputs.split("\\s+");
		nb1 = Integer.parseInt(arr[0]);
		nb2 = Integer.parseInt(arr[1]);
		ArrayList<Integer> armstrongs = new ArrayList<>();
		for (int i = nb1; i < nb2; i++) {
			if (isArmstrong(i))
				armstrongs.add(i);
		}
		if (armstrongs.isEmpty()) {
			System.out.println("No Armstrong found.");
		} else
			System.out.println("Here are armstrong numbers: " + armstrongs);
	}

	public static int digit(int nb) {
		int dig = 0;
		while (nb > 0) {
			dig++;
			nb /= 10;
		}
		return dig;
	}

	public static ArrayList<Integer> digits(int nb) {

		ArrayList<Integer> digits = new ArrayList<>();
		while (nb > 0) {
			digits.add(nb % 10);
			nb /= 10;
		}
		return digits;

	}

	public static boolean isArmstrong(int nb) {

		int dig = digit(nb);
		ArrayList<Integer> digs = new ArrayList<>();
		digs = digits(nb);
		int nb2 = nb;
		int sum = 0;

		for (int digi : digs) {
			sum += Math.pow(digi, dig);
		}

		return (sum == nb);
	}
}
