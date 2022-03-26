#include <iostream>
#include <queue>
using namespace std;

int num[105];
bool visited[105];
priority_queue < pair<int, int> , vector< pair<int, int> >, greater< pair<int, int> > > q;
//The first of pair is for key and the second is for the value.

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i += 1){
        cin >> num[i];
        q.push({num[i],i});
    }
    while(q.size() > 1){
        pair <int, int> temp = q.top();
        q.pop();
        visited[temp.second] = true;
        int left = temp.second - 1;
        int right = temp.second + 1;
        while(visited[left] && left)
            left -= 1;
        while(visited[right] && right <= n)
            right += 1;
        if(left < 1 && right > n)
            break; 
        if(left >= 1 && abs(temp.first - num[left]) <= 1)
            continue;
        if(right <= n && abs(temp.first - num[right]) <= 1)
            continue;
        break;
    }
    if(q.size() > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}