#include <iostream>
using namespace std;

int main(){
	string n;
	cin >> n;
	int l = n.length();
	for(int i = 0; i < l; i += 1){
		if(n.at(i) >= 65 && n.at(i) <= 90){
			n.at(i) += 32;
		}else{
			if(n.at(i) >= 97 && n.at(i) <= 122){
				n.at(i) -= 32;
			}
		}
	}
	cout << n;
	return 0;
}
