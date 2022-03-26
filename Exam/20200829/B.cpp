#include <iostream>
#include <algorithm>
using namespace std;

int n, x;
int num[1000000];

int main(){
    //freopen("interval.in", "r", stdin);
    //freopen("interval.out", "w", stdout);
    cin >> n >> x;
    for(int i = 0; i < n; i += 1)
        cin >> num[i];
    int answer = 0;
    for(int i = 0; num[i] < x && i < n; i += 1){
        for(int j = i; num[j] < x && j < n; j += 1){
            int maxer = 0;
            int miner = 0x3fff;
            for(int o = i; o <= j; o += 1){
                maxer = max(maxer, num[o]);
                miner = min(miner, num[o]);
            }
            if(maxer + miner == x)
                answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}