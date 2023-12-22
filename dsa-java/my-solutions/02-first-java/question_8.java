import java.util.Scanner;

class question_8 {
	    public static void main(String[] args) {
        // Create a Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the first number
        System.out.print("Enter the first number: ");
        int firstNumber = scanner.nextInt();

        // Prompt the user to enter the second number
        System.out.print("Enter the second number: ");
        int secondNumber = scanner.nextInt();

        // Find and print the largest number
        int largestNumber = Math.max(firstNumber, secondNumber);
        System.out.println("The largest number is: " + largestNumber);

        // Close the Scanner to avoid resource leakage
        scanner.close();
    }
}
