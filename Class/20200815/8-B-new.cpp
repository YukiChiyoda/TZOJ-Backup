#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int NUM = 10;
int map[NUM][NUM];

int main(){
    int n;
    while(cin >> n, n){
        memset(map, 0x3f, sizeof(map));
        int u, v, w;
        while(cin >> u >> v >> w, u || v || w){
            map[u][v] = w;
        }
        for(int k = 0; k < n; k += 1){
            for(int i = 0; i < n; i += 1){
                for(int j = 0; j < n; j += 1){
                    map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
                }
            }
        }
        int k;
        cin >> k;
        if(map[0][k] != 0x3f3f3f3f){
            cout << map[0][k] << endl;
        }else{
            cout << "NO WAY!" << endl;
        }
    }
    return 0;
}