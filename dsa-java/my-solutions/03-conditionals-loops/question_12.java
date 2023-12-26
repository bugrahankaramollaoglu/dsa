class question_12 {
	public static void main(String[] args) {
		System.out.println(factorial(3));
	}

	public static int factorial(int nb) {

		int ret = 1;
		for (int i = 1; i <= nb; i++) {
			ret *= i;
		}
		return ret;
	}
}
