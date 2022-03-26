#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        int answer = 1;
        int t = b % 4;
        if(t == 0){
            t = 4;
        }
        a = a % 10;
        for(int i = 0; i < t; i += 1){
            answer = answer * a % 10;
        }
        cout << answer << endl;
    }
    return 0;
}