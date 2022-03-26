#include <iostream>
using namespace std;

int function(int m, int n){
    if(m < 0){
        return 0;
    }
    if(m == 0 || m == 1 || n == 1){
        return 1;
    }
    return function(m, n - 1) + function(m - n, n);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << function(a, b) << endl;
    }
    return 0;
}