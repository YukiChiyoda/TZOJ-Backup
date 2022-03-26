#include <iostream>
using namespace std;

int main(){
    int long long num[30][30];
    for(int i = 0; i < 30; i += 1){
        for(int j = 0; j <= i; j += 1){
            if(j == 0 || j == i){
                num[i][j] = 1;
            }else{
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
            }
        }
    }
    int n;
    while(cin >> n, n != 0){
        for(int i = 0; i < n; i += 1){
            for(int j = 0; j <= i; j += 1){
                if(j != 0){
                    cout << " ";
                }
                cout << num[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}