#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[4];
    for(int i = 0; i < 4; i += 1){
        cin >> a[i];
    }
    int temp[4][3] = {
        a[0], a[1], a[2],
        a[0], a[1], a[3],
        a[0], a[2], a[3],
        a[1], a[2], a[3]
    };
    for(int i = 0; i < 4; i += 1){
        do{
            cout << temp[i][0] << " " << temp[i][1] << " " << temp[i][2] << endl;
        }while(next_permutation(temp[i], temp[i] + 3));
    }
    return 0;
}