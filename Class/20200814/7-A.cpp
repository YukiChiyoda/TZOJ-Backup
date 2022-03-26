#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

const int NUM = 31;
int map[NUM][NUM];
int visited[NUM];
int n, e;

void dfs(int s){
    for(int i = 1; i <= n; i += 1){
        if(map[s][i] && visited[i] == 0){
            cout << " " << i;
            visited[i] = 1;
            dfs(i);
        }
    }
}

void bfs(int s){
    memset(visited, 0, sizeof(visited));
    visited[1] = 1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        s = q.front();
        q.pop();
        for(int i = 1; i <= n; i += 1){
            if(map[s][i] && visited[i] == 0){
                cout << " " << i;
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main(){
    while(cin >> n >> e){
        memset(map, 0, sizeof(map));
        for(int i = 0; i < e; i += 1){
            int w, v;
            cin >> w >> v;
            map[w][v] = 1;
            map[v][w] = 1;
        }
        memset(visited, 0, sizeof(visited));
        cout << 1;
        visited[1] = 1;
        dfs(1);
        cout << " " << endl;
        cout << 1;
        bfs(1);
        cout << " " << endl;
    }
    return 0;
}