#include <iostream>
using namespace std;

bool num[1000001] = {false};

bool Prime(int n){
    for(int i = 2; i * i <= n; i += 1)
        if(n % i == 0)    return false;
    num[n] = true;
    return true;
}

int main(){
    int a;
    cin >> a;
    int f = 0;
    int x = 0;
    for(int i = a; i >= 2; i -= 1){
        if(!Prime(i))    continue;
        int temp = 0;
        for(int j = 1; j < i; j += 1)
            if(num[j])    temp += 1;
        temp = i - temp;
        if(temp >= f){
            f = temp;
            x = i;
            break;
        }
    }
    cout << x << endl;
    return 0;
}