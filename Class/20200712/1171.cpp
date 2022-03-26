#include <iostream>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	//cout << a;
	int l;
	l = a.length();
	for(int i = 0; i < l; i += 1){
		cout << a.at(l - i - 1);
	}
	return 0;
}
