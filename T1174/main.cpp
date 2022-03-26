#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    char temp;
    cin >> temp;
    while(~s.find(temp))
        s.erase(s.find(temp), 1);
    cout << s << endl;
    return 0;
}