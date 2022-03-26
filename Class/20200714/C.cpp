#include <iostream>
using namespace std;

int main(){
	int m;
	cin >> m;
	int k = 0;
	for(int i = 1; i <= m; i += 1){
		if((i / 10000 == 3) || (i / 1000 % 10 == 3) || (i / 100 % 10 == 3) || (i / 10 % 10 == 3) || (i % 10 == 3) || (i % 3 == 0)){
			k += 1;
		}
	}
	cout << k;
	return 0;
}
