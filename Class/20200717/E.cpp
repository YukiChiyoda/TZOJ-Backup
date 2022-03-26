//Error
//在每组判断中判断是否相同，一致则删除该字符。

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i += 1){
        for (int j = 0; j < b.size(); j += 1){
            if(a.at(i) == b.at(j)){
                a.erase(i, 1);
                //i -= 1;
            }
            //i -= 1;
        }
        //cout << a << endl;
        i -= 1;
    }
    cout << a << endl;
    return 0;
}