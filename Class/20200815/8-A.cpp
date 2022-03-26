#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

const int NUM = 1001;
int n, k;
int map[NUM][NUM];
int visited[NUM];
int bfs_begin, bfs_end;

struct T{
    int next;
    int step;
};

void bfs(){
    visited[bfs_begin] = 1;
    queue<T> q;
    q.push({bfs_begin, 0});
    while(!q.empty()){
        T cur = q.front();
        if(cur.next == bfs_end){
            cout << cur.step - 1 << endl;
            return;
        }
        q.pop();
        for(int i = 1; i <= n; i += 1){
            if(map[cur.next][i] && visited[i] == 0){
                visited[i] = 1;
                q.push({i, cur.step + 1});
            }
        }
    }
    cout << "No solution" << endl;
}

int main(){
    while(cin >> n >> k, n || k){
        memset(map, 0, sizeof(map));
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < k; i += 1){
            int x, y;
            cin >> x >> y;
            map[x][y] = 1, map[y][x] = 1;
        }
        cin >> bfs_begin >> bfs_end;
        bfs();
    }
    return 0;
}