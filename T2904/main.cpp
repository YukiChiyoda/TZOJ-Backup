#include <iostream>
#include <algorithm>
using namespace std;

int n;
int num[1001];

int main(){
    while(cin >> n){
        for(int i = 1; i <= n; i += 1)
            cin >> num[i];
        int leng = 0;
        int temp[1001] = {0};
        temp[++leng] = num[1];
        for(int i = 2; i <= n; i += 1)
            if(num[i] > temp[leng])
                temp[++leng] = num[i];
            else
                temp[lower_bound(temp + 1, temp + leng + 1, num[i]) - temp] = num[i];
        cout << leng << endl;
    }
    return 0;
}