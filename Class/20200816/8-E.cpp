#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int NUM = 1001;
int map[NUM][NUM];
int dis[NUM];
int visited[NUM]; //记录是否已被松弛
const int n = 1000;

void dij(int s){
    memset(dis, 0, sizeof(dis));
    for(int i = 1; i <= n; i += 1){
        dis[i] = map[s][i];
    }
    for(int i = 0; i <= n; i += 1){ //松弛数次
        int answer = 0x3fffffff;
        int u;
        for(int j = 1; j <= n; j += 1){
            if(!visited[j] && dis[j] < answer){
                u = j;
                answer = dis[j];
            }
        }
        visited[u] = 1;
        if(answer == 0x3ffffff){
            break;
        }
        for(int j = 1; j <= n; j += 1){
            if(!visited[j] && dis[u] + map[u][j] < dis[j]){
                dis[j] = dis[u] + map[u][j];
            }
        }
    }
}

int main(){
    int t, s, d;
    while(cin >> t >> s >> d){
        memset(map, 0x3f, sizeof(map));
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < t; i += 1){
            int u, v, w;
            cin >> u >> v >> w;
            map[u][v] = map[v][u] = min(w, map[u][v]);
        }
        for(int i = 0; i < s; i += 1){
            int x;
            cin >> x;
            map[x][0] = map[0][x] = 0;
        }
        dij(0);
        int answer = 0x3fffffff;
        for(int i = 0; i < d; i += 1){
            int x;
            cin >> x;
            answer = min(answer, dis[x]);
        }
        cout << answer << endl;
    }
    return 0;
}