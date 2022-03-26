import java.io.*;
import java.util.Scanner;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();
        if(x == y && x == z && y == z)    System.out.println("very good");
        else if((x == y && (z == x + 1 || z == x - 1)) || (x == z && (y == x + 1 || y == x - 1)) || (y == z && (x == y + 1 || x == y - 1)))    System.out.println("fine");
        else    System.out.println("bad");
        sc.close();
    }
}