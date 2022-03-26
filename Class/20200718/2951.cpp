#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num[n + 1];
        for (int i = 0; i < n; i += 1){
            cin >> num[i];
        }
        int p, q;
        cin >> p >> q;
        for (int i = n; i >= q - 1; i -= 1){
            if(i != q - 1){
                num[i] = num[i - 1];
            }else{
                num[i] = p;
            }
        }
        for (int i = 0; i <= n; i += 1){
            if(i != n){
                cout << num[i] << " ";
            }else{
                cout << num[i] << endl;
            }
        }
    }
    return 0;
}