#include <iostream>
#include <algorithm>
using namespace std;

const int M = 1001, N = 6;
int dp[M];
int w[N] = {1, 2, 3, 5, 10, 20};

int main(){
    dp[0] = 1;
    for(int i = 0; i < N; i += 1){
        int p;
        cin >> p;
        for(int j = 0; j < p; j += 1){
            for(int k = 1000; k >= w[i]; k -= 1){
                if(dp[k - w[i]] != 0){
                    dp[k] = 1;
                }
            }
        }
    }
    int answer = 0;
    for(int i = 1; i < M; i += 1){
        answer += dp[i];
    }
    cout << "Total=" << answer << endl;
    return 0;
}