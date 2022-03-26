#include <iostream>
#include <cstring>
using namespace std;

const int NUM = 31;
int map[NUM][NUM];
int n, e;

int main(){
    while(cin >> n >> e, n || e){
        memset(map, 0, sizeof(map));
        for(int i = 0; i < e; i += 1){
            int w, v;
            cin >> w >> v;
            map[w][v] = 1;
            map[v][w] = 1;
        }
        for(int i = 1; i <= n; i += 1){
            for(int j = 1; j <= n; j += 1){
                if(j != 1){
                    cout << " ";
                }
                cout << map[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}