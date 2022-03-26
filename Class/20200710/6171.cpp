#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i += 1){
		if(n % i == 0){
			cout << i << " ";
		}
	}
	return 0;
}	
