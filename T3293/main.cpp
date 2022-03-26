#include <iostream>
using namespace std;

int main(){
    int long long a, b;
    while(cin >> a >> b, a || b){
        int long long x = (a & b) ^ (a | b); //直接异或则会超时
        int answer = 0;
        while(x){
            if(x & 1)    answer += 1;
            x >>= 1;
        }
        cout << answer << endl;
    }
    return 0;
}