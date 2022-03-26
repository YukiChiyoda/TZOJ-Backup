#include <iostream>
using namespace std;

int father[1001];

int find(int x){
    /*
    if(x == father[x]){
        return x;
    }
    return father[x] = find(father[x]);
    */
    return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int a, int b){
    a = find(a), b = find(b);
    if(a != b)    father[b] = a;
}

int main(){
    int n, m;
    while(cin >> n, n){
        cin >> m;
        for(int i = 1; i <= n; i += 1){
            father[i] = i;
        }
        for(int i = 0; i < m; i += 1){
            int x, y;
            cin >> x >> y;
            merge(x, y);
        }
        int s = 0;
        for(int i = 1; i <= n; i += 1){
            if(find(i) == i)    s += 1;
        }
        cout << s - 1 << endl;
    }
    return 0;
}