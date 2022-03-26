#include <iostream>
using namespace std;

int m, n;
char map[100][100];
int answer;

void dfs(int i, int j){
    if(i < 0 || j < 0 || i >= m || j >= n || map[i][j] == '*'){
        return;
    }
    map[i][j] = '*';
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    dfs(i - 1, j - 1);
    dfs(i - 1, j + 1);
    dfs(i + 1, j - 1);
    dfs(i + 1, j + 1);
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