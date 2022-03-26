#include <iostream>
using namespace std;

struct Node{
    int pre;
    int next;
};

const int N = 1001;

Node a[N * N];
int father[N];
int head[N], ans[N];
int cnt;

void add(int x, int y){
    cnt += 1;
    a[cnt].pre = y;
    a[cnt].next = head[x];
    head[x] = cnt;
    cnt += 1;
    a[cnt].pre = x;
    a[cnt].next = head[y];
    head[y] = cnt;
}

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
        ans[i] = 1;
        int m;
        cin >> m;
        for(int j = 1; j <= m; j += 1){
            int k;
            cin >> k;
            add(i, k);
        }
    }
    for(int i = n; i >= 1; i -= 1){
        int x = find(i);
        int k = head[i];
        while(k){
            int j = a[k].pre;
            if(j > i){
                int y = find(j);
                if(x != y){
                    father[y] = x;
                    ans[x] += ans[y];
                    if(ans[x] > n / 2){
                        cout << i << endl;
                        return 0;
                    }
                }
            }
            k = a[k].next;
        }
    }
    return 0;
}