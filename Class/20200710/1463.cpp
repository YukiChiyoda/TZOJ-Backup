#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int i, j, k;
	i = a + b;
	j = a + c;
	k = b + c;
	int t;
	if(i < j){
		t = i;
		i = j;
		j = t;
	}if(i < k){
		t = i;
		i = k;
		k = t;
	}if(j < k){
		t = j;
		j = k;
		k = t;
	}
	cout << i;
	return 0;
}
