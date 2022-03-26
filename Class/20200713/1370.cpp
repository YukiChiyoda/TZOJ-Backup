#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0){
			return 0;
		}
		double num[n];
		int a = 0, b = 0, c = 0;
		for(int i = 0; i < n; i += 1){
			cin >> num[i];
			if(num[i] < 0){
				a += 1;
			}else{
				if(num[i] > 0){
					c += 1;
				}else{
					b += 1;
				}
			}
		}
		cout << a << " " << b << " " << c << endl;
		a = 0;
		b = 0;
		c = 0;
	}
	return 0;
}
