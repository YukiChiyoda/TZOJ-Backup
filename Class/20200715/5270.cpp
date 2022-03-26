#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool flag = false;
        for (int i = 0; i <= n; i += 1){
            for (int j = 0; j <= n; j += 1){
                int a = n - i - j;
                double k = 5.00 * i + 3.00 * j + a / 3.00;
                double o = n;
                if(k == n){
                    cout << i << " " << j << " " << a << endl;
                    flag = true;
                }
            }
        }
        if(flag == false){
            cout << "No Answer" << endl;
        }
    }
    return 0;
}