#include <iostream>
#include <cstring>
using namespace std;

int n, m;
int map[301][301];
int dis[301];
bool visited[301];

int main(){
    cin >> n >> m;
    memset(map, 0x3f, sizeof(map));
    memset(visited, 0, sizeof(visited));
    for(int i = 1; i <= n; i += 1){
        map[i][i] = 0;
    }
    for(int i = 1; i <= m; i += 1){
        int u, v, c;
        cin >> u >> v >> c;
        map[u][v] = map[v][u] = c;
    }
    for(int i = 1; i <= n; i += 1){
        dis[i] = map[1][i];
    }
    for(int i = 1; i <= n; i += 1){
        int key = 0;
        int temp = 0x3fffffff;
        for(int j = 1; j <= n; j += 1){
            if(!visited[j] && temp > dis[j]){
                temp = dis[j];
                key = j;
            }
        }
        visited[key] = true;
        for(int j = 1; j <= n; j += 1){
            if(!visited[j] && dis[j] > map[j][key]){
                dis[j] = map[j][key];
            }
        }
    }
    int answer = -0x3fffffff;
    for(int i = 1; i <= n; i += 1){
        answer = answer > dis[i] ? answer : dis[i];
    }
    cout << n - 1 << " " << answer << endl;
    return 0;
}