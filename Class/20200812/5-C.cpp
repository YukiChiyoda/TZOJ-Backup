#include <iostream>
using namespace std;

long long poww(long long x, long long n, long long mod){
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
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        printf("%04d\n", poww(a, b, 10000));
    }
    return 0;
}