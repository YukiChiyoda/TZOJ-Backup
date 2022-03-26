#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int father[1001];

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
    while(cin >> n, n){
        memset(father, 0, sizeof(father));
        init(n * 3);
        map<string, int> M;
        int tot = 1;
        for(int i = 0; i < n; i += 1){
            string me, f, m;
            cin >> f >> m >> me;
            if(!M.count(f))    M[f] = tot++;
            if(!M.count(m))    M[m] = tot++;
            if(!M.count(me))    M[me] = tot++;
            merge(M[f], M[m]), merge(M[f], M[me]);
        }
        string a, b;
        cin >> a >> b;
        if(M.count(a) && M.count(b) && find(M[a]) == find(M[b]))    cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
    return 0;
}