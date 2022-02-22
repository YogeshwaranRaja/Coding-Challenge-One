import java.util.Scanner;

class Main {

    public static long factorial(int n) {
        long out = 1;
        while (n > 0) {
            out *= n--;
        }
        return out;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        long fact = factorial(num);
        int count = 0;
        System.out.println(fact);
        while (fact > 0 && fact % 10 == 0) {
            fact /= 10;
            count++;
        }
        System.out.println(count);
        sc.close();
    }
}