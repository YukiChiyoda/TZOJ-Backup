#include <bits/stdc++.h>
using namespace std;

int main(){
	double pai = 3.1415926;
	double r, h;
	cin >> r >> h;
	double a, b, c, d;
	a = 2.00 * r * pai;
	b = pai * pow(r, 2);
	c = a * h;
	d = b * h;
	printf("%.2f %.2f %.2f %.2f", a, b, c, d);
	return 0;
}
