#include <iostream>
#include <String>
using namespace std;

int main(){
    string a;
    cin >> a;
    string s;
    cin >> s;
    int n = 0;
    for (int i = 0; i < a.length(); i += 1){
        if(a.at(i) == s.at(0)){
            if(i + s.length() > a.length()){
                goto END;
            }
            for (int j = 0; j < s.length(); j += 1){
                if(a.at(i + j) != s.at(j)){
                    goto END;
                }
            }
            n += 1;
        }
        END:
            continue;
    }
    cout << n << endl;
    return 0;
}