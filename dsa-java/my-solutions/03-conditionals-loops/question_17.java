class question_17 {
	public static void main(String[] args) {
		System.out.println(sumOfDigitsOfaNumber(153));
	}
	public static int sumOfDigitsOfaNumber(int nb) {
		int sum = 0;
		while (nb != 0) {
			sum += nb % 10;
			nb /= 10;
		}
		return sum;
	}
}
