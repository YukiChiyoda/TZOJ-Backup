#include <iostream>
#include <cstring>
using namespace std;

struct T{
    int x;
    int y;
    int step;
};
T line[90];

int x1, y1;
int x2, y2;
int map[9][10];
int visited[9][10];

int dir[8][2] = {
    -2, -1,
    -1, -2,
    -2, 1,
    -1, 2,
    1, 2,
    2, 1,
    1, -2,
    2, -1
};

void dfs(){
    int total = 0;
    int curator = 0;
    line[total++] = {x1, y1, 0};
    visited[x1][y1] = 1;
    while(curator < total){
        if(line[curator].x == x2 && line[curator].y == y2){
            if(line[curator].step <= 6){
                cout << "Yes " << line[curator].step << endl;
                return;
            }
        }
        for(int i = 0; i < 8; i += 1){
            int tx = line[curator].x + dir[i][0];
            int ty = line[curator].y + dir[i][1];
            if(tx < 0 || ty < 0 || tx >= 9 || ty >= 10){
                continue;
            }
            if(visited[tx][ty] != 0){
                continue;
            }
            line[total++] = {tx, ty, line[curator].step + 1};
            visited[tx][ty] = 1;
        }
        curator += 1;
    }
    cout << "No" << endl;
}

int main(){
    while(cin >> x1 >> y1 >> x2 >> y2){
        memset(visited, 0, sizeof(visited));
        dfs();
    }
    return 0;
}