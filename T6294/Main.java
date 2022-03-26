import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int e = sc.nextInt();
        double s = a * c / 2.00 + b * c - d * e;
        System.out.printf("%.2f\n", s);
        sc.close();
    }
}