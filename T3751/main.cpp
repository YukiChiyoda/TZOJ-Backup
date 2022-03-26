#include <iostream>
#include <algorithm>
using namespace std;

int num[100000];

int main(){
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i += 1){
            cin >> num[i];
        }
        sort(num, num + n, less<int>());
        cout << num[0];
        for(int i = 1; i < n; i += 1){
            cout << " " << num[i];
        }
        cout << endl;
    }
    return 0;
}