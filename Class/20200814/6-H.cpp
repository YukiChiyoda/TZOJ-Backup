#include <iostream>
using namespace std;

int main(){
    int n, w, d, t;
    while(cin >> n >> w >> d >> t){
        int num = (n - 1) * n / 2 * w;
        if(num == t){
            cout << n << endl;
        }else{
            cout << (num - t) / d << endl;
        }
    }
    return 0;
}