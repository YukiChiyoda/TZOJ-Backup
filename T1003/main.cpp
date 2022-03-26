#include <iostream>
using namespace std;

int main(){
    int long long n, m;
    while(cin >> n >> m, n || m){
        if(n >= m || m & 1 || n < 0 || m < 0)
            cout << "Error" << endl;
        else{
            int y = (m - n * 2) / 2;
            int x = n - y;
            if(y >= 0 && x >= 0)
                cout << x << " " << y << endl;
            else
                cout << "Error" << endl;
        }
    }
    return 0;
}