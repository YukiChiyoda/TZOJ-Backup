#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double i, j1, j2, k1, k2;
	i = pow(b, 2) - 4.000 * a * c;
	j1 = (-b) + sqrt(i);
	j2 = (-b) - sqrt(i);
	k1 = j1 / (2.000 * a);
	k2 = j2 / (2.000 * a);
	if(k1 < k2){
		double t = k1;
		k1 = k2;
		k2 = t;
	}
	printf("%.2f %.2f", k1, k2);
	return 0;
}
