#include <bits/stdc++.h>
using namespace std;

int main(){
	int h;
	int num = 0;
	int loop = 0;
	int u = 0;
	cin >> h;
	do{
		num += 1;
		u = ( h - 1 ) / 2;
		do{
			loop += 1;
			cout << "*";
		}while(loop <= u);
		cout << "\n";
	}while(num <= h);
}
