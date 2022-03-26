#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}
/*
int gcd(int a, int b){
    if(a == b){
        return a;
    }
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    if(a > b){
        return gcd(a % b, b);
    }
    if(a < b){
        return gcd(a, b % a);
    }
}
*/
int main(){
    int x, y;
    while(cin >> x >> y){
        x = abs(x), y = abs(y);
        cout << gcd(x, y) - 1 << endl;
    }
    return 0;
}