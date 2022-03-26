#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n - 1; i += 1){
		cout << "Move disk " << i + 1 << " from A to B" << endl;
	}
	cout << "Move disk " << n << " from A to C" << endl;
	for(int i = n; i > 1; i -= 1){
		cout << "Move disk " << i - 1 << " from B to C" << endl;
	}
	return 0;
}
