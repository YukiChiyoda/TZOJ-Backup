#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int M = 10001, N = 100;
int dp[M];
int w[N];

int main(){
    int m, n;
    while(cin >> n){
        memset(dp, 0, sizeof(dp));
        int sum = 0;
        for(int i = 0; i < n; i += 1){
            cin >> w[i];
            sum += w[i];
        }
        m = sum / 2;
        for(int i = 0; i < n; i += 1){
            for(int j = m; j >= w[i]; j -= 1){
                dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
            }
        }
        if(dp[m] * 2 == sum){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}