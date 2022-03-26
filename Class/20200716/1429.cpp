#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        a = a % 100;
        b = b % 100;
        int k = a + b;
        k = k % 100;
        cout << k << endl;
    }
    return 0;
}