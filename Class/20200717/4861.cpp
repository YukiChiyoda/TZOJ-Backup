#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int s = 0;
    for (int i = a; i <= b; i += 1){
        int x[5];
        x[0] = i / 10000;
        x[1] = i / 1000 % 10;
        x[2] = i / 100 % 10;
        x[3] = i / 10 % 10;
        x[4] = i % 10;
        for (int j = 0; j < 5; j += 1){
            if(x[j] == 2){
                s += 1;
            }
        }
    }
    cout << s << endl;
    return 0;
}