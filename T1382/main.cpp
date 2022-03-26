#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s;
    while(getline(cin, s), s != ""){
        int leng = s.length();
        for(int i = 0; i < leng; i += 1){
            if(i == 0)
                cout << char(s[i] - 'a' + 'A');
            else if(s[i] != ' ' && s[i - 1] == ' ')
                cout << char(s[i] - 'a' + 'A');
            else
                cout << char(s[i]);
        }
        cout << endl;
    }
    return 0;
}
//Wrong Answer?