#include <cstdio>
#include <algorithm>

const int maxn = 100001;
int n,c;
int a[maxn];

bool check(int d){
    int cow = 1;
    int now = a[1] + d;
    for(int i = 2; i <= n; i += 1){
        if(a[i] < now)
            continue;
        cow += 1;
        now = a[i] + d;
    }
    return cow >= c;
}

int main(){
    scanf("%d%d", &n, &c);
    for(int i = 1; i <= n; i += 1)
       scanf("%d", &a[i]);
    std::sort(a + 1, a + n + 1);
    int l = 0, r = a[n] - a[1];
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid))
            l = mid + 1;
        else
            r = mid - 1; 
    }
    printf("%d", r);
    return 0;
}