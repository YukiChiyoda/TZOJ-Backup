#include <iostream>
#include <queue>
using namespace std;

struct Node{
	int x, y;
	int step;
	Node(int x = 0, int y = 0): x(x), y(y), step(1){}
};

int n, m;
char map[40][40];
queue <Node> q;

bool Check(int x, int y){
	return x >= 0 && x < n && y >= 0 && y < m && map[x][y] == '.';
}

int dir[4][2] = {
	0, 1,
	0, -1,
	1, 0,
	-1, 0
};

int bfs(){
	q.push(Node(0,0));
	map[0][0] = '#';
	while(!q.empty()){
		Node temp = q.front();
		q.pop();
		for(int i = 0; i < 4; i += 1){
			Node now = Node(temp.x + dir[i][0], temp.y + dir[i][1]);
			if(Check(now.x, now.y)){
				now.step = temp.step + 1;
				if(now.x == n - 1 && now.y == m - 1)
					return now.step;
				map[now.x][now.y] = '#';
				q.push(now);
			}
		}
	}
	return -1;
}

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i += 1)
		for(int j = 0; j < m; j += 1)
			cin >> map[i][j];
	cout << bfs() << endl;
}