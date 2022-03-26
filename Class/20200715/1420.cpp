#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i += 1){
        int long long k;
        cin >> k;
        int s;
        s = 600000 + k % 100000;
        cout << s << endl;
    }
}