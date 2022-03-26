import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            double x = sc.nextDouble();
            double y = sc.nextDouble();
            double z = sc.nextDouble();
            if(x + y > z && x + z > y && y + z > x)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        sc.close();
    }
}