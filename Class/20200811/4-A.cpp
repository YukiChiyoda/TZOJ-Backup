#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b, a && b){
        int answer = 1;
        for(int i = 0; i < b; i += 1){
            answer = answer * a % 1000;
        }
        cout << answer << endl;
    }
    return 0;
}