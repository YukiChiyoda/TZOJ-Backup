#include <iostream>
#include <string>
using namespace std;

int a, b;

bool Prime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i * i < n; i += 1){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool Judge(int x){
    string s = to_string(x);
    int len = s.length();
    for(int i = 0; i < len; i += 1){
        if(s[i] != s[len - i - 1]){
            return false;
        }
    }
    if(Prime(x)){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin >> a >> b;
    for(int i = a; i <= b; i += 1){
        if(Judge(i)){
            cout << i << endl;
        }
    }
    return 0;
}