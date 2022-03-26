#include <iostream>
using namespace std;

int main(){
    int num[10][10];
    int copy[10][10];
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            cin >> num[i][j];
            copy[j][i] = num[i][j];
        }
    }
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            if(j != 0){
                cout << " ";
            }
            cout << num[i][j] + copy[i][j];
        }
        cout << endl;
    }
    return 0;
}