#include <iostream>
using namespace std;

int n, m;
int map[10001][301] = {0};
int in_degree[10001];
int answer[10001];
int money;

bool topsort(){
    int tot = 0;
    int k = 0;
    while(tot < n){
        int t = 0;
        for(int i = 1; i <= n; i += 1){
            if(!in_degree[i]){
                tot += 1;
                money += 100;
                answer[++t] = i;
                in_degree[i] = 0x3fffffff;
            }
        }
        if(!t)    return false;
        money += k * t; //k表示在第几层，t表示有几个子节点
        k += 1;
        for(int i = 1; i <= t; i += 1){
            for(int j = 1; j <= map[answer[i]][0]; j += 1){
                in_degree[map[answer[i]][j]] -= 1;
            }
        }
    }
    return true;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= m; i += 1){
        int x, y;
        cin >> x >> y;
        in_degree[x] += 1;
        map[y][++map[y][0]] = x;
    }
    if(topsort())    cout << money << endl;
    else    cout << "Poor Xed" << endl;
    return 0;
}