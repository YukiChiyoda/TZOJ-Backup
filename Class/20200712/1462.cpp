#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i += 1){
		int h;
		cin >> h;
		for(int k = 1; k <= h; k += 1){
			for(int p = 1; p <= k; p += 1){
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}
