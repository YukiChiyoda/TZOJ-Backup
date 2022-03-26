#include <iostream>
#include <math.h>
using namespace std;

int backer(int n){
    int num[100000];
    int k = 0;
    while(n / 10 != 0){
        num[k] = n % 10;
        n = n / 10;
        k += 1;
    }
    num[k] = n;
    bool flag = false;
    int back = 0;
    for (int i = 0; i <= k; i += 1){
        if(num[i] != num[k - i]){
            flag = true;
        }
        back += num[i] * pow(10, k - i);
    }
    if(flag == true){
        return back;
    }else{
        return 0;
    }
}

int main(){
    int n;
    while(cin >> n){
        int a = n;
        int i = 0;
        int k[10000];
        while(backer(n) != 0){
            n += backer(n);
            k[i] = n;
            i += 1;
        }
        cout << i << endl;
        cout << a;
        for (int j = 0; j < i; j += 1){
            cout << "--->" << k[j];
        }
        cout << endl;
    }
    return 0;
}