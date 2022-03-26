#include <iostream>
#include <algorithm>
using namespace std;

int com(int a, int b){
    return a > b;
}

int main(){
    int n;
    cin >> n;
    int num[1000];
    for (int i = 0; i < n; i += 1){
        cin >> num[i];
    }
    int q;
    cin >> q;
    sort(num, num + n, com);
    for (int i = 0; i < n; i += 1){
        if(q == num[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return -1;
}