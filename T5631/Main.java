import java.io.*;
import java.util.*;

public class Main {
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = 0, b = 0;
        for(int k = 0; k < n; k += 1){
            int x = sc.nextInt();
            int y = sc.nextInt();
            if(y == 0){
                a += x;
            }else{
                b += x;
            }
        }
        System.out.println(a + " " + b);
        sc.close();
    }
}