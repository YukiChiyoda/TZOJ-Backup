#include <iostream>
using namespace std;

int main(){
	string str1, str2;
	getline(cin ,str1);
	int l = str1.length();
	bool flag = false;
	for(int i = 0; i < l; i += 1){
		if(str1.at(i) < '0' || str1.at(i) > '9'){
			if(flag == false){
				str2 += "*";
				flag = true;
			}
		}else{
			str2 += str1.at(i);
			flag = false;
		}
	}
	cout << str2;
	return 0;
}
