#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x, y;
	int m = 0, n = 0;
	while(cin >> x >> y){
		if(x > y){
			int t;
			t = x;
			x = y;
			y = t;
		}
		for(int i = x; i <= y; i += 1){
			if(i % 2 != 0){
				//cout << "m += " << i << "^3" << endl;
				m += pow(i, 3);
			}else{
				//cout << "n += " << i << "^2" << endl;
				n += pow(i, 2);
			}
		}
		cout << n << " " << m << endl;;
		n = 0;
		m = 0;
	}
	return 0;
}
