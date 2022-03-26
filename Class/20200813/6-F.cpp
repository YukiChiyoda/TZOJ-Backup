#include <iostream>
using namespace std;

int main(){
    long long num[31][31] = {0};
    num[0][1] = 1;
    for(int i = 1; i < 31; i += 1){
        for(int j = 1; j <= i + 1; j += 1){
            num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
        }
    }
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << num[a][b + 1] << endl;
    }
    return 0;
}