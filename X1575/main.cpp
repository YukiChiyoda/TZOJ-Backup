#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, q;
int map[101][101];
int root[101];
int Left[101], Right[101];
int dp[101][101];

void SetTree(int u){
    for(int i = 1; i <= n; i += 1)
        if(map[i][u] >= 0){
            Left[u] = i;
            root[i] = map[i][u];
            map[i][u] = map[u][i] = -1;
            SetTree(i);
            break;
        }
    for(int i = 1; i <= n; i += 1)
        if(map[i][u] >= 0){
            Right[u] = i;
            root[i] = map[i][u];
            map[i][u] = map[u][i] = -1;
            SetTree(i);
            break;
        }
}

int DP(int i, int j){
    if(!j)
        return 0;
    if(!Left[i] && !Right[i])
        return root[i];
    if(dp[i][j])
        return dp[i][j];
    for(int k = 0; k <= j - 1; k += 1)
        dp[i][j] = max(dp[i][j], DP(Left[i], k) + DP(Right[i], j - k - 1) + root[i]);
    return dp[i][j];
}

int main(){
    cin >> n >> q;
    memset(map, -1, sizeof(map));
    for(int i = 1; i <= n - 1; i += 1){
        int x, y, z;
        cin >> x >> y >> z;
        map[x][y] = map[y][x] = z;
    }
    SetTree(1);
    cout << DP(1, q + 1) << endl;
    return 0;
}