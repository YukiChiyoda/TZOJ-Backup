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
		int x = sc.nextInt();
		for(int i = x; i >= 2; i -= 1)
			if(Prime(i)){
				System.out.println(i);
				sc.close();
				return;
			}
		sc.close();
	}
}