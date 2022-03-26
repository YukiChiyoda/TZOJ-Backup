#include <iostream>
using namespace std;

int main(){
	/*
	int a;
	cin >> a;
	for(int i = 10; i > 0; i -= 1){
		int k;
		if(i == 1){
			k = a % 10;
			if(k != 0){
				cout << k << endl;
			}
		}else{
			k = a / pow(10, i - 1);
			k = k % 10;
			if(k != 0){
				cout << k << " ";
			}
		}
	}
	*/
	string a;
	cin >> a;
	for(int i = 0; i < a.length(); i += 1){
		if(i != a.length() - 1){
			cout << a.at(i) << " ";
		}else{
			cout << a.at(i) << endl;
		}
	}
	return 0;
}
