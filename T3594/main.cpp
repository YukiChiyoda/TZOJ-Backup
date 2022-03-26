#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int dp[100001] = {0};
        for(int i = 1; i <= n; i += 1)
            cin >> dp[i];
        for(int i = 1; i <= n; i += 1)
            dp[i] += dp[i - 1];
        int answer = dp[m];
        for(int i = m + 1; i <= n; i += 1)
            answer = max(dp[i] - dp[i - m], answer);
        cout << answer << endl;
    }
    return 0;
}