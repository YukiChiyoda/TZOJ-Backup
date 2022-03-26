#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    double k = 0.20 * a + 0.30 * b + 0.50 * c;
    printf("%.0f\n", k);
    return 0;
}