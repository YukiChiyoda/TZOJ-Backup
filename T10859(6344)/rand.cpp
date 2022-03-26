#include <iostream>
using namespace std;

int main(){
    freopen("2.in", "w", stdout);
    cout << "10000 10000" << endl;
    for(int i = 1; i <= 10000; i += 1)
        cout << i << endl;
    for(int i = 10000; i >= 1; i -= 1)
        cout << i << endl;
    return 0;
}