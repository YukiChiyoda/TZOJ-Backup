#include <iostream>
using namespace std;

//以下标数字朝上时的周围点数分布情况
string s[7] = {"", "2453", "1364", "1562", "1265", "1463", "4235"};

int main(){
    int U, D, L, R, F, B;
    while(cin >> U >> F){
        D = 7 - U;
        B = 7 - F;
        string t = s[U];
        int x;
        for(int i = 0; i < t.length(); i += 1){
            if(t[i] == F + '0'){
                x = i;
                break;
            }
        }
        R = t[(x + 1) % 4] - '0';
        L = 7 - R;
        cout << U << " " << D << " " << L << " " << R << " " << F << " " << B << endl;
    }
    return 0;
}