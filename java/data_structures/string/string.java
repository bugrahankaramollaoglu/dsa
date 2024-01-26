package string;

class string {
	public static void main(String[] args) {
		String s1 = new String("hello, world ");
		String orJustSay = "goodbye";

		System.err.println(orJustSay.length() + " is its length.");

		String contated = s1 + orJustSay;
		System.err.println(contated + " is their concatenation.");

		System.err.println(orJustSay.substring(0, 4));

		char secondChar = orJustSay.charAt(1);

		boolean isEqual = orJustSay.equals(s1);

		orJustSay.toUpperCase();
		orJustSay.toLowerCase();
		orJustSay.replace("o", "0");
		orJustSay.trim();

	}
}
