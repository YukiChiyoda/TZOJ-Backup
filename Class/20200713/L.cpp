#include <iostream>
using namespace std;

int main(){
	float s = 0.00;
	for(int i = 1; i <= 50; i += 1){
		s += 1.00 / (2 * i - 1);
		s -= 1.00 / (2 * i);
	}
	printf("%f", s);
	return 0;
}
