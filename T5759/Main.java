import java.io.*;
import java.util.*;

public class Main{
    static int[] rule_from = new int[15];
    static int[] rule_into = new int[15];
    static boolean[] visited = new boolean[15];
    static int n, k;
    static int temp;

    static void dfs(int x){
        if(visited[x])    return;
        visited[x] = true;
        temp += 1;
        for(int i = 0; i < k; i += 1){
            if(rule_from[i] == x)
                dfs(rule_into[i]);
        }
    }

    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        for(int i = 0; i < k; i += 1){
            rule_from[i] = sc.nextInt();
            rule_into[i] = sc.nextInt();
        }
        int answer = 1;
        while(n != 0){
            Arrays.fill(visited, false);
            temp = 0;
            dfs(n % 10);
            n /= 10;
            answer *= temp;
        }
        System.out.println(answer);
        sc.close();
    }
}