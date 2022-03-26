#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[10000] = {0};
    for (int i = 0; i < n; i += 1){
        cin >> num[i];
    }
    int m;
    cin >> m;
    int change[100];
    int i = 0;
    for ( ; i < m; i += 1){
        change[i] = num[n - m + i];
        //cout << change[i] << endl;
    }
    for (int j = 0 ; j < n - m; j += 1){
        change[j + m] = num[j];
    }
    for (i = 0; i < n; i += 1){
        if(i != 0){
            cout << " ";
        }
        cout << change[i];
    }
    return 0;
}