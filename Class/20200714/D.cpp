#include <iostream>
using namespace std;

int main(){
	char a;
	int n;
	cin >> n >> a;
	int s = n / 2;
	if(n % 2 != 0){
		s += 1;
	}
	for(int k = 0; k < s; k += 1){
		if(k == 0 || k == s - 1){
			for(int i = 0; i < n; i += 1){
				cout << a;
			}
		}else{
			cout << a;
			for(int i = 0; i < n - 2; i += 1){
				cout << " ";
			}
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
