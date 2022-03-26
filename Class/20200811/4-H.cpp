#include <iostream>
using namespace std;

int main(){
    int long long n;
    while(cin >> n){
        int s = 0;
        for(int i = 1; i <= n; i += 1){
            int long long t = i;
            while(t % 2 == 0){
                t /= 2;
                s += 1;
            }
        }
        cout << s + 1 << endl;
    }
    return 0;
}