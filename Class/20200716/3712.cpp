#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(c == 0){
        if(a == 1 && b == 0){
            cout << "1";
        }else{
            cout << "0";
        }
    }else{
        if(a == 0 && b == 0){
            cout << "0";
        }else{
            cout << "1";
        }
    }
    return 0;
}