#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double x;
    int n;
    while(cin >> x >> n){
        double t = x * x;
        double s = 1.00, answer = 1.00;
        for(int i = 1; i <= n; i += 1){
            s *= -t;
            s /= (i * 2 - 1) * (i * 2);
            answer += s;
        }
        printf("%.4f\n", answer);
    }
    return 0;
}