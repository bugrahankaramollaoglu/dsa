import java.util.Scanner;

class question_5 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int sum = 0;
		while (true) {
			System.out.print("Enter nb except x: ");
			String inp = scanner.next();
			if (inp.equals("x"))
				break;
			int nb = Integer.parseInt(inp);
			sum += nb;
		}

		System.out.println("Sum of all entered numbers: " + sum);
		scanner.close();
	}

}
