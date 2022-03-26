#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
    int begin;
    int end;
    int cost;
};

int n;
Point point[101 * 101];
Point dis[101];
int father[101];

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

bool sort_function(const Point a, const Point b){
    if(a.cost != b.cost)    return a.cost < b.cost;
    return a.begin < b.begin;
}

int main(){
    cin >> n;
    int m = 0;
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            int temp;
            cin >> temp;
            if(temp){
                m += 1;
                point[m].begin = i;
                point[m].end = j;
                point[m].cost = temp;
            }
        }
    }
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
    }
    int k = 0;
    sort(point + 1, point + m + 1, sort_function);
    for(int i = 1; i <= m; i += 1){
        if(merge(point[i].begin, point[i].end)){
            k += 1;
            dis[k].begin = point[i].begin;
            dis[k].end = point[i].end;
            dis[k].cost = point[i].cost;
            if(k == n - 1)    break;
        }
    }
    int answer = 0;
    for(int i = 1; i <= k; i += 1){
        answer += dis[i].cost;
    }
    cout << answer << endl;
    return 0;
}