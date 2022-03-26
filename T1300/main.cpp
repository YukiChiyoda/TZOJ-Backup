#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Point{
    int begin;
    int end;
    int value;
};

int n;
int father[101];
Point point[5001];
int total;
int cost;

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
    if(a.value != b.value)    return a.value < b.value;
    return a.begin < b.begin;
}

int main(){
    while(cin >> n, n){
        total = 0;
        cost = 0;
        memset(point, 0, sizeof(point));
        for(int i = 1; i <= n; i += 1)
            father[i] = i;
        for(int i = 1; i <= n * (n - 1) / 2; i += 1){
            cin >> point[i].begin >> point[i].end >> point[i].value;
        }
        sort(point + 1, point + (n * (n - 1) / 2) + 1, sort_function);
        for(int i = 1; i <= n * (n - 1) / 2; i += 1){
            if(merge(point[i].begin, point[i].end)){
                cost += point[i].value;
                if(total == n - 1)    break;
            }
        }
        cout << cost << endl;
    }
    return 0;
}