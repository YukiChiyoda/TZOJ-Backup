#include <iostream>
#include <cstring>
using namespace std;

int n, m;
int map[1001][1001];
int visited[1001];
int degree[1001];

bool dfs(int s){
    for(int i = 1; i <= n; i += 1){
        if(map[s][i] && visited[i] == 0){
            visited[i] = 1;
            dfs(i);
        }
    }
    for(int i = 1; i <= n; i += 1){
        if(degree[i] % 2 != 0){
            return false;
        }
    }
    return true;
}

bool Do(){
    visited[1] = 1;
    if(!dfs(1)){
        return false;
    }
    for(int i = 1; i <= n; i += 1){
        if(visited[i] == 0){
            return false;
        }
    }
    return true;
}

int main(){
    while(cin >> n, n){
        cin >> m;
        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));
        memset(degree, 0, sizeof(degree));
        for(int i = 0; i < m; i += 1){
            int w, v;
            cin >> w >> v;
            map[w][v] = 1;
            map[v][w] = 1;
            degree[w] += 1, degree[v] += 1;
        }
        if(Do()){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}