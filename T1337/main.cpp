#include <iostream>
#include <cstring>
#define lefter l, mid, root << 1
#define righter mid + 1, r, root << 1 | 1
#define pusher() tree[root] = max(tree[root << 1], tree[root << 1 | 1])
using namespace std;

int n, m;
int tree[200001 << 2];

void build(int l = 1, int r = n, int root = 1){
    if(l == r){
        cin >> tree[root];
        return;
    }
    int mid = (l + r) >> 1;
    build(lefter);
    build(righter);
    pusher();
}

void update(int p, int x, int l = 1, int r = n, int root = 1){
    if(l == r){
        tree[root] = x;
        return;
    }
    int mid = (l + r) >> 1;
    if(p <= mid)
        update(p, x, lefter);
    else
        update(p, x, righter);
    pusher();
}

int query(const int L, const int R, int l = 1, int r = n, int root = 1){
    if(L <= l && R >= r)
        return tree[root];
    int temp = 0;
    int mid = (l + r) >> 1;
    if(L <= mid)
        temp = max(temp, query(L, R, lefter));
    if(R > mid)
        temp = max(temp, query(L, R, righter));
    return temp;
}

int main(){
    while(cin >> n >> m){
        memset(tree, 0, sizeof(tree));
        build();
        while(m--){
            char o;
            int a, b;
            cin >> o >> a >> b;
            if(o == 'Q')
                cout << query(a, b) << endl;
            else if(o == 'U')
                update(a, b);
        }
    }
    return 0;
}