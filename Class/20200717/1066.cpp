#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int s1 = 0;
        for (int i = 1; i < a; i += 1){
            if(a % i == 0){
                s1 += i;
                //cout << "s1 += " << i << "==" << s1 << endl;
            }
        }
        if(s1 == b){
            int s2 = 0;
            for (int i = 1; i < b; i += 1){
                if(b % i == 0){
                    s2 += i;
                    //cout << "s2 += " << i << "==" << s2 << endl;
                }
            }
            if(s2 == a){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}