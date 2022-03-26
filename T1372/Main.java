import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()){
            int x = sc.nextInt();
            int y = sc.nextInt();
            boolean flag = false;
            for(int i = x; i <= y; i += 1){
                int num[] = new int[3];
                num[0] = i / 100 % 10;
                num[1] = i / 10 % 10;
                num[2] = i / 1 % 10;
                int sum = 0;
                for(int j = 0; j < 3; j += 1)
                    sum += Math.pow(num[j], 3);
                if(i == sum){
                    if(flag)
                        System.out.printf(" ");
                    System.out.printf("%d", i);
                    flag = true;
                }
            }
            if(!flag)
                System.out.printf("no");
            System.out.printf("\n");
        }
        sc.close();
    }
}