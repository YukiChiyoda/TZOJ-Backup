#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int k = 0;
        for (int i = 0; i < n; i += 1){
            int m, n;
            cin >> m >> n;
            if(m >= 90 && m <= 140 && n >= 60 && n <= 90){
                k += 1;
            }
       }
        cout << k << endl;
        if(k == 0){
            cout << "Terrible" << endl;
        }
        if(k == n){
            cout << "Perfect" << endl;
        }
    }
}