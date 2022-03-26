#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100001;
int n, m;
int q;
int fa[N], dep[N], f[N][16], g[N][16];
int T, nxt[N * 2], lst[N * 2], to[N * 2], vis[N * 2];

struct point{
    int a, b, v;
}t[N];

bool cmp(const point &x, const point &y){
    return x.v <= y.v;
}

void add(int x, int y, int z){
    nxt[++T] = lst[x]; lst[x] = T; to[T] = y; vis[T] = z;
    nxt[++T] = lst[y]; lst[y] = T; to[T] = x; vis[T] = z;
}

int find(int x){
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void deal(int u, int father){
    dep[u] = dep[father] + 1;
    for(int i = 0; i <= 14; i += 1){
        f[u][i + 1] = f[f[u][i]][i];
        g[u][i + 1] = max(g[u][i], g[f[u][i]][i]);
    }
    for(int i = lst[u]; i; i = nxt[i]){
        int v = to[i];
        if(v == father)
            continue;
        f[v][0] = u;
        g[v][0] = vis[i];
        deal(v, u);
    }
}

int LCA(int x, int y){
    int ans = 0;
    if(dep[x] < dep[y])
        swap(x, y);
    if(x == y)
        return ans;
    for(int i = 15; i >= 0; i -= 1)
        if(dep[f[x][i]] >= dep[y]){
            ans = max(ans, g[x][i]);
            x = f[x][i];
            if(x == y)
                return ans;
        }
    for(int i = 15; i >= 0; i -= 1)
        if(f[x][i] != f[y][i]){
            ans = max(ans, g[x][i]);
            ans = max(ans, g[y][i]);
            x = f[x][i];
            y = f[y][i];
        }
    return max(ans, max(g[x][0], g[y][0]));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1)
        fa[i] = i;
    for(int i = 1; i <= m; i += 1)
        cin >> t[i].a >> t[i].b >> t[i].v;
    sort(t + 1, t + m + 1, cmp);
    for(int i = 1; i < m; i += 1){
        int x = find(t[i].a), y = find(t[i].b);
        if(x != y){
            fa[x] = y;
            add(t[i].a, t[i].b, t[i].v);
        }
    }
    deal(1, 0);
    cin >> q;
    for(int i = 0; i < q; i += 1){
        int x, y;
        cin >> x >> y;
        cout << LCA(x, y) << endl;
    }
    return 0;
}