#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y;
	cin >> n >> x >> y;
	int k;
	if(y % x != 0){
		k = y / x + 1;
	}else{
		k = y / x;
	}
	if(k >= n){
		k = n;
	}
	cout << n - k;
	return 0;
}	
