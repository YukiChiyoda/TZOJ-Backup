#include <iostream>
using namespace std;

struct T{
    int x;
    int y;
    int step;
};
T line[490000];

int n;
char map[701][701];
int visited[701][701];
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

void bfs(int x1, int y1){
    int total = 0;
    int curator = 0;
    line[total++] = {x1, y1, 0};
    visited[x1][y1] = 1;
    while(curator < total){
        for(int i = 0; i < 8; i += 1){
            int tx = line[curator].x + dir[i][0];
            int ty = line[curator].y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= n || ty >= n){
                continue;
            }
            if(visited[tx][ty] != 0 || map[tx][ty] == '0'){
                continue;
            }
            line[total++] = {tx, ty, line[curator].step + 1};
            visited[tx][ty] = 1;
        }
        curator += 1;
    }
}

int main(){
    answer = 0;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        cin >> map[i];
    }
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            if(map[i][j] == '1' && visited[i][j] == 0){
                bfs(i, j);
                answer += 1;
            }
        }
    }
    cout << answer << endl;
    return 0;
}