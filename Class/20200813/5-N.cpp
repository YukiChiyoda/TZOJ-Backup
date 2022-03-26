#include <iostream>
using namespace std;

int poww(int long long a, int long long n, int long long mod){
    int answer = 1;
    while(n){
        if(n % 2 != 0){
            answer = answer * 1LL * a % mod;
        }
        a = a * a % mod;
        n /= 2;
    }
    return answer;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p;
    cin >> n >> p;
    for(int i = 1; i <= n; i += 1){
        cout << poww(i, p - 2, p) << "\n";
    }
    return 0;
}