#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[100][100];
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            cin >> num[i][j];
        }
    }
    int s = 0;
    for(int i = 0; i < n; i += 1){
        s += num[i][i];
        s += num[i][n - i - 1];
    }
    if(n % 2 != 0){
        s -= num[n / 2][n / 2];
    }
    cout << s << endl;
    return 0;
}