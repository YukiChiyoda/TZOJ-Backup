#include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;
    bool flag = false;
    for (int i = 0; i < a.length(); i += 1){
        if(a.at(i) == '*' && flag == false){
            cout << "*";
        }else{
            if(a.at(i) != '*'){
                flag = true;
                cout << a.at(i);
            }
        }
    }
    cout << endl;
    return 0;
}