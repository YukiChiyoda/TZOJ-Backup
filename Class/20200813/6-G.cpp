#include <iostream>
using namespace std;

int fac(int n){
    int answer = 1;
    for(int i = 1; i <= n; i += 1){
        answer *= i;
    }
    return answer;
}

int A(int n, int m){
    return fac(n) / fac(n - m);
}

int C(int n, int m){
    return fac(n) / fac(n - m) / fac(m);
}

int main(){
    int n, m;
    while(cin >> n >> m){
        cout << C(n, m) * A(n, m) << endl;
    }
    return 0;
}