#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[6] = {500, 100, 50, 10, 5, 1}; //面额
    int b[6] = {0}; //共有张数
    while(cin >> b[5] >> b[4] >> b[3] >> b[2] >> b[1] >> b[0]){
        int t;
        cin >> t;
        int s = 0;
        for(int i = 0; i < 6; i += 1){
            int x = min(t / a[i], b[i]);
            s += x;
            t -= x * a[i];
        }
        if(t != 0){
            cout << "No Answer" << endl;
        }else{
            cout << s << endl;
        }
    } 
    return 0;
}