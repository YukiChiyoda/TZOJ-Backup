#include <iostream>
#include <string>
using namespace std;

void to_int(string s, int a[]){
    int leng = s.length();
    for(int i = 0; i < leng; i += 1){
        a[i] = s[leng - i - 1] - '0'; //此操作逆置了数位
    }
}

string toStr(int a[], int n){
    string s = "";
    for(int i = n - 1; i >= 0; i -= 1){ //此操作将数位逆置至正常位
        s += char(a[i] + '0');
    }
    return s;
}


    string mul(string s1, string s2){
    int a[1000] = {0};
    int b[1000] = {0};
    int c[1000] = {0};
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
    return toStr(c, leng);
}

int main(){
    string s[101] = {"1"};
    for(int i = 1; i <= 100; i += 1){
        s[i] = mul(s[i - 1], to_string(i));
    }
    int n;
    while(cin >> n, n >= 0){
        cout << s[n] << endl;
    }
    return 0;
}