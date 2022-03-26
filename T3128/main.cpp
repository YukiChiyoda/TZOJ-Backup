#include <iostream>
#include <queue>
using namespace std;

struct Node{
	int x, y;
	string step;
};


int r, c;
int S_x, S_y;
char map[100][100];
bool visited[100][100] = {false};

bool judge(int x, int y){
	if(visited[x][y])
		return false;
	if(map[x][y] == '#')
		return false;
	return true;
}

string bfs(){
	queue <Node> q;
	q.push({S_x, S_y, ""});
	visited[S_x][S_y] = true;
	while(!q.empty()){
		Node temp = q.front();
		q.pop();
		if(map[temp.x][temp.y] == 'E')
			return temp.step;
		if(temp.x > 0 && judge(temp.x - 1, temp.y))
			q.push({temp.x - 1, temp.y, temp.step + "W"}), visited[temp.x - 1][temp.y] = true;
		if(temp.y > 0 && judge(temp.x, temp.y - 1))
			q.push({temp.x, temp.y - 1, temp.step + "N"}), visited[temp.x][temp.y - 1] = true;
		if(temp.x < r - 1 && judge(temp.x + 1, temp.y))
			q.push({temp.x + 1, temp.y, temp.step + "S"}), visited[temp.x + 1][temp.y] = true;
		if(temp.y < c - 1 && judge(temp.x, temp.y + 1))
			q.push({temp.x, temp.y + 1, temp.step + "E"}), visited[temp.x][temp.y + 1] = true;
	}
	return "Can't eat it!";
}

int main(){
	while(cin >> r >> c){
		for(int i = 0; i < r; i += 1)
			cin >> map[i];
		for(int i = 0; i < r; i += 1)
			for(int j = 0; j < c; j += 1)
				if(map[i][j] == 'S')
					S_x = i, S_y = j;
		cout << bfs() << endl;
	}
	return 0;
}