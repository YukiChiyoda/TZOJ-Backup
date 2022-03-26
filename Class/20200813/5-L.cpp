#include <iostream>
using namespace std;

const int NUM = 317000011;

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
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int t = poww(b, c, NUM - 1);
        cout << poww(a, t, NUM) << endl;
    }
    return 0;
}