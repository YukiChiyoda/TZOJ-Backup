#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <math.h>
using namespace std;

struct Point{
    int x;
    int y;
};

const int NUM = 101;
const double INF = 0x7f; //double为八字节
double map[NUM][NUM];
Point a[NUM];

int main(){
    int n;
    cin >> n;
    memset(map, INF, sizeof(map));
    for(int i = 1; i <= n; i += 1){
        cin >> a[i].x >> a[i].y;
    }
    int m;
    cin >> m;
    while(m--){
        int u, v;
        cin >> u >> v;
        map[u][v] = map[v][u] = sqrt(pow((a[u].x - a[v]. x), 2) + pow((a[u].y - a[v]. y), 2));
    }
    for(int k = 1; k <= n; k += 1){
        for(int i = 1; i <= n; i += 1){
            for(int j = 1; j <= n; j += 1){
                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
            }
        }
    }
    int s, t;
    cin >> s >> t;
    printf("%.2f\n", map[s][t]);
    return 0;
}