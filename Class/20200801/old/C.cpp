#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double A[21] = {0.00};
        double B[21] = {0.00};
        int n;
        cin >> n;
        while(n--){
            double a;
            int b;
            cin >> a >> b;
            A[b] = a;
        }
        cin >> n;
        while(n--){
            double a;
            int b;
            cin >> a >> b;
            B[b] = a;
        }
        for(int i = 1; i <= 20; i += 1){
            if(A[i] != 0.00 || B[i] != 0.00){
                double super = A[i] + B[i];
                if(super != 0.00){
                    printf("%.2f %d\n", super, i);
                }
            }
        }
        if(t != 0){
            cout << endl;
        }
    }
    return 0;
}