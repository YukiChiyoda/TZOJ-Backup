#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	for(int b = 0; b < a; b += 1){
		int n;
		cin >> n;
		int sum = 0;
		/*≥¨ ±À„∑®
		for(int i = 1; i <= n; i += 1){
			for(int k = 1; k <= i; k += 1){
				sum += k;
				cout << "sum += " << k << endl;
			} 
		}
		*/
		for(int i = 1; i <= n; i += 1){
			sum += i * (n - i + 1);
		}
		cout << sum << endl;
	}
	return 0;
}
