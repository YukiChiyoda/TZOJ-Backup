#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	for(int i = 0; i < m; i += 1){
		for(int k = 0; k < n; k += 1){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
