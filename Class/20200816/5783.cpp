#include <iostream>
using namespace std;

struct Node{
    int x;
    int y;
};

int n, m;
Node map[201][201];

Node root(Node k){
    if((map[k.x][k.y].x == k.x) && (map[k.x][k.y].y == k.y))    return k;
    map[k.x][k.y] = root(map[k.x][k.y]);
    return map[k.x][k.y];
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            map[i][j].x = i, map[i][j].y = j;
        }
    }
    for(int i = 1; i <= m; i += 1){
        int x, y;
        char o;
        cin >> x >> y >> o;
        Node k1, k2;
        if(o == 'D'){
            k1 = root(map[x][y]);
            k2 = root(map[x + 1][y]);
        }else if(o == 'R'){
            k1 = root(map[x][y]);
            k2 = root(map[x][y + 1]);
        }
        if((k1.x == k2.x) && (k1.y == k2.y)){
            cout << i << endl;
            return 0;
        }else{
            map[k1.x][k1.y] = k2;
        }
    }
    cout << "draw" << endl;
    return 0;
}
