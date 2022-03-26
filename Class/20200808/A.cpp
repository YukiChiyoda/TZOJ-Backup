#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool flag = false;
        for (int i = 0; i <= n; i += 1){
            for (int j = 0; j <= n; j += 1){
                int z = n - i - j;
                double k = 5.00 * i + 3.00 * j + z / 3.00;
                if(k == n){
                    cout << i << " " << j << " " << z << endl;
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