#include <iostream>
using namespace std;

int r, c;
char map[10][10];
bool visited[10][10];
int answer;

void dfs(int i, int j){
    if(i < 0 || j < 0 || i >= r || j >= c || map[i][j] == '#' || visited[i][j])
        return;
    if(i == r - 1 && j == c - 1)
        answer += 1;
    visited[i][j] = true;
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    visited[i][j] = false;
}

int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i += 1)
        cin >> map[i];
    dfs(0, 0);
    cout << answer << endl;
    return 0;
}