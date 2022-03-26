#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

const int MAXVEX = 31;
int visited[MAXVEX];

typedef struct{
    int map[MAXVEX][MAXVEX];
    int vexnum;
}Mgraph;

void bfs(Mgraph g, int cur){
    visited[cur] = 1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        cur = q.front();
        cout << cur << " ";
        q.pop();
        for(int i = 1; i <= g.vexnum; i += 1){
            if(g.map[cur][i] && visited[i] == 0){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

void creat_Mgraph(Mgraph *g, int m, int n){
    g -> vexnum = m;
    memset(g -> map, 0, sizeof(g -> map));
    for(int i = 0; i < n; i += 1){
        int u, v;
        cin >> u >> v;
        g -> map[u][v] = 1, g -> map[v][u] = 1;
    }
}

int main()
{   
    Mgraph g;
    int m,n;
    while(cin>>m>>n)
    {
        creat_Mgraph(&g,m,n);
        for(int i=1;i<=m;i++)
            visited[i]=0;
        bfs(g,1);
        cout<<endl;
    }
    return 0;
}