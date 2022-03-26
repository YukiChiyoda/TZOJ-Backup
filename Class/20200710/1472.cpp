#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a, b, c;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	if(c == 0){
		if(b == 0){
			cout << a;
		}else{
			cout << b << a;
		}
	}else{
		cout << c << b << a;
	}
	return 0;
}
