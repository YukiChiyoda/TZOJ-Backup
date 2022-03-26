#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int num[10000];
        int test[10000];
        for(int i = 0; i < n; i += 1){
            cin >> num[i];
            test[i] = i + 1;
        }
        int s = 0;
        do{
            bool flag = true;
            for(int i = 0; i < n; i += 1){
                if(num[i] != test[i]){
                    flag = false;
                }
            }
            if(flag == true){
                cout << s << endl;
                break;
            }
            s += 1;
        }while(next_permutation(test, test + n));
    }
    return 0;
}