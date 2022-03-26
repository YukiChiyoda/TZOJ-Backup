#include <iostream>
using namespace std;

int main(){
    int h, r;
    cin >> h >> r;
    double v = (h * 3.1415 * r * r) / 1000;
    //cout << v << endl;
    double a = 20.00;
    int s = 1;
    while(a -= v, a > 0){
        s += 1;
    }
    cout << s << endl;
    return 0;
}