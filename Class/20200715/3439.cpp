#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != -1){
        int k = 0;
        k = sqrt(n);
        if(pow(k, 2) == n){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}