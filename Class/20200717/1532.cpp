#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int tree[10001] = {0};
    for (int i = 0; i <= n; i += 1){
        tree[i] = 1;
    }
    while(m--){
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i += 1){
            tree[i] = 0;
        }
    }
    int s = 0;
    for (int i = 0; i <= n; i += 1){
        if(tree[i] == 1){
            s += 1;
        }
    }
    cout << s << endl;
    return 0;
}