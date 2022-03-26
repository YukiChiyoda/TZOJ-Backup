#include <iostream>
using namespace std;

int r, c;
char map[100][100];
int answer;

void dfs(int i, int j){
    if(i < 0 || j < 0 || i >= r || j >= c || map[i][j] == '#'){
        return;
    }
    if(map[i][j] == 'p'){
        answer += 1;
    }
    map[i][j] = '#'; //已搜索过的拒绝访问
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
}

int main(){
    while(cin >> r >> c, r && c){
        answer = 0;
        for(int i = 0; i < r; i += 1){
            cin >> map[i];
        }
        for(int i = 0; i < r; i += 1){
            for(int j = 0; j < c; j += 1){
                if(map[i][j] == 'd'){
                    dfs(i, j);
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}