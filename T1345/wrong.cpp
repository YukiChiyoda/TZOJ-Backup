//Wrong
#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x, y;
    int step;
    int box_x, box_y;
};

const int dir[4][2] = {
    1, 0,
    0, 1,
    -1, 0,
    0, -1
};

int t, m, n;
int map[7][7];
int Man_x, Man_y;
int Box_x, Box_y;
int End_x, End_y;

bool check(int x, int y){
    return x >= 0 && y >= 0 && x < m && y < n && map[x][y] != 1;
}

int bfs(){
    queue <Node> q;
    q.push({Man_x, Man_y, 0, Box_x, Box_y});
    while(!q.empty()){
        Node temp = q.front();
        q.pop();
        cout << "DBG: " << ++t << temp.x << temp.y << temp.box_x << temp.box_y << temp.step << endl;
        for(int i = 0; i < 4; i += 1){
            temp.x += dir[i][0],
            temp.y += dir[i][1],
            temp.step += 1;
            if(temp.x == temp.box_x && temp.y == temp.box_y)
                temp.box_x += dir[i][0],
                temp.box_y += dir[i][1];
            if(!check(temp.x, temp.y) || !check(temp.box_x, temp.box_y))
                continue;
            if(temp.box_x == End_x && temp.box_y == End_y)
                return temp.step;
            q.push(temp);
        }
    }
    return -1;
}

int main(){
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i = 0; i < m; i += 1)
            for(int j = 0; j < n; j += 1){
                cin >> map[i][j];
                if(map[i][j] == 2)
                    Box_x = i, Box_y = j;
                if(map[i][j] == 3)
                    End_x = i, End_y = j;
                if(map[i][j] == 4)
                    Man_x = i, Man_y = j;
            }
        cout << bfs() << endl;
    }
    return 0;
}