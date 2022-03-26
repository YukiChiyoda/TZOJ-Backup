import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i += 1){
            System.out.printf("|");
            for(int j = 1; j <= n - i - 1; j += 1)
                System.out.printf(" ");
            System.out.printf("/\n");
        }
        for(int i = 0; i < n; i += 1){
            System.out.printf("|");
            for(int j = 0; j < i; j += 1)
                System.out.printf(" ");
            System.out.printf("\\\n");
        }
        sc.close();
    }
}