#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	int n = a.length();
	char sum[n];
	for(int i = 0; i < n; i += 1){
		char k;
		k = a.at(i);
		if(k >= 65 && k <= 122){
			cout << k;
		}
	}
	return 0;
}
