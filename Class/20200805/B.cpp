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

string add(string s1, string s2){
    int a[2010] = {0};
    int b[2010] = {0};
    int c[2010] = {0};
    to_int(s1, a);
    to_int(s2, b);
    int leng = max(s1.length(), s2.length());
    int step = 0;
    for(int i = 0; i < leng; i += 1){
        int t = a[i] + b[i] + step;
        step = t / 10;
        c[i] = t % 10;
    }
    if(step != 0){
        c[leng] = step;
        leng += 1;
    }
    return to_string(c, leng);
}

int main(){
    string s[1001] = {"0", "1"};
    for(int i = 2; i <= 1000; i += 1){
        s[i] = add(s[i - 1], s[i - 2]);
    }
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        cout << s[a] << endl;
    }
    return 0;
}