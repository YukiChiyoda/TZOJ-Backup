#include <iostream>
using namespace std;

int main(){
    int fu[100];
    for (int i = 0; i <= 40; i += 1){
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
    int b;
    cin >> b;
    for (int a = 0; a < b; a += 1){
        int n;
        cin >> n;
        cout << fu[n] << endl;
    }
    return 0;
}

//0、1、1、2、3、5、8、13、21、34