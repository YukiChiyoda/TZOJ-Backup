#include <iostream>
using namespace std;
typedef long long ll;

int Do(int n){
    int answer = 0;
    while(n){
        answer += n % 10;
        n /= 10;
    }
    return answer;
}

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
        cout << poww(a, b, 9) << endl;
    }
    return 0;
}