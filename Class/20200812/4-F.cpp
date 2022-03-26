#include <iostream>
#include <algorithm>
using namespace std;

int a[10000];

int main(){
    int n;
    cin >> n;
    int total = 0;
    for(int i = 1; i * i <= n; i += 1){
        if(n % i == 0){
            a[total++] = i;
            if(i != n / i){
                a[total++] = n / i;
            }
        }
    }
    sort(a, a + total);
    cout << a[0];
    for(int i = 1; i < total; i += 1){
        cout << " " << a[i];
    }
    cout << endl;
    return 0;
}