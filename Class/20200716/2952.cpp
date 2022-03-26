#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        int num[10001];
        for (int i = 0; i < m; i += 1){
            cin >> num[i];
        }
        int k;
        cin >> k;
        bool flag = false;
        for (int i = 0; i < m - 1; i += 1){
            if(num[i] == k){
                flag = true;
            }
            if(flag == true){
                num[i] = num[i + 1];
            }
            if(i != m - 2){
                cout << num[i] << " ";
            }else{
                cout << num[i] << endl;
            }
        }
    }
    return 0;
}