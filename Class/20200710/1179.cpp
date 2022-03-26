#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	for(int i = n; i <= m * n; i += 1){
		if(i % m == 0){
			if(i % n == 0){
				cout << i << " ";
				break;
			}
		}
	}
	for(int i = 2; i <= n - 1; i += 1){
		if(m % i == 0){
			if(n % i == 0){
				cout << i << " ";
				break;
			}
		}
	}
	return 0;
}
