#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i += 1){
		for(int k = 0; k < n - i - 1; k += 1){
			cout << " ";
		}
		for(int k = 1; k <= i + 1; k += 1){
			cout << k;
		}
		for(int k = i; k >= 1; k -= 1){
			cout << k;
		}
		cout << endl;
	}
	n -= 1;
	for(int i = 0; i < n; i += 1){
		for(int k = 0; k < i + 1; k += 1){
			cout << " ";
		}
		for(int k = 1; k <= n - i; k += 1){
			cout << k;
		}
		for(int k = n - i - 1; k >= 1; k -= 1){
			cout << k;
		}
		cout << endl;
	}
	return 0;
}
