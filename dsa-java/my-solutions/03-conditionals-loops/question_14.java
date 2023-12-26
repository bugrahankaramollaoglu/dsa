class question_14 {
	public static void main(String[] args) {
		System.out.println(ft_pow(3, 3));
	}

	public static int ft_pow(int nb, int pow) {
		int nb2 = nb;
		if (pow == 0 && nb == 0)
			return -1;
		if (pow == 0)
			return 1;
		for (int i = 1; i < pow; i++) {
			nb *= nb2;
		}
		return nb;
	}
}
