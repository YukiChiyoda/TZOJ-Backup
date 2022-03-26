#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        int s = 0;
        for(int i = 0; i < a; i += 1){
            int x;
            cin >> x;
            s += x;
        }
        if(s > b){
            cout << "fuck" << endl;
        }else{
            cout << "delicious" << endl;
        }
    }
    return 0;
}