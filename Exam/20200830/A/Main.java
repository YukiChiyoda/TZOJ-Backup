import java.io.*;
import java.util.*;

public class Main{
    static boolean Prime(int x){
        for(int i = 2; i * i <= x; i += 1)
            if(x % i == 0)    return false;
        return true;
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(Prime(n))
            System.out.println("Hello, prime " + n + "!");
        sc.close();
    }
}