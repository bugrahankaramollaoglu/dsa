import java.util.Scanner;

class question_15 {
	public static void main(String[] args) {
		String str;
		Scanner scanner = new Scanner(System.in);
		System.out.print("enter a string to reverse: ");
		str = scanner.next();
		StringBuilder str_rev = new StringBuilder(str).reverse();
		System.out.println("reversed: " + str_rev);
	}
}
