#include <iostream>
using namespace std;

int n, m;
int father[20001];

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int x, int y){
    x = find(x), y = find(y);
    if(x != y)    father[y] = x;
}

bool judge(int x, int y){
    x = find(x), y = find(y);
    if(x == y){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
    }
    while(m--){
        int a, b;
        cin >> a >> b;
        merge(a, b);
    }
    cin >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        if(judge(a, b)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}