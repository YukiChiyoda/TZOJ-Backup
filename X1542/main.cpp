#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int log[21];
int long long num[100001];
int long long maxer[100001][21];
int long long miner[100001][21];

void function(){
    log[0] = -1;
    for(int i = 1; i <= n; i += 1)
        maxer[i][0] = num[i],
        miner[i][0] = num[i],
        log[i] = log[int(i >> 1)] + 1;
    for(int i = 1; i <= 20; i += 1)
        for(int j = 1; j + int(1 << i) - 1 <= n; j += 1)
            maxer[j][i] = max(maxer[j][i - 1], maxer[j + int(1 << (i - 1))][i - 1]),
            miner[j][i] = min(miner[j][i - 1], miner[j + int(1 << (i - 1))][i - 1]);
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i += 1)
        cin >> num[i];
    function();
    for(int long long i = 1; i <= n - k + 1; i += 1){
        int long long x = i, y = i + k - 1;
        int temp = log[y - x + 1];
        cout << max(maxer[x][temp], maxer[y - int(1 << temp) + 1][temp]) << " "
            << min(miner[x][temp], miner[y - int(1 << temp) + 1][temp]) << endl;
    }
    return 0;
}