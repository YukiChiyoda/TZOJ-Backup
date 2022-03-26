#include <iostream>
using namespace std;

int power(int a, int b){
    if(b == 0){
        return 1;
    }
    int t = power(a, b / 2);
    if(b % 2 == 0){
        return t * t % 10;
    }else{
        return t * t * a % 10;
    }
}

int main(){
    int a, b;
    while(cin >> a >> b){
        cout << power((a % 10), b) % 10 << endl;
    }
    return 0;
}