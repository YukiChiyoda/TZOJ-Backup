#include <iostream>
#include <cstring>
using namespace std;

int n;
int map[101][101];
int dis[101];
bool visited[101];

int main(){
	//Make graph
    memset(dis, 0x3f, sizeof(dis)); //Initialize the array with the biggest data.
    dis[1] = 0; //Connecting itself costs nothing

	//Input
    cin >> n;
    for(int i = 1; i <= n; i += 1)
        for(int j = 1; j <= n; j += 1)
            cin >> map[i][j]; //The cost of connecting PointI with PointJ

	//Dijkstra
    int answer = 0;
    for(int i = 1; i <= n; i += 1){
        int miner = 0;
        for(int j = 1; j <= n; j += 1)
            if(!visited[j] && dis[j] < dis[miner])
                miner = j; //Get the shortest path
        answer += dis[miner];
        visited[miner] = 1; //Mark the used path
        for(int j = 1; j <= n; j += 1)
            if(map[miner][j] && map[miner][j] < dis[j])
			//If the cost of shortest path is more than connecting throught another point,
			//then change the shortest path to it.
                dis[j] = map[miner][j];
    }

	//Output
    cout << answer << endl;
    return 0;
}