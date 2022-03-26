#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(!n){
            // n = 0;
            double x, y;
            cin >> x >> y;
            double s = x / y;
            printf("%.2f\n", s);
        }else{
            // n = 1;
            string s;
            getline(cin, s);
            cout << s.length() - 1 << endl;
        }
    }
    return 0;
}