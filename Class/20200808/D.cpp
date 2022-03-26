#include <iostream>
#include <algorithm>
using namespace std;

int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
    int n;
    cin >> n;
    do{
        for(int i = 0; i < n; i += 1){
            if(i != 0){
                cout << " ";
            }
            cout << num[i];
        }
        cout << endl;
    }while(next_permutation(num, num + n));
    return 0;
}