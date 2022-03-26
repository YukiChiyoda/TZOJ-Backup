#include <iostream>
using namespace std;

bool Prime(int x){
    if(x < 2){
        return false;
    }
    for (int i = 2; i * i <= x; i += 1){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    while(cin >> n){
        int a = n / 2;
        for ( ; a <= n; a += 1){
            if(Prime(a) == true && Prime(n - a) == true){
                cout << n - a << " " << a << endl;
                break;
            }
        }
    }
    return 0;
}