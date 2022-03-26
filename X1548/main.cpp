#include <iostream>
#define lefter l, mid, root << 1
#define righter mid + 1, r, root << 1 | 1

int n, m;
int tree[1000001 << 2];
int lazy[1000001 << 2];

inline void PushUp(int root){
    tree[root] = tree[root << 1] + tree[root << 1 | 1];
    //lazy[root] = lazy[root << 1] == lazy[root << 1 | 1] ? lazy[root << 1] : 0;
}

inline void PushDown(int root, int leng){
    if(!lazy[root])
        return;
    lazy[root << 1] += lazy[root],
    lazy[root << 1 | 1] += lazy[root];
    tree[root << 1] += lazy[root] * (leng - (leng >> 1)),
    tree[root << 1 | 1] += lazy[root] * (leng >> 1);
    lazy[root] = 0;
}

void build(int l = 1, int r = n, int root = 1){
    if(l == r){
        std::cin >> tree[root];
        return;
    }
    int mid = (l + r) >> 1;
    build(lefter);
    build(righter);
    PushUp(root);
}

void update(const int L, const int R, const int x, int l = 1, int r = n, int root = 1){
    if(L <= l && R >= r){
        tree[root] += (r - l + 1) * x;
        lazy[root] += x;
        return;
    }
    PushDown(root, r - l + 1);
    int mid = (l + r) >> 1;
    if(L <= mid)
        update(L, R, x, lefter);
    if(R > mid)
        update(L, R, x, righter);
    PushUp(root);
}

int query(const int L, const int R, int l = 1, int r = n, int root = 1){
    if(L <= l && R >= r)
        return tree[root];
    PushDown(root, r - l + 1);
    int temp = 0;
    int mid = (l + r) >> 1;
    if(L <= mid)
        temp += query(L, R, lefter);
    if(R > mid)
        temp += query(L, R, righter);
    return temp;
}

int main(){
    std::cin >> n >> m;
    build();
    while(m--){
        int k;
        std::cin >> k;
        if(k == 1){
            int a, b, c;
            std::cin >> a >> b >> c;
            update(a, b, c);
        }
        else{
            int a, b;
            std::cin >> a >> b;
            std::cout << query(a, b) << std::endl;
        }
    }
    return 0;
}