#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while(t--){
        getline(cin, s);
        int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
        for (int i = 0; i < s.length(); i += 1){
            if(s.at(i) == 'a')
                a1 += 1;
            if(s.at(i) == 'e')
                a2 += 1;
            if(s.at(i) == 'i')
                a3 += 1;
            if(s.at(i) == 'o')
                a4 += 1;
            if(s.at(i) == 'u')
                a5 += 1;
        }
        cout << "a:" << a1 << endl;
        cout << "e:" << a2 << endl;
        cout << "i:" << a3 << endl;
        cout << "o:" << a4 << endl;
        cout << "u:" << a5;
        if(t != 0){
            cout << endl << endl;
        }
    }
}