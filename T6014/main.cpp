#include <iostream>
#include <cstring>
#define lefter l, mid, root << 1
#define righter mid + 1, r, root << 1 | 1
using namespace std;

int sum[50001 << 2];

void build(int l, int r, int root = 1){
    if(l == r){
        cin >> sum[root];
        return;
    }
    int mid = (l + r) >> 1;
    build(lefter);
    build(righter);
    sum[root] = sum[root << 1] + sum[root << 1 | 1];
}

void update(const int p, const int x, int l, int r, int root = 1){
    if(l == r){
        sum[root] += x;
        return;
    }
    int mid = (l + r) >> 1;
    if(p <= mid)
        update(p, x, lefter);
    else
        update(p, x, righter);
    sum[root] = sum[root << 1] + sum[root << 1 | 1];
}

int query(const int L, const int R, int l, int r, int root = 1){
    if(L <= l && R >= r)
        return sum[root];
    int temp = 0;
    int mid = (l + r) >> 1;
    if(L <= mid)
        temp += query(L, R, lefter);
    if(R > mid)
        temp += query(L, R, righter);
    return temp;
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i += 1){
        memset(sum, 0, sizeof(sum));
        int n;
        cin >> n;
        build(1, n);
        cout << "Case " << i << ":" << endl;
        string oper;
        while(cin >> oper, oper != "End"){
            int a, b;
            cin >> a >> b;
            if(oper == "Add")
                update(a, b, 1, n);
            else if(oper == "Sub")
                update(a, -b, 1, n);
            else
                cout << query(a, b, 1, n) << endl;
        }
    }
    return 0;
}