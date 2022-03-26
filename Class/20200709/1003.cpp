#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n; //m为头数；n为脚数 
	int a, b;
	cin >> m >> n;
	int test;
	test = (4 * m - n) % 2;
	if(test != 0){
		cout << "Error";
		return 0;
	}
	a = (4 * m - n) / 2;
	b = m - a;
	cout << a << " " << b;
	return 0;
}

/*

设x只鸽子，则(m-x)只兔
2x + 4(m-x) = n
2x + 4m - 4x = n
-2x = n - 4m
4m - n = 2x 

*/ 
