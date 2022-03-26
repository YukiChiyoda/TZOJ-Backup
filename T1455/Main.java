import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()){
            int a = sc.nextInt();
            int n = sc.nextInt();
            int sum = 0;
            for(int i = 1; i <= n; i += 1)
                sum += i * a * Math.pow(10, n - i);
            System.out.println(sum);
        }
        sc.close();
    }
}