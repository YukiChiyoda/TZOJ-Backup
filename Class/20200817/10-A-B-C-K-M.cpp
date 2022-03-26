#include <iostream>
#include <algorithm>
using namespace std;

int a[1000];
int n, h;

void calc(int s, int temp){
    if(s >= n)    return;
    if(a[s] == 0)    return;
    h = max(h, temp);
    calc(s * 2 + 1, temp + 1); //左树
    calc(s * 2 + 2, temp + 1); //右树
}

void PreOrder1(int s){
    if(s > n || a[s] == 0 || a[s] == -1)    return;
    cout << " " << a[s];
    PreOrder1(s * 2 + 1); //递归左子树
    PreOrder1(s * 2 + 2); //递归右子树
}
void PreOrder2(int s){
    if(s > n || a[s] == 0 || a[s] == -1)    return;
    PreOrder2(s * 2 + 1); //递归左子树
    cout << " " << a[s];
    PreOrder2(s * 2 + 2); //递归右子树
}
void PreOrder3(int s){
    if(s > n || a[s] == 0 || a[s] == -1)    return;
    PreOrder3(s * 2 + 1); //递归左子树
    PreOrder3(s * 2 + 2); //递归右子树
    cout << " " << a[s];
}

int main(){
    int T;
    cin >> T;
    while(T--){
        n = h = 0;
        while(cin >> a[n], a[n] != -1)    n += 1;
        calc(0, 1);
        //cout << " " << h;
        PreOrder1(0);
        cout << endl;
        PreOrder2(0);
        cout << endl;
        PreOrder3(0);
        cout << endl;
    }
    return 0;
}