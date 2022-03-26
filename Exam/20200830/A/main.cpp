#include <iostream>
using namespace std;

bool Prime(int n){
    for(int i = 2; i * i <= n; i += 1)
        if(n % i == 0)    return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    if(Prime(n))
        cout << "Hello, prime " << n << "!" << endl;
    return 0;
}