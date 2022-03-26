import java.io.*;
import java.math.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int o = 1; o <= t; o += 1){
            BigInteger x = new BigInteger(sc.next());
            BigInteger y = new BigInteger(sc.next());
            System.out.println("Case " + o + ":");
            System.out.println(x + " + " + y + " = " + x.add(y));
            if(o != t)
                System.out.printf("\n");
        }
        sc.close();
    }
}