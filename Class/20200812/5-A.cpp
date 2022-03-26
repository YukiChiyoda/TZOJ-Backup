#include <iostream>
using namespace std;
typedef long long ll;

ll poww(ll x, ll n, ll mod){
    int answer = 1;
    while(n){
        if(n % 2 == 1){
            answer = answer * x % mod;
        }
        x = x * x % mod;
        n /= 2;
    }
    return answer;
}

int main(){
    int a, b;
    while(cin >> a >> b, a && b){
        cout << poww(a, b, 10) << endl;
    }
    return 0;
}