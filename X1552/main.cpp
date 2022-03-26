#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 100001;

int n, k;
int tot;
int dep[N];
int f[N][21];
int m[N * 2], first[N * 2], go[N * 2];

void Add(int u, int v){
    m[++tot] = first[u]; first[u] = tot; go[tot] = v;
    m[++tot] = first[v]; first[v] = tot; go[tot] = u;
}

void Deal_first(int u, int father){
    dep[u] = dep[father] + 1;
    for(int i = 0; i <= 19; i += 1)
        f[u][i + 1] = f[f[u][i]][i];
    for(int e = first[u]; e; e = m[e]){
        int v = go[e];
        if(v == father)
            continue;
        f[v][0] = u;
        Deal_first(v, u);
    }
}

int LCA(int x, int y){
    if(dep[x] < dep[y])
        swap(x, y);
    for(int i = 20; i >= 0; i -= 1){
        if(dep[f[x][i]] >= dep[y])
            x = f[x][i];
        if(x == y)
            return x;
    }
    for(int i = 20; i >= 0; i -= 1)
        if(f[x][i] != f[y][i])
            x = f[x][i], y = f[y][i];
    return f[x][0];
}

int dist(int x, int y){
    return dep[x] + dep[y] - 2 * dep[LCA(x, y)];
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i += 1){
        int x, y;
        scanf("%d %d", &x, &y);
        Add(x, y);
    }
    Deal_first(1, 0);
    scanf("%d", &k);
    while(k--){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", dist(x, y));
    }
    return 0;
}