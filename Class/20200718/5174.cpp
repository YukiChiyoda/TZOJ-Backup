#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int h = 0, m = 0, s = 0;
    for (int i = 1; i <= t; i += 1){
        s += 1;
        if(s == 60){
            s = 0;
            m += 1;
        }
        if(m == 60){
            m = 0;
            h += 1;
        }
    }
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}