#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	char o;
	cin >> a >> o >> b;
	if(b != 2){
		if(b == 1 || 3 || 5 || 7 || 8 || 10 || 12){
			cout << "31" << endl;
		}else{
			cout << "30" << endl;
		}
	}else{
		if(a % 400 == 0){
			cout << "29" << endl;
			return 0;
		}else{
			if(a % 4 == 0 && a % 100 != 0){
				cout << "29" << endl;
				return 0;
			}
		}
		cout << "28";
	}
	return 0;
}
