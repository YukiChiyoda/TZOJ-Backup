#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num[n][2];
	for(int i = 0; i < n; i += 1){
		cin >> num[i][0] >> num[i][1];
	}
	for(int i = 0; i < n; i += 1){
		if(num[i][0] >= num[i][1]){
			cout << num[i][0];
		}else{
			cout << num[i][1];
		}
		cout << endl;
	}
	return 0;
}
