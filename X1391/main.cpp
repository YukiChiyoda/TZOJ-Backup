#include <iostream>
#include <algorithm>
using namespace std;

struct Point{
    int begin;
    int end;
    int crowd;
};

int n, k;
Point point[101 * 101];
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
    if(a.crowd != b.crowd)    return a.crowd < b.crowd;
    return a.begin < b.begin;
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i += 1){
        father[i] = i;
    }
    int sum = 0;
    for(int i = 1; i <= k; i += 1){
        cin >> point[i].begin >> point[i].end >> point[i].crowd;
        sum += point[i].crowd;
    }
    sort(point + 1, point + k + 1, sort_function);
    int s = 0;
    int answer = 0;
    for(int i = 1; i <= k; i += 1){
        if(merge(point[i].begin, point[i].end)){
            s += 1;
            answer += point[i].crowd;
            if(s == k - 1)    break;
        }
    }
    cout << sum - answer << endl;
    return 0;
}