#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n, i[n];
	int num;
	cin >> m;
	cin >> n;
	cin >> i[n];
	num = 1;
	do{
		m = m - i[num];
		num += 1; 
	}while(m > i[num]);
	cout << n - num;
	return 0;
}
