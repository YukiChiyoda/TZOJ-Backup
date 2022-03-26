#include <iostream>
#include <stdio.h>
//#include <math.h>
using namespace std;

int main(){
	bool flag = false;
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	for(double i = -100.000; i <= 100; i += 0.001){
		double j = i + 0.001;
		double x = a * i * i * i + b * i * i + c * i + d;
		double y = a * j * j * j + b * j * j + c * j + d;
		//y = floor(a * 10000.00f + 0.5) / 10000.00f;
		//if(y == 0.000){
		if((x >= 0 && y <= 0) || (x <= 0 && y >= 0)){
			if(flag)
				cout << " ";
			printf("%.2f", i);
			flag = true;
		}
	}
	return 0;
}