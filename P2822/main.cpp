#include <iostream>
using namespace std;

int k;
int long long table[2001][2001];
int long long sum[2001][2001];

void calc(){
	for(int i = 1; i <= 2000; i += 1)
		table[i][0] = 1, table[i][i] = 1;
	for(int i = 1; i <= 2000; i += 1)
		for(int j = 1; j < i; j += 1)
			table[i][j] = (table[i - 1][j] + table[i - 1][j - 1]) % k;
	/*
	for(int i = 0; i <= 5; i += 1){
		for(int j = 0; j <= 5; j += 1)
			cout << table[i][j] << " ";
		cout << endl;
	}
	*/
}

void sumer(){
	for(int i = 1; i <= 2000; i += 1)
		for(int j = 1; j <= 2000; j += 1){
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
			if(table[i][j] == 0 && i >= j)
				sum[i][j] += 1;
		}
	/*
	for(int i = 0; i <= 10; i += 1){
		for(int j = 0; j <= 10; j += 1)
			cout << sum[i][j] << " ";
		cout << endl;
	}
	*/
}

int main(){
	int t;
	cin >> t >> k;
	calc();
	sumer();
	while(t--){
		int x, y;
		cin >> x >> y;
		cout << sum[x][y] << endl;
	}
	return 0;
}