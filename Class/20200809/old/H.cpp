#include <iostream>
#include <cstring>
using namespace std;

char map[101][101];
int visited[100][100];
int n, m, k;
bool flag;
int dir[4][2]{
    -1, 0,
    0, -1,
    0, 1,
    1, 0
};

void dfs(int x, int y, int step, int turn){
    if(flag == true || step > k){
        return;
    }
    if(x < 0 || y < 0 || x >= m || y >= n || visited[x][y] == 1 || map[x][y] == '*'){
        return;
    }
    if(map[x][y] == 'P'){
        flag = true;
        return;
    }
    visited[x][y] = 1;
    for(int i = 0; i < 4; i += 1){
        if(i == turn){
            dfs(x + dir[i][0], y + dir[i][1], step, i);
        }else{
            dfs(x + dir[i][0], y + dir[i][1], step + 1, i);
        }
    }
    visited[x][y] = 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n >> k;
        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));
        flag = false;
        for(int i = 0; i < m; i += 1){
            cin >> map[i];
        }
        for(int i = 0; i < m; i += 1){
            for(int j = 0; j < n; j += 1){
                if(map[i][j] == 'S'){
                    dfs(i, j, -1, 4);
                }
            }
        }
        if(flag == false){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}