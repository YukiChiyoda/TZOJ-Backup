#include <iostream>
#include <vector>
#include <set>
using namespace std;

int father[1001];
vector<int> V[1001];

void init(int s){
    for(int i = 1; i <= s; i += 1){
        father[i] = i;
    }
}

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int a, int b){
    a = find(a), b = find(b);
    if(a != b)    father[b] = a;
}

int main(){
    int n, m;
    cin >> n >> m;
    init(n);
    for(int i = 0; i < m; i += 1){
        int p, x, y;
        cin >> p >> x >> y;
        if(p){
            V[x].push_back(y);
            V[y].push_back(x);
            for(int j = 0; j < V[x].size(); j += 1){
                merge(y, V[x][j]);
            }
            for(int j = 0; j < V[y].size(); j += 1){
                merge(x, V[y][j]);
            }
        }else{
            merge(x, y);
        }
    }
    set<int> S;
    for(int i = 1; i <= n; i += 1){
        S.insert(find(i));
    }
    cout << S.size() << endl;
    return 0;
}