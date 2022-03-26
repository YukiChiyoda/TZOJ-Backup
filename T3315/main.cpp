#include <iostream>
#include <algorithm>
#include <cstring>
#define lefter l, mid, root << 1
#define righter mid + 1, r, root << 1 | 1

int n, m, t;
int tree[60001 << 2];
int lazy[60001 << 2];

inline void PushUp(int root){
    tree[root] = std::min(tree[root << 1], tree[root << 1 | 1]);
}

inline void PushDown(int root, int leng){
    if(!lazy[root])
        return;
    lazy[root << 1] += lazy[root];
    lazy[root << 1 | 1] += lazy[root];
    tree[root << 1] += lazy[root];
    tree[root << 1 | 1] += lazy[root];
    lazy[root] = 0;
}

void build(int l = 1, int r = n, int root = 1){
    if(l == r){
        tree[root] = m;
        return;
    }
    int mid = (l + r) >> 1;
    build(lefter);
    build(righter);
    PushUp(root);
}

void update(const int L, const int R, const int X, int l = 1, int r = n, int root = 1){
    if(L <= l && R >= r){
        tree[root] += X;
        lazy[root] += X;
        return;
    }
    int mid = (l + r) >> 1;
    PushDown(root, r - l + 1);
    if(L <= mid)
        update(L, R, X, lefter);
    if(R > mid)
        update(L, R, X, righter);
    PushUp(root);
}

int query(const int L, const int R, int l = 1, int r = n, int root = 1){
    if(L <= l && R >= r)
        return tree[root];
    int temp = INT_MAX;
    int mid = (l + r) >> 1;
    PushDown(root, r - l + 1);
    if(L <= mid)
        temp = std::min(temp, query(L, R, lefter));
    if(R > mid)
        temp = std::min(temp, query(L, R, righter));
    return temp;
}

int main(){
    while(std::cin >> n >> m >> t){
        memset(tree, 0, sizeof(tree));
        memset(lazy, 0, sizeof(lazy));
        build();
        while(t--){
            int x, y, v;
            std::cin >> x >> y >> v;
            y -= 1;
            if(query(x, y) >= v){
                update(x, y, -v);
                std::cout << "Yes" << std::endl;
            }else
                std::cout << "No" << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}