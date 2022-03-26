#include <iostream>
#include <vector>
using namespace std;

const int N = 100001;
const int long long MOD = 1000000007;

struct Node{
    int End;
    int long long Dis;
};

int n, m;
int long long answer = 0;
vector <Node> map[N];
int father[N];
int dis[N];

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

bool merge(int x, int y){
    x = find(x), y = find(y);
    if(x != y){
        father[x] = y;
        return true;
    }
    return false;
}

void dfs(int Begin, int Father, int long long Sum){
    dis[Begin] = 1;
    vector <Node> :: iterator it;
    for(it = map[Begin].begin(); it != map[Begin].end(); it ++){
        if(it -> End == Father)
            continue;
        dfs(it -> End, Begin, it -> Dis);
        dis[Begin] += dis[it -> End];
    }
    if(Begin != 1){
        int long long num = n - dis[Begin];
        answer += num * dis[Begin] % MOD * Sum % MOD;
        answer %= MOD;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1)
        father[i] = i;
    int long long temp = 1;
    while(m--){
        temp <<= 1;
        temp %= MOD;
        int x, y;
        cin >> x >> y;
        if(merge(x, y))
            map[x].push_back({y, temp}),
            map[y].push_back({x, temp});
    }
    dfs(1, 0, 0);
    cout << answer << endl;
    return 0;
}