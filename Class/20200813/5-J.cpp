#include <iostream>
using namespace std;

void Output(int n){
    cout << n << "=";
    if(n == 1){
        cout << "1";
    }
    bool flag = false;
    for(int i = 2; i * i <= n; i += 1){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
                if(flag){
                    cout << "*";
                }
                flag = true;
                cout << i;
            }
        }
    }
    if(n != 1){
        if(flag){
            cout << "*";
        }
        cout << n;
    }
    cout << endl;
}

int main(){
    int a, b;
    while(cin >> a >> b){
        for(int i = a; i <= b; i += 1){
            Output(i);
        }
    }
    return 0;
}