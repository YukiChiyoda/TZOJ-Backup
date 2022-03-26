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
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        cout << num[m][n] << endl;
    }
    return 0;
}