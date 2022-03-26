#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i += 1){
		double h;
		int n;
		cin >> h >> n;
		if(n == 1){
			printf("%.2f", h);
		}else{
			printf("%.2f", h + h / (n - 1));
		}
		if(n == 1){
			printf(" %.2f\n", h / 2);
		}else{
			printf(" %.2f\n", h / pow(2, n));
		}
	}
	return 0;
}
