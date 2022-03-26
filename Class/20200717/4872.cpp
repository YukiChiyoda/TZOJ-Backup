// Wrong Answer
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int s = 0;
    for (int i = 1; i <= a; i += 1){
        int x[7];
        x[0] = i / 1000000;
        x[1] = i / 100000 % 10;
        x[2] = i / 10000 % 10;
        x[3] = i / 1000 % 10;
        x[4] = i / 100 % 10;
        x[5] = i / 10 % 10;
        x[6] = i % 10;
        for (int j = 0; j < 7; j += 1){
            if(x[j] == b){
                s += 1;
                cout << i << endl;
            }
        }
    }
    cout << s << endl;
    return 0;
}