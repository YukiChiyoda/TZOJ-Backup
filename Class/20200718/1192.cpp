#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i += 1){
        int long long a, b;
        cin >> a >> b;
        cout << "Case " << i + 1 << ":" << endl;
        cout << a << " + " << b << " = " << a + b;
        if(i != t - 1){
            cout << endl << endl;
        }
    }
    return 0;
}