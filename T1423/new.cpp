#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n;
int num[101][101];
int dp[101][101];

int dfs(int i, int j){
	if(dp[i][j] >= 0)
		return dp[i][j];
	if(i == n - 1)
		return dp[i][j] = num[i][j];
	return dp[i][j] = max(dfs(i + 1, j), dfs(i + 1, j + 1)) + num[i][j];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		memset(dp, -1, sizeof(dp));
		for(int i = 0; i < n; i += 1)
			for(int j = 0; j <= i; j += 1)
				cin >> num[i][j];
		dfs(0, 0);
		cout << dp[0][0] << endl;
	}
	return 0;
}