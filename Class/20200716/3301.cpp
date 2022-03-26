#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int s = 0;
        while (n--){
            char a;
            int b;
            cin >> a >> b;
            s += b;
        }
        cout << s << endl;
    }
    return 0;
}