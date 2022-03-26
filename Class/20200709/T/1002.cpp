#include <bits/stdc++.h>
using namespace std;

int main(){
	int n[10];
	for(int i = 0; i < 10; i += 1){
		cin >> n[i];
	}
	int a;
	int key = 0;
	cin >> a;
	for(int i = 0; i < 10; i += 1){
		if(30 + a >= n[i]){
			key += 1;
			//cout << endl << n[i] << " " << a << endl;
		}
	}
	cout << key;
	return 0;
}
