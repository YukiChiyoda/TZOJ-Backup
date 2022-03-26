#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int a[35][20005];
int w[35];

int main(){
    int m, n;
    cin >> m >> n;
    memset(a, -1, sizeof(a));
    for(int i = 0; i < n; i += 1){
        a[i][0] = 0;
    }
    for(int i = 1; i <= n; i += 1){
        cin >> w[i];
    }
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= m; j += 1){
            if(j < w[i]){
                a[i][j] = a[i - 1][j];
            }else{
                if(a[i - 1][j - w[i]] == 0 || a[i - 1][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
    }
    int ans = 0;
    for(int j = 1; j <= m; j += 1){
        if(a[n][j] == 0){
            ans = j;
        }
    }
    cout << m - ans << endl;
    return 0;
}