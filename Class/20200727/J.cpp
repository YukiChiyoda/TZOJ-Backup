#include <iostream>
using namespace std;

int main(){
    int num[10];
    while(cin >> num[0]){
        for (int i = 1; i < 10; i += 1){
            cin >> num[i];
        }
        for (int i = 0; i < 10; i += 1){
            for (int j = i + 1; j < 10; j += 1){
                if(num[i] + 1 == num[j] || num[j] + 1 == num[i]){
                    //cout << i << j << endl;
                    cout << "YES" << endl;
                    goto END;
                }
            }
        }
        cout << "NO" << endl;
        END:
            continue;
    }
    return 0;
}