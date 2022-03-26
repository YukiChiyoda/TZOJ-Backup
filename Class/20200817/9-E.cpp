#include <iostream>
#include <set>
using namespace std;

int father[100001];

int find(int x){
    return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int x, int y){
    x = find(x), y = find(y);
    if(x != y)    father[y] = x;
}

int main(){
    int x, y;
    while(cin >> x >> y, x != -1 || y != -1){
        for(int i = 1; i <= 100000; i += 1){
            father[i] = i;
        }
        set <int> S;
        S.insert(x), S.insert(y);
        bool flag = false;
        merge(x, y);
        while(cin >> x >> y, x || y){
            S.insert(x), S.insert(y);
            if(find(x) == find(y))    flag = true;
            else    merge(x, y);
        }
        set <int> S1;
        set<int>::iterator it;
        for(it = S.begin(); it != S.end(); it++){
            S1.insert(find(*it));
        }
        if(flag || S1.size() != 1){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}