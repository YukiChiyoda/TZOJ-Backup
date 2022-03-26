//Do you know the most foolish algorithm 'Sleep_Sort'?
import java.io.*;
import java.util.*;

public class Main{
    static public int cur = 0;
    static public int[] arr = new int[1000];
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            t -= 1;
            int n = sc.nextInt();
            for(int i = 0; i < n; i += 1)
                arr[i] = sc.nextInt();
            SortThread[] sortThreads = new SortThread[arr.length];
            for(int i = 0; i < sortThreads.length; i += 1)
                sortThreads[i] = new SortThread(arr[i]);
            for(int i = 0; i < sortThreads.length; i += 1) 
                sortThreads[i].start();
            System.out.printf("\n");
        }
        sc.close();
    }
}

class SortThread extends Thread{
    int s = 0;
    public SortThread(int s){
        this.s = s;
    }
    public void run(){
        try{
            sleep(s * 10 + 10);
        }catch(InterruptedException element){
            element.printStackTrace();
        }
        if(s != 0)
            System.out.printf("%d%c" , s, ' ');
    }
}