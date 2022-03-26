#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int x, y;
    int step;
};

int r, c;
char map[40][40];

int bfs(){
    queue <Node> q;
    q.push({0, 0, 1});
    map[0][0] = '#';
    while(!q.empty()){
        Node temp = q.front();
        q.pop();
        if(temp.x == r - 1 && temp.y == c - 1)
            return temp.step;
        if(temp.x < r - 1 && map[temp.x + 1][temp.y] == '.')
            q.push({temp.x + 1, temp.y, temp.step + 1}), map[temp.x + 1][temp.y] = '#';
        if(temp.y < c - 1 && map[temp.x][temp.y + 1] == '.')
            q.push({temp.x, temp.y + 1, temp.step + 1}), map[temp.x][temp.y + 1] = '#';
        if(temp.x > 0 && map[temp.x - 1][temp.y] == '.')
            q.push({temp.x - 1, temp.y, temp.step + 1}), map[temp.x - 1][temp.y] = '#';
        if(temp.y > 0 && map[temp.x][temp.y - 1] == '.')
            q.push({temp.x, temp.y - 1, temp.step + 1}), map[temp.x][temp.y - 1] = '#';
    }
    return -1;
}

int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i += 1)
        cin >> map[i];
    cout << bfs() << endl;
    return 0;
}