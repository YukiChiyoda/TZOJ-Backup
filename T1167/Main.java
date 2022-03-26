import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] num = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};
        double s = 0.00;
        for(int i = 1; i <= n; i += 1)
            s += (num[i] * 1.00) / (num[i - 1] * 1.00);
        System.out.printf("%.6f\n", s);
        sc.close();
    }
}