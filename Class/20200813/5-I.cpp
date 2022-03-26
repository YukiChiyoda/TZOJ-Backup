#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool flag = false;
        cout << n << " = ";
        if(n == 1){
            cout << "1";
        }
        for(int i = 2; i * i <= n; i += 1){
            if(n % i == 0){
                int t = 0;
                while(n % i == 0){
                    n /= i;
                    t += 1;
                }
                if(flag){
                    cout << " * ";
                }
                flag = true;
                if(t == 1){
                    cout << i;
                }else{
                    cout << i << "^" << t;
                }
            }
        }
        if(n != 1){
            if(flag){
                cout << " * ";
            }
            cout << n;
        }
        cout << endl;
    }
    return 0;
}