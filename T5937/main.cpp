#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int INF = 0x3F3F3F3F;

int n, s;
int dp[5001];

int main(){
	cin >> n >> s;
	memset(dp, INF, sizeof(dp));
	dp[0] = 0;
	for(int i = 0; i < n; i += 1){
		int x;
		cin >> x;
		for(int j = x; j <= s; j += 1)
			dp[j] = min(dp[j], dp[j - x] + 1);
	}
	cout << (dp[s] == INF ? -1 : dp[s]) << endl;
	return 0;
}