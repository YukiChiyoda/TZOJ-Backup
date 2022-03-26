#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double a;
        int b;
        cin >> a >> b;
        double sum;
        sum = a;
        a /= 2;
        for(int i = 2; i <= b; i += 1)
            sum += a * 2, a /= 2;
        printf("%.2f %.2f\n", sum, a);
    }
    return 0;
}