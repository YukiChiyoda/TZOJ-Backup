#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int a = 0; a < n; a += 1){
		int m;
		int f = 1;
		double sum = 0;
		cin >> m;
		for(int i = 1; i <= m; i += 1){
			sum += 1.00 / i * f;
			f = -f;
		}
		printf("%.2f\n", sum);
	}
	return 0;
}
