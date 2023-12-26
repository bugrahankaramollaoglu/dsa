import java.util.Scanner;

class question_13 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Enter amount of numbers: ");
		int amount = scanner.nextInt();
		int sum = 0;
		int nb;
		for (int i = 1; i <= amount; i++) {
			System.out.print("Enter number " + i + " : ");
			nb = scanner.nextInt();
			sum += nb;
		}
		System.out.println("Sum of " + amount + " numbers is: " + sum + ".");
	}
}
