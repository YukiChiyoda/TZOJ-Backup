#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num[n][n];
	for(int i = 0; i < n; i += 1){
		for(int k = 0; k < n; k += 1){
			cin >> num[i][k];
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i += 1){
		for(int k = 0; k <= i; k += 1){
			//cout << "sum += " << num[i][k] << endl;
			sum += num[i][k];
		}
	}
	cout << sum;
	return 0;
}
