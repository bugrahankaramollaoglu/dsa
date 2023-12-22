import java.util.Scanner;

class question_6 {  
    public static void main(String[] args) {
        // Create a Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter a number
        System.out.print("Enter a number: ");

        // Read the entered number from the user
        int number = scanner.nextInt();

        // Check whether the number is even or odd
        if (number % 2 == 0) {
            System.out.println(number + " is an even number.");
        } else {
            System.out.println(number + " is an odd number.");
        }

        // Close the Scanner to avoid resource leakage
        scanner.close();
    }
}
