#include <iostream>
using namespace std;

int n;
int num[20];
int s = 0; //计次

void function(int k){
    if(k > n){ //递归结束条件
        for(int i = 0; i < s; i += 1){
            if(i != 0){
                cout << " ";
            }
            cout << num[i];
        }
        cout << endl;
        return;
    }
    num[s++] = k;
    function(k + 1); //可选数分支
    s -= 1;
    function(k + 1); //拒选数分支
}

int main(){
    cin >> n;
    function(1);
    return 0;
}