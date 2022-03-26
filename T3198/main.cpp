#include <iostream>
#include <cstring>
using namespace std;

int n, t;
int long long num[500001];

int lowbit(int x){
    return x & (-x);
}

void update(int x, int s){
    for( ; x <= n; x += lowbit(x))
        num[x] += s;
}

int query(int x){
    int temp = 0;
    for( ; x; x -= lowbit(x))
        temp += num[x];
    return temp;
}

int main(){
    while(cin >> n){
        memset(num, 0, sizeof(num));
        for(int i = 1; i <= n; i += 1){
            int a;
            cin >> a;
            update(i, a);
        }
        cin >> t;
        while(t--){
            char o;
            int a, b;
            cin >> o >> a >> b;
            if(o == 'C')
                update(a, b);
            else if(o == 'Q')
                cout << query(b) - query(a - 1) << endl;
        }
    }
    return 0;
}