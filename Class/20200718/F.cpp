#include <iostream>
#include <math.h>
using namespace std;

int com(int n){ 
    for(int i = 2; pow(i, 2) <= n; i += 1){ //素数只需判定算术平方根以内即可
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    while(cin >> n, n != 0){
        int sum = 0;
        for(int i = 2; i < n / 2; i += 1){
            if(com(i) == 1 && com(n - i) == 1){ //判断两数是否为素数
                sum += 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}