#include <cstdio>
#define lefter l, mid, root << 1
#define righter mid + 1, r, root << 1 | 1
#define pusher() tree[root] = tree[root << 1] + tree[root << 1 | 1]

int n, m;
int tree[100001 << 2];

void update(const int p, const int x, int l = 1, int r = n, int root = 1){
    if(l == r){
        tree[root] += x;
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
        temp += query(L, R, lefter);
    if(R > mid)
        temp += query(L, R, righter);
    return temp;
}

int main(){
    scanf("%d %d", &n, &m);
    while(m--){
        int k, a, b;
        scanf("%d %d %d", &k, &a, &b);
        if(!k)
            update(a, b);
        else
            printf("%d\n", query(a, b));
    }
    return 0;
}