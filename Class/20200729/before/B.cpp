#include <iostream>
using namespace std;

int f(int n){
    if(n == 0){
        return 1;
    }
    return n * f(n - 1);
}

int main(){
    int n;
    cin >> n;
    int k = 0;
    for(int i = 1; i <= n; i += 1){
        k += f(i);
    }
    cout << k << endl;
    return 0;
}