#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double x;
	double sum = 0;
	cin >> x >> n;
	for(int i = 1; i <= n; i += 1){
		sum += sqrt(i + x);
		x = sum;
	}
	printf("%.2f", sqrt(sum));
	return 0;
}
