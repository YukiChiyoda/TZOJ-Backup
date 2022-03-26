#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int log[21];
int num[100001];
int dp[100001][21];

void function(){
    log[0] = -1;
    for(int i = 1; i <= n; i += 1)
        dp[i][0] = num[i], log[i] = log[int(i >> 1)] + 1;
    for(int i = 1; i <= 20; i += 1)
        for(int j = 1; j + int(1 << i) - 1 <= n; j += 1)
            dp[j][i] = max(dp[j][i - 1], dp[j + int(1 << (i - 1))][i - 1]);
}

int find(int x, int y){
    int temp = log[y - x + 1];
    return max(dp[x][temp], dp[y - int(1 << temp) + 1][temp]);
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1)
        cin >> num[i];
    function();
    while(m--){
        int x, y;
        cin >> x >> y;
        cout << find(x, y) << endl;
    }
    return 0;
}