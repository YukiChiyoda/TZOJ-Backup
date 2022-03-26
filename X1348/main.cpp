#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    int begin;
    int end;
    int value;
};

int n, e;
Node map[10001];
Node dis[101];
int father[101];

bool sortA(const Node a, const Node b){
    if(a.value != b.value)    return a.value < b.value;
    return a.begin < b.begin;
}

bool sortB(const Node a, const Node b){
    if(a.begin != b.begin)    return a.begin < b.begin;
    return a.end < b.end;
}

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

bool merge(int x, int y){
    x = find(x), y = find(y);
    if(x != y){
        father[y] = x;
        return true;
    }else{
        return false;
    }
}

int main(){
    cin >> n >> e;
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
    }
    for(int i = 1; i <= e; i += 1){
        int x, y, z;
        cin >> x >> y >> z;
        if(x > y)    swap(x, y);
        map[i].begin = x;
        map[i].end = y;
        map[i].value = z;
    }
    sort(map + 1, map + e + 1, sortA);
    int s = 0;
    for(int i = 1; i <= e; i += 1){
        if(merge(map[i].begin, map[i].end)){
            s += 1;
            dis[s].begin = map[i].begin;
            dis[s].end = map[i].end;
            if(s == n - 1)    break;
        }
    }
    sort(dis + 1, dis + s + 1, sortB);
    for(int i = 1; i <= s; i += 1){
        cout << dis[i].begin << " " << dis[i].end << endl;
    }
    return 0;
}