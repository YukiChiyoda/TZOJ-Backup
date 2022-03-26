#include <iostream>
using namespace std;

int map[101][101];
int in_degree[101];
int out_degree[101];
int stack[101];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i += 1){
        int j;
        do{
            cin >> j;
            if(j){
                out_degree[i] += 1;
                in_degree[j] += 1;
                map[i][out_degree[i]] = j;
            }
        }while(j);
    }
    int tot = 0;
    for(int i = 1; i <= n; i += 1)
        if(!in_degree[i])
            stack[++tot] = i;
    int s = 0;
    bool flag = false;
    do{
        int temp = stack[tot];
        if(flag)
            cout << " ";
        cout << temp;
        flag = true;
        tot -= 1;
        s += 1;
        for(int i = 1; i <= out_degree[temp]; i += 1){
            in_degree[map[temp][i]] -= 1;
            if(!in_degree[map[temp][i]])
                stack[++tot] = map[temp][i];
        }
    }while(s != n);
    cout << endl;
    return 0;
}