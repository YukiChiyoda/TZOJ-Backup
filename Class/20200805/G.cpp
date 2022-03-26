#include <iostream>
#include <string>
using namespace std;

int div(string a, string &c){
    c = "";
    int r = 0;
    for(int i = 0; i < a.length(); i += 1){
        r = r * 10 + (a[i] - '0');
        if(c == "" && r < 13){
            continue;
        }
        c += char(r / 13 + '0');
        r = r % 13;
    }
    if(c == ""){
        c = "0";
    }
    return r;
}

int main(){
    string a;
    cin >> a;
    string c;
    int d;
    d = div(a, c);
    cout << c << endl << d << endl;
    return 0;
}