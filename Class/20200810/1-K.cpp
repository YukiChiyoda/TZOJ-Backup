#include <iostream>
#include <cstring>
using namespace std;

int map[101][101];
int visited[100][100];
int m, n;
int begin_x, begin_y;
int end_x, end_y;
int dir[4][2]{
    -1, 0,
    0, -1,
    0, 1,
    1, 0
};
int answer;

void dfs(int x, int y, int step, int turn){
    if(x < 0 || y < 0 || x >= m || y >= n || visited[x][y] == 1 || map[x][y] == 1){
        return;
    }
    if(x == end_x - 1 && y == end_y - 1){
        if(answer > step){
            answer = step;
        }
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
    cin >> m >> n;
    memset(map, 0, sizeof(map));
    memset(visited, 0, sizeof(visited));
    answer = 114514;
    for(int i = 0; i < m; i += 1){
        for(int j = 0; j < n; j += 1){
            cin >> map[i][j];
        }
    }
    cin >> begin_x >> begin_y >> end_x >> end_y;
    dfs(begin_x - 1, begin_y - 1, -1 , 4);
    cout << answer << endl;
    return 0;
}