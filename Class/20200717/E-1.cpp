//Accept
//含有相同字符则标记，有标记则跳过输出。

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i += 1){
    int flag = 0;
        for (int j = 0; j < b.size(); j += 1){
            if(a.at(i) == b.at(j)){
                flag = 1;
            }
        }
        if(flag != 1){
            cout << a.at(i);
        }
    }
    return 0;
}