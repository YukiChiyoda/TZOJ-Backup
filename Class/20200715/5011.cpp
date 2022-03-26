#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    for (int i = 0; i < a; i += 1){
        cout << "B";
    }
    for (int i = 0; i < b; i += 1){
        cout << "S";
    }
    for (int i = 1; i <= c; i += 1){
        cout << i;
    }
    cout << endl;
}