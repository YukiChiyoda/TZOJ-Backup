#include <iostream>
using namespace std;

struct Node{
	string Name;
	int Turn;
};

int n, m;
int cursor;
Node node[100000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 0; i < n; i += 1)
		cin >> node[i].Turn >> node[i].Name;
	for(int i = 0; i < m; i += 1){
		int x, y;
		cin >> x >> y;
        if(node[cursor].Turn == 0 && x == 0)
			cursor = (cursor - y + n) % n;
        else if(node[cursor].Turn == 0 && x == 1)
			cursor = (cursor + y) % n;
        else if(node[cursor].Turn == 1 && x == 0)
			cursor = (cursor + y) % n;
        else if(node[cursor].Turn == 1 && x == 1)
			cursor = (cursor - y + n) % n;
	}
	cout << node[cursor].Name << endl;
	return 0;
}