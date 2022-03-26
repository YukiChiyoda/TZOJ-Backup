#include <iostream>
#include <cstring>
#define lefter l, mid, root << 1
#define righter mid + 1, r, root << 1 | 1
using namespace std;

int long long sum[500001 << 2];

void build(int l, int r, int root){
    if(l == r){
        cin >> sum[root];
        return;
    }
    int mid = (l + r) >> 1;
    build(lefter);
    build(righter);
    sum[root] = sum[root << 1] + sum[root << 1 | 1];
}

void update(const int p, const int x, int l, int r, int root){
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

int query(const int L, const int R, int l, int r, int root){
    if(L <= l && R >= r)
        return sum[root];
    int long long temp = 0;
    int mid = (l + r) >> 1;
    if(L <= mid)
        temp += query(L, R, lefter);
    if(R > mid)
        temp += query(L, R, righter);
    return temp;
}

int main(){
    int n;
    while(cin >> n){
        memset(sum, 0, sizeof(sum));
        build(1, n, 1);
        int t;
        cin >> t;
        while(t--){
            char o;
            int a, b;
            cin >> o >> a >> b;
            if(o == 'C')
                update(a, b, 1, n, 1);
            else if(o == 'Q')
                cout << query(a, b, 1, n, 1) << endl;
        }
    }
    return 0;
}