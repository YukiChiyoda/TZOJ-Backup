#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int s = 0;
        for(int i = 1; i < n; i += 1){
            for(int j = 1; j < n - i; j += 1){
                int z = n - i - j;
                if(z > 0){
                    s += 1;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}