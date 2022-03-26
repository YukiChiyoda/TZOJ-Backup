#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int NUM = 101;
int map[NUM][NUM];

int main(){
    int n, m;
    while(cin >> n >> m, n || m){
        memset(map, 0x3f3f3f3f, sizeof(map));
        int u, v, w;
        for(int i = 0; i < m; i += 1){
            cin >> u >> v >> w;
            map[u][v] = w;
            map[v][u] = w;
        }
        for(int k = 1; k <= n; k += 1){
            for(int i = 1; i <= n; i += 1){
                for(int j = 1; j <= n; j += 1){
                    map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
                }
            }
        }
        if(map[1][n] != 0x3f3f3f3f){
            cout << map[1][n] << endl;
        }else{
            cout << "NO WAY!" << endl;
        }
    }
    return 0;
}