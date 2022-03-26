#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int a[105][1005];
int w[105], c[105];

int main(){
    int m, n;
    cin >> m >> n;
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i += 1){
        cin >> w[i] >> c[i];
    }
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= m; j += 1){
            if(j < w[i]){
                a[i][j] = a[i - 1][j];
            }else{
                a[i][j] = max(a[i - 1][j], a[i - 1][j - w[i]] + c[i]);
            }
        }
    }
    int ans = a[n][1];
    for(int j = 2; j <= m; j += 1){
        ans = max(ans, a[n][j]);
    }
    cout << ans << endl;
    return 0;
}