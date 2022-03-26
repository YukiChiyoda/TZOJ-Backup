#include <iostream>
using namespace std;

int main(){
    int num[10][10];
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            if(num[i][j] != num[j][i]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}