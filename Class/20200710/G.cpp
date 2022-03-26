#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	char o;
	cin >> a >> o >> b >> o >> c >> o >> d;
	if(a >= 0 && a <= 255 && b>= 0 && b <= 255 && c >= 0 && c <= 255 && d >= 0 && d <= 255){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}	
