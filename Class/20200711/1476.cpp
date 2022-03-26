#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	double a = 0;
	for(int i = 1; i <= n; i += 1){
		a += 1 / (4.00000 * i - 3.00000);
		a -= 1 / (4.00000 * i - 1.00000);
	}
	a = a * 4;
	printf("%.5f", a);
	return 0;
}
