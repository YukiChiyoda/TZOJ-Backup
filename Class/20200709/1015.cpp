#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double p;
	p = (a + b + c) * 0.500;
	double s;
	s = p * (p - a) * (p - b) * (p - c);
	s = sqrt (s);
	printf("%.3f\n", s);
	return 0; 
}
