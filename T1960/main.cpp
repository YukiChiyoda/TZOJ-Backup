#include <iostream>
using namespace std;

int t;
int x, y;
int temp;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
 	return a * b / temp;
}

int main(){
    cin >> t;
    for(int i = 1; i <= t; i += 1){
        cin >> x >> y;
        temp = gcd(x, y);
        cout << i << " "
            << lcm(x, y) << " "
            << temp << endl;
    }
    return 0;
}