//Unfinished
#include <iostream>
#include <string>
using namespace std;

int int_a[256], int_b[256], int_c[256];
int leng_a, leng_b, leng_c;

void toInt(string s, int n[], int leng){
    for(int i = 0; i < leng; i += 1)
        n[i] = s[i] - '0';
}

int main(){
    string a, b;
    cin >> a >> b;
    leng_a = a.length();
    leng_b = b.length();
    toInt(a, int_a, leng_a);
    toInt(b, int_b, leng_b);
    for(int i = 0; i < leng_b; i += 1){
        int temp = 0;
        for(int j = 0; j < leng_a; j += 1){
            int_c[i + j - 1] += int_a[j] * int_b[i] + temp;
            temp = int_c[i + j - 1];
            int_c[i + j - 1] %= 10;
        }
        int_c[i + leng_a] = temp;
    }
    leng_c = leng_a + leng_b;
    while((!int_c[leng_c]) && (leng_c))
        leng_c -= 1;
    for(int i = 0; i < leng_c; i += 1)
        cout << int_c[i];
    cout << endl;
    return 0;
}