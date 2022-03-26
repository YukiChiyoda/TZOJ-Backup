#include <iostream>
using namespace std;

int main(){
	int m;
	cin >> m;
	for(int i = 1; i <= m; i += 1){
		for(int k = 1; k <= i; k += 1){
			if(k == i){
				cout << k << "*" << i << "=" << i * k << endl;
			}else{
				cout << k << "*" << i << "=" << i * k << "	";
			}
		}
	}
	return 0;
}
