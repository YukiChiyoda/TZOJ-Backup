#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int M = 10000;
int dp[M], a[M];

int main(){
    int n;
    while(cin >> n){
        memset(dp, 0,sizeof(dp));
        for(int i = 0; i < n; i += 1){
            cin >> a[i];
            for(int j = 0; j < i; j += 1){
                if(a[i] > a[j])     dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        int answer = dp[0];
        for(int i = 0; i < n; i += 1){
            answer = max(answer, dp[i]);
        }
        cout << answer + 1 << endl;
    }
    return 0;
}