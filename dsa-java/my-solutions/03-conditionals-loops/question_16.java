class question_16 {
	public static void main(String[] args) {
		isPalindrome("bugrargub");
	}

	public static void isPalindrome(String str) {
		StringBuilder rev_str = new StringBuilder(str).reverse();
		if (rev_str.toString().equals(str)) {
			System.out.println("it is palindrome.");
		} else {
			System.out.println("it is not.");
		}
	}
}
