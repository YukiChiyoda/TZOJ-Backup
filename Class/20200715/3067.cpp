#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int a, b;
        cin >> a >> b;
        if(a > b){
            cout << a << endl;
        }else{
            if(a < b){
                cout << b << endl;
            }else{
                cout << "These numbers are equal." << endl;
            }
        }
    }
    return 0;
}