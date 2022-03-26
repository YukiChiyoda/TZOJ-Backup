#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n; //m为头数；n为脚数 
	int a, b;
	cin >> m >> n;
	a = (4 * m - n) / 2;
	b = m - a;
	cout << a << " " << b;
	return 0;
}

/*

设x只鸡，则(m-x)只兔
2x + 4(m-x) = n
2x + 4m - 4x = n
-2x = n - 4m
4m - n = 2x 

*/ 
