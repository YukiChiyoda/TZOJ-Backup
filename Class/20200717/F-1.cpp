#include <iostream>
using namespace std;

int main(){
    char s[101];
    cin >> s;
    int x = 0;
    while(s[x] == '*'){
        x += 1;
    }
    cout << s + x << endl;
    return 0;
}