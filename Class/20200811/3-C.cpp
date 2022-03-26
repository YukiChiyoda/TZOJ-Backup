#include <iostream>
#include <algorithm>
using namespace std;

const int M = 201, N = 30;
int dp[M];

int main(){
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < n; i += 1){
        int w, c, p;
        cin >> w >> c >> p;
        if(p != 0){ //01背包，从大到小
            for(int k = 0; k < p; k += 1){
                for(int j = m; j >= w; j -= 1){
                    dp[j] = max(dp[j], dp[j - w] + c);
                }
            }
        }else{ //完全背包，从小到大
            for(int j = w; j <= m; j += 1){
                dp[j] = max(dp[j], dp[j - w] + c);
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}