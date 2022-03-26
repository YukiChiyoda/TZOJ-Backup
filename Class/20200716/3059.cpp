#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int a, b;
        cin >> a >> b;
        cout << a + b << " " << a * b << " " << a - b << " ";
        double x;
        x = (a * 1.00) / (b * 1.00);
        if(a % b == 0){
            cout << x << endl;
        }else{
            printf("%.2f\n", x);
        }
    }
    return 0;
}