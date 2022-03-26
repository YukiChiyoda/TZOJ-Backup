#include <bits/stdc++.h>
using namespace std;

int main(){
	float sum = 0;
	for(int i = 1; i <= 50; i += 1){
		sum += 1 / (2.00 * i -  1);
		sum -= 1 / (2.00 * i);
	}
	printf("%f", sum);
	return 0;
}
