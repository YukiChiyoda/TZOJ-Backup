#include <iostream>
#include <algorithm>
using namespace std;

int a[200];
int Num(int n){
    int num = 1;
    for(int i = 2; i * i <= n; i += 1){
        if(n % i == 0){
            if(i == n / i){
                num += 1;
            }else{
                num += 2;
            }
        }
    }
    return num;
}

bool cmp(const int a, const int b){
    int A = Num(a), B = Num(b);
    if(A == B){
        return a > b;
    }
    return A > B;
}

int main(){
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i += 1){
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        cout << a[0];
        for(int i = 1; i < n; i += 1){
            cout << " " << a[i];
        }
        cout << endl;
    }
    return 0;
}