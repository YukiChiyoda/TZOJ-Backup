#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(a < 0){
            a = -a;
            cout << "-";
        }
        if(a == 0){
            cout << "0" << endl;
            continue;
        }
        int i = 0;
        int num[32] = {0};
        while(a > 0){
            num[i] = a % b;
            a = a / b;
            i += 1;
        }
        for (int k = i - 1; k >= 0; k -= 1){
            if(num[k] >= 10){
                cout << char(num[k] - 10 + 'A');
            }else{
                cout << num[k];
            }
        }
        cout << endl;
    }
    return 0;
}