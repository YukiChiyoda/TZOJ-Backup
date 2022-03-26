#include <iostream>
using namespace std;

int m, n;
char map[100][100];
int answer;

int dir[8][2] = {
    -1, -1,
    -1, 0,
    -1, 1,
    0, -1,
    0, 1,
    1, -1,
    1, 0,
    1, 1
};

void dfs(int x, int y){
    if(x < 0 || y < 0 || x >= m || y >= n || map[x][y] == '*'){
        return;
    }
    map[x][y] = '*';
    for(int i = 0; i < 8; i += 1){
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        dfs(tx, ty);
    }
}

int main(){
    while(cin >> m >> n, m && n){
        answer = 0;
        for(int i = 0; i < m; i += 1){
            cin >> map[i];
        }
        for(int i = 0; i < m; i += 1){
            for(int j = 0; j < n; j += 1){
                if(map[i][j] == '@'){
                    dfs(i, j);
                    answer += 1;
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}