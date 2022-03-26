#include <iostream>
using namespace std;

int main(){
    int num[10]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n;
    while(cin >> n){
        if(n == 100){
            cout << num[1] + num[0] + num[0] << endl;
        }else if(n < 10){
            cout << num[n] << endl;
        }else{
            int a, b;
            a = n / 10;
            b = n % 10;
            cout << num[a] + num[b] << endl;
        }
    }
    return 0;
}