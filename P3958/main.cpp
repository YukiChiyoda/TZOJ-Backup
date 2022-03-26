#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

struct Hole{
    int long long x, y, z;
};

int n;
bool flag;
int long long h, r;
bool visited[1001];
Hole hole[1001];

double calc(int a, int b){
    double x1 = double(hole[a].x), y1 = double(hole[a].y), z1 = double(hole[a].z);
    double x2 = double(hole[b].x), y2 = double(hole[b].y), z2 = double(hole[b].z);
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2));
}

void dfs(int x){
    if(hole[x].z + r >= h){
        flag = true;
        return;
    }
    visited[x] = true;
    for(int i = 1; i <= n; i += 1)
        if(!visited[i] && calc(x, i) <= r * 2)
            dfs(i);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> h >> r;
        flag = false;
        memset(hole, 0, sizeof(hole));
        memset(visited, false, sizeof(visited));
        for(int i = 1; i <= n; i += 1)
            cin >> hole[i].x >> hole[i].y >> hole[i].z;
        for(int i = 1; i <= n; i += 1){
            if(!visited[i] && hole[i].z - r <= 0)
                dfs(i);
            if(flag){
                cout << "Yes" << endl;
                break;
            }
        }
        if(!flag)
            cout << "No" << endl;
    }
    return 0;
}