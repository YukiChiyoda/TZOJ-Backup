#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n; //mΪͷ����nΪ���� 
	int a, b;
	cin >> m >> n;
	a = (4 * m - n) / 2;
	b = m - a;
	cout << a << " " << b;
	return 0;
}

/*

��xֻ������(m-x)ֻ��
2x + 4(m-x) = n
2x + 4m - 4x = n
-2x = n - 4m
4m - n = 2x 

*/ 
