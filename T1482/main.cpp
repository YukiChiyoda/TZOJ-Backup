#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double calc(double x, int n){
    double temp = 0.00;
    if(n == 1)
        temp = sqrt(x + n);
    else
        temp = sqrt(n + calc(x, n - 1));
    return temp;
}

int main(){
    double x;
    int n;
    cin >> x >> n;
    printf("%.2f\n", calc(x, n));
    return 0;
}