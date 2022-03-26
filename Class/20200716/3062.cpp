//Wrong Answer

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int a, b;
        cin >> a >> b;
        double m = sqrt(pow(a + b, 2));
        double n = a + b;
        double p = sqrt(pow(a - b, 2));
        double q = a - b;
        cout << m << n << p << q << endl;
        if(m == n && p == q){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}