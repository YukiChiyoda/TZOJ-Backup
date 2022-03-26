#include <bits/stdc++.h>
using namespace std;

int main(){
	double sum = 0;
	int n;
	cin >> n;
	double a = 2, b = 1;
	//cout << "A";
	for(int i = 1; i <= n; i += 1){
		//cout << "B";
		sum += a / b;
		//cout << "B";
		a += b;
		//cout << "B";
		if(i ==1){
			b += 1;
		}else{
			b += i - 1;
		}
	}
	printf("%.6f", sum);
	return 0;
}
