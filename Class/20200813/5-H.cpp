#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int long long gcd(int long long a, int long long b){
    return b ? gcd(b, a % b) : a;
}

int long long lcm(int long long a, int long long b){
    return a / gcd(a, b) * b;
}

int main(){
    int long long x, y, z;
    while(cin >> x >> y >> z, x && y && z){
        x = abs(x), y = abs(y), z = abs(z);
        int long long t = lcm((lcm(x, y)), z);
        cout << t / x << " " << t / y << " " << t / z << endl;
    }
    return 0;
}