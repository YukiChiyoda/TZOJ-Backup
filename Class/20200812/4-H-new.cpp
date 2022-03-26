#include <iostream>
using namespace std;

int Do(int n){
    if(n == 0){
        return 0;
    }
    return n / 2 + Do(n / 2);
}

int main(){
    int n;
    while(cin >> n){
        cout << Do(n) + 1 << endl;
    }
    return 0;
}