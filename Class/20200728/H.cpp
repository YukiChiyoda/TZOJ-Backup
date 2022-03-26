#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        a = a % 10;
        int long long n = pow(a, b);
        cout << n % 10 << endl;
    }
    return 0;
}

//Wrong Answer