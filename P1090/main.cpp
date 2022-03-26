#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue <int, vector<int>, greater<int>> q;
    for(int i = 0; i < n; i += 1){
        int x;
        cin >> x;
        q.push(x);
    }
    int sum = 0;
    while(!q.empty()){
        if(q.size() == 1){
            cout << sum << endl;
            return 0;
        }
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        sum += a + b;
        q.push(a + b);
    }
    return 0;
}