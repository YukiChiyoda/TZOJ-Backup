#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int n, e;
bool map[31][31];
bool visited[31];

void dfs(int x){
	visited[x] = true;
	cout << x << " ";
	for(int i = 1; i <= n; i += 1)
		if(map[x][i] && (!visited[i]))
			dfs(i);
}

void bfs(int x){
	memset(visited, false, sizeof(visited));
	cout << x << " ";
	visited[x] = true;
	queue <int> q;
	q.push(x);
	while(!q.empty()){
		x = q.front();
		q.pop();
		for(int i = 1; i <= n; i += 1)
			if(map[x][i] && (!visited[i])){
				visited[i] = true;
				cout << i << " ";
				q.push(i);
			}
	}
}

int main(){
	while(cin >> n >> e){
		memset(map, false, sizeof(map));
		memset(visited, false, sizeof(visited));
		for(int i = 0; i < e; i += 1){
			int x, y;
			cin >> x >> y;
			map[x][y] = map[y][x] = true;
		}
		dfs(1);
		cout << endl;
		bfs(1);
		cout << endl;
	}
	return 0;
}