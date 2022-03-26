#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, b, c;
    while(cin >> a >> b >> c){
        double x = a * sin(b) * cos(c);
        double y = a * sin(b) * sin(c);
        double z = a * cos(b);
        printf("(%.2f,%.2f,%.2f)\n", x, y, z);
    }
    return 0;
}