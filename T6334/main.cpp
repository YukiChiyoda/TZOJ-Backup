#include <iostream>
using namespace std;

int n, r;
int dp[16][16];

int main(){
	dp[1][1] = 1;
	for(int i = 2; i <= 15; i += 1)
		for(int j = 1; j <= i; j += 1)
			dp[i][j] = dp[i - 1][j] * j + dp[i - 1][j - 1];
	int x, y;
	while(cin >> x >> y)
		cout << dp[x][y] << endl;
	return 0;
}