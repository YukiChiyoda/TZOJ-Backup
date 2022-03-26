import java.util.Scanner;

public class Main {
    public static void main(final String[] args) {
        final Scanner sc = new Scanner(System.in);
        final int t = sc.nextInt();
        for (int a = 0; a < t; a++) {
            final int n = sc.nextInt();
            final int num[][] = new int[101][101];
            for(int i = 1; i <= n; i += 1)
                for(int j = 1; j <= i; j += 1)
                    num[i][j] = sc.nextInt();
            for(int i = n - 1; i > 0; i -= 1)
                for(int j = i; j > 0; j -= 1)
                    num[i][j] += Math.max(num[i + 1][j], num[i + 1][j + 1]);
            System.out.println(num[1][1]);
        }
        sc.close();
    }
}