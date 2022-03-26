import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i += 1){
            int n = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(n + x * y);
        }
        sc.close();
    }
}