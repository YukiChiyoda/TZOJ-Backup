#include <iostream>
#include <algorithm>
using namespace std;

string a, b;
int dp[1001][1001];

int main(){
	cin >> a >> b;
	fill(dp[0], dp[0] + 1001 * 1001, 0);
	for(int i = 1; i <= a.length(); i += 1)
		for(int j = 1; j <= b.length(); j += 1)
			if(a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
	cout << dp[a.length()][b.length()] << endl;
	return 0;
}