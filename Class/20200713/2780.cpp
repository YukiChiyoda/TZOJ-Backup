#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	int k = 0;
	cin >> n;
	for(int i = 1; i <= n; i += 1){
		k += i;
		//cout << "k=" << k << endl;
		sum += k;
		//cout << "sum = " << sum << endl;
	}
	cout << sum << endl;
	return 0;
}
