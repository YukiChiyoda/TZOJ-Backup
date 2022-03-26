#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double k = 0.00;
    for (int i = 0; i < n; i += 1){
        int a;
        double b;
        cin >> a >> b;
        k += a * b;
    }
    printf("%.2f\n", k);
    return 0;
}