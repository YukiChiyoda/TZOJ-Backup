#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		int sum;
		int p;
		p = pow(a, b);
		sum = p % c;
		cout << sum << endl;
	}
	return 0;
}
