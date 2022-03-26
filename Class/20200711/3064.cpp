#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, n;
	cin >> n;
	for(int i = 0; i < n; i += 1){
		cin >> a;
		if(a % 400 == 0){
			cout << "Yes" << endl;
		}else{
			if(a % 4 == 0 && a % 100 != 0){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
	}
	return 0;
}
