#include <iostream>
using namespace std;

int main(){
    int m, n;
    while(cin >> m >> n, m && n){
        if(m > n){
            int t = m;
            m = n;
            n = t;
        }
        for (int i = m; i > 0; i -= 1){
            if(m % i == 0 && n % i == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}