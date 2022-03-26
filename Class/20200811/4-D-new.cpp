#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

bool Prime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    for(int i = 2; i < n; i += 1){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    map<char, int> M;
    for(int i = 0; s[i]; i += 1){
        M[s[i]]++;
    }
    int ma = -1, mi = 101;
    for(auto X: M){
        ma = max(ma, X.second);
        mi = min(mi, X.second);
    }
    if(Prime(ma - mi)){
        cout << "Lucky Word" << endl;
        cout << ma - mi << endl;
    }else{
        cout << "No Answer" << endl;
        cout << "0" << endl;
    }
    return 0;
}