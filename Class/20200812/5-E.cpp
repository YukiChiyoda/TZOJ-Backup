#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y, x && y){
        for(int i = min(x, y); i >= 1; i -= 1){
            if(x % i == 0 && y % i == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}