#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MOD = 1000000007;

string a, b;
int lengA, lengB, K;
int long long dp1[2][201][201];
int long long dp2[2][201][201];

int main(){
	cin >> lengA >> lengB >> K;
	cin >> a >> b;
	memset(dp1, 0, sizeof(dp1));
	memset(dp2, 0, sizeof(dp2));
	dp2[0][0][0] = 1;
	int now = 1;
	for(int i = 1; i <= lengA; i += 1){
		dp2[now][0][0] = 1;
		for(int j = 1; j <= lengB; j += 1)
			for(int k = 1; k <= K; k += 1){
				if(a[i - 1] == b[j - 1])
					dp1[now][j][k] = (dp1[now ^ 1][j - 1][k] + dp2[now ^ 1][j - 1][k - 1]) % MOD;
				else
					dp1[now][j][k] = 0;
				dp2[now][j][k] = (dp2[now ^ 1][j][k] + dp1[now][j][k]) % MOD;
			}
		now ^= 1;
	}
	cout << dp2[now ^ 1][lengB][K] << endl;
	return 0;
}