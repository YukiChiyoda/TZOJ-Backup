#include <iostream>
using namespace std;

int a, b;
int x = 0, y = 0;

void MyFunction(int k){
    if(k % 2 == 0){
        b = k;
        y += 1;
    }else{
        a = k;
        x += 1;
    }
}

int main(){
    for (int i = 0; i < 10; i += 1){
        int n;
        cin >> n;
        MyFunction(n);
    }
    if(x == 1){
        cout << a << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}