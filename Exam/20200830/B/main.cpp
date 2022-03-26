#include <iostream>
using namespace std;

/*

|  /
| /
|/
|\
| \
|  \

*/

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        cout << "|";
        for(int j = 1; j <= n - i - 1; j += 1)
            cout << " ";
        cout << "/" << endl;
    }
    for(int i = 0; i < n; i += 1){
        cout << "|";
        for(int j = 0; j < i; j += 1)
            cout << " ";
        cout << "\\" << endl;
    }
    return 0;
}