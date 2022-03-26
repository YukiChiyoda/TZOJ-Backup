#include <iostream>
using namespace std;

int father[150001];

int Find(int x){
    return x == father[x] ? x : Find(father[x]);
}

void Union(int x,int y){
    x = Find(x), y = Find(y);
    if(x != y)    father[y] = x;
}

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= 3 * n; i += 1)    father[i] = i;
    int sum = 0;
    for(int i = 1; i <= k; i += 1){
        int t, x, y;
        cin >> t >> x >> y; 
        if(x > n || y > n){
            sum++;
            continue;
        }
        if(t == 1){
            if(Find(x + n) == Find(y) || Find(x + 2 * n) == Find(y))
                sum++;
            else{
                Union(x, y);
                Union(x + n, y + n);
                Union(x + 2 * n, y + 2 * n);
            }
        }else if(t==2){
            if(Find(x) == Find(y) || Find( x + 2 * n) == Find(y))
                sum++;
            else{
                Union(x + n, y);
                Union(x + 2 * n, y + n);
                Union(x, y + 2 * n);
            }
        }
    }
    cout<< sum <<endl;
    return 0;
}