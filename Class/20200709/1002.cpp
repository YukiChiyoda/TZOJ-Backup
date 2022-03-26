#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[n+1], b[n+1];
	cin >> n;
	for(int i = 0; i < n; i += 1){
		cin >> a[i] >> b[i];
	}
	for(int i = 0; i < n; i += 1){
		if(a[i] >= b[i]){
			cout << a[i];
		}else{
			cout << b[i];
		}
		cout << endl;
	}
	cout << a[0] << b[0];
	cout << a[1] << b[1];
	return 0;
}
