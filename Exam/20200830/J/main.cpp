#include <iostream>
using namespace std;

int n;
int long long a[200000];
int long long b[200000];
int long long c[200000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i += 1)
        cin >> a[i];
    for(int i = 0; i < n; i += 1)
        cin >> b[i];
    return 0;
}