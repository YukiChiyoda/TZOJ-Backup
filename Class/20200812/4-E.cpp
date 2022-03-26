#include <iostream>
using namespace std;

int n, k;
int num[20];
int answer;

bool Prime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i < n; i += 1){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void dfs(int now, int total, int sum){
    if(total == k){
        if(Prime(sum)){
            answer += 1;
            return;
        }
    }
    if(now >= n){
        return;
    }
    dfs(now + 1, total + 1, sum + num[now]);
    dfs(now + 1, total, sum);
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i += 1){
        cin >> num[i];
    }
    dfs(0, 0, 0);
    cout << answer << endl;
    return 0;
}