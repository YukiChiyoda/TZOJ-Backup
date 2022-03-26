#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num[20];
        for(int i = 0; i < n; i += 1){
            cin >> num[i];
        }
        sort(num, num + n);
        do{
            for(int i = 0; i < n; i += 1){
                if(i != 0){
                    cout << " ";
                }
                cout << num[i];
            }
            cout << endl;
        }while(next_permutation(num, num + n));
        cout << endl;
    }
    return 0;
}