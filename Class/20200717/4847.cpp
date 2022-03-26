#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int num[100];
    int k = 0;
    while(t--){
        int n;
        bool flag = false;
        cin >> n;
        for (int i = 0; i < 100; i += 1){
            if(num[i] == n){
                flag = true;
            }
        }
        if (flag == false){
            num[k] = n;
            k += 1;
        }
    }
    cout << k << endl;
    sort(num, num + k);
    for (int i = 0; i < k; i += 1){
        if(i != k){
            cout << num[i] << " ";
        }else{
            cout << num[i] << endl;
        }
    }
    return 0;
}