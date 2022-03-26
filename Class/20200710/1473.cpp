#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	int t;
	if(x > y){
		t = x;
		x = y;
		y = t;
	}
	if(x > z){
		t = x;
		x = z;
		z = t;
	}
	if(y > z){
		t = y;
		y = z;
		z = t;
	}
	cout << y;
	return 0;
}	
