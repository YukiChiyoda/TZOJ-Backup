#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n, n != 0){
        int s = 0;
        while(n != 1){
            if(n % 2 != 0){
                n = n / 2 + 1;
            }else{
                n = n / 2;
            }
            s += 1;
        }
        cout << s << endl;
    }
    return 0;
}