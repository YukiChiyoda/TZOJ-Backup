#include <iostream>
using namespace std;

int n, r;
int dp[16][16];
int long long table[17] = {
	0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800,
	39916800, 479001600, 6227020800, 87178291200, 1307674368000, 20922789888000
};

int main(){
	dp[1][1] = 1;
	for(int i = 2; i <= 15; i += 1)
		for(int j = 1; j <= i; j += 1)
			dp[i][j] = dp[i - 1][j] * j + dp[i - 1][j - 1];
	int x, y;
	while(cin >> x >> y)
		cout << dp[x][y] * table[y] << endl;
	return 0;
}