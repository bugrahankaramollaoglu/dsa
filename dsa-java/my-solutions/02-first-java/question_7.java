import java.util.Scanner;

class question_7 {
	    public static void main(String[] args) {
        // Create a Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter their name
        System.out.print("Enter your name: ");

        // Read the entered name from the user
        String name = scanner.nextLine();

        // Greet the user with a personalized message
        System.out.println("Hello, " + name + ".");

        // Close the Scanner to avoid resource leakage
        scanner.close();
    }
}
