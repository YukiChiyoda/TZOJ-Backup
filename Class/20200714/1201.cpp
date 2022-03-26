#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double a, b, c;
	while(cin >> a >> b >> c){
		double p = 0.50 * (a + b + c);
		printf("%.3f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
	}
	return 0;
}
