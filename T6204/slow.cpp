#include <iostream>
#include <algorithm>
using namespace std;

const int INF = -114514;
int num[7];
int coin[6] = {1, 3, 5, 7, 9, 13};

int main(){
    while(true){
        bool flag = false;
        for(int i = 0; i < 7; i += 1){
            cin >> num[i];
            if(num[i])
                flag = true;
        }
        if(!flag)
            break;
        int dp[5001] = {0};
        fill(dp + 1, dp + num[6] + 1, INF);
        for(int i = 0; i < 6; i += 1)
            for(int j = 1; j <= num[i]; j += 1)
                for(int k = num[6]; k >= coin[i]; k -= 1)
                    if(dp[k - coin[i]] != INF || k == coin[i])
                        dp[k] = max(dp[k], dp[k - coin[i]] + 1);
        if(dp[num[6]] == INF)
            cout << "impossible" << endl;
        else
            cout << dp[num[6]] << endl;
    }
    return 0;
}