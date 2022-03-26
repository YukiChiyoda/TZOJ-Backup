import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int f = 0;
        for(int i = 1; i <= n; i += 1)
            f = (f + m) % i;
        System.out.println(f + 1);
        sc.close();
    }
}