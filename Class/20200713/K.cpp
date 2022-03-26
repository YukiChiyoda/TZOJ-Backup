#include <iostream>
using namespace std;

int main(){
	int s = 0;
	int a = 0;
	for(int i = 1; i <= 7; i += 1){
		int m, n;
		cin >> m >> n;
		int k = m + n;
		if(k > 8 && k > s){
			s = k;
			a = i;
		}
	}
	if(s == 0){
		cout << "0" << endl;
	}else{
		cout << a << endl;
	}
	return 0;
}
