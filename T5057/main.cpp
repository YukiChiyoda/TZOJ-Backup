#include <iostream>
#include <algorithm>
using namespace std;

int num[10000];
int array[1000][1000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1)
        cin >> num[i];
    sort(num, num + n, greater<int>());
    int a, b;
    for(int i = 1; i * i <= n; i += 1)
        if(n % i == 0)
            a = i, b = n / i;
    int UP = 0, DOWN = b - 1, LEFT = 0, RIGHT = a - 1;
    int i = 0, j = 0, cur = 0;
    while(cur < n){
        while(cur < n && j < RIGHT)
            array[i][j++] = num[cur++];
        while(cur < n && i < DOWN)
            array[i++][j] = num[cur++];
        while(cur < n && j > LEFT)
            array[i][j--] = num[cur++];
        while(cur < n && i > UP)
            array[i--][j] = num[cur++];
        i += 1, j += 1;
        UP += 1, DOWN -= 1, LEFT += 1, RIGHT -= 1;
        if(cur == n - 1)
            array[i][j] = num[cur++];
    }
    for(int i = 0; i < b; i += 1)
        for(int j = 0; j < a; j += 1)
            cout << array[i][j] << (j < a - 1 ? ' ' : '\n');
    return 0;
}