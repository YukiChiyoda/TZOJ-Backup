#include <iostream>
using namespace std;

int main(){
    char a[10];
    a[0] = 74;
    a[1] = 105;
    a[2] = 97;
    a[3] = 111;
    a[4] = 122;
    a[5] = 104;
    a[6] = 117;
    a[7] = 86;
    a[8] = 53;
    a[9] = 33;
    for (int i = 0; i < 10; i += 1){
        cout << a[i];
    }
    return 0;
}