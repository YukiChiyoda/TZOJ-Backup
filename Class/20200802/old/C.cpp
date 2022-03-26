#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n, n != 0){
        int my[1000];
        int his[1000];
        for(int i = 0; i < n; i += 1){
            cin >> my[i];
        }
        for(int i = 0; i < n; i += 1){
            cin >> his[i];
        }
        sort(my, my + n, greater<int>());
        sort(his, his + n, greater<int>());
        int i = 0, j = 0;
        int s = 0;
        while(j < n){
            if(my[i] > his[j]){
                i += 1;
                s += 1;
            }
            j += 1;
        }
        if(s > n / 2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}