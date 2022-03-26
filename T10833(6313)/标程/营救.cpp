#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int u[20001];
int v[20001];
int w[20001];
int dis[10001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, s, t;
	cin >> n >> m >> s >> t;
	for(int i = 1; i <= m; i += 1){
		cin >> u[i] >> v[i] >> w[i];
	}
	//memset(dis, 0x7f, sizeof(dis));
	for(int i = 1; i <= n; i += 1){
		dis[i] = 0x7fffffff;
	}
	dis[s] = 0;
	for(int i = 1; i <= n; i += 1){
		for(int j = 1; j <= m; j += 1){
			if(dis[u[j]] > max(dis[v[j]], w[j])){
				dis[u[j]] = max(dis[v[j]], w[j]);
			}
			if(dis[v[j]] > max(dis[u[j]], w[j])){
				dis[v[j]] = max(dis[u[j]], w[j]);
			}
		}
	}
	cout << dis[t] << endl;
}
