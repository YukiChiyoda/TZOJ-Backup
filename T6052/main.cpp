#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

const double eps = 1e-8;
double y = 0.00;

double calc(double x){
    return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * pow(x, 2) - y * x;
}

double function(){
    double T = 100.00;
    double d = 0.98;
    double x = 50.00;
    double now = calc(x);
    double answer = now;
    while(T > eps){
        int f[2] = {1, -1};
        double newx = x + f[rand() % 2] * T;
        if(newx >= 0 && newx <= 100){
            double next = calc(newx);
            answer = answer < next ? answer : next;
            if(now - next > eps)
                x = newx, now = next;
        }
        T *= d;
    }
    return answer;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> y;
        printf("%.4f\n", function());
    }
    return 0;
}