// ebob (hcf) ekok (lcm)

import java.util.Scanner;

class question_4 {
	public static void main(String[] args) {
		// Create a Scanner object to read input from the user
		Scanner scanner = new Scanner(System.in);

		// Prompt the user to enter two numbers
		System.out.print("Enter the first number: ");
		int num1 = scanner.nextInt();

		System.out.print("Enter the second number: ");
		int num2 = scanner.nextInt();

		// Calculate and display the LCM and HCF
		System.out.println("LCM of " + num1 + " and " + num2 + " is: " + lcm(num1, num2));
		System.out.println("HCF of " + num1 + " and " + num2 + " is: " + hcf(num1, num2));

		// Close the Scanner to avoid resource leaks
		scanner.close();
	}

	public static int hcf(int num1, int num2) {
		while (num2 != 0) {
			int temp = num2;
			num2 = num1 % num2;
			num1 = temp;
		}
		return num1;
	}

	public static int lcm(int num1, int num2) {
		return (num1 * num2) / hcf(num1, num2);
	}
}
