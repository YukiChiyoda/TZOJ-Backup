#include <iostream>
using namespace std;

void Prime(int n){
    if(n == 0 || n == 1){
        cout << "Yes" << endl;
        return;
    }
    for(int i = 2; i < n; i += 1){
        if(n % i == 0){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main(){
    int x;
    while(cin >> x){
        Prime(x);
    }
    return 0;
}