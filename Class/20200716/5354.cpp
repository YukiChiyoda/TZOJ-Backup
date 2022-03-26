#include <iostream>
using namespace std;

int main(){
    double a;
    cin >> a;
    double n;
    if(a <= 50.00){
        n = a * 1.00;
    }else{
        n = (a - 50.00) * 1.05 + 50.00 * 1.00;
    }
    printf("%.2f\n", n);
    return 0;
}