#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct T{
    int v;
    double w;
    friend bool operator < (T a, T b){
        return a.w > b.w;
    }
};

const double INF = 0x7fffffffffffffff;

int n, m, s;
vector<T> V[1001];
double dis[1001];

void dij(int s){
    priority_queue<T> q;
    fill(dis, dis + n + 1, INF);
    dis[s] = 0;
    q.push({s, 0});
    while(!q.empty()){
        T t = q.top();
        q.pop();
        int u = t.v;
        for(int i = 0; i < V[u].size(); i += 1){
            int v = V[u][i].v;
            double w = V[u][i].w;
            if(dis[u] + w < dis[v]){
                dis[v] = dis[u] + w;
                q.push({v, dis[v]});
            }
        }
    }
}

int main(){
    cin >> n >> m >> s;
    for(int i = 0; i < m; i += 1){
        int u, v;
        double w;
        cin >> u >> v >> w;
        V[v].push_back({u, w});
    }
    for(int i = 0; i < s; i += 1){
        int start, k;
        cin >> start >> k;
        dij(start);
        double answer = INF;
        for(int j = 0; j < k; j += 1){
            int x;
            cin >> x;
            answer = min(answer, dis[x]);
        }
        cout << "Scenario " << i + 1 << ":" << endl;
        if(answer == INF){
            cout << "Impossible." << endl;
        }else{
            printf("%.2f\n", answer);
        }
        cout << endl;
    }
    return 0;
}