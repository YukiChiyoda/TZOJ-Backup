#include <iostream>
using namespace std;

int main(){
	int num[9];
	for(int i = 0; i < 10; i += 1){
		cin >> num[i];
	}
	cout << "\n";
	for(int i = 9; i >= 0; i -= 1){
		cout << num[i] << " ";
	}
	return 0;
}
