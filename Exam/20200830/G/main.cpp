#include <iostream>
#include <math.h>
using namespace std;

int n;
int num[51];

void Delete(int x){
    for(int i = x; i < n; i += 1)
        num[i] = num[i + 1];
    n -= 1;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i += 1)
        cin >> num[i];
    for(int i = 1; i < n; i += 1){
        if(n == 1)    break;
        if(abs(num[i] - num[i + 1]) <= 1){
            if(num[i] <= num[i + 1]){
                Delete(i);
                i -= 2;
            }else{
                Delete(i + 1);
                i -= 1;
            }
        }
    }
    if(n == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}