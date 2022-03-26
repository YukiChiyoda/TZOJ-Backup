#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double r;
	cin >> r;
	double d, c, s;
	double pai = 3.1415926;
	d = 2.00 * r;
	c = pai * d;
	s = pai * pow(r, 2);
	printf("%.2f %.2f %.2f", d, c, s);
	return 0;
}
