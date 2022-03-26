#include <iostream>
#include <string>
#include <map>
using namespace std;

map <string, string> father;

string find(string x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

int main(){
    int sub = 1;
    string s;
    string temp = "";
    while(cin >> s, s != "$"){
        char a = s[0];
        string name = s.substr(1, 6);
        switch(a){
            case '#':
                temp = name;
                if(father[temp] == "")
                    father[temp] = temp;
                sub += 1;
                break;
            case '+':
                find(temp);
                father[name] = father[temp];
                sub += 1;
                break;
            case '?':
                find(name);
                cout << name << " " << father[name] << endl;
                break;
        }
    }
    return 0;
}