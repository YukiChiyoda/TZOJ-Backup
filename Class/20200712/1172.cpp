#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i += 1){
		for(int k = 1; k <= n - i; k += 1){
			cout << " ";
		}
		for(int k = 1; k <= 2 * i - 1; k += 1){
			cout << "*";
		}
		cout << endl;
	}
	n -= 1;
	for(int i = 1; i <= n; i += 1){
		for(int k = 1; k <= i; k += 1){
			cout << " ";
		}
		for(int k = 1; k <= 2 * n - (2 * i - 1); k += 1){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
