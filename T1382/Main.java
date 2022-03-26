import java.io.*;
import java.util.*;

public class Main{
    public static void main(String [] args){
    Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            String a = sc.nextLine();
            String upStr = a.toUpperCase();
            char s[] = a.toCharArray();
            s[0] = upStr.charAt(0);
            for(int i = 1; i < s.length; i += 1)
                if(s[i - 1] == ' ')
                    s[i] = upStr.charAt(i);
            System.out.println(s);
        }
        sc.close();
    }
}