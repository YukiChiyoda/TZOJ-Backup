#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct Road{
    int begin;
    int end;
    int long long value;
};

int n, m;
int total;
int father[100001];
Road road[200001];
int long long answer;

bool function(const Road a, const Road b){
    return a.value < b.value;
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
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1)
        father[i] = i;
    for(int i = 1; i <= m; i += 1){
        cin >> road[i].begin >> road[i].end;
        road[i].value = int(pow(2, i)) % 1000000007;
    }
    sort(road + 1, road + m + 1, function);
    for(int i = 1; i <= m; i += 1){
        if(merge(road[i].begin, road[i].end) || merge(road[i].end, road[i].begin)){
            answer += road[i].value;
            total += 1;
        }
        if(father[n] == 1)    break;
    }
    cout << answer % 1000000007 << endl;
    return 0;
}