#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int k;
        double s;
        cin >> k;
        if(k >= 5000){
            s = 0.80 * k;
        }else{
            if(k >= 3000){
                s = 0.85 * k;
            }else{
                if(k >= 2000){
                    s = 0.90 * k;
                }else{
                    if(k >= 1000){
                        s = 0.95 * k;
                    }else{
                        s = 1.00 * k;
                    }
                }
            }
        }
        printf("%.1f\n", s);
    }
}