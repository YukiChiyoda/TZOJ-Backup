#include <bits/stdc++.h>
using namespace std;

int main(){
	int h[10];
	int a;
	cin >> h;
	cin >> a;
	int num = 0;
	int result = 0;
	do {
		num += 1;
		if(h[num] < a + 30){
			result += 1;
		}
	}while(num <= 10);
	cout << result;
	return 0;
}
