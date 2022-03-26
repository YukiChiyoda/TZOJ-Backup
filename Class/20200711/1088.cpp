#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int num[n];
		int sum = 1;
		for(int i = 0; i < n; i += 1){
			cin >> num[i];
		}
		for(int i = 0; i < n; i += 1){
			if(num[i] % 2 != 0){
				sum = sum * num[i];
			}
		}
		cout << sum << endl;
	}
	return 0;
}
