#include <bits/stdc++.h>
using namespace std;

int main(){
	int n[9];
	for(int i = 0; i < 9; i += 1){
		cin >> n[i];
	}
	cout << n[0] + n[4] + n[8];
	return 0;
}
