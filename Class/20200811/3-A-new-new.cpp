#include <iostream>
#include <algorithm>
using namespace std;

const int M = 201, N = 30;
int dp[M];
int c[N], w[N];

int main(){
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < n; i += 1){
        cin >> w[i] >> c[i];
    }
    for(int i = 0; i < n; i += 1){
        for(int j = m; j >= w[i]; j -= 1){
            dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
        }
    }
    cout << dp[m] << endl;
    return 0;
}