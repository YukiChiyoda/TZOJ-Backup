#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        int long long temp = 1;
        while(b){
            if(b & 1)
                temp = temp * a % c;
            b >>= 1;
            a = (a * a) % c;
        }
        cout << temp << endl;
    }
    return 0;
}