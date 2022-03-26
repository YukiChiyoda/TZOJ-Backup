#include <iostream>
using namespace std;

int main(){
    int long long num[100][100];
    /*
    for(int i = 0; i < 100; i += 1){
        for(int j = 0; j <= 100 - i; j += 1){
            if(i == 0 && j == 0){
                num[i][j] = 1;
                continue;
            }
            if(j == 0){
                num[i][j] = num[i - 1][j] + i;
                continue;
            }else{
                num[i][j] = num[i][j - 1] + j + i + 1;
            }
        }
    }
    */
    int s = 1;
    for(int i = 0; i < 100; i += 1){
        for(int j = 0; j <= i; j += 1){
            num[i -  j][j] = s++;
        }
    }
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i += 1){
            for(int j = 0; j < n - i; j += 1){
                if(j != 0){
                    cout << " ";
                }
                cout << num[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}