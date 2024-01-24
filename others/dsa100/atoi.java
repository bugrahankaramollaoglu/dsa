/* there is no need for atoi in java, use parseInt */

class atoi {
    public static void main(String[] args) {

        String str = "-1363";

        try {
            int ret = Integer.parseInt(str);
            System.out.println("result: " + ret);
        } catch (Exception e) {
            System.out.println("could not convert");
        }

    }
}
