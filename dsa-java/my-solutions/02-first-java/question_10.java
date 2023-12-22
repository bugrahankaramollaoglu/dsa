import java.util.Scanner;

class question_10 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Enter a string: ");
		String input = scanner.nextLine();

		String reversed = new StringBuilder(input).reverse().toString();

		if (input.equals(reversed)) {
			System.out.println("The entered string is a palindrome.");
		} else {
			System.out.println("The entered string is not a palindrome.");
		}

		scanner.close();
	}
}
