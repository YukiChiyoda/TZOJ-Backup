#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    scanf("%d/%d", &a, &b);
    if(a % b == 0){
        cout << a / b << endl;
        return 0;
    }
    if(a == b){
        cout << "1" << endl;
        return 0;
    }
    if(a == 0){
        cout << "0" << endl;
        return 0;
    }
    int x = 0;
    for(int i = min(a, b); i >= 1; i -= 1){
        if(a % i == 0 && b % i == 0){
            x = i;
            break;
        }
    }
    cout << a / x << "/" << b / x << endl;
    return 0;
}