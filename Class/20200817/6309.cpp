#include <iostream>
#include <algorithm>
using namespace std;

int num[100000];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        cin >> num[i];
    }
    sort(num, num + n, less<int>());
    int temp = num[0];
    cout << num[0];
    for(int i = 1; i < n; i += 1){
        if(num[i] == temp){
            continue;
        }else{
            cout << " " << num[i];
            temp = num[i];
        }
    }
    return 0;
}