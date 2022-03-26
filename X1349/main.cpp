#include <iostream>
#include <cstring>
using namespace std;

int n;
int map[101][101];
int dis[101];
bool visited[101];

int main(){
    cin >> n;
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0;
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            cin >> map[i][j];
        }
    }
    int answer = 0;
    for(int i = 1; i <= n; i += 1){
        int temp_min = 0;
        for(int j = 1; j <= n; j += 1){
            if(!visited[j] && dis[j] < dis[temp_min]){
                temp_min = j;
            }
        }
        answer += dis[temp_min];
        visited[temp_min] = 1;
        for(int j = 1; j <= n; j += 1){
            if(map[temp_min][j] && map[temp_min][j] < dis[j]){
                dis[j] = map[temp_min][j];
            }
        }
    }
    cout << answer << endl;
    return 0;
}