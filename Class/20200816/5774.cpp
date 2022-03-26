#include <iostream>
#include <stdio.h>
using namespace std;

double a[2001][2001];
double dis[2001] = {0}, minn;
int n, m;
int x, y;
int visited[2001] = {0};

void dij(int x){
  for(int i = 1; i <= n; i += 1){
    dis[i]=a[x][i];
  }
  dis[x] = 1;
  visited[x] = 1;
  for(int i = 1; i <= n - 1; i += 1){
        minn = 0;
        int k = 0;
        for(int j = 1; j <= n; j += 1){
          if((!visited[j]) && dis[j] > minn){
            k = j;
            minn = dis[j];
          }
        }
        visited[k] = 1;
        if(k == y)    break;
        for(int j = 1; j <= n; j += 1){
            if((!visited[j]) && dis[k] * a[k][j] > dis[j]){
                dis[j]=dis[k]*a[k][j];
            }
        }
    }
}

int main(){
  cin >> n >> m;
  while(m--){
    int j, k;
    cin >> j >> k;
    cin >> a[j][k];
    a[j][k] = (100 - a[j][k]) / 100;
    a[k][j] = a[j][k];
  }
  cin >> x >> y;
  dij(x);
  printf("%.8f",100 / dis[y]);
  return 0;
}
