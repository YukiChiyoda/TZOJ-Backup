#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void to_int(string s, int a[]){
    int leng = s.length();
    for(int i = 0; i < leng; i += 1){
        a[i] = s[leng - i - 1] - '0'; //此操作逆置了数位
    }
}

string to_string(int a[], int n){
    string s = "";
    for(int i = n - 1; i >= 0; i -= 1){ //此操作将数位逆置至正常位
        s += char(a[i] + '0');
    }
    return s;
}

string mul(string s1, string s2){
    int a[100] = {0};
    int b[100] = {0};
    int c[10000] = {0};
    to_int(s1, a);
    to_int(s2, b);
    int lengA = s1.length();
    int lengB = s2.length();
    int leng = lengA + lengB;
    for(int i = 0; i < lengA; i += 1){
        int step = 0;
        for(int j = 0; j < lengB; j += 1){
            c[i + j] += a[i] * b[j] + step;
            step = c[i + j] / 10;
            c[i + j] = c[i + j] % 10;
        }
        if(step != 0){
            c[i + lengB] += step;
        }
    }
    while(leng != 0 && c[leng - 1] == 0){
        leng -= 1;
    }
    if(leng == 0){
        return "0";
    }
    return to_string(c, leng);
}

int main(){
    string a, b;
    cin >> a >> b;
    bool flagA = false, flagB = false;
    if(a[0] == '-'){
        a = a.substr(1, a.length());
        flagA = true;
    }
    if(b[0] == '-'){
        b = b.substr(1, b.length());
        flagB = true;
    }
    if((flagA == true && flagB == false) || (flagA == false && flagB == true)){
        cout << "-";
    }
    cout << mul(a, b) << endl;
    return 0;
}