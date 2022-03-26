#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int num[150];
    for (int i = 0; i < n; i += 1){
        num[i] = i + 1;
    }
    int s = 0;
    while(n > 1){
        s = (s + m - 1) % n;
        for (int i = s; i < n - 1; i += 1){
            num[i] = num[i + 1];
        }
        n -= 1;
    }
    cout << num[0] << endl;
    return 0;
}