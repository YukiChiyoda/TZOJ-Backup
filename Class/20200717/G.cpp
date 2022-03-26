#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    bool flag = false;
    getline(cin, a);
    for (int i = a.length() - 1; i >= 0; i -= 1){
        if(a.at(i) == '*'){
            if (flag == false){
                //string::iterator it;
                //it = a.begin() + i;
                a = a.erase(i, 1);
                //i -= 1;
                continue;
            }
        }else{
            flag = true;
        }
    }
    cout << a << endl;
    return 0;
}