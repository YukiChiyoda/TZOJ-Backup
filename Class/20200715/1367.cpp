#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2){        
        double s;
        s = pow((x1 - x2), 2) + pow((y1 - y2), 2);
        printf("%.2f\n", sqrt(s));
    }
    return 0;
}