#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, n, sum = 0;
	while(scanf("%d %d", &a, &n) != EOF){
		for(int i = 1; i <= n; i += 1){
			int k = 0;
			for(int u = 1; u <= i; u += 1){
				if(u = 1){
					k += a;
				}else{	
					k += a * pow(10, u - 1);
				}
			}
			sum += k;
		}
		printf("%d\n", sum);
	}
	return 0;
}
