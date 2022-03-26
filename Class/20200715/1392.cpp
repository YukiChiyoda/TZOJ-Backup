#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int a, b, c;
        cin >> a >> b >> c;
        if((a + b > c) && (a + c > b) && (b + c > a) && (a - b < c) && (a - c < b) && (b - c < a)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}