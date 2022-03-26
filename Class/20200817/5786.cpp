#include <iostream>
#include <algorithm>
using namespace std;

int father[10001];
int cost[10001];
int value[10001];
int dp[10001];

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int x, int y){
    x = find(x), y = find(y);
    if(x != y){
        father[y] = x;
        cost[x] += cost[y];
        value[x] += value[y];
    }
}

int main(){
    int n, m, w;
    cin >> n >> m >> w;
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
    }
    for(int i = 1; i <= n; i += 1){
        int c, d;
        cin >> cost[i] >> value[i];
    }
    for(int i = 1; i <= m; i += 1){
        int x, y;
        cin >> x >> y;
        merge(x, y);
    }
    for(int i = 1; i <= n; i += 1){
        find(i);
    }
    for(int i = 1; i <= n; i += 1){
        if(father[i] == i){
            for(int j = w; j >= cost[i]; j -= 1){
                dp[j] = max(dp[j], dp[j - cost[i]] + value[i]);
            }
        }
    }
    cout << dp[w] << endl;
    return 0;
}