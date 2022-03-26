#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	double n, m;
	n = a / 2.00;
	m = b / 100.00;
	printf("Weight: %.2fkg\n", n);
	printf("Height: %.2fm\n", m);
	double k;
	k = n / pow(m, 2);
	if(k < 18.5){
		cout << "Your body is too thin.";
	}else{
		if(k >= 18.5 && k <= 24){
			cout << "Your body is normal.";
		}else{
			if(k > 24){
				cout << "Your body is too fat.";
			}
		}
	}
	return 0;
}
