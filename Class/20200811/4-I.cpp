#include <iostream>
using namespace std;

int main(){
    int long long n;
    while(cin >> n){
        int s = 0;
        for(int i = 1; i <= n; i += 1){
            int long long t = i;
            while(t % 5 == 0){
                t /= 5;
                s += 1;
            }
        }
        cout << s << endl;
    }
    return 0;
}