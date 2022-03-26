#include <iostream>
#include <cstring>
using namespace std;

char map[100][100];
int n, m;
bool flag;

void dfs(int x, int y){
    if(flag == true){
        return;
    }
    if(x < 0 || y < 0 || x >= m || y >= n || map[x][y] == '*'){
        return;
    }
    if(map[x][y] == 'P'){
        cout << "YES" << endl;
        flag = true;
        return;
    }
    map[x][y] = '*';
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

int main(){
    while(cin >> n >> m, n && m){
        memset(map, 0, sizeof(map));
        flag = false;
        for(int i = 0; i < m; i += 1){
            cin >> map[i];
        }
        for(int i = 0; i < m; i += 1){
            for(int j = 0; j < n; j += 1){
                if(map[i][j] == 'S'){
                    dfs(i, j);
                }
            }
        }
        if(flag == false){
            cout << "NO" << endl;
        }
    }
    return 0;
}