#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int money[3];
    for (int i = 0; i < 3; i += 1){
        double a, b;
        cin >> a >> b;
        money[i] = ceil(n / a) * b;
        //cout << ceil(n / a) << endl;
        //cout << b << endl;
        //cout << money[i] << endl;
    }
    sort(money, money + 3);
    cout << money[0] << endl;
    return 0;
}