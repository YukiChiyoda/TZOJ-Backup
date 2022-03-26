#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 5002;

int n, r;
int dp[N][N];

inline int read(){
    int cache = 0;
    bool flag = false;
    char temp = getchar();
    for( ; !isdigit(temp); temp = getchar())
        if(temp == '-')
            flag |= 1;
    for( ; isdigit(temp); temp = getchar())
        cache = (cache << 3) + (cache << 1) + (temp ^ '0');
    return flag ? -cache : cache;
}

int main(){
    n = read(), r = read();
    for(int i = 0; i < n; i += 1){
        int x = read(), y = read(), v = read();
        dp[x + 1][y + 1] += v;
    }
    for(int i = 1; i < N; i += 1)
        for(int j = 1; j < N; j += 1)
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
    int answer = dp[r][r];
    for(int i = r; i < N; i += 1)
        for(int j = r; j < N; j += 1)
            answer = max(answer, dp[i][j] - dp[i - r][j] - dp[i][j - r] + dp[i - r][j - r]);
    printf("%d\n", answer);
    return 0;
}