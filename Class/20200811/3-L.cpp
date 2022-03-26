#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int M = 10001, N = 30;
int dp[M];

int main(){
    int m, n;
    while(cin >> m >> n){
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i += 1){
            int w;
            cin >> w;
            for(int j = m; j >= w; j -= 1){
                dp[j] = max(dp[j], dp[j - w] + w);
            }
        }
        cout << dp[m] << endl;
    }
    return 0;
}