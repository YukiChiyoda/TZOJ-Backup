#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n; //mΪͷ����nΪ���� 
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

��xֻ���ӣ���(m-x)ֻ��
2x + 4(m-x) = n
2x + 4m - 4x = n
-2x = n - 4m
4m - n = 2x 

*/ 
