#include <iostream>
using namespace std;

int main(){
    int num[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        cin >> num[i];
    }
    int imin = 0;
    for (int i = 0; i < n; i += 1){
        if(num[imin] > num[i]){
            imin = i;
        }
    }
    swap(num[0], num[imin]);
    int imax = 0;
    for (int i = 0; i < n; i += 1){
        if(num[imax] < num[i]){
            imax = i;
        }
    }
    swap(num[n - 1], num[imax]);
    for (int i = 0; i < n; i += 1){
        if(i != 0){
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
    return 0;
}