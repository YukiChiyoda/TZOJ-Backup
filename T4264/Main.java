import java.io.*;
import java.math.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()){
            BigInteger x = new BigInteger(sc.next());
            BigInteger y = new BigInteger(sc.next());
            BigInteger result[] = x.divideAndRemainder(y);
            System.out.println(result[0] + " " + result[1]);
        }
        sc.close();
    }
}