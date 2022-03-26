#include <iostream>
#include <string>
using namespace std;

int div(string a, int b, string &c){
    c = "";
    int r = 0;
    for(int i = 0; i < a.length(); i += 1){
        r = r * 10 + (a[i] - '0');
        if(c == "" && r < b){
            continue;
        }
        c += char(r / b + '0');
        r = r % b;
    }
    if(c == ""){
        c = "0";
    }
    return r;
}

int main(){
    string a;
    int b;
    cin >> a >> b;
    string c;
    int d;
    d = div(a, b, c);
    cout << c << " " << d << endl;
    return 0;
}