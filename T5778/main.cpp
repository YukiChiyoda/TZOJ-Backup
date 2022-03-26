#include <iostream>
#include <vector>
#include <queue>
#define INF 0x7fffffff
#define P pair<int, int>
using namespace std;

struct Edge{
	int End;
	int Cost;
};

int n, m;
int father[2001];
vector <Edge> map[2001];

int dij(int s){
	priority_queue <P, vector<P>, greater<P>> q;
	int dis[2001] = {0};
	fill(dis + 1, dis + n + 1, INF);
	dis[s] = 0;
	q.push({dis[s], s});
	while(!q.empty()){
		P temp = q.top();
		q.pop();
		int point = temp.second;
		if(dis[point] < temp.first)
			continue;
		for(int i = 0; i < map[point].size(); i += 1){
			Edge edge = map[point][i];
			if(dis[edge.End] > dis[point] + edge.Cost){
				dis[edge.End] = dis[point] + edge.Cost;
				q.push({dis[edge.End], edge.End});
			}
		}
	}
	return dis[n];
}

int find(int x){
	return x == father[x] ? x : father[x] = find(father[x]);
}

void merge(int x, int y){
	x = find(x), y = find(y);
	father[y] = x;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i += 1)
		father[i] = i;
	for(int i = 0; i < m; i += 1){
		int x, y, z;
		cin >> x >> y >> z;
		merge(x, y);
		map[x].push_back({y, z}),
		map[y].push_back({x, z});
	}
	if(find(n) != find(1))
		cout << -1 << endl;
	else
		cout << dij(1) << endl;
	return 0;
}