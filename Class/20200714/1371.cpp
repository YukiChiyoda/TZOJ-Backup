#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double m, n;
	while(cin >> m >> n){
		double sum = 0;
		for(int i = 0; i < n; i += 1){
			sum += m;
			m = sqrt(m);
		}
		printf("%.2f\n", sum);
	}
	return 0;
}
