#include <iostream>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	int l = a.length();
	bool flag = false;
	for(int i = 0; i < l; i += 1){
		if(a.at(i) == ' ' && flag == false){
			flag = true;
		}else{
			if(a.at(i) == ' '){
				string::iterator it;
				it = a.begin() + i;
				a.erase(it);
			}else{
				flag = false;
			}
		}
	}
	cout << a;
}
