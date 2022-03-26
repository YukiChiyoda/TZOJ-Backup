#include <iostream>
using namespace std;

int n;
int visited[11];
int attention[11];

void dfs(int total){
    if(total == n){
        cout << attention[0];
        for(int i = 1; i < n; i += 1){
            cout << " " << attention[i];
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i += 1){
        if(visited[i] == 0){
            attention[total] = i;
            visited[i] = 1;
            dfs(total + 1);
            visited[i] = 0;
        }
    }
}

int main(){
    cin >> n;
    dfs(0);
    return 0;
}