#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num[101][101] = {0};
        for(int i = 1; i <= n; i += 1)
            for(int j = 1; j <= i; j += 1)
                cin >> num[i][j];
        for(int i = n - 1; i > 0; i -= 1)
            for(int j = i; j > 0; j -= 1)
                num[i][j] += max(num[i + 1][j], num[i + 1][j + 1]);
        cout << num[1][1] << endl;
    }
    return 0;
}