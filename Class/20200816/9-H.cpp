#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct T{
    int u;
    int next;
    int value;
};

int father[1001];
vector<T> V;

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

bool cmp(const T a, const T b){
    return a.value < b.value;
}

int main(){
    int n, m;
    cin >> n >> m;
    init(n);
    for(int i = 0; i < m; i += 1){
        int x, y, z;
        cin >> x >> y >> z;
        V.push_back({x, y, z});
    }
    sort(V.begin(), V.end(), cmp);
    int answer = 0;
    for(int i = 0; i < m; i += 1){
        if(find(V[i].u) != find(V[i].next)){
            answer += V[i].value;
            merge(V[i].u, V[i].next);
        }
    }
    cout << answer << endl;
    return 0;
}