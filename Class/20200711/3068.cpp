#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	for(int i = 1; i <= b / a + 1; i += 1){
		if(a * i > b){
			cout << i;
			return 0;
		}
	}
	return 0;
}
