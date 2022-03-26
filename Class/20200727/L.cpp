#include <iostream>
using namespace std;

int main(){
    int long long fu[100];
    for (int i = 0; i <= 51; i += 1){
        if(i == 0){
            fu[i] = 0;
        }else if(i == 1){
            fu[i] = 1;
        }else{
            fu[i] = fu[i - 1] + fu[i - 2];
        }
    }
    /*
    for (int i = 0; i < 40; i += 1){
        cout << fu[i] << endl;
    }
    */
    int n;
    while(cin >> n){
        cout << fu[n + 1] << endl;
    }
    return 0;
}