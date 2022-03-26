#include <bits/stdc++.h>
using namespace std;

int main(){
	int num[10];
	for(int i = 0; i < 10; i += 1){
		cin >> num[i];
	}
	for(int i = 0; i < 10; i += 1){
		if(i == 10 - 1){
			cout << num[0];
		}else{
			cout << num[10 - i - 1] << " ";
		}
	}
	return 0;
}
