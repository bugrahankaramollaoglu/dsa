import java.util.Scanner;

class question_3 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter a number: ");
		int nb;
		nb = scanner.nextInt();
		for (int i = 1; i <= 9; i++) {
			System.out.println(i + " * " + nb + " = " + i * nb);
		}
	}
}
