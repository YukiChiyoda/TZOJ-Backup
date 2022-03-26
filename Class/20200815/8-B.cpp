#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int n, k;
int map[10][10];
int visited[10];
int dis[10];
const int INF = 1e8;

void bfs(){
    for(int i = 0; i <= n; i += 1)    dis[i] = INF;
    visited[0] = 1;
    dis[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 1; i <= n; i += 1){
            if(map[u][i] && dis[i] > dis[u]+map[u][i]){
                dis[i] = dis[u] + map[u][i];
                if(!visited[i])    q.push(i);
            }
        }
    }
    if(dis[k] == INF)
        cout << "NO WAY!" << endl;
    else
        cout << dis[k] << endl;
}

int main(){
    while(cin >> n, n){
        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));
        int a, b, t;
        while(cin >> a >> b >> t, a || b || t){
            map[a][b] = t;
        }
        cin >> k;
        bfs();
    }
    return 0;
}