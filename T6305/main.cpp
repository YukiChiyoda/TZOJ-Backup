#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int num[20000];
    int long long s;
    cin >> n >> s;
    for(int i = 0; i < n; i += 1)
        cin >> num[i];
    sort(num, num + n, greater<int>());
    int long long k = 0;
    int i = 0;
    while(k < s)
        k += num[i++];
    cout << i << endl;
    return 0;
}