#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	double k;
	cin >> n;
	if(n > 0 && n < 1){
		k = 10 - pow(n, 2);
	}else{
		if(n >= 1 && n <= 4){
			k = 10 - n;
		}else{
			if(n > 4 && n < 25){
				k = 10 - 2 * sqrt(n);
			}
		}
	}
	printf("%.2f", k);
	return 0;
}	
