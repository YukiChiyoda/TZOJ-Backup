#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int x1, y1;
int x2, y2;
int map[9][10];
int visited[9][10];
int answer;

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

void dfs(int x, int y, int s){
    if(x < 0 || y < 0 || x >= 9 || y >= 10){
        return;
    }
    if(visited[x][y] != 0){
        return;
    }
    if(s > 6){
        return;
    }
    if(x == x2 && y == y2){
        answer = min(answer, s);
        return;
    }
    visited[x][y] = 1;
    for(int i = 0; i < 8; i += 1){
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        dfs(tx, ty, s + 1);
    }
    visited[x][y] = 0;
}

int main(){
    while(cin >> x1 >> y1 >> x2 >> y2){
        answer = 114514;
        memset(visited, 0, sizeof(visited));
        dfs(x1, y1, 0);
        if(answer <= 6){
            cout << "Yes " << answer << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}