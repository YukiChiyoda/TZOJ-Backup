#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int B, ans;
int n, m;
int belong[1000001];

void init(int n){
    B = sqrt(n);
    ans = 0;
    for(int i = 1; i <= n; i++)
        belong[i] = (i - 1) / B + 1;
}

void query(int l,int r){
    if(belong[l] == belong[r]){
        for(int i = l; i <= r; i++)
            ++ans;
        return;
    }
    for(int i = belong[l] + 1; i < belong[r]; i++)
        ++ans;
    int R = belong[l] * B, L = (belong[r] - 1) * B + 1;
    for(int i = L; i <= r; i++)
        ++ans;
    for(int i = l; i <= R; i++)
        ++ans;
}

int main(){
    //freopen("block.in", "r", stdin);
    //freopen("block.out", "w", stdout);
    cin >> n >> m;
    init(n);
    for(int i = 1, l, r; i <= m; i++){
        cin >> l >> r;
        query(l, r);
    }
    cout << ans << endl;
}